// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_BIPEDENTITYRENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_BIPEDENTITYRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.BipedEntityRenderer
 * Remapped: gla
 */
namespace BipedEntityRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gla", "net/minecraft/client/renderer/entity/HumanoidMobRenderer", "net/minecraft/class_909", "net/minecraft/client/render/entity/BipedEntityRenderer", "net/minecraft/src/C_4346_"));
        }
        return cachedClass;
    };

};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_BIPEDENTITYRENDERER_HPP