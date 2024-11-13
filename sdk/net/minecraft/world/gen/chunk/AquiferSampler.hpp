// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_CHUNK_AQUIFERSAMPLER_HPP
#define NET_MINECRAFT_WORLD_GEN_CHUNK_AQUIFERSAMPLER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.chunk.AquiferSampler
 * Remapped: dyk
 */
namespace AquiferSampler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dyk", "net/minecraft/world/level/levelgen/Aquifer", "net/minecraft/class_6350", "net/minecraft/world/gen/chunk/AquiferSampler", "net/minecraft/src/C_141319_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_aquifer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_36382", "aquifer", "m_223880_"), "(Ldzc;Ldcd;Ldze;Ldzl;IILdyk$a;)Ldyk;");
    }

    static jobject aquifer(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jint& arg4, const jint& arg5, const jobject& arg6) {
       const auto clazz = self();
       const auto methodID = methodID_aquifer();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID_seaLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createDisabled", "method_36381", "seaLevel", "m_188374_"), "(Ldyk$a;)Ldyk;");
    }

    static jobject seaLevel(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_seaLevel();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "computeSubstance", "method_38317", "apply", "m_207104_"), "(Ldyr$b;D)Ldtc;");
    }

    static jobject apply(const jobject& obj, const jobject& arg0, const jdouble& arg1) {
                
       const auto methodID = methodID_apply();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_needsFluidTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "shouldScheduleFluidUpdate", "method_33742", "needsFluidTick", "m_142203_"), "()Z");
    }

    static jboolean needsFluidTick(const jobject& obj) {
                
       const auto methodID = methodID_needsFluidTick();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_CHUNK_AQUIFERSAMPLER_HPP