// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_TURTLEENTITY$WANDERONLANDGOAL_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_TURTLEENTITY$WANDERONLANDGOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.TurtleEntity$WanderOnLandGoal
 * Remapped: cgf$h
 */
namespace TurtleEntity$WanderOnLandGoal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cgf$h", "net/minecraft/world/entity/animal/Turtle$TurtleRandomStrollGoal", "net/minecraft/class_1481$class_1489", "net/minecraft/entity/passive/TurtleEntity$WanderOnLandGoal", "net/minecraft/src/C_909_$C_918_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.passive.TurtleEntity$WanderOnLandGoal#turtle
    static jobject get_field_turtle(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "turtle", "field_6934", "turtle", "f_30301_"), "Lcgf;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.TurtleEntity$WanderOnLandGoal#turtle
    static void set_field_turtle(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "turtle", "field_6934", "turtle", "f_30301_"), "Lcgf;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_canStart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "canUse", "method_6264", "canStart", "m_8036_"), "()Z");
    }

    static jboolean canStart(const jobject& obj) {
                
       const auto methodID = methodID_canStart();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_TURTLEENTITY$WANDERONLANDGOAL_HPP