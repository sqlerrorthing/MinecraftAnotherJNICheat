// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_TICK_SERIALIZABLETICKSCHEDULER_HPP
#define NET_MINECRAFT_WORLD_TICK_SERIALIZABLETICKSCHEDULER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.tick.SerializableTickScheduler
 * Remapped: eyu
 */
namespace SerializableTickScheduler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eyu", "net/minecraft/world/ticks/SerializableTickContainer", "net/minecraft/class_6761", "net/minecraft/world/tick/SerializableTickScheduler", "net/minecraft/src/C_183049_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_toNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "save", "method_20463", "toNbt", "m_183237_"), "(JLjava/util/function/Function;)Luy;");
    }

    static jobject toNbt(const jobject& obj, const jlong& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_toNbt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_WORLD_TICK_SERIALIZABLETICKSCHEDULER_HPP