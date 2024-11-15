// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_MOB_PHANTOMENTITY$CIRCLEMOVEMENTGOAL_HPP
#define NET_MINECRAFT_ENTITY_MOB_PHANTOMENTITY$CIRCLEMOVEMENTGOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.mob.PhantomEntity$CircleMovementGoal
 * Remapped: ckf$e
 */
namespace PhantomEntity$CircleMovementGoal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ckf$e", "net/minecraft/world/entity/monster/Phantom$PhantomCircleAroundAnchorGoal", "net/minecraft/class_1593$class_1598", "net/minecraft/entity/mob/PhantomEntity$CircleMovementGoal", "net/minecraft/src/C_1030_$C_1036_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.mob.PhantomEntity$CircleMovementGoal#angle
    static jfloat get_field_angle(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "angle", "field_7328", "angle", "f_33219_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.PhantomEntity$CircleMovementGoal#angle
    static void set_field_angle(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "angle", "field_7328", "angle", "f_33219_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.mob.PhantomEntity$CircleMovementGoal#radius
    static jfloat get_field_radius(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "distance", "field_7327", "radius", "f_33220_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.PhantomEntity$CircleMovementGoal#radius
    static void set_field_radius(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "distance", "field_7327", "radius", "f_33220_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.mob.PhantomEntity$CircleMovementGoal#yOffset
    static jfloat get_field_yOffset(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "height", "field_7326", "yOffset", "f_33221_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.PhantomEntity$CircleMovementGoal#yOffset
    static void set_field_yOffset(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "height", "field_7326", "yOffset", "f_33221_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.mob.PhantomEntity$CircleMovementGoal#circlingDirection
    static jfloat get_field_circlingDirection(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "clockwise", "field_7324", "circlingDirection", "f_33222_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.PhantomEntity$CircleMovementGoal#circlingDirection
    static void set_field_circlingDirection(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "clockwise", "field_7324", "circlingDirection", "f_33222_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    static jmethodID methodID_canStart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "canUse", "method_6264", "canStart", "m_8036_"), "()Z");
    }

    static jboolean canStart(const jobject& obj) {
                
       const auto methodID = methodID_canStart();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_start() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "start", "method_6269", "start", "m_8056_"), "()V");
    }

    static void start(const jobject& obj) {
                
       const auto methodID = methodID_start();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_6268", "tick", "m_8037_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_adjustDirection() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "selectNext", "method_7103", "adjustDirection", "m_33231_"), "()V");
    }

    static void adjustDirection(const jobject& obj) {
                
       const auto methodID = methodID_adjustDirection();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_MOB_PHANTOMENTITY$CIRCLEMOVEMENTGOAL_HPP