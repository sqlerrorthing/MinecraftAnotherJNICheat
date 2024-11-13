// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PROFILER_PROFILERESULTIMPL$COUNTERINFO_HPP
#define NET_MINECRAFT_UTIL_PROFILER_PROFILERESULTIMPL$COUNTERINFO_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.profiler.ProfileResultImpl$CounterInfo
 * Remapped: bnb$a
 */
namespace ProfileResultImpl$CounterInfo {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bnb$a", "net/minecraft/util/profiling/FilledProfileResults$CounterCollector", "net/minecraft/class_3692$class_4747", "net/minecraft/util/profiler/ProfileResultImpl$CounterInfo", "net/minecraft/src/C_436_$C_438_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.util.profiler.ProfileResultImpl$CounterInfo#selfTime
    static jlong get_field_selfTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "selfValue", "field_21827", "selfTime", "f_18537_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static default field net.minecraft.util.profiler.ProfileResultImpl$CounterInfo#selfTime
    static void set_field_selfTime(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "selfValue", "field_21827", "selfTime", "f_18537_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.util.profiler.ProfileResultImpl$CounterInfo#totalTime
    static jlong get_field_totalTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "totalValue", "field_21828", "totalTime", "f_18538_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static default field net.minecraft.util.profiler.ProfileResultImpl$CounterInfo#totalTime
    static void set_field_totalTime(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "totalValue", "field_21828", "totalTime", "f_18538_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.util.profiler.ProfileResultImpl$CounterInfo#subCounters
    static jobject get_field_subCounters(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "children", "field_21829", "subCounters", "f_18539_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.util.profiler.ProfileResultImpl$CounterInfo#subCounters
    static void set_field_subCounters(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "children", "field_21829", "subCounters", "f_18539_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addValue", "method_24267", "add", "m_18547_"), "(Ljava/util/Iterator;J)V");
    }

    static void add(const jobject& obj, const jobject& arg0, const jlong& arg1) {
                
       const auto methodID = methodID_add();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_UTIL_PROFILER_PROFILERESULTIMPL$COUNTERINFO_HPP