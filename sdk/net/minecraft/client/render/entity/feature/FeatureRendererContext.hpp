// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_FEATURERENDERERCONTEXT_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_FEATURERENDERERCONTEXT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.feature.FeatureRendererContext
 * Remapped: gmf
 */
namespace FeatureRendererContext {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gmf", "net/minecraft/client/renderer/entity/RenderLayerParent", "net/minecraft/class_3883", "net/minecraft/client/render/entity/feature/FeatureRendererContext", "net/minecraft/src/C_4382_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getModel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getModel", "method_4038", "getModel", "m_7200_"), "()Lfvk;");
    }

    static jobject getModel(const jobject& obj) {
                
       const auto methodID = methodID_getModel();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTexture() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTextureLocation", "method_3931", "getTexture", "m_5478_"), "(Lbsr;)Lakr;");
    }

    static jobject getTexture(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getTexture();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_FEATURERENDERERCONTEXT_HPP