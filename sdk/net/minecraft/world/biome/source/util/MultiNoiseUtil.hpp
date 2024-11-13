// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_BIOME_SOURCE_UTIL_MULTINOISEUTIL_HPP
#define NET_MINECRAFT_WORLD_BIOME_SOURCE_UTIL_MULTINOISEUTIL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.biome.source.util.MultiNoiseUtil
 * Remapped: def
 */
namespace MultiNoiseUtil {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("def", "net/minecraft/world/level/biome/Climate", "net/minecraft/class_6544", "net/minecraft/world/biome/source/util/MultiNoiseUtil", "net/minecraft/src/C_182857_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.world.biome.source.util.MultiNoiseUtil#field_34477
    [[maybe_unused]] static jboolean get_field_field_34477() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DEBUG_SLOW_BIOME_SEARCH", "field_34477", "field_34477", "f_186776_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticBooleanField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.biome.source.util.MultiNoiseUtil#field_34477
    [[maybe_unused]] static void set_field_field_34477(const jboolean &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DEBUG_SLOW_BIOME_SEARCH", "field_34477", "field_34477", "f_186776_"), "Z");
        return MinecraftSDK::env->SetStaticBooleanField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.biome.source.util.MultiNoiseUtil#TO_LONG_FACTOR
    [[maybe_unused]] static jfloat get_field_TO_LONG_FACTOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "QUANTIZATION_FACTOR", "field_35359", "TO_LONG_FACTOR", "f_186777_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.biome.source.util.MultiNoiseUtil#TO_LONG_FACTOR
    [[maybe_unused]] static void set_field_TO_LONG_FACTOR(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "QUANTIZATION_FACTOR", "field_35359", "TO_LONG_FACTOR", "f_186777_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.world.biome.source.util.MultiNoiseUtil#HYPERCUBE_DIMENSION
    [[maybe_unused]] static jint get_field_HYPERCUBE_DIMENSION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "PARAMETER_COUNT", "field_34476", "HYPERCUBE_DIMENSION", "f_186775_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.world.biome.source.util.MultiNoiseUtil#HYPERCUBE_DIMENSION
    [[maybe_unused]] static void set_field_HYPERCUBE_DIMENSION(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "PARAMETER_COUNT", "field_34476", "HYPERCUBE_DIMENSION", "f_186775_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_createNoiseValuePoint() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "target", "method_38116", "createNoiseValuePoint", "m_186781_"), "(FFFFFF)Ldef$h;");
    }

    static jobject createNoiseValuePoint(const jfloat& arg0, const jfloat& arg1, const jfloat& arg2, const jfloat& arg3, const jfloat& arg4, const jfloat& arg5) {
       const auto clazz = self();
       const auto methodID = methodID_createNoiseValuePoint();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_createNoiseHypercube() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "parameters", "method_38117", "createNoiseHypercube", "m_186788_"), "(FFFFFFF)Ldef$d;");
    }

    static jobject createNoiseHypercube(const jfloat& arg0, const jfloat& arg1, const jfloat& arg2, const jfloat& arg3, const jfloat& arg4, const jfloat& arg5, const jfloat& arg6) {
       const auto clazz = self();
       const auto methodID = methodID_createNoiseHypercube();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID__createNoiseHypercube() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "parameters", "method_38118", "createNoiseHypercube", "m_186798_"), "(Ldef$b;Ldef$b;Ldef$b;Ldef$b;Ldef$b;Ldef$b;F)Ldef$d;");
    }

    static jobject _createNoiseHypercube(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5, const jfloat& arg6) {
       const auto clazz = self();
       const auto methodID = methodID__createNoiseHypercube();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID_toLong() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "quantizeCoord", "method_38665", "toLong", "m_186779_"), "(F)J");
    }

    static jlong toLong(const jfloat& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_toLong();
       return MinecraftSDK::env->CallStaticLongMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_toFloat() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "unquantizeCoord", "method_38666", "toFloat", "m_186796_"), "(J)F");
    }

    static jfloat toFloat(const jlong& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_toFloat();
       return MinecraftSDK::env->CallStaticFloatMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_createEmptyMultiNoiseSampler() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "empty", "method_40443", "createEmptyMultiNoiseSampler", "m_207841_"), "()Ldef$f;");
    }

    static jobject createEmptyMultiNoiseSampler() {
       const auto clazz = self();
       const auto methodID = methodID_createEmptyMultiNoiseSampler();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_findFittestPosition() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "findSpawnPosition", "method_39164", "findFittestPosition", "m_207842_"), "(Ljava/util/List;Ldef$f;)Ljd;");
    }

    static jobject findFittestPosition(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_findFittestPosition();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_WORLD_BIOME_SOURCE_UTIL_MULTINOISEUTIL_HPP