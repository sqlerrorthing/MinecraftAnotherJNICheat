// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_WARDENFEATURERENDERER$ANIMATIONANGLEADJUSTER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_WARDENFEATURERENDERER$ANIMATIONANGLEADJUSTER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.feature.WardenFeatureRenderer$AnimationAngleAdjuster
 * Remapped: gph$a
 */
namespace WardenFeatureRenderer$AnimationAngleAdjuster {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gph$a", "net/minecraft/client/renderer/entity/layers/WardenEmissiveLayer$AlphaFunction", "net/minecraft/class_7288$class_7289", "net/minecraft/client/render/entity/feature/WardenFeatureRenderer$AnimationAngleAdjuster", "net/minecraft/src/C_213432_$C_213433_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("apply", "apply", "apply", "apply", "m_234919_"), "(Lcmb;FF)F");
    }

    static jfloat apply(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jfloat& arg2) {
                
       const auto methodID = methodID_apply();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_WARDENFEATURERENDERER$ANIMATIONANGLEADJUSTER_HPP