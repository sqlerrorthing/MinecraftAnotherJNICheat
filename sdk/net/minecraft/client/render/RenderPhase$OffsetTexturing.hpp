// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_RENDERPHASE$OFFSETTEXTURING_HPP
#define NET_MINECRAFT_CLIENT_RENDER_RENDERPHASE$OFFSETTEXTURING_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.RenderPhase$OffsetTexturing
 * Remapped: gfg$j
 */
namespace RenderPhase$OffsetTexturing {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gfg$j", "net/minecraft/client/renderer/RenderStateShard$OffsetTexturingStateShard", "net/minecraft/class_4668$class_4682", "net/minecraft/client/render/RenderPhase$OffsetTexturing", "net/minecraft/src/C_4149_$C_4159_"));
        }
        return cachedClass;
    };

};

#endif // NET_MINECRAFT_CLIENT_RENDER_RENDERPHASE$OFFSETTEXTURING_HPP