// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_NAVIGATIONCONDITIONS_HPP
#define NET_MINECRAFT_ENTITY_AI_NAVIGATIONCONDITIONS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.NavigationConditions
 * Remapped: cek
 */
namespace NavigationConditions {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cek", "net/minecraft/world/entity/ai/util/GoalUtils", "net/minecraft/class_5493", "net/minecraft/entity/ai/NavigationConditions", "net/minecraft/src/C_781_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_hasMobNavigation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "hasGroundPathNavigation", "method_30955", "hasMobNavigation", "m_26894_"), "(Lbtp;)Z");
    }

    static jboolean hasMobNavigation(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_hasMobNavigation();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_isPositionTargetInRange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "mobRestricted", "method_31517", "isPositionTargetInRange", "m_148442_"), "(Lbtw;I)Z");
    }

    static jboolean isPositionTargetInRange(const jobject& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_isPositionTargetInRange();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isHeightInvalid() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isOutsideLimits", "method_31520", "isHeightInvalid", "m_148451_"), "(Ljd;Lbtw;)Z");
    }

    static jboolean isHeightInvalid(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_isHeightInvalid();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isPositionTargetOutOfWalkRange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isRestricted", "method_31521", "isPositionTargetOutOfWalkRange", "m_148454_"), "(ZLbtw;Ljd;)Z");
    }

    static jboolean isPositionTargetOutOfWalkRange(const jboolean& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_isPositionTargetOutOfWalkRange();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_isInvalidPosition() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isNotStable", "method_31519", "isInvalidPosition", "m_148448_"), "(Lcda;Ljd;)Z");
    }

    static jboolean isInvalidPosition(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_isInvalidPosition();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isWaterAt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isWater", "method_31518", "isWaterAt", "m_148445_"), "(Lbtw;Ljd;)Z");
    }

    static jboolean isWaterAt(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_isWaterAt();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_hasPathfindingPenalty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "hasMalus", "method_31522", "hasPathfindingPenalty", "m_148458_"), "(Lbtw;Ljd;)Z");
    }

    static jboolean hasPathfindingPenalty(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_hasPathfindingPenalty();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isSolidAt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "isSolid", "method_31523", "isSolidAt", "m_148461_"), "(Lbtw;Ljd;)Z");
    }

    static jboolean isSolidAt(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_isSolidAt();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_NAVIGATIONCONDITIONS_HPP