// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_CONTROL_MOVECONTROL_HPP
#define NET_MINECRAFT_ENTITY_AI_CONTROL_MOVECONTROL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.control.MoveControl
 * Remapped: bzp
 */
namespace MoveControl {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bzp", "net/minecraft/world/entity/ai/control/MoveControl", "net/minecraft/class_1335", "net/minecraft/entity/ai/control/MoveControl", "net/minecraft/src/C_668_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.ai.control.MoveControl#field_30197
    [[maybe_unused]] static jfloat get_field_field_30197() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MIN_SPEED", "field_30197", "field_30197", "f_148053_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.ai.control.MoveControl#field_30197
    [[maybe_unused]] static void set_field_field_30197(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MIN_SPEED", "field_30197", "field_30197", "f_148053_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.ai.control.MoveControl#REACHED_DESTINATION_DISTANCE_SQUARED
    [[maybe_unused]] static jfloat get_field_REACHED_DESTINATION_DISTANCE_SQUARED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MIN_SPEED_SQR", "field_30198", "REACHED_DESTINATION_DISTANCE_SQUARED", "f_148054_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.ai.control.MoveControl#REACHED_DESTINATION_DISTANCE_SQUARED
    [[maybe_unused]] static void set_field_REACHED_DESTINATION_DISTANCE_SQUARED(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MIN_SPEED_SQR", "field_30198", "REACHED_DESTINATION_DISTANCE_SQUARED", "f_148054_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.entity.ai.control.MoveControl#field_30199
    [[maybe_unused]] static jint get_field_field_30199() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MAX_TURN", "field_30199", "field_30199", "f_148055_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.entity.ai.control.MoveControl#field_30199
    [[maybe_unused]] static void set_field_field_30199(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MAX_TURN", "field_30199", "field_30199", "f_148055_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for protected field net.minecraft.entity.ai.control.MoveControl#entity
    static jobject get_field_entity(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "mob", "field_6371", "entity", "f_24974_"), "Lbtp;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.entity.ai.control.MoveControl#entity
    static void set_field_entity(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "mob", "field_6371", "entity", "f_24974_"), "Lbtp;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.entity.ai.control.MoveControl#targetX
    static jdouble get_field_targetX(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "wantedX", "field_6370", "targetX", "f_24975_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.entity.ai.control.MoveControl#targetX
    static void set_field_targetX(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "wantedX", "field_6370", "targetX", "f_24975_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.entity.ai.control.MoveControl#targetY
    static jdouble get_field_targetY(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "wantedY", "field_6369", "targetY", "f_24976_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.entity.ai.control.MoveControl#targetY
    static void set_field_targetY(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "wantedY", "field_6369", "targetY", "f_24976_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.entity.ai.control.MoveControl#targetZ
    static jdouble get_field_targetZ(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "wantedZ", "field_6367", "targetZ", "f_24977_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.entity.ai.control.MoveControl#targetZ
    static void set_field_targetZ(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "wantedZ", "field_6367", "targetZ", "f_24977_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.entity.ai.control.MoveControl#speed
    static jdouble get_field_speed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "speedModifier", "field_6372", "speed", "f_24978_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.entity.ai.control.MoveControl#speed
    static void set_field_speed(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "speedModifier", "field_6372", "speed", "f_24978_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.entity.ai.control.MoveControl#forwardMovement
    static jfloat get_field_forwardMovement(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "strafeForwards", "field_6368", "forwardMovement", "f_24979_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.entity.ai.control.MoveControl#forwardMovement
    static void set_field_forwardMovement(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "strafeForwards", "field_6368", "forwardMovement", "f_24979_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.entity.ai.control.MoveControl#sidewaysMovement
    static jfloat get_field_sidewaysMovement(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "strafeRight", "field_6373", "sidewaysMovement", "f_24980_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.entity.ai.control.MoveControl#sidewaysMovement
    static void set_field_sidewaysMovement(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "strafeRight", "field_6373", "sidewaysMovement", "f_24980_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.entity.ai.control.MoveControl#state
    static jobject get_field_state(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "operation", "field_6374", "state", "f_24981_"), "Lbzp$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.entity.ai.control.MoveControl#state
    static void set_field_state(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "operation", "field_6374", "state", "f_24981_"), "Lbzp$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_isMoving() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "hasWanted", "method_6241", "isMoving", "m_24995_"), "()Z");
    }

    static jboolean isMoving(const jobject& obj) {
                
       const auto methodID = methodID_isMoving();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSpeed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getSpeedModifier", "method_6242", "getSpeed", "m_24999_"), "()D");
    }

    static jdouble getSpeed(const jobject& obj) {
                
       const auto methodID = methodID_getSpeed();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_moveTo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setWantedPosition", "method_6239", "moveTo", "m_6849_"), "(DDDD)V");
    }

    static void moveTo(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jdouble& arg2, const jdouble& arg3) {
                
       const auto methodID = methodID_moveTo();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_strafeTo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "strafe", "method_6243", "strafeTo", "m_24988_"), "(FF)V");
    }

    static void strafeTo(const jobject& obj, const jfloat& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_strafeTo();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_6240", "tick", "m_8126_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_isPosWalkable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "isWalkable", "method_25946", "isPosWalkable", "m_24996_"), "(FF)Z");
    }

    static jboolean isPosWalkable(const jobject& obj, const jfloat& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_isPosWalkable();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_wrapDegrees() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "rotlerp", "method_6238", "wrapDegrees", "m_24991_"), "(FFF)F");
    }

    static jfloat wrapDegrees(const jobject& obj, const jfloat& arg0, const jfloat& arg1, const jfloat& arg2) {
                
       const auto methodID = methodID_wrapDegrees();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getTargetX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getWantedX", "method_6236", "getTargetX", "m_25000_"), "()D");
    }

    static jdouble getTargetX(const jobject& obj) {
                
       const auto methodID = methodID_getTargetX();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTargetY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getWantedY", "method_6235", "getTargetY", "m_25001_"), "()D");
    }

    static jdouble getTargetY(const jobject& obj) {
                
       const auto methodID = methodID_getTargetY();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTargetZ() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getWantedZ", "method_6237", "getTargetZ", "m_25002_"), "()D");
    }

    static jdouble getTargetZ(const jobject& obj) {
                
       const auto methodID = methodID_getTargetZ();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_CONTROL_MOVECONTROL_HPP