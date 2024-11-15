// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_LOOKTARGETUTIL_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_LOOKTARGETUTIL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.task.LookTargetUtil
 * Remapped: bvj
 */
namespace LookTargetUtil {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bvj", "net/minecraft/world/entity/ai/behavior/BehaviorUtils", "net/minecraft/class_4215", "net/minecraft/entity/ai/brain/task/LookTargetUtil", "net/minecraft/src/C_571_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_lookAtAndWalkTowardsEachOther() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "lockGazeAndWalkToEachOther", "method_19548", "lookAtAndWalkTowardsEachOther", "m_22602_"), "(Lbtn;Lbtn;FI)V");
    }

    static void lookAtAndWalkTowardsEachOther(const jobject& arg0, const jobject& arg1, const jfloat& arg2, const jint& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_lookAtAndWalkTowardsEachOther();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_canSee() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "entityIsVisible", "method_19550", "canSee", "m_22636_"), "(Lbuq;Lbtn;)Z");
    }

    static jboolean canSee(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_canSee();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__canSee() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "targetIsValid", "method_19551", "canSee", "m_22639_"), "(Lbuq;Lccs;Lbsx;)Z");
    }

    static jboolean _canSee(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID__canSee();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID___canSee() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "targetIsValid", "method_24564", "canSee", "m_22643_"), "(Lbuq;Lccs;Ljava/util/function/Predicate;)Z");
    }

    static jboolean __canSee(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID___canSee();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_lookAtEachOther() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "lookAtEachOther", "method_19552", "lookAtEachOther", "m_22670_"), "(Lbtn;Lbtn;)V");
    }

    static void lookAtEachOther(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_lookAtEachOther();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_lookAt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "lookAtEntity", "method_19554", "lookAt", "m_22595_"), "(Lbtn;Lbtn;)V");
    }

    static void lookAt(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_lookAt();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_walkTowardsEachOther() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "setWalkAndLookTargetMemoriesToEachOther", "method_19555", "walkTowardsEachOther", "m_22660_"), "(Lbtn;Lbtn;FI)V");
    }

    static void walkTowardsEachOther(const jobject& arg0, const jobject& arg1, const jfloat& arg2, const jint& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_walkTowardsEachOther();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_walkTowards() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "setWalkAndLookTargetMemories", "method_24557", "walkTowards", "m_22590_"), "(Lbtn;Lbsr;FI)V");
    }

    static void walkTowards(const jobject& arg0, const jobject& arg1, const jfloat& arg2, const jint& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_walkTowards();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID__walkTowards() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "setWalkAndLookTargetMemories", "method_24561", "walkTowards", "m_22617_"), "(Lbtn;Ljd;FI)V");
    }

    static void _walkTowards(const jobject& arg0, const jobject& arg1, const jfloat& arg2, const jint& arg3) {
       const auto clazz = self();
       const auto methodID = methodID__walkTowards();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID___walkTowards() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "setWalkAndLookTargetMemories", "method_42647", "walkTowards", "m_217128_"), "(Lbtn;Lbwv;FI)V");
    }

    static void __walkTowards(const jobject& arg0, const jobject& arg1, const jfloat& arg2, const jint& arg3) {
       const auto clazz = self();
       const auto methodID = methodID___walkTowards();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_give() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "throwItem", "method_19949", "give", "m_22613_"), "(Lbtn;Lcuq;Lexc;)V");
    }

    static void give(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_give();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__give() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "throwItem", "method_43392", "give", "m_217133_"), "(Lbtn;Lcuq;Lexc;Lexc;F)V");
    }

    static void _give(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jfloat& arg4) {
       const auto clazz = self();
       const auto methodID = methodID__give();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_getPosClosestToOccupiedPointOfInterest() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "findSectionClosestToVillage", "method_20419", "getPosClosestToOccupiedPointOfInterest", "m_22581_"), "(Laqu;Lkf;I)Lkf;");
    }

    static jobject getPosClosestToOccupiedPointOfInterest(const jobject& arg0, const jobject& arg1, const jint& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_getPosClosestToOccupiedPointOfInterest();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_isTargetWithinAttackRange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isWithinAttackRange", "method_25940", "isTargetWithinAttackRange", "m_22632_"), "(Lbtp;Lbtn;I)Z");
    }

    static jboolean isTargetWithinAttackRange(const jobject& arg0, const jobject& arg1, const jint& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_isTargetWithinAttackRange();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_isNewTargetTooFar() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isOtherTargetMuchFurtherAwayThanCurrentAttackTarget", "method_24558", "isNewTargetTooFar", "m_22598_"), "(Lbtn;Lbtn;D)Z");
    }

    static jboolean isNewTargetTooFar(const jobject& arg0, const jobject& arg1, const jdouble& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_isNewTargetTooFar();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_isVisibleInMemory() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "canSee", "method_24565", "isVisibleInMemory", "m_22667_"), "(Lbtn;Lbtn;)Z");
    }

    static jboolean isVisibleInMemory(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_isVisibleInMemory();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getCloserEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getNearestTarget", "method_24562", "getCloserEntity", "m_22625_"), "(Lbtn;Ljava/util/Optional;Lbtn;)Lbtn;");
    }

    static jobject getCloserEntity(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_getCloserEntity();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__getCloserEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getTargetNearestMe", "method_24559", "getCloserEntity", "m_22606_"), "(Lbtn;Lbtn;Lbtn;)Lbtn;");
    }

    static jobject _getCloserEntity(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID__getCloserEntity();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getLivingEntityFromUUIDMemory", "method_24560", "getEntity", "m_22610_"), "(Lbtn;Lccs;)Ljava/util/Optional;");
    }

    static jobject getEntity(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getEntity();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_find() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getRandomSwimmablePos", "method_33193", "find", "m_147444_"), "(Lbtw;II)Lexc;");
    }

    static jobject find(const jobject& arg0, const jint& arg1, const jint& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_find();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_hasBreedTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isBreeding", "method_41331", "hasBreedTarget", "m_217126_"), "(Lbtn;)Z");
    }

    static jboolean hasBreedTarget(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_hasBreedTarget();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_LOOKTARGETUTIL_HPP