// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_LOWERCASEENUMTYPEADAPTERFACTORY$1_HPP
#define NET_MINECRAFT_UTIL_LOWERCASEENUMTYPEADAPTERFACTORY$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.LowercaseEnumTypeAdapterFactory$1
 * Remapped: ayl$1
 */
namespace LowercaseEnumTypeAdapterFactory$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ayl$1", "net/minecraft/util/LowerCaseEnumTypeAdapterFactory$1", "net/minecraft/class_3530$1", "net/minecraft/util/LowercaseEnumTypeAdapterFactory$1", "net/minecraft/src/C_186_$C_187_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("write", "write", "write", "write", "write"), "(Lcom/google/gson/stream/JsonWriter;Ljava/lang/Object;)V");
    }

    static void write(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_write();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_read() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("read", "read", "read", "read", "read"), "(Lcom/google/gson/stream/JsonReader;)Ljava/lang/Object;");
    }

    static jobject read(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_read();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_UTIL_LOWERCASEENUMTYPEADAPTERFACTORY$1_HPP