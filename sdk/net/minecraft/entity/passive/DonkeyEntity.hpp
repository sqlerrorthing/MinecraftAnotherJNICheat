// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_DONKEYENTITY_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_DONKEYENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.DonkeyEntity
 * Remapped: chj
 */
namespace DonkeyEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("chj", "net/minecraft/world/entity/animal/horse/Donkey", "net/minecraft/class_1495", "net/minecraft/entity/passive/DonkeyEntity", "net/minecraft/src/C_927_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getAmbientSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("v", "getAmbientSound", "method_5994", "getAmbientSound", "m_7515_"), "()Lavo;");
    }

    static jobject getAmbientSound(const jobject& obj) {
                
       const auto methodID = methodID_getAmbientSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getAngrySound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gJ", "getAngrySound", "method_6747", "getAngrySound", "m_7871_"), "()Lavo;");
    }

    static jobject getAngrySound(const jobject& obj) {
                
       const auto methodID = methodID_getAngrySound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDeathSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n_", "getDeathSound", "method_6002", "getDeathSound", "m_5592_"), "()Lavo;");
    }

    static jobject getDeathSound(const jobject& obj) {
                
       const auto methodID = methodID_getDeathSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getEatSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gm", "getEatingSound", "method_28368", "getEatSound", "m_7872_"), "()Lavo;");
    }

    static jobject getEatSound(const jobject& obj) {
                
       const auto methodID = methodID_getEatSound();
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
    
    static jmethodID methodID_canBreedWith() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canMate", "method_6474", "canBreedWith", "m_7848_"), "(Lcfe;)Z");
    }

    static jboolean canBreedWith(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canBreedWith();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_playJumpSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gR", "playJumpSound", "method_6723", "playJumpSound", "m_7486_"), "()V");
    }

    static void playJumpSound(const jobject& obj) {
                
       const auto methodID = methodID_playJumpSound();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_createChild() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBreedOffspring", "method_5613", "createChild", "m_142606_"), "(Laqu;Lbsl;)Lbsl;");
    }

    static jobject createChild(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_createChild();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_DONKEYENTITY_HPP