// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_RENDERPHASE$TARGET_HPP
#define NET_MINECRAFT_CLIENT_RENDER_RENDERPHASE$TARGET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.RenderPhase$Target
 * Remapped: gfg$k
 */
namespace RenderPhase$Target {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gfg$k", "net/minecraft/client/renderer/RenderStateShard$OutputStateShard", "net/minecraft/class_4668$class_4678", "net/minecraft/client/render/RenderPhase$Target", "net/minecraft/src/C_4149_$C_4160_"));
        }
        return cachedClass;
    };

};

#endif // NET_MINECRAFT_CLIENT_RENDER_RENDERPHASE$TARGET_HPP