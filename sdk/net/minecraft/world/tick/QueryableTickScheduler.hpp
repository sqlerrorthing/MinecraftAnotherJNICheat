// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_TICK_QUERYABLETICKSCHEDULER_HPP
#define NET_MINECRAFT_WORLD_TICK_QUERYABLETICKSCHEDULER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.tick.QueryableTickScheduler
 * Remapped: eyp
 */
namespace QueryableTickScheduler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eyp", "net/minecraft/world/ticks/LevelTickAccess", "net/minecraft/class_6756", "net/minecraft/world/tick/QueryableTickScheduler", "net/minecraft/src/C_183041_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_isTicking() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "willTickThisTick", "method_8677", "isTicking", "m_183588_"), "(Ljd;Ljava/lang/Object;)Z");
    }

    static jboolean isTicking(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_isTicking();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_WORLD_TICK_QUERYABLETICKSCHEDULER_HPP