// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_TIMER_FUNCTIONTAGTIMERCALLBACK$SERIALIZER_HPP
#define NET_MINECRAFT_WORLD_TIMER_FUNCTIONTAGTIMERCALLBACK$SERIALIZER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.timer.FunctionTagTimerCallback$Serializer
 * Remapped: ewm$a
 */
namespace FunctionTagTimerCallback$Serializer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ewm$a", "net/minecraft/world/level/timers/FunctionTagCallback$Serializer", "net/minecraft/class_229$class_230", "net/minecraft/world/timer/FunctionTagTimerCallback$Serializer", "net/minecraft/src/C_3032_$C_3033_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_serialize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "serialize", "method_964", "serialize", "m_6585_"), "(Lub;Lewm;)V");
    }

    static void serialize(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_serialize();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_deserialize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "deserialize", "method_965", "deserialize", "m_6006_"), "(Lub;)Lewm;");
    }

    static jobject deserialize(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_deserialize();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_TIMER_FUNCTIONTAGTIMERCALLBACK$SERIALIZER_HPP