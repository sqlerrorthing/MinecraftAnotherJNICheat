// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_FLUIDDRAINABLE_HPP
#define NET_MINECRAFT_BLOCK_FLUIDDRAINABLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.FluidDrainable
 * Remapped: dgf
 */
namespace FluidDrainable {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dgf", "net/minecraft/world/level/block/BucketPickup", "net/minecraft/class_2263", "net/minecraft/block/FluidDrainable", "net/minecraft/src/C_1714_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_tryDrainFluid() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "pickupBlock", "method_9700", "tryDrainFluid", "m_142598_"), "(Lcmx;Ldcx;Ljd;Ldtc;)Lcuq;");
    }

    static jobject tryDrainFluid(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_tryDrainFluid();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getBucketFillSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aw_", "getPickupSound", "method_32351", "getBucketFillSound", "m_142298_"), "()Ljava/util/Optional;");
    }

    static jobject getBucketFillSound(const jobject& obj) {
                
       const auto methodID = methodID_getBucketFillSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_FLUIDDRAINABLE_HPP