// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_STRIDERENTITY$GOBACKTOLAVAGOAL_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_STRIDERENTITY$GOBACKTOLAVAGOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.StriderEntity$GoBackToLavaGoal
 * Remapped: ckq$a
 */
namespace StriderEntity$GoBackToLavaGoal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ckq$a", "net/minecraft/world/entity/monster/Strider$StriderGoToLavaGoal", "net/minecraft/class_4985$class_5494", "net/minecraft/entity/passive/StriderEntity$GoBackToLavaGoal", "net/minecraft/src/C_1076_$C_1078_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.passive.StriderEntity$GoBackToLavaGoal#strider
    static jobject get_field_strider(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "strider", "field_26632", "strider", "f_33953_"), "Lckq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.StriderEntity$GoBackToLavaGoal#strider
    static void set_field_strider(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "strider", "field_26632", "strider", "f_33953_"), "Lckq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getTargetPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "getMoveToTarget", "method_30953", "getTargetPos", "m_6669_"), "()Ljd;");
    }

    static jobject getTargetPos(const jobject& obj) {
                
       const auto methodID = methodID_getTargetPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldContinue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "canContinueToUse", "method_6266", "shouldContinue", "m_8045_"), "()Z");
    }

    static jboolean shouldContinue(const jobject& obj) {
                
       const auto methodID = methodID_shouldContinue();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_canStart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "canUse", "method_6264", "canStart", "m_8036_"), "()Z");
    }

    static jboolean canStart(const jobject& obj) {
                
       const auto methodID = methodID_canStart();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldResetPath() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "shouldRecalculatePath", "method_6294", "shouldResetPath", "m_8064_"), "()Z");
    }

    static jboolean shouldResetPath(const jobject& obj) {
                
       const auto methodID = methodID_shouldResetPath();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_isTargetPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isValidTarget", "method_6296", "isTargetPos", "m_6465_"), "(Ldcz;Ljd;)Z");
    }

    static jboolean isTargetPos(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_isTargetPos();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_STRIDERENTITY$GOBACKTOLAVAGOAL_HPP