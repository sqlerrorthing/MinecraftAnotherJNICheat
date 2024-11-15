// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_LOGGING_LOGREADER_HPP
#define NET_MINECRAFT_UTIL_LOGGING_LOGREADER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.logging.LogReader
 * Remapped: blz
 */
namespace LogReader {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("blz", "net/minecraft/util/eventlog/JsonEventLogReader", "net/minecraft/class_7936", "net/minecraft/util/logging/LogReader", "net/minecraft/src/C_260373_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_47571", "create", "m_261256_"), "(Lcom/mojang/serialization/Codec;Ljava/io/Reader;)Lblz;");
    }

    static jobject create(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_read() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "next", "method_47570", "read", "m_261203_"), "()Ljava/lang/Object;");
    }

    static jobject read(const jobject& obj) {
                
       const auto methodID = methodID_read();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_LOGGING_LOGREADER_HPP