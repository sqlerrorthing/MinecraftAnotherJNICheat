// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_TIMER_FUNCTIONTAGTIMERCALLBACK_HPP
#define NET_MINECRAFT_WORLD_TIMER_FUNCTIONTAGTIMERCALLBACK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.timer.FunctionTagTimerCallback
 * Remapped: ewm
 */
namespace FunctionTagTimerCallback {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ewm", "net/minecraft/world/level/timers/FunctionTagCallback", "net/minecraft/class_229", "net/minecraft/world/timer/FunctionTagTimerCallback", "net/minecraft/src/C_3032_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.world.timer.FunctionTagTimerCallback#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "tagId", "field_1303", "name", "f_82189_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.world.timer.FunctionTagTimerCallback#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "tagId", "field_1303", "name", "f_82189_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_call() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handle", "method_962", "call", "m_5821_"), "(Lnet/minecraft/server/MinecraftServer;Lewp;J)V");
    }

    static void call(const jobject& obj, const jobject& arg0, const jobject& arg1, const jlong& arg2) {
                
       const auto methodID = methodID_call();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_WORLD_TIMER_FUNCTIONTAGTIMERCALLBACK_HPP