// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_MOB_BLAZEENTITY_HPP
#define NET_MINECRAFT_ENTITY_MOB_BLAZEENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.mob.BlazeEntity
 * Remapped: cjm
 */
namespace BlazeEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cjm", "net/minecraft/world/entity/monster/Blaze", "net/minecraft/class_1545", "net/minecraft/entity/mob/BlazeEntity", "net/minecraft/src/C_985_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.mob.BlazeEntity#eyeOffset
    static jfloat get_field_eyeOffset(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "allowedHeightOffset", "field_7214", "eyeOffset", "f_32214_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.BlazeEntity#eyeOffset
    static void set_field_eyeOffset(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "allowedHeightOffset", "field_7214", "eyeOffset", "f_32214_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.mob.BlazeEntity#eyeOffsetCooldown
    static jint get_field_eyeOffsetCooldown(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "nextHeightOffsetChangeTick", "field_7215", "eyeOffsetCooldown", "f_32215_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.BlazeEntity#eyeOffsetCooldown
    static void set_field_eyeOffsetCooldown(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "nextHeightOffsetChangeTick", "field_7215", "eyeOffsetCooldown", "f_32215_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.mob.BlazeEntity#BLAZE_FLAGS
    [[maybe_unused]] static jobject get_field_BLAZE_FLAGS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DATA_FLAGS_ID", "field_7216", "BLAZE_FLAGS", "f_32216_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.BlazeEntity#BLAZE_FLAGS
    [[maybe_unused]] static void set_field_BLAZE_FLAGS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DATA_FLAGS_ID", "field_7216", "BLAZE_FLAGS", "f_32216_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_initGoals() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("B", "registerGoals", "method_5959", "initGoals", "m_8099_"), "()V");
    }

    static void initGoals(const jobject& obj) {
                
       const auto methodID = methodID_initGoals();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_createBlazeAttributes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("s", "createAttributes", "method_26906", "createBlazeAttributes", "m_32238_"), "()Lbuv$a;");
    }

    static jobject createBlazeAttributes() {
       const auto clazz = self();
       const auto methodID = methodID_createBlazeAttributes();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_initDataTracker() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "defineSynchedData", "method_5693", "initDataTracker", "m_8097_"), "(Laka$a;)V");
    }

    static void initDataTracker(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_initDataTracker();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
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
    
    static jmethodID methodID_getBrightnessAtEyes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("bu", "getLightLevelDependentMagicValue", "method_5718", "getBrightnessAtEyes", "m_213856_"), "()F");
    }

    static jfloat getBrightnessAtEyes(const jobject& obj) {
                
       const auto methodID = methodID_getBrightnessAtEyes();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_tickMovement() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m_", "aiStep", "method_6007", "tickMovement", "m_8107_"), "()V");
    }

    static void tickMovement(const jobject& obj) {
                
       const auto methodID = methodID_tickMovement();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_hurtByWater() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("fl", "isSensitiveToWater", "method_29503", "hurtByWater", "m_6126_"), "()Z");
    }

    static jboolean hurtByWater(const jobject& obj) {
                
       const auto methodID = methodID_hurtByWater();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_mobTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("ab", "customServerAiStep", "method_5958", "mobTick", "m_8024_"), "()V");
    }

    static void mobTick(const jobject& obj) {
                
       const auto methodID = methodID_mobTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_isOnFire() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("bR", "isOnFire", "method_5809", "isOnFire", "m_6060_"), "()Z");
    }

    static jboolean isOnFire(const jobject& obj) {
                
       const auto methodID = methodID_isOnFire();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_isFireActive() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("t", "isCharged", "method_6994", "isFireActive", "m_32236_"), "()Z");
    }

    static jboolean isFireActive(const jobject& obj) {
                
       const auto methodID = methodID_isFireActive();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_setFireActive() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("x", "setCharged", "method_6993", "setFireActive", "m_32240_"), "(Z)V");
    }

    static void setFireActive(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setFireActive();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_MOB_BLAZEENTITY_HPP