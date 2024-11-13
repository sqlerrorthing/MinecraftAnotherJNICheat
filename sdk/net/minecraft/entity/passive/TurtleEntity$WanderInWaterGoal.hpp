// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_TURTLEENTITY$WANDERINWATERGOAL_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_TURTLEENTITY$WANDERINWATERGOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.TurtleEntity$WanderInWaterGoal
 * Remapped: cgf$c
 */
namespace TurtleEntity$WanderInWaterGoal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cgf$c", "net/minecraft/world/entity/animal/Turtle$TurtleGoToWaterGoal", "net/minecraft/class_1481$class_1484", "net/minecraft/entity/passive/TurtleEntity$WanderInWaterGoal", "net/minecraft/src/C_909_$C_913_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.passive.TurtleEntity$WanderInWaterGoal#field_30385
    [[maybe_unused]] static jint get_field_field_30385() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "GIVE_UP_TICKS", "field_30385", "field_30385", "f_149075_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.TurtleEntity$WanderInWaterGoal#field_30385
    [[maybe_unused]] static void set_field_field_30385(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "GIVE_UP_TICKS", "field_30385", "field_30385", "f_149075_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.TurtleEntity$WanderInWaterGoal#turtle
    static jobject get_field_turtle(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "turtle", "field_6931", "turtle", "f_30260_"), "Lcgf;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.TurtleEntity$WanderInWaterGoal#turtle
    static void set_field_turtle(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "turtle", "field_6931", "turtle", "f_30260_"), "Lcgf;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
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

#endif // NET_MINECRAFT_ENTITY_PASSIVE_TURTLEENTITY$WANDERINWATERGOAL_HPP