// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_MODELWITHWATERPATCH_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_MODELWITHWATERPATCH_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.model.ModelWithWaterPatch
 * Remapped: fxx
 */
namespace ModelWithWaterPatch {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fxx", "net/minecraft/client/model/WaterPatchModel", "net/minecraft/class_7755", "net/minecraft/client/render/entity/model/ModelWithWaterPatch", "net/minecraft/src/C_243589_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getWaterPatch() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "waterPatch", "method_22954", "getWaterPatch", "m_102282_"), "()Lfyk;");
    }

    static jobject getWaterPatch(const jobject& obj) {
                
       const auto methodID = methodID_getWaterPatch();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_MODELWITHWATERPATCH_HPP