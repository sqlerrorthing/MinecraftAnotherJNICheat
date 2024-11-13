// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_MOB_HUSKENTITY_HPP
#define NET_MINECRAFT_ENTITY_MOB_HUSKENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.mob.HuskEntity
 * Remapped: cka
 */
namespace HuskEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cka", "net/minecraft/world/entity/monster/Husk", "net/minecraft/class_1576", "net/minecraft/entity/mob/HuskEntity", "net/minecraft/src/C_1021_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_canSpawn() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "checkHuskSpawnRules", "method_20677", "canSpawn", "m_218996_"), "(Lbsx;Lddl;Lbtr;Ljd;Layw;)Z");
    }

    static jboolean canSpawn(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_canSpawn();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_burnsInDaylight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("ah_", "isSunSensitive", "method_7216", "burnsInDaylight", "m_5884_"), "()Z");
    }

    static jboolean burnsInDaylight(const jobject& obj) {
                
       const auto methodID = methodID_burnsInDaylight();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getAmbientSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("v", "getAmbientSound", "method_5994", "getAmbientSound", "m_7515_"), "()Lavo;");
    }

    static jobject getAmbientSound(const jobject& obj) {
                
       const auto methodID = methodID_getAmbientSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getHurtSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getHurtSound", "method_6011", "getHurtSound", "m_7975_"), "(Lbrk;)Lavo;");
    }

    static jobject getHurtSound(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getHurtSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getDeathSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n_", "getDeathSound", "method_6002", "getDeathSound", "m_5592_"), "()Lavo;");
    }

    static jobject getDeathSound(const jobject& obj) {
                
       const auto methodID = methodID_getDeathSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getStepSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gk", "getStepSound", "method_7207", "getStepSound", "m_7660_"), "()Lavo;");
    }

    static jobject getStepSound(const jobject& obj) {
                
       const auto methodID = methodID_getStepSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_tryAttack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("D", "doHurtTarget", "method_6121", "tryAttack", "m_7327_"), "(Lbsr;)Z");
    }

    static jboolean tryAttack(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_tryAttack();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_canConvertInWater() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gm", "convertsInWater", "method_7209", "canConvertInWater", "m_7593_"), "()Z");
    }

    static jboolean canConvertInWater(const jobject& obj) {
                
       const auto methodID = methodID_canConvertInWater();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_convertInWater() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("ag_", "doUnderWaterConversion", "method_7218", "convertInWater", "m_7595_"), "()V");
    }

    static void convertInWater(const jobject& obj) {
                
       const auto methodID = methodID_convertInWater();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSkull() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gl", "getSkull", "method_7215", "getSkull", "m_5728_"), "()Lcuq;");
    }

    static jobject getSkull(const jobject& obj) {
                
       const auto methodID = methodID_getSkull();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_MOB_HUSKENTITY_HPP