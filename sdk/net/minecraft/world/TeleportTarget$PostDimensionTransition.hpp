// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_TELEPORTTARGET$POSTDIMENSIONTRANSITION_HPP
#define NET_MINECRAFT_WORLD_TELEPORTTARGET$POSTDIMENSIONTRANSITION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.TeleportTarget$PostDimensionTransition
 * Remapped: eqc$a
 */
namespace TeleportTarget$PostDimensionTransition {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eqc$a", "net/minecraft/world/level/portal/DimensionTransition$PostDimensionTransition", "net/minecraft/class_5454$class_9823", "net/minecraft/world/TeleportTarget$PostDimensionTransition", "net/minecraft/src/C_336494_$C_336509_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_onTransition() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("onTransition", "onTransition", "onTransition", "onTransition", "m_338593_"), "(Lbsr;)V");
    }

    static void onTransition(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onTransition();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_then() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("then", "then", "then", "then", "m_338575_"), "(Leqc$a;)Leqc$a;");
    }

    static jobject then(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_then();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_TELEPORTTARGET$POSTDIMENSIONTRANSITION_HPP