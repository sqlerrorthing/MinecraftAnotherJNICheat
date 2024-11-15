// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_TICK_TICKSCHEDULER_HPP
#define NET_MINECRAFT_WORLD_TICK_TICKSCHEDULER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.tick.TickScheduler
 * Remapped: eyv
 */
namespace TickScheduler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eyv", "net/minecraft/world/ticks/TickAccess", "net/minecraft/class_6762", "net/minecraft/world/tick/TickScheduler", "net/minecraft/src/C_183050_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_scheduleTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "schedule", "method_39363", "scheduleTick", "m_183393_"), "(Leyt;)V");
    }

    static void scheduleTick(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_scheduleTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isQueued() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hasScheduledTick", "method_8674", "isQueued", "m_183582_"), "(Ljd;Ljava/lang/Object;)Z");
    }

    static jboolean isQueued(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_isQueued();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getTickCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "count", "method_20825", "getTickCount", "m_183574_"), "()I");
    }

    static jint getTickCount(const jobject& obj) {
                
       const auto methodID = methodID_getTickCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_TICK_TICKSCHEDULER_HPP