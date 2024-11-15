// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_SNIFFERBRAIN$SNIFFINGTASK_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_SNIFFERBRAIN$SNIFFINGTASK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.SnifferBrain$SniffingTask
 * Remapped: chw$f
 */
namespace SnifferBrain$SniffingTask {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("chw$f", "net/minecraft/world/entity/animal/sniffer/SnifferAi$Sniffing", "net/minecraft/class_8155$class_8161", "net/minecraft/entity/passive/SnifferBrain$SniffingTask", "net/minecraft/src/C_271043_$C_271028_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_shouldRun() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "checkExtraStartConditions", "method_49176", "shouldRun", "m_6114_"), "(Laqu;Lchv;)Z");
    }

    static jboolean shouldRun(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_shouldRun();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_shouldKeepRunning() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canStillUse", "method_49177", "shouldKeepRunning", "m_6737_"), "(Laqu;Lchv;J)Z");
    }

    static jboolean shouldKeepRunning(const jobject& obj, const jobject& arg0, const jobject& arg1, const jlong& arg2) {
                
       const auto methodID = methodID_shouldKeepRunning();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_run() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "start", "method_49179", "run", "m_6735_"), "(Laqu;Lchv;J)V");
    }

    static void run(const jobject& obj, const jobject& arg0, const jobject& arg1, const jlong& arg2) {
                
       const auto methodID = methodID_run();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_finishRunning() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "stop", "method_49180", "finishRunning", "m_6732_"), "(Laqu;Lchv;J)V");
    }

    static void finishRunning(const jobject& obj, const jobject& arg0, const jobject& arg1, const jlong& arg2) {
                
       const auto methodID = methodID_finishRunning();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_SNIFFERBRAIN$SNIFFINGTASK_HPP