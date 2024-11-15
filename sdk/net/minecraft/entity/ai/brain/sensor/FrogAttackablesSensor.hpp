// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_SENSOR_FROGATTACKABLESSENSOR_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_SENSOR_FROGATTACKABLESSENSOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.sensor.FrogAttackablesSensor
 * Remapped: cdj
 */
namespace FrogAttackablesSensor {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cdj", "net/minecraft/world/entity/ai/sensing/FrogAttackablesSensor", "net/minecraft/class_7100", "net/minecraft/entity/ai/brain/sensor/FrogAttackablesSensor", "net/minecraft/src/C_213029_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.ai.brain.sensor.FrogAttackablesSensor#RANGE
    [[maybe_unused]] static jfloat get_field_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TARGET_DETECTION_DISTANCE", "field_37444", "RANGE", "f_217807_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.ai.brain.sensor.FrogAttackablesSensor#RANGE
    [[maybe_unused]] static void set_field_RANGE(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TARGET_DETECTION_DISTANCE", "field_37444", "RANGE", "f_217807_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    static jmethodID methodID_matches() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isMatchingEntity", "method_35148", "matches", "m_142628_"), "(Lbtn;Lbtn;)Z");
    }

    static jboolean matches(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_matches();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isTargetUnreachable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "isUnreachableAttackTarget", "method_44331", "isTargetUnreachable", "m_238335_"), "(Lbtn;Lbtn;)Z");
    }

    static jboolean isTargetUnreachable(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_isTargetUnreachable();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getOutputMemoryModule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getMemory", "method_35150", "getOutputMemoryModule", "m_142149_"), "()Lccs;");
    }

    static jobject getOutputMemoryModule(const jobject& obj) {
                
       const auto methodID = methodID_getOutputMemoryModule();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_SENSOR_FROGATTACKABLESSENSOR_HPP