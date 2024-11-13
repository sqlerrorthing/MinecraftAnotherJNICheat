// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_CHUNK_AQUIFERSAMPLER$1_HPP
#define NET_MINECRAFT_WORLD_GEN_CHUNK_AQUIFERSAMPLER$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.chunk.AquiferSampler$1
 * Remapped: dyk$1
 */
namespace AquiferSampler$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dyk$1", "net/minecraft/world/level/levelgen/Aquifer$1", "net/minecraft/class_6350$1", "net/minecraft/world/gen/chunk/AquiferSampler$1", "net/minecraft/src/C_141319_$C_141320_"));
        }
        return cachedClass;
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

#endif // NET_MINECRAFT_WORLD_GEN_CHUNK_AQUIFERSAMPLER$1_HPP