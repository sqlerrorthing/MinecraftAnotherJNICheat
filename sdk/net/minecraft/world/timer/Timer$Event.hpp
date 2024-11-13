// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_TIMER_TIMER$EVENT_HPP
#define NET_MINECRAFT_WORLD_TIMER_TIMER$EVENT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.timer.Timer$Event
 * Remapped: ewp$a
 */
namespace Timer$Event {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ewp$a", "net/minecraft/world/level/timers/TimerQueue$Event", "net/minecraft/class_236$class_237", "net/minecraft/world/timer/Timer$Event", "net/minecraft/src/C_3037_$C_3039_"));
        }
        return cachedClass;
    };

    // getter for public field net.minecraft.world.timer.Timer$Event#triggerTime
    static jlong get_field_triggerTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "triggerTime", "field_1318", "triggerTime", "f_82273_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.timer.Timer$Event#triggerTime
    static void set_field_triggerTime(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "triggerTime", "field_1318", "triggerTime", "f_82273_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.timer.Timer$Event#id
    static jobject get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "sequentialId", "field_1319", "id", "f_82274_"), "Lcom/google/common/primitives/UnsignedLong;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.timer.Timer$Event#id
    static void set_field_id(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "sequentialId", "field_1319", "id", "f_82274_"), "Lcom/google/common/primitives/UnsignedLong;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.timer.Timer$Event#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "id", "field_1317", "name", "f_82275_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.timer.Timer$Event#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "id", "field_1317", "name", "f_82275_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.timer.Timer$Event#callback
    static jobject get_field_callback(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "callback", "field_1316", "callback", "f_82276_"), "Lewn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.timer.Timer$Event#callback
    static void set_field_callback(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "callback", "field_1316", "callback", "f_82276_"), "Lewn;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_WORLD_TIMER_TIMER$EVENT_HPP