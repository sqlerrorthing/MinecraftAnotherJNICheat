// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_RENDERPHASE$TEXTURING_HPP
#define NET_MINECRAFT_CLIENT_RENDER_RENDERPHASE$TEXTURING_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.RenderPhase$Texturing
 * Remapped: gfg$o
 */
namespace RenderPhase$Texturing {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gfg$o", "net/minecraft/client/renderer/RenderStateShard$TexturingStateShard", "net/minecraft/class_4668$class_4684", "net/minecraft/client/render/RenderPhase$Texturing", "net/minecraft/src/C_4149_$C_4165_"));
        }
        return cachedClass;
    };

};

#endif // NET_MINECRAFT_CLIENT_RENDER_RENDERPHASE$TEXTURING_HPP