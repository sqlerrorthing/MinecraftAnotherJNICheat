// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_MOB_ANGERABLE_HPP
#define NET_MINECRAFT_ENTITY_MOB_ANGERABLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.mob.Angerable
 * Remapped: btt
 */
namespace Angerable {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("btt", "net/minecraft/world/entity/NeutralMob", "net/minecraft/class_5354", "net/minecraft/entity/mob/Angerable", "net/minecraft/src/C_532_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.mob.Angerable#ANGER_TIME_KEY
    [[maybe_unused]] static jobject get_field_ANGER_TIME_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c_", "TAG_ANGER_TIME", "field_30093", "ANGER_TIME_KEY", "f_147283_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.mob.Angerable#ANGER_TIME_KEY
    [[maybe_unused]] static void set_field_ANGER_TIME_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c_", "TAG_ANGER_TIME", "field_30093", "ANGER_TIME_KEY", "f_147283_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.mob.Angerable#ANGRY_AT_KEY
    [[maybe_unused]] static jobject get_field_ANGRY_AT_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d_", "TAG_ANGRY_AT", "field_30094", "ANGRY_AT_KEY", "f_147284_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.mob.Angerable#ANGRY_AT_KEY
    [[maybe_unused]] static void set_field_ANGRY_AT_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d_", "TAG_ANGRY_AT", "field_30094", "ANGRY_AT_KEY", "f_147284_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getAngerTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getRemainingPersistentAngerTime", "method_29507", "getAngerTime", "m_6784_"), "()I");
    }

    static jint getAngerTime(const jobject& obj) {
                
       const auto methodID = methodID_getAngerTime();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_setAngerTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setRemainingPersistentAngerTime", "method_29514", "setAngerTime", "m_7870_"), "(I)V");
    }

    static void setAngerTime(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setAngerTime();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getAngryAt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getPersistentAngerTarget", "method_29508", "getAngryAt", "m_6120_"), "()Ljava/util/UUID;");
    }

    static jobject getAngryAt(const jobject& obj) {
                
       const auto methodID = methodID_getAngryAt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setAngryAt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setPersistentAngerTarget", "method_29513", "setAngryAt", "m_6925_"), "(Ljava/util/UUID;)V");
    }

    static void setAngryAt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setAngryAt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_chooseRandomAngerTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "startPersistentAngerTimer", "method_29509", "chooseRandomAngerTime", "m_6825_"), "()V");
    }

    static void chooseRandomAngerTime(const jobject& obj) {
                
       const auto methodID = methodID_chooseRandomAngerTime();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_writeAngerToNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a_", "addPersistentAngerSaveData", "method_29517", "writeAngerToNbt", "m_21678_"), "(Lub;)V");
    }

    static void writeAngerToNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_writeAngerToNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_readAngerFromNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "readPersistentAngerSaveData", "method_29512", "readAngerFromNbt", "m_147285_"), "(Ldcw;Lub;)V");
    }

    static void readAngerFromNbt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_readAngerFromNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_tickAngerLogic() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updatePersistentAnger", "method_29510", "tickAngerLogic", "m_21666_"), "(Laqu;Z)V");
    }

    static void tickAngerLogic(const jobject& obj, const jobject& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_tickAngerLogic();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_shouldAngerAt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a_", "isAngryAt", "method_29515", "shouldAngerAt", "m_21674_"), "(Lbtn;)Z");
    }

    static jboolean shouldAngerAt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_shouldAngerAt();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isUniversallyAngry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a_", "isAngryAtAllPlayers", "method_29923", "isUniversallyAngry", "m_21670_"), "(Ldcw;)Z");
    }

    static jboolean isUniversallyAngry(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isUniversallyAngry();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_hasAngerTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("ad_", "isAngry", "method_29511", "hasAngerTime", "m_21660_"), "()Z");
    }

    static jboolean hasAngerTime(const jobject& obj) {
                
       const auto methodID = methodID_hasAngerTime();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_forgive() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a_", "playerDied", "method_29516", "forgive", "m_21676_"), "(Lcmx;)V");
    }

    static void forgive(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_forgive();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_universallyAnger() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("ae_", "forgetCurrentTargetAndRefreshUniversalAnger", "method_29921", "universallyAnger", "m_21661_"), "()V");
    }

    static void universallyAnger(const jobject& obj) {
                
       const auto methodID = methodID_universallyAnger();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_stopAnger() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("Z_", "stopBeingAngry", "method_29922", "stopAnger", "m_21662_"), "()V");
    }

    static void stopAnger(const jobject& obj) {
                
       const auto methodID = methodID_stopAnger();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getAttacker() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("ei", "getLastHurtByMob", "method_6065", "getAttacker", "m_21188_"), "()Lbtn;");
    }

    static jobject getAttacker(const jobject& obj) {
                
       const auto methodID = methodID_getAttacker();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setAttacker() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setLastHurtByMob", "method_6015", "setAttacker", "m_6703_"), "(Lbtn;)V");
    }

    static void setAttacker(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setAttacker();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setAttacking() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "setLastHurtByPlayer", "method_29505", "setAttacking", "m_6598_"), "(Lcmx;)V");
    }

    static void setAttacking(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setAttacking();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "setTarget", "method_5980", "setTarget", "m_6710_"), "(Lbtn;)V");
    }

    static void setTarget(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setTarget();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_canTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "canAttack", "method_18395", "canTarget", "m_6779_"), "(Lbtn;)Z");
    }

    static jboolean canTarget(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canTarget();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("p", "getTarget", "method_5968", "getTarget", "m_5448_"), "()Lbtn;");
    }

    static jobject getTarget(const jobject& obj) {
                
       const auto methodID = methodID_getTarget();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_MOB_ANGERABLE_HPP