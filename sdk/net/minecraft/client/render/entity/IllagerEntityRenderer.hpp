// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_ILLAGERENTITYRENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_ILLAGERENTITYRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.IllagerEntityRenderer
 * Remapped: glc
 */
namespace IllagerEntityRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("glc", "net/minecraft/client/renderer/entity/IllagerRenderer", "net/minecraft/class_3729", "net/minecraft/client/render/entity/IllagerEntityRenderer", "net/minecraft/src/C_4348_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_scale() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "scale", "method_16460", "scale", "m_7546_"), "(Lcjk;Lfbi;F)V");
    }

    static void scale(const jobject& obj, const jobject& arg0, const jobject& arg1, const jfloat& arg2) {
                
       const auto methodID = methodID_scale();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_ILLAGERENTITYRENDERER_HPP