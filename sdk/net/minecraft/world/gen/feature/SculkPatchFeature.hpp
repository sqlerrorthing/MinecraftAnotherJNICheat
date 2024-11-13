// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_SCULKPATCHFEATURE_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_SCULKPATCHFEATURE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.SculkPatchFeature
 * Remapped: edi
 */
namespace SculkPatchFeature {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("edi", "net/minecraft/world/level/levelgen/feature/SculkPatchFeature", "net/minecraft/class_7140", "net/minecraft/world/gen/feature/SculkPatchFeature", "net/minecraft/src/C_213143_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_generate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "place", "method_13151", "generate", "m_142674_"), "(Lecg;)Z");
    }

    static jboolean generate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_generate();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_canGenerate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canSpreadFrom", "method_41571", "canGenerate", "m_225238_"), "(Ldcx;Ljd;)Z");
    }

    static jboolean canGenerate(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_canGenerate();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_SCULKPATCHFEATURE_HPP