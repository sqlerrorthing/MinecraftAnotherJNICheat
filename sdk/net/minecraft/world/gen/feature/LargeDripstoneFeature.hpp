// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_LARGEDRIPSTONEFEATURE_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_LARGEDRIPSTONEFEATURE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.LargeDripstoneFeature
 * Remapped: ecu
 */
namespace LargeDripstoneFeature {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ecu", "net/minecraft/world/level/levelgen/feature/LargeDripstoneFeature", "net/minecraft/class_5727", "net/minecraft/world/gen/feature/LargeDripstoneFeature", "net/minecraft/src/C_141366_"));
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
    
    static jmethodID methodID_createGenerator() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "makeDripstone", "method_33016", "createGenerator", "m_225138_"), "(Ljd;ZLayw;ILbpu;Lbpu;)Lecu$a;");
    }

    static jobject createGenerator(const jobject& arg0, const jboolean& arg1, const jobject& arg2, const jint& arg3, const jobject& arg4, const jobject& arg5) {
       const auto clazz = self();
       const auto methodID = methodID_createGenerator();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_testGeneration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "placeDebugMarkers", "method_35360", "testGeneration", "m_159961_"), "(Ldds;Ljd;Ldyo$b;Lecu$b;)V");
    }

    static void testGeneration(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_testGeneration();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_LARGEDRIPSTONEFEATURE_HPP