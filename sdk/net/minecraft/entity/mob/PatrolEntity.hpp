// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_MOB_PATROLENTITY_HPP
#define NET_MINECRAFT_ENTITY_MOB_PATROLENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.mob.PatrolEntity
 * Remapped: cke
 */
namespace PatrolEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cke", "net/minecraft/world/entity/monster/PatrollingMonster", "net/minecraft/class_3732", "net/minecraft/entity/mob/PatrolEntity", "net/minecraft/src/C_1028_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.mob.PatrolEntity#patrolTarget
    static jobject get_field_patrolTarget(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "patrolTarget", "field_16478", "patrolTarget", "f_33042_"), "Ljd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.PatrolEntity#patrolTarget
    static void set_field_patrolTarget(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "patrolTarget", "field_16478", "patrolTarget", "f_33042_"), "Ljd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.mob.PatrolEntity#patrolLeader
    static jboolean get_field_patrolLeader(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "patrolLeader", "field_16479", "patrolLeader", "f_33043_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.PatrolEntity#patrolLeader
    static void set_field_patrolLeader(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "patrolLeader", "field_16479", "patrolLeader", "f_33043_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.mob.PatrolEntity#patrolling
    static jboolean get_field_patrolling(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "patrolling", "field_16477", "patrolling", "f_33044_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.PatrolEntity#patrolling
    static void set_field_patrolling(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "patrolling", "field_16477", "patrolling", "f_33044_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_initGoals() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("B", "registerGoals", "method_5959", "initGoals", "m_8099_"), "()V");
    }

    static void initGoals(const jobject& obj) {
                
       const auto methodID = methodID_initGoals();
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
    
    static jmethodID methodID_canLead() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gl", "canBeLeader", "method_16485", "canLead", "m_7490_"), "()Z");
    }

    static jboolean canLead(const jobject& obj) {
                
       const auto methodID = methodID_canLead();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_initialize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "finalizeSpawn", "method_5943", "initialize", "m_6518_"), "(Lddl;Lbqp;Lbtr;Lbuh;)Lbuh;");
    }

    static jobject initialize(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_initialize();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_canSpawn() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "checkPatrollingMonsterSpawnRules", "method_20739", "canSpawn", "m_219025_"), "(Lbsx;Ldcx;Lbtr;Ljd;Layw;)Z");
    }

    static jboolean canSpawn(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_canSpawn();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_canImmediatelyDespawn() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "removeWhenFarAway", "method_5974", "canImmediatelyDespawn", "m_6785_"), "(D)Z");
    }

    static jboolean canImmediatelyDespawn(const jobject& obj, const jdouble& arg0) {
                
       const auto methodID = methodID_canImmediatelyDespawn();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setPatrolTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "setPatrolTarget", "method_16216", "setPatrolTarget", "m_33070_"), "(Ljd;)V");
    }

    static void setPatrolTarget(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setPatrolTarget();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getPatrolTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gm", "getPatrolTarget", "method_16215", "getPatrolTarget", "m_33065_"), "()Ljd;");
    }

    static jobject getPatrolTarget(const jobject& obj) {
                
       const auto methodID = methodID_getPatrolTarget();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_hasPatrolTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gn", "hasPatrolTarget", "method_16220", "hasPatrolTarget", "m_33066_"), "()Z");
    }

    static jboolean hasPatrolTarget(const jobject& obj) {
                
       const auto methodID = methodID_hasPatrolTarget();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_setPatrolLeader() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("x", "setPatrolLeader", "method_16217", "setPatrolLeader", "m_33075_"), "(Z)V");
    }

    static void setPatrolLeader(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setPatrolLeader();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isPatrolLeader() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("go", "isPatrolLeader", "method_16219", "isPatrolLeader", "m_33067_"), "()Z");
    }

    static jboolean isPatrolLeader(const jobject& obj) {
                
       const auto methodID = methodID_isPatrolLeader();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_hasNoRaid() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gr", "canJoinPatrol", "method_16472", "hasNoRaid", "m_7492_"), "()Z");
    }

    static jboolean hasNoRaid(const jobject& obj) {
                
       const auto methodID = methodID_hasNoRaid();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_setRandomPatrolTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gs", "findPatrolTarget", "method_16218", "setRandomPatrolTarget", "m_33068_"), "()V");
    }

    static void setRandomPatrolTarget(const jobject& obj) {
                
       const auto methodID = methodID_setRandomPatrolTarget();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_isRaidCenterSet() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gt", "isPatrolling", "method_16915", "isRaidCenterSet", "m_33069_"), "()Z");
    }

    static jboolean isRaidCenterSet(const jobject& obj) {
                
       const auto methodID = methodID_isRaidCenterSet();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_setPatrolling() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("y", "setPatrolling", "method_22332", "setPatrolling", "m_33077_"), "(Z)V");
    }

    static void setPatrolling(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setPatrolling();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_MOB_PATROLENTITY_HPP