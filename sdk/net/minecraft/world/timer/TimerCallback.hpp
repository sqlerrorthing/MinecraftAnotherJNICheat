// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_TIMER_TIMERCALLBACK_HPP
#define NET_MINECRAFT_WORLD_TIMER_TIMERCALLBACK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.timer.TimerCallback
 * Remapped: ewn
 */
namespace TimerCallback {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ewn", "net/minecraft/world/level/timers/TimerCallback", "net/minecraft/class_234", "net/minecraft/world/timer/TimerCallback", "net/minecraft/src/C_3034_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_call() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("handle", "handle", "method_974", "call", "m_5821_"), "(Ljava/lang/Object;Lewp;J)V");
    }

    static void call(const jobject& obj, const jobject& arg0, const jobject& arg1, const jlong& arg2) {
                
       const auto methodID = methodID_call();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_WORLD_TIMER_TIMERCALLBACK_HPP