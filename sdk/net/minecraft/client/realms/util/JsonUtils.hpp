// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_UTIL_JSONUTILS_HPP
#define NET_MINECRAFT_CLIENT_REALMS_UTIL_JSONUTILS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.util.JsonUtils
 * Remapped: fez
 */
namespace JsonUtils {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fez", "com/mojang/realmsclient/util/JsonUtils", "net/minecraft/class_4431", "net/minecraft/client/realms/util/JsonUtils", "net/minecraft/src/C_3344_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getRequired", "method_49596", "get", "m_274579_"), "(Ljava/lang/String;Lcom/google/gson/JsonObject;Ljava/util/function/Function;)Ljava/lang/Object;");
    }

    static jobject get(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getNullable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getOptional", "method_54115", "getNullable", "m_304933_"), "(Ljava/lang/String;Lcom/google/gson/JsonObject;Ljava/util/function/Function;)Ljava/lang/Object;");
    }

    static jobject getNullable(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_getNullable();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getRequiredString", "method_49594", "getString", "m_274305_"), "(Ljava/lang/String;Lcom/google/gson/JsonObject;)Ljava/lang/String;");
    }

    static jobject getString(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getString();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getStringOr() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getRequiredStringOr", "method_54577", "getStringOr", "m_305973_"), "(Ljava/lang/String;Lcom/google/gson/JsonObject;Ljava/lang/String;)Ljava/lang/String;");
    }

    static jobject getStringOr(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_getStringOr();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getNullableStringOr() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getStringOr", "method_21547", "getNullableStringOr", "m_90161_"), "(Ljava/lang/String;Lcom/google/gson/JsonObject;Ljava/lang/String;)Ljava/lang/String;");
    }

    static jobject getNullableStringOr(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_getNullableStringOr();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getUuidOr() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getUuidOr", "method_49595", "getUuidOr", "m_274562_"), "(Ljava/lang/String;Lcom/google/gson/JsonObject;Ljava/util/UUID;)Ljava/util/UUID;");
    }

    static jobject getUuidOr(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_getUuidOr();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getIntOr() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getIntOr", "method_21545", "getIntOr", "m_90153_"), "(Ljava/lang/String;Lcom/google/gson/JsonObject;I)I");
    }

    static jint getIntOr(const jobject& arg0, const jobject& arg1, const jint& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_getIntOr();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getLongOr() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getLongOr", "method_21546", "getLongOr", "m_90157_"), "(Ljava/lang/String;Lcom/google/gson/JsonObject;J)J");
    }

    static jlong getLongOr(const jobject& arg0, const jobject& arg1, const jlong& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_getLongOr();
       return MinecraftSDK::env->CallStaticLongMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getBooleanOr() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getBooleanOr", "method_21548", "getBooleanOr", "m_90165_"), "(Ljava/lang/String;Lcom/google/gson/JsonObject;Z)Z");
    }

    static jboolean getBooleanOr(const jobject& arg0, const jobject& arg1, const jboolean& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_getBooleanOr();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getDateOr() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getDateOr", "method_21544", "getDateOr", "m_90150_"), "(Ljava/lang/String;Lcom/google/gson/JsonObject;)Ljava/util/Date;");
    }

    static jobject getDateOr(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getDateOr();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_UTIL_JSONUTILS_HPP