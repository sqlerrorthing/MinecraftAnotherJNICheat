// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_FLUID_FLOWABLEFLUID$1_HPP
#define NET_MINECRAFT_FLUID_FLOWABLEFLUID$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.fluid.FlowableFluid$1
 * Remapped: epc$1
 */
namespace FlowableFluid$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("epc$1", "net/minecraft/world/level/material/FlowingFluid$1", "net/minecraft/class_3609$1", "net/minecraft/fluid/FlowableFluid$1", "net/minecraft/src/C_2688_$C_2689_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_rehash() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("rehash", "rehash", "", "", "rehash"), "(I)V");
    }

    static void rehash(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_rehash();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_FLUID_FLOWABLEFLUID$1_HPP