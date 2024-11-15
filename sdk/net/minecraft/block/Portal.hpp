// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_PORTAL_HPP
#define NET_MINECRAFT_BLOCK_PORTAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.Portal
 * Remapped: dlr
 */
namespace Portal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dlr", "net/minecraft/world/level/block/Portal", "net/minecraft/class_9797", "net/minecraft/block/Portal", "net/minecraft/src/C_336558_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getPortalDelay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getPortalTransitionTime", "method_60772", "getPortalDelay", "m_340341_"), "(Laqu;Lbsr;)I");
    }

    static jint getPortalDelay(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getPortalDelay();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_createTeleportTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getPortalDestination", "method_60770", "createTeleportTarget", "m_339314_"), "(Laqu;Lbsr;Ljd;)Leqc;");
    }

    static jobject createTeleportTarget(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_createTeleportTarget();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getPortalEffect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getLocalTransition", "method_60778", "getPortalEffect", "m_338747_"), "()Ldlr$a;");
    }

    static jobject getPortalEffect(const jobject& obj) {
                
       const auto methodID = methodID_getPortalEffect();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_PORTAL_HPP