// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_MOB_MAGMACUBEENTITY_HPP
#define NET_MINECRAFT_ENTITY_MOB_MAGMACUBEENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.mob.MagmaCubeEntity
 * Remapped: ckc
 */
namespace MagmaCubeEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ckc", "net/minecraft/world/entity/monster/MagmaCube", "net/minecraft/class_1589", "net/minecraft/entity/mob/MagmaCubeEntity", "net/minecraft/src/C_1026_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_createMagmaCubeAttributes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("s", "createAttributes", "method_26917", "createMagmaCubeAttributes", "m_33000_"), "()Lbuv$a;");
    }

    static jobject createMagmaCubeAttributes() {
       const auto clazz = self();
       const auto methodID = methodID_createMagmaCubeAttributes();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_canMagmaCubeSpawn() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "checkMagmaCubeSpawnRules", "method_20678", "canMagmaCubeSpawn", "m_219002_"), "(Lbsx;Ldcx;Lbtr;Ljd;Layw;)Z");
    }

    static jboolean canMagmaCubeSpawn(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_canMagmaCubeSpawn();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_setSize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setSize", "method_7161", "setSize", "m_7839_"), "(IZ)V");
    }

    static void setSize(const jobject& obj, const jint& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_setSize();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getBrightnessAtEyes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("bu", "getLightLevelDependentMagicValue", "method_5718", "getBrightnessAtEyes", "m_213856_"), "()F");
    }

    static jfloat getBrightnessAtEyes(const jobject& obj) {
                
       const auto methodID = methodID_getBrightnessAtEyes();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getParticles() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("t", "getParticleType", "method_7162", "getParticles", "m_6300_"), "()Llk;");
    }

    static jobject getParticles(const jobject& obj) {
                
       const auto methodID = methodID_getParticles();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_isOnFire() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("bR", "isOnFire", "method_5809", "isOnFire", "m_6060_"), "()Z");
    }

    static jboolean isOnFire(const jobject& obj) {
                
       const auto methodID = methodID_isOnFire();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTicksUntilNextJump() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("x", "getJumpDelay", "method_7154", "getTicksUntilNextJump", "m_7549_"), "()I");
    }

    static jint getTicksUntilNextJump(const jobject& obj) {
                
       const auto methodID = methodID_getTicksUntilNextJump();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_updateStretch() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gg", "decreaseSquish", "method_7156", "updateStretch", "m_7480_"), "()V");
    }

    static void updateStretch(const jobject& obj) {
                
       const auto methodID = methodID_updateStretch();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_jump() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("ff", "jumpFromGround", "method_6043", "jump", "m_6135_"), "()V");
    }

    static void jump(const jobject& obj) {
                
       const auto methodID = methodID_jump();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_swimUpward() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "jumpInLiquid", "method_6010", "swimUpward", "m_203347_"), "(Lawu;)V");
    }

    static void swimUpward(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_swimUpward();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_canAttack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gh", "isDealsDamage", "method_7163", "canAttack", "m_7483_"), "()Z");
    }

    static jboolean canAttack(const jobject& obj) {
                
       const auto methodID = methodID_canAttack();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDamageAmount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gi", "getAttackDamage", "method_7158", "getDamageAmount", "m_7566_"), "()F");
    }

    static jfloat getDamageAmount(const jobject& obj) {
                
       const auto methodID = methodID_getDamageAmount();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
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
    
    static jmethodID methodID_getSquishSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gj", "getSquishSound", "method_7160", "getSquishSound", "m_7905_"), "()Lavo;");
    }

    static jobject getSquishSound(const jobject& obj) {
                
       const auto methodID = methodID_getSquishSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getJumpSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gk", "getJumpSound", "method_7153", "getJumpSound", "m_7903_"), "()Lavo;");
    }

    static jobject getJumpSound(const jobject& obj) {
                
       const auto methodID = methodID_getJumpSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_MOB_MAGMACUBEENTITY_HPP