//
// Created by .1qxz on 11/12/2024.
//

#include "Hooks.hpp"


using namespace fmt;

int Hooks::init() {
    println("[+] Initializing methods hooks...");

    if(auto result = JNIHook_Init(MinecraftSDK::vm); result != JNIHOOK_OK) {
        std::cerr << "[!] Failed to initialize JNIHook: " << result << std::endl;
        return 1;
    }

    println("[+] Initializing hooks...");

    println("[++] MinecraftClient hooks..."); {
        using namespace MinecraftClientHooks;
        JNIHook_Attach(MinecraftClient::methodID_render(), reinterpret_cast<void *>(hkRender), &original_render_methodID);
    }

    println("[++] KeyboardHandler hooks..."); {
        using namespace KeyboardHooks;
        JNIHook_Attach(Keyboard::methodID_onKey(), reinterpret_cast<void *>(hkOnKey), &original_on_key_methodID);
    }

    println("[++] ClientPlayerEntity hooks..."); {
        using namespace ClientPlayerEntityHooks;
        JNIHook_Attach(ClientPlayerEntity::methodID_tick(), reinterpret_cast<void *>(hkTick), &original_tick_methodID);
        JNIHook_Attach(ClientPlayerEntity::methodID_pushOutOfBlocks(), reinterpret_cast<void *>(hkPushOutOfBlocks), &original_push_out_of_blocks_methodID);
    }

    println("[++] ClientConnection hooks..."); {
        using namespace ClientConnectionHooks;
        jmethodID tmp;

        JNIHook_Attach(ClientConnection::methodID_handlePacket(), reinterpret_cast<void *>(hkHandlePacket), &original_handle_packet);
        JNIHook_Attach(ClientConnection::methodID_send(), reinterpret_cast<void *>(hkSend), &tmp);
    }

    println("[++] Entity hooks..."); {
        using namespace EntityHooks;
        jmethodID tmp;

        JNIHook_Attach(Entity::methodID_pushAwayFrom(), reinterpret_cast<void *>(hkPushAwayFrom), &tmp);
    }

    println("[++] LightmapTextureManager hooks..."); {
        using namespace LightmapTextureManagerHooks;

        JNIHook_Attach(LightmapTextureManager::methodID_getBrightness(), reinterpret_cast<void *>(hkGetBrightness), &original_get_brightness);
    }

    return 0;
}