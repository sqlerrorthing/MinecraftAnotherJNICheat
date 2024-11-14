//
// Created by .1qxz on 11/12/2024.
//

#include "Hooks.hpp"


using namespace fmt;

void hook(jmethodID method, void *native_hook_method, jmethodID *original_method) {
    println("[+++] Hooking {}", native_hook_method);
    JNIHook_Attach(method, native_hook_method, original_method);
}

int Hooks::init() {
    println("[+] Initializing methods hooks...");

    if(auto result = JNIHook_Init(MinecraftSDK::vm); result != JNIHOOK_OK) {
        std::cerr << "[!] Failed to initialize JNIHook: " << result << std::endl;
        return 1;
    }

    println("[+] Initializing hooks...");

    println("[++] WorldRenderer hooks..."); {
        using namespace WorldRendererHooks;

        hook(WorldRenderer::methodID_render(), reinterpret_cast<void *>(hkRender), &original_render);
    }

    println("[++] Entity hooks..."); {
        using namespace EntityHooks;

        hook(Entity::methodID_getBoundingBox(), reinterpret_cast<void *>(hkGetBoundingBox), &original_get_bounding_box);
    }

    println("[++] LivingEntity hooks..."); {
        using namespace LivingEntityHooks;

        hook(LivingEntity::methodID_pushAwayFrom(), reinterpret_cast<void *>(hkPushAwayFrom), &original_push_away_from);
    }

    println("[++] Camera hooks..."); {
        using namespace CameraHooks;

        hook(Camera::methodID_clipToSpace(), reinterpret_cast<void *>(hkClipToSpace), &original_clipToSpace);
    }

    println("[++] MinecraftClient hooks..."); {
        using namespace MinecraftClientHooks;
        hook(MinecraftClient::methodID_render(), reinterpret_cast<void *>(hkRender), &original_render_methodID);
    }

    println("[++] KeyboardHandler hooks..."); {
        using namespace KeyboardHooks;
        hook(Keyboard::methodID_onKey(), reinterpret_cast<void *>(hkOnKey), &original_on_key_methodID);
    }

    println("[++] ClientPlayerEntity hooks..."); {
        using namespace ClientPlayerEntityHooks;
        hook(ClientPlayerEntity::methodID_tick(), reinterpret_cast<void *>(hkTick), &original_tick_methodID);
        hook(ClientPlayerEntity::methodID_pushOutOfBlocks(), reinterpret_cast<void *>(hkPushOutOfBlocks), &original_push_out_of_blocks_methodID);
        hook(ClientPlayerEntity::methodID_tickNausea(), reinterpret_cast<void *>(hkTickNausea), &original_tick_nausea);
    }

    println("[++] ClientConnection hooks..."); {
        using namespace ClientConnectionHooks;
        jmethodID tmp;

        hook(ClientConnection::methodID_handlePacket(), reinterpret_cast<void *>(hkHandlePacket), &original_handle_packet);
        hook(ClientConnection::methodID_send(), reinterpret_cast<void *>(hkSend), &tmp);
    }

    println("[++] PlayerEntity hooks..."); {
        using namespace PlayerEntityHooks;

        hook(PlayerEntity::methodID_getEntityInteractionRange(), reinterpret_cast<void *>(hkGetEntityInteractionRange), &original_get_entity_interaction_range);
    }

    println("[++] AbstractHorseEntityHooks hooks..."); {
        using namespace AbstractHorseEntityHooks;

        hook(AbstractHorseEntity::methodID_isSaddled(), reinterpret_cast<void *>(hkIsSaddled), &original_get_is_saddled);
    }

    println("[++] LightmapTextureManager hooks..."); {
        using namespace LightmapTextureManagerHooks;

        hook(LightmapTextureManager::methodID_getBrightness(), reinterpret_cast<void *>(hkGetBrightness), &original_get_brightness);
    }

    return 0;
}