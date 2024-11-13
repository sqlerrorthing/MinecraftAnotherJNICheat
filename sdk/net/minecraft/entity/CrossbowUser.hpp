// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_CROSSBOWUSER_HPP
#define NET_MINECRAFT_ENTITY_CROSSBOWUSER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.CrossbowUser
 * Remapped: cjq
 */
namespace CrossbowUser {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cjq", "net/minecraft/world/entity/monster/CrossbowAttackMob", "net/minecraft/class_3745", "net/minecraft/entity/CrossbowUser", "net/minecraft/src/C_989_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_setCharging() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setChargingCrossbow", "method_7110", "setCharging", "m_6136_"), "(Z)V");
    }

    static void setCharging(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setCharging();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("p", "getTarget", "method_5968", "getTarget", "m_5448_"), "()Lbtn;");
    }

    static jobject getTarget(const jobject& obj) {
                
       const auto methodID = methodID_getTarget();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_postShoot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onCrossbowAttackPerformed", "method_24651", "postShoot", "m_5847_"), "()V");
    }

    static void postShoot(const jobject& obj) {
                
       const auto methodID = methodID_postShoot();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_shoot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "performCrossbowAttack", "method_24654", "shoot", "m_32336_"), "(Lbtn;F)V");
    }

    static void shoot(const jobject& obj, const jobject& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_shoot();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_CROSSBOWUSER_HPP