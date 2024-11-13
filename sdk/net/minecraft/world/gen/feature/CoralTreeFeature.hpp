// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_CORALTREEFEATURE_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_CORALTREEFEATURE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.CoralTreeFeature
 * Remapped: ebu
 */
namespace CoralTreeFeature {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ebu", "net/minecraft/world/level/levelgen/feature/CoralTreeFeature", "net/minecraft/class_2979", "net/minecraft/world/gen/feature/CoralTreeFeature", "net/minecraft/src/C_2234_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_generateCoral() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "placeFeature", "method_12863", "generateCoral", "m_214196_"), "(Ldcx;Layw;Ljd;Ldtc;)Z");
    }

    static jboolean generateCoral(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_generateCoral();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_CORALTREEFEATURE_HPP