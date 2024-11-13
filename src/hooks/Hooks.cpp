//
// Created by .1qxz on 11/12/2024.
//

#include "Hooks.hpp"


using namespace fmt;

jmethodID addHook(const jmethodID &methodID, void *func) {
    jmethodID original_methodID;
    JNIHook_Attach(methodID, func, &original_methodID);
    return original_methodID;
}

int Hooks::init() {
    println("[+] Initializing methods hooks...");

    if(auto result = JNIHook_Init(MinecraftSDK::vm); result != JNIHOOK_OK) {
        std::cerr << "[!] Failed to initialize JNIHook: " << result << std::endl;
        return 1;
    }

    println("[+] Initializing hooks...");


    println("[++] MinecraftClient hooks..."); {
        MinecraftClientHooks::original_render_methodID =
                addHook(MinecraftClient::methodID_render(), reinterpret_cast<void *>(MinecraftClientHooks::hkRender));
    }

    println("[++] KeyboardHandler hooks..."); {
        KeyboardHooks::original_on_key_methodID =
                addHook(Keyboard::methodID_onKey(), reinterpret_cast<void *>(KeyboardHooks::hkOnKey));
    }

    println("[++] ClientPlayerEntity hooks..."); {
        ClientPlayerEntityHooks::original_tick_methodID =
                addHook(ClientPlayerEntity::methodID_tick(), reinterpret_cast<void *>(ClientPlayerEntityHooks::hkTick));
    }

    println("[++] ClientConnection hooks..."); {
        ClientConnectionHooks::original_handle_packet =
                addHook(ClientConnection::methodID_handlePacket(), reinterpret_cast<void *>(ClientConnectionHooks::hkHandlePacket));

        addHook(ClientConnection::methodID_send(), reinterpret_cast<void *>(ClientConnectionHooks::hkSend));
    }

    return 0;
}