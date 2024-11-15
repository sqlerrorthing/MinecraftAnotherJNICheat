// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_GOAL_TRACKTARGETGOAL_HPP
#define NET_MINECRAFT_ENTITY_AI_GOAL_TRACKTARGETGOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.goal.TrackTargetGoal
 * Remapped: ccm
 */
namespace TrackTargetGoal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ccm", "net/minecraft/world/entity/ai/goal/target/TargetGoal", "net/minecraft/class_1405", "net/minecraft/entity/ai/goal/TrackTargetGoal", "net/minecraft/src/C_745_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.ai.goal.TrackTargetGoal#UNSET
    [[maybe_unused]] static jint get_field_UNSET() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EMPTY_REACH_CACHE", "field_30233", "UNSET", "f_148155_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.TrackTargetGoal#UNSET
    [[maybe_unused]] static void set_field_UNSET(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EMPTY_REACH_CACHE", "field_30233", "UNSET", "f_148155_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.ai.goal.TrackTargetGoal#CAN_TRACK
    [[maybe_unused]] static jint get_field_CAN_TRACK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CAN_REACH_CACHE", "field_30234", "CAN_TRACK", "f_148156_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.TrackTargetGoal#CAN_TRACK
    [[maybe_unused]] static void set_field_CAN_TRACK(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CAN_REACH_CACHE", "field_30234", "CAN_TRACK", "f_148156_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.ai.goal.TrackTargetGoal#CANNOT_TRACK
    [[maybe_unused]] static jint get_field_CANNOT_TRACK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CANT_REACH_CACHE", "field_30235", "CANNOT_TRACK", "f_148157_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.TrackTargetGoal#CANNOT_TRACK
    [[maybe_unused]] static void set_field_CANNOT_TRACK(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CANT_REACH_CACHE", "field_30235", "CANNOT_TRACK", "f_148157_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for protected field net.minecraft.entity.ai.goal.TrackTargetGoal#mob
    static jobject get_field_mob(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "mob", "field_6660", "mob", "f_26135_"), "Lbtp;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.entity.ai.goal.TrackTargetGoal#mob
    static void set_field_mob(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "mob", "field_6660", "mob", "f_26135_"), "Lbtp;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.entity.ai.goal.TrackTargetGoal#checkVisibility
    static jboolean get_field_checkVisibility(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "mustSee", "field_6658", "checkVisibility", "f_26136_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.entity.ai.goal.TrackTargetGoal#checkVisibility
    static void set_field_checkVisibility(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "mustSee", "field_6658", "checkVisibility", "f_26136_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.TrackTargetGoal#checkCanNavigate
    static jboolean get_field_checkCanNavigate(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "mustReach", "field_6663", "checkCanNavigate", "f_26131_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.TrackTargetGoal#checkCanNavigate
    static void set_field_checkCanNavigate(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "mustReach", "field_6663", "checkCanNavigate", "f_26131_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.TrackTargetGoal#canNavigateFlag
    static jint get_field_canNavigateFlag(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "reachCache", "field_6662", "canNavigateFlag", "f_26132_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.TrackTargetGoal#canNavigateFlag
    static void set_field_canNavigateFlag(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "reachCache", "field_6662", "canNavigateFlag", "f_26132_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.TrackTargetGoal#checkCanNavigateCooldown
    static jint get_field_checkCanNavigateCooldown(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "reachCacheTime", "field_6661", "checkCanNavigateCooldown", "f_26133_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.TrackTargetGoal#checkCanNavigateCooldown
    static void set_field_checkCanNavigateCooldown(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "reachCacheTime", "field_6661", "checkCanNavigateCooldown", "f_26133_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.goal.TrackTargetGoal#timeWithoutVisibility
    static jint get_field_timeWithoutVisibility(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "unseenTicks", "field_6659", "timeWithoutVisibility", "f_26134_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.goal.TrackTargetGoal#timeWithoutVisibility
    static void set_field_timeWithoutVisibility(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "unseenTicks", "field_6659", "timeWithoutVisibility", "f_26134_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.entity.ai.goal.TrackTargetGoal#target
    static jobject get_field_target(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "targetMob", "field_6664", "target", "f_26137_"), "Lbtn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.entity.ai.goal.TrackTargetGoal#target
    static void set_field_target(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "targetMob", "field_6664", "target", "f_26137_"), "Lbtn;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.entity.ai.goal.TrackTargetGoal#maxTimeWithoutVisibility
    static jint get_field_maxTimeWithoutVisibility(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "unseenMemoryTicks", "field_6657", "maxTimeWithoutVisibility", "f_26138_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.entity.ai.goal.TrackTargetGoal#maxTimeWithoutVisibility
    static void set_field_maxTimeWithoutVisibility(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "unseenMemoryTicks", "field_6657", "maxTimeWithoutVisibility", "f_26138_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_shouldContinue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "canContinueToUse", "method_6266", "shouldContinue", "m_8045_"), "()Z");
    }

    static jboolean shouldContinue(const jobject& obj) {
                
       const auto methodID = methodID_shouldContinue();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getFollowRange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "getFollowDistance", "method_6326", "getFollowRange", "m_7623_"), "()D");
    }

    static jdouble getFollowRange(const jobject& obj) {
                
       const auto methodID = methodID_getFollowRange();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_start() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "start", "method_6269", "start", "m_8056_"), "()V");
    }

    static void start(const jobject& obj) {
                
       const auto methodID = methodID_start();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_stop() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "stop", "method_6270", "stop", "m_8041_"), "()V");
    }

    static void stop(const jobject& obj) {
                
       const auto methodID = methodID_stop();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_canTrack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canAttack", "method_6328", "canTrack", "m_26150_"), "(Lbtn;Lcef;)Z");
    }

    static jboolean canTrack(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_canTrack();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_canNavigateToEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canReach", "method_6329", "canNavigateToEntity", "m_26148_"), "(Lbtn;)Z");
    }

    static jboolean canNavigateToEntity(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canNavigateToEntity();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setMaxTimeWithoutVisibility() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "setUnseenMemoryTicks", "method_6330", "setMaxTimeWithoutVisibility", "m_26146_"), "(I)Lccm;");
    }

    static jobject setMaxTimeWithoutVisibility(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setMaxTimeWithoutVisibility();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_GOAL_TRACKTARGETGOAL_HPP