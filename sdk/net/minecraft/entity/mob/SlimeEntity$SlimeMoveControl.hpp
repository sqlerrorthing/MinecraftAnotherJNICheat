// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_MOB_SLIMEENTITY$SLIMEMOVECONTROL_HPP
#define NET_MINECRAFT_ENTITY_MOB_SLIMEENTITY$SLIMEMOVECONTROL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.mob.SlimeEntity$SlimeMoveControl
 * Remapped: ckm$d
 */
namespace SlimeEntity$SlimeMoveControl {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ckm$d", "net/minecraft/world/entity/monster/Slime$SlimeMoveControl", "net/minecraft/class_1621$class_1625", "net/minecraft/entity/mob/SlimeEntity$SlimeMoveControl", "net/minecraft/src/C_1059_$C_1063_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.mob.SlimeEntity$SlimeMoveControl#targetYaw
    static jfloat get_field_targetYaw(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "yRot", "field_7397", "targetYaw", "f_33663_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.SlimeEntity$SlimeMoveControl#targetYaw
    static void set_field_targetYaw(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "yRot", "field_7397", "targetYaw", "f_33663_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.mob.SlimeEntity$SlimeMoveControl#ticksUntilJump
    static jint get_field_ticksUntilJump(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "jumpDelay", "field_7399", "ticksUntilJump", "f_33664_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.SlimeEntity$SlimeMoveControl#ticksUntilJump
    static void set_field_ticksUntilJump(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "jumpDelay", "field_7399", "ticksUntilJump", "f_33664_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.mob.SlimeEntity$SlimeMoveControl#slime
    static jobject get_field_slime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "slime", "field_7396", "slime", "f_33665_"), "Lckm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.SlimeEntity$SlimeMoveControl#slime
    static void set_field_slime(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "slime", "field_7396", "slime", "f_33665_"), "Lckm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.mob.SlimeEntity$SlimeMoveControl#jumpOften
    static jboolean get_field_jumpOften(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "isAggressive", "field_7398", "jumpOften", "f_33666_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.mob.SlimeEntity$SlimeMoveControl#jumpOften
    static void set_field_jumpOften(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "isAggressive", "field_7398", "jumpOften", "f_33666_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_look() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setDirection", "method_7165", "look", "m_33672_"), "(FZ)V");
    }

    static void look(const jobject& obj, const jfloat& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_look();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_move() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setWantedMovement", "method_7164", "move", "m_33670_"), "(D)V");
    }

    static void move(const jobject& obj, const jdouble& arg0) {
                
       const auto methodID = methodID_move();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_6240", "tick", "m_8126_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_MOB_SLIMEENTITY$SLIMEMOVECONTROL_HPP