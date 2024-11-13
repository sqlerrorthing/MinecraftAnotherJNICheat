// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_OREFEATURE_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_OREFEATURE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.OreFeature
 * Remapped: ecz
 */
namespace OreFeature {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ecz", "net/minecraft/world/level/levelgen/feature/OreFeature", "net/minecraft/class_3122", "net/minecraft/world/gen/feature/OreFeature", "net/minecraft/src/C_2278_"));
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
    
    static jmethodID methodID_generateVeinPart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "doPlace", "method_13629", "generateVeinPart", "m_225171_"), "(Ldds;Layw;Leeq;DDDDDDIIIII)Z");
    }

    static jboolean generateVeinPart(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jdouble& arg3, const jdouble& arg4, const jdouble& arg5, const jdouble& arg6, const jdouble& arg7, const jdouble& arg8, const jint& arg9, const jint& arg10, const jint& arg11, const jint& arg12, const jint& arg13) {
                
       const auto methodID = methodID_generateVeinPart();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    };
    
    static jmethodID methodID_shouldPlace() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "canPlaceOre", "method_33983", "shouldPlace", "m_225186_"), "(Ldtc;Ljava/util/function/Function;Layw;Leeq;Leeq$a;Ljd$a;)Z");
    }

    static jboolean shouldPlace(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5) {
       const auto clazz = self();
       const auto methodID = methodID_shouldPlace();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_shouldNotDiscard() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "shouldSkipAirCheck", "method_33984", "shouldNotDiscard", "m_225168_"), "(Layw;F)Z");
    }

    static jboolean shouldNotDiscard(const jobject& arg0, const jfloat& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_shouldNotDiscard();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_OREFEATURE_HPP