// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PROFILING_JFR_EVENT_SERVERTICKTIMEEVENT$NAMES_HPP
#define NET_MINECRAFT_UTIL_PROFILING_JFR_EVENT_SERVERTICKTIMEEVENT$NAMES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.profiling.jfr.event.ServerTickTimeEvent$Names
 * Remapped: net/minecraft/util/profiling/jfr/event/ServerTickTimeEvent$a
 */
namespace ServerTickTimeEvent$Names {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("net/minecraft/util/profiling/jfr/event/ServerTickTimeEvent$a", "net/minecraft/util/profiling/jfr/event/ServerTickTimeEvent$Fields", "net/minecraft/util/profiling/jfr/event/ServerTickTimeEvent$class_6601", "net/minecraft/util/profiling/jfr/event/ServerTickTimeEvent$Names", "net/minecraft/util/profiling/jfr/event/ServerTickTimeEvent$C_183115_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.util.profiling.jfr.event.ServerTickTimeEvent$Names#AVERAGE_TICK_DURATION
    [[maybe_unused]] static jobject get_field_AVERAGE_TICK_DURATION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "AVERAGE_TICK_DURATION", "field_34854", "AVERAGE_TICK_DURATION", "f_195603_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiling.jfr.event.ServerTickTimeEvent$Names#AVERAGE_TICK_DURATION
    [[maybe_unused]] static void set_field_AVERAGE_TICK_DURATION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "AVERAGE_TICK_DURATION", "field_34854", "AVERAGE_TICK_DURATION", "f_195603_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

};

#endif // NET_MINECRAFT_UTIL_PROFILING_JFR_EVENT_SERVERTICKTIMEEVENT$NAMES_HPP