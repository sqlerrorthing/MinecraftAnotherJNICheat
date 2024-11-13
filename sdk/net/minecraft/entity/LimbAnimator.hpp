// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_LIMBANIMATOR_HPP
#define NET_MINECRAFT_ENTITY_LIMBANIMATOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.LimbAnimator
 * Remapped: bup
 */
namespace LimbAnimator {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bup", "net/minecraft/world/entity/WalkAnimationState", "net/minecraft/class_8080", "net/minecraft/entity/LimbAnimator", "net/minecraft/src/C_267335_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.LimbAnimator#prevSpeed
    static jfloat get_field_prevSpeed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "speedOld", "field_42109", "prevSpeed", "f_267406_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.LimbAnimator#prevSpeed
    static void set_field_prevSpeed(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "speedOld", "field_42109", "prevSpeed", "f_267406_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.LimbAnimator#speed
    static jfloat get_field_speed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "speed", "field_42110", "speed", "f_267371_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.LimbAnimator#speed
    static void set_field_speed(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "speed", "field_42110", "speed", "f_267371_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.LimbAnimator#pos
    static jfloat get_field_pos(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "position", "field_42111", "pos", "f_267358_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.LimbAnimator#pos
    static void set_field_pos(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "position", "field_42111", "pos", "f_267358_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    static jmethodID methodID_setSpeed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setSpeed", "method_48567", "setSpeed", "m_267771_"), "(F)V");
    }

    static void setSpeed(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_setSpeed();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_updateLimbs() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "update", "method_48568", "updateLimbs", "m_267566_"), "(FF)V");
    }

    static void updateLimbs(const jobject& obj, const jfloat& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_updateLimbs();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getSpeed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "speed", "method_48566", "getSpeed", "m_267731_"), "()F");
    }

    static jfloat getSpeed(const jobject& obj) {
                
       const auto methodID = methodID_getSpeed();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID__getSpeed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "speed", "method_48570", "getSpeed", "m_267711_"), "(F)F");
    }

    static jfloat _getSpeed(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID__getSpeed();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "position", "method_48569", "getPos", "m_267756_"), "()F");
    }

    static jfloat getPos(const jobject& obj) {
                
       const auto methodID = methodID_getPos();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID__getPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "position", "method_48572", "getPos", "m_267590_"), "(F)F");
    }

    static jfloat _getPos(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID__getPos();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isLimbMoving() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "isMoving", "method_48571", "isLimbMoving", "m_267780_"), "()Z");
    }

    static jboolean isLimbMoving(const jobject& obj) {
                
       const auto methodID = methodID_isLimbMoving();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_LIMBANIMATOR_HPP