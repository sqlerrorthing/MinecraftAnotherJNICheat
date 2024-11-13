// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_SENSOR_AXOLOTLATTACKABLESSENSOR_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_SENSOR_AXOLOTLATTACKABLESSENSOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.sensor.AxolotlAttackablesSensor
 * Remapped: cdg
 */
namespace AxolotlAttackablesSensor {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cdg", "net/minecraft/world/entity/ai/sensing/AxolotlAttackablesSensor", "net/minecraft/class_6044", "net/minecraft/entity/ai/brain/sensor/AxolotlAttackablesSensor", "net/minecraft/src/C_141104_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.ai.brain.sensor.AxolotlAttackablesSensor#TARGET_RANGE
    [[maybe_unused]] static jfloat get_field_TARGET_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TARGET_DETECTION_DISTANCE", "field_30248", "TARGET_RANGE", "f_148263_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.ai.brain.sensor.AxolotlAttackablesSensor#TARGET_RANGE
    [[maybe_unused]] static void set_field_TARGET_RANGE(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TARGET_DETECTION_DISTANCE", "field_30248", "TARGET_RANGE", "f_148263_"), "F");
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
    
    static jmethodID methodID_canHunt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "isHuntTarget", "method_35144", "canHunt", "m_148271_"), "(Lbtn;Lbtn;)Z");
    }

    static jboolean canHunt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_canHunt();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isAlwaysHostileTo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "isHostileTarget", "method_35145", "isAlwaysHostileTo", "m_148269_"), "(Lbtn;)Z");
    }

    static jboolean isAlwaysHostileTo(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isAlwaysHostileTo();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isInRange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "isClose", "method_35146", "isInRange", "m_148274_"), "(Lbtn;Lbtn;)Z");
    }

    static jboolean isInRange(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_isInRange();
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

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_SENSOR_AXOLOTLATTACKABLESSENSOR_HPP