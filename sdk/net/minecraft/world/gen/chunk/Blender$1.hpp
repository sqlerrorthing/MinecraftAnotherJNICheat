// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_CHUNK_BLENDER$1_HPP
#define NET_MINECRAFT_WORLD_GEN_CHUNK_BLENDER$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.chunk.Blender$1
 * Remapped: eaa$1
 */
namespace Blender$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eaa$1", "net/minecraft/world/level/levelgen/blending/Blender$1", "net/minecraft/class_6748$1", "net/minecraft/world/gen/chunk/Blender$1", "net/minecraft/src/C_182955_$C_182956_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_calculate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "blendOffsetAndFactor", "method_39340", "calculate", "m_207242_"), "(II)Leaa$a;");
    }

    static jobject calculate(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_calculate();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_applyBlendDensity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "blendDensity", "method_39338", "applyBlendDensity", "m_207103_"), "(Ldyr$b;D)D");
    }

    static jdouble applyBlendDensity(const jobject& obj, const jobject& arg0, const jdouble& arg1) {
                
       const auto methodID = methodID_applyBlendDensity();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getBiomeSupplier() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBiomeResolver", "method_39563", "getBiomeSupplier", "m_183383_"), "(Lddz;)Lddz;");
    }

    static jobject getBiomeSupplier(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getBiomeSupplier();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_CHUNK_BLENDER$1_HPP