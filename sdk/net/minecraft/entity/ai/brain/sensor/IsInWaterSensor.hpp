// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_SENSOR_ISINWATERSENSOR_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_SENSOR_ISINWATERSENSOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.sensor.IsInWaterSensor
 * Remapped: cdn
 */
namespace IsInWaterSensor {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cdn", "net/minecraft/world/entity/ai/sensing/IsInWaterSensor", "net/minecraft/class_7101", "net/minecraft/entity/ai/brain/sensor/IsInWaterSensor", "net/minecraft/src/C_213030_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getOutputMemoryModules() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "requires", "method_19099", "getOutputMemoryModules", "m_7163_"), "()Ljava/util/Set;");
    }

    static jobject getOutputMemoryModules(const jobject& obj) {
                
       const auto methodID = methodID_getOutputMemoryModules();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_sense() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "doTick", "method_19101", "sense", "m_5578_"), "(Laqu;Lbtn;)V");
    }

    static void sense(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_sense();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_SENSOR_ISINWATERSENSOR_HPP