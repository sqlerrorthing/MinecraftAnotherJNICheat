// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_CONTROL_YAWADJUSTINGLOOKCONTROL_HPP
#define NET_MINECRAFT_ENTITY_AI_CONTROL_YAWADJUSTINGLOOKCONTROL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.control.YawAdjustingLookControl
 * Remapped: bzq
 */
namespace YawAdjustingLookControl {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bzq", "net/minecraft/world/entity/ai/control/SmoothSwimmingLookControl", "net/minecraft/class_1332", "net/minecraft/entity/ai/control/YawAdjustingLookControl", "net/minecraft/src/C_141094_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.ai.control.YawAdjustingLookControl#yawAdjustThreshold
    static jint get_field_yawAdjustThreshold(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "maxYRotFromCenter", "field_6357", "yawAdjustThreshold", "f_148057_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.control.YawAdjustingLookControl#yawAdjustThreshold
    static void set_field_yawAdjustThreshold(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "maxYRotFromCenter", "field_6357", "yawAdjustThreshold", "f_148057_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.ai.control.YawAdjustingLookControl#ADDED_PITCH
    [[maybe_unused]] static jint get_field_ADDED_PITCH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "HEAD_TILT_X", "field_30200", "ADDED_PITCH", "f_148058_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.control.YawAdjustingLookControl#ADDED_PITCH
    [[maybe_unused]] static void set_field_ADDED_PITCH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "HEAD_TILT_X", "field_30200", "ADDED_PITCH", "f_148058_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.ai.control.YawAdjustingLookControl#ADDED_YAW
    [[maybe_unused]] static jint get_field_ADDED_YAW() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "HEAD_TILT_Y", "field_30201", "ADDED_YAW", "f_148059_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.control.YawAdjustingLookControl#ADDED_YAW
    [[maybe_unused]] static void set_field_ADDED_YAW(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "HEAD_TILT_Y", "field_30201", "ADDED_YAW", "f_148059_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_6231", "tick", "m_8128_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_CONTROL_YAWADJUSTINGLOOKCONTROL_HPP