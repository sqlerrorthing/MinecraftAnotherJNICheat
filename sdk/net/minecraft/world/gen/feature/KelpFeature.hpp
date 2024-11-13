// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_KELPFEATURE_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_KELPFEATURE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.KelpFeature
 * Remapped: ecs
 */
namespace KelpFeature {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ecs", "net/minecraft/world/level/levelgen/feature/KelpFeature", "net/minecraft/class_3081", "net/minecraft/world/gen/feature/KelpFeature", "net/minecraft/src/C_2264_"));
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
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_KELPFEATURE_HPP