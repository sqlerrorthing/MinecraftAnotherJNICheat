// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_WARDENFEATURERENDERER$MODELPARTVISIBILITY_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_WARDENFEATURERENDERER$MODELPARTVISIBILITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.feature.WardenFeatureRenderer$ModelPartVisibility
 * Remapped: gph$b
 */
namespace WardenFeatureRenderer$ModelPartVisibility {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gph$b", "net/minecraft/client/renderer/entity/layers/WardenEmissiveLayer$DrawSelector", "net/minecraft/class_7288$class_7311", "net/minecraft/client/render/entity/feature/WardenFeatureRenderer$ModelPartVisibility", "net/minecraft/src/C_213432_$C_213434_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getPartsToDraw() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("getPartsToDraw", "getPartsToDraw", "getPartsToDraw", "getPartsToDraw", "m_234923_"), "(Lfvk;)Ljava/util/List;");
    }

    static jobject getPartsToDraw(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getPartsToDraw();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_WARDENFEATURERENDERER$MODELPARTVISIBILITY_HPP