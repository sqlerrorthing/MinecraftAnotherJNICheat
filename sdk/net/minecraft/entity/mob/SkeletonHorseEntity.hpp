// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_MOB_SKELETONHORSEENTITY_HPP
#define NET_MINECRAFT_ENTITY_MOB_SKELETONHORSEENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.mob.SkeletonHorseEntity
 * Remapped: cho
 */
namespace SkeletonHorseEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cho", "net/minecraft/world/entity/animal/horse/SkeletonHorse", "net/minecraft/class_1506", "net/minecraft/entity/mob/SkeletonHorseEntity", "net/minecraft/src/C_937_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.mob.SkeletonHorseEntity#trapTriggerGoal
    static jobject get_field_trapTriggerGoal(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cc", "skeletonTrapGoal", "field_7003", "trapTriggerGoal", "f_30890_"), "Lchp;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.SkeletonHorseEntity#trapTriggerGoal
    static void set_field_trapTriggerGoal(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cc", "skeletonTrapGoal", "field_7003", "trapTriggerGoal", "f_30890_"), "Lchp;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.mob.SkeletonHorseEntity#DESPAWN_AGE
    [[maybe_unused]] static jint get_field_DESPAWN_AGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cd", "TRAP_MAX_LIFE", "field_30427", "DESPAWN_AGE", "f_149551_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.SkeletonHorseEntity#DESPAWN_AGE
    [[maybe_unused]] static void set_field_DESPAWN_AGE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cd", "TRAP_MAX_LIFE", "field_30427", "DESPAWN_AGE", "f_149551_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.mob.SkeletonHorseEntity#BABY_BASE_DIMENSIONS
    [[maybe_unused]] static jobject get_field_BABY_BASE_DIMENSIONS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ce", "BABY_DIMENSIONS", "field_47809", "BABY_BASE_DIMENSIONS", "f_314278_"), "Lbsu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.SkeletonHorseEntity#BABY_BASE_DIMENSIONS
    [[maybe_unused]] static void set_field_BABY_BASE_DIMENSIONS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ce", "BABY_DIMENSIONS", "field_47809", "BABY_BASE_DIMENSIONS", "f_314278_"), "Lbsu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.mob.SkeletonHorseEntity#trapped
    static jboolean get_field_trapped(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cg", "isTrap", "field_7005", "trapped", "f_30891_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.SkeletonHorseEntity#trapped
    static void set_field_trapped(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cg", "isTrap", "field_7005", "trapped", "f_30891_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.mob.SkeletonHorseEntity#trapTime
    static jint get_field_trapTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("ch", "trapTime", "field_7004", "trapTime", "f_30892_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.SkeletonHorseEntity#trapTime
    static void set_field_trapTime(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("ch", "trapTime", "field_7004", "trapTime", "f_30892_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_createSkeletonHorseAttributes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("s", "createAttributes", "method_26901", "createSkeletonHorseAttributes", "m_30918_"), "()Lbuv$a;");
    }

    static jobject createSkeletonHorseAttributes() {
       const auto clazz = self();
       const auto methodID = methodID_createSkeletonHorseAttributes();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_canSpawn() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "checkSkeletonHorseSpawnRules", "method_55001", "canSpawn", "m_305737_"), "(Lbsx;Ldcx;Lbtr;Ljd;Layw;)Z");
    }

    static jboolean canSpawn(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_canSpawn();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_initAttributes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "randomizeAttributes", "method_6001", "initAttributes", "m_214179_"), "(Layw;)V");
    }

    static void initAttributes(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_initAttributes();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_initCustomGoals() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gA", "addBehaviourGoals", "method_6764", "initCustomGoals", "m_7509_"), "()V");
    }

    static void initCustomGoals(const jobject& obj) {
                
       const auto methodID = methodID_initCustomGoals();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getAmbientSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("v", "getAmbientSound", "method_5994", "getAmbientSound", "m_7515_"), "()Lavo;");
    }

    static jobject getAmbientSound(const jobject& obj) {
                
       const auto methodID = methodID_getAmbientSound();
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
    
    static jmethodID methodID_getHurtSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getHurtSound", "method_6011", "getHurtSound", "m_7975_"), "(Lbrk;)Lavo;");
    }

    static jobject getHurtSound(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getHurtSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getSwimSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aQ", "getSwimSound", "method_5737", "getSwimSound", "m_5501_"), "()Lavo;");
    }

    static jobject getSwimSound(const jobject& obj) {
                
       const auto methodID = methodID_getSwimSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_playSwimSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "playSwimSound", "method_5734", "playSwimSound", "m_5625_"), "(F)V");
    }

    static void playSwimSound(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_playSwimSound();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_playJumpSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gR", "playJumpSound", "method_6723", "playJumpSound", "m_7486_"), "()V");
    }

    static void playJumpSound(const jobject& obj) {
                
       const auto methodID = methodID_playJumpSound();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBaseDimensions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getDefaultDimensions", "method_55694", "getBaseDimensions", "m_31586_"), "(Lbua;)Lbsu;");
    }

    static jobject getBaseDimensions(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getBaseDimensions();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_tickMovement() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m_", "aiStep", "method_6007", "tickMovement", "m_8107_"), "()V");
    }

    static void tickMovement(const jobject& obj) {
                
       const auto methodID = methodID_tickMovement();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_writeCustomDataToNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "addAdditionalSaveData", "method_5652", "writeCustomDataToNbt", "m_7380_"), "(Lub;)V");
    }

    static void writeCustomDataToNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_writeCustomDataToNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_readCustomDataFromNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "readAdditionalSaveData", "method_5749", "readCustomDataFromNbt", "m_7378_"), "(Lub;)V");
    }

    static void readCustomDataFromNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_readCustomDataFromNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getBaseMovementSpeedMultiplier() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("fh", "getWaterSlowDown", "method_6120", "getBaseMovementSpeedMultiplier", "m_6108_"), "()F");
    }

    static jfloat getBaseMovementSpeedMultiplier(const jobject& obj) {
                
       const auto methodID = methodID_getBaseMovementSpeedMultiplier();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_isTrapped() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("t", "isTrap", "method_6812", "isTrapped", "m_30919_"), "()Z");
    }

    static jboolean isTrapped(const jobject& obj) {
                
       const auto methodID = methodID_isTrapped();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_setTrapped() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("x", "setTrap", "method_6813", "setTrapped", "m_30923_"), "(Z)V");
    }

    static void setTrapped(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setTrapped();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createChild() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBreedOffspring", "method_5613", "createChild", "m_142606_"), "(Laqu;Lbsl;)Lbsl;");
    }

    static jobject createChild(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_createChild();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_interactMob() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "mobInteract", "method_5992", "interactMob", "m_6071_"), "(Lcmx;Lbqq;)Lbqr;");
    }

    static jobject interactMob(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_interactMob();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_MOB_SKELETONHORSEENTITY_HPP