// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_UTIL$3_HPP
#define NET_MINECRAFT_UTIL_UTIL$3_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.Util$3
 * Remapped: ad$3
 */
namespace Util$3 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ad$3", "net/minecraft/Util$11", "net/minecraft/class_156$3", "net/minecraft/util/Util$3", "net/minecraft/src/C_5322_$C_212937_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.util.Util$3#cache
    static jobject get_field_cache(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "cache", "field_29657", "cache", "f_214693_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.Util$3#cache
    static void set_field_cache(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "cache", "field_29657", "cache", "f_214693_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("apply", "apply", "apply", "apply", "apply"), "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    }

    static jobject apply(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_apply();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_UTIL_UTIL$3_HPP