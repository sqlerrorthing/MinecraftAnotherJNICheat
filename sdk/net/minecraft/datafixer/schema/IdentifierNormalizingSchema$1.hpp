// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_SCHEMA_IDENTIFIERNORMALIZINGSCHEMA$1_HPP
#define NET_MINECRAFT_DATAFIXER_SCHEMA_IDENTIFIERNORMALIZINGSCHEMA$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.schema.IdentifierNormalizingSchema$1
 * Remapped: bid$1
 */
namespace IdentifierNormalizingSchema$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bid$1", "net/minecraft/util/datafix/schemas/NamespacedSchema$1", "net/minecraft/class_1220$1", "net/minecraft/datafixer/schema/IdentifierNormalizingSchema$1", "net/minecraft/src/C_369_$C_370_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_read() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("read", "read", "read", "read", "read"), "(Lcom/mojang/serialization/DynamicOps;Ljava/lang/Object;)Lcom/mojang/serialization/DataResult;");
    }

    static jobject read(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_read();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_28296", "write", "write"), "(Lcom/mojang/serialization/DynamicOps;Ljava/lang/String;)Ljava/lang/Object;");
    }

    static jobject write(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_write();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_SCHEMA_IDENTIFIERNORMALIZINGSCHEMA$1_HPP