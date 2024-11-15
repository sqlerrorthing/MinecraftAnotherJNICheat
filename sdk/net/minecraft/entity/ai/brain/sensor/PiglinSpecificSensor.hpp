// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_SENSOR_PIGLINSPECIFICSENSOR_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_SENSOR_PIGLINSPECIFICSENSOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.sensor.PiglinSpecificSensor
 * Remapped: cdu
 */
namespace PiglinSpecificSensor {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cdu", "net/minecraft/world/entity/ai/sensing/PiglinSpecificSensor", "net/minecraft/class_4834", "net/minecraft/entity/ai/brain/sensor/PiglinSpecificSensor", "net/minecraft/src/C_770_"));
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
    
    static jmethodID methodID_findPiglinRepellent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "findNearestRepellent", "method_24649", "findPiglinRepellent", "m_26734_"), "(Laqu;Lbtn;)Ljava/util/Optional;");
    }

    static jobject findPiglinRepellent(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_findPiglinRepellent();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isPiglinRepellent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isValidRepellent", "method_24648", "isPiglinRepellent", "m_26728_"), "(Laqu;Ljd;)Z");
    }

    static jboolean isPiglinRepellent(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_isPiglinRepellent();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_SENSOR_PIGLINSPECIFICSENSOR_HPP