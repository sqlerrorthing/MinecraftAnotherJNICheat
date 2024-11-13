#include "Includes.h"
#include "hooks/Hooks.hpp"

#include "net/minecraft/client/MinecraftClient.hpp"
#include "listeners/Listeners.h"
#include "listeners/GlobalEventListener.h"
#include "features/FeatureManager.h"

#define VERSION 1.21

using namespace fmt;

static FILE* p_o_File {nullptr};
static FILE* p_r_File {nullptr};

#pragma clang diagnostic push
#pragma ide diagnostic ignored "cppcoreguidelines-pro-type-static-cast-downcast"

void mainThread(HMODULE instance) {

    println("Initializing sdk");

    if(const int result = MinecraftSDK::InitializeSDK(); result != JNI_OK) {
        println("Failed to initialize minecraft sdk...");
        FreeLibrary(instance);
        return;
    }

    println("Getting minecraft instance...");
    jobject mc;
    try {
        mc = MinecraftClient::get_field_instance();
        if(mc == 0)
            throw std::runtime_error("Failed to get minecraft instance");
    } catch (...) {
        println("Failed to get minecraft instance..., please make sure you've running minecraft %s", VERSION);
        FreeLibrary(instance);
        return;
    }

    println("[+] Minecraft version {}, type: {}",
            JSTRING_TO_STD_STRING(MinecraftClient::get_field_gameVersion(mc)),
            JSTRING_TO_STD_STRING(MinecraftClient::get_field_versionType(mc)));

    if(Hooks::init() != 0) {
        FreeLibrary(instance);
        return;
    }

    println("[+] Initializing GlobalEventListener");
    Listeners::getInstance().registerListener(new GlobalEventListener());

    println("[+] Initializing features");
    FeatureManager::getInstance().init();

    while (GetAsyncKeyState(VK_END) == 0) {

    }

    FreeLibrary(instance);

}

#pragma clang diagnostic pop

void startConsole() {
    AllocConsole();
    HWND ConsoleHandle = GetConsoleWindow();
    SetWindowPos(ConsoleHandle, HWND_TOPMOST, 50, 20, 0, 0, SWP_DRAWFRAME | SWP_NOMOVE | SWP_NOSIZE | SWP_SHOWWINDOW);
    ShowWindow(ConsoleHandle, 1);
    SetConsoleTitle(TEXT("github.com/sqlerrorthing"));

    freopen_s(&p_o_File, "CONOUT$", "w", stdout);
    freopen_s(&p_r_File, "CONIN$", "r", stdin);
}

void stopConsole() {
    fclose(p_o_File);
    fclose(p_r_File);
    FreeConsole();
}

[[maybe_unused]] bool DllMain(HINSTANCE instance, DWORD reason, LPVOID reversed) {

    static FILE* pFile {nullptr};
    static std::thread _mainThread;

    switch (reason) {
        case DLL_PROCESS_ATTACH:
            startConsole();

            _mainThread = std::thread([instance] { mainThread(instance); });
            _mainThread.detach();

            break;
        case DLL_PROCESS_DETACH:
            stopConsole();
            break;
        case DLL_THREAD_ATTACH:
            break;
        case DLL_THREAD_DETACH:
            break;
    }

    return true;

}