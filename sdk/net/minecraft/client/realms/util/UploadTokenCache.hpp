// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_UTIL_UPLOADTOKENCACHE_HPP
#define NET_MINECRAFT_CLIENT_REALMS_UTIL_UPLOADTOKENCACHE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.util.UploadTokenCache
 * Remapped: fff
 */
namespace UploadTokenCache {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fff", "com/mojang/realmsclient/util/UploadTokenCache", "net/minecraft/class_4453", "net/minecraft/client/realms/util/UploadTokenCache", "net/minecraft/src/C_3356_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.realms.util.UploadTokenCache#TOKEN_CACHE
    [[maybe_unused]] static jobject get_field_TOKEN_CACHE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TOKEN_CACHE", "field_20270", "TOKEN_CACHE", "f_90290_"), "Lit/unimi/dsi/fastutil/longs/Long2ObjectMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.util.UploadTokenCache#TOKEN_CACHE
    [[maybe_unused]] static void set_field_TOKEN_CACHE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TOKEN_CACHE", "field_20270", "TOKEN_CACHE", "f_90290_"), "Lit/unimi/dsi/fastutil/longs/Long2ObjectMap;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_21585", "get", "m_90292_"), "(J)Ljava/lang/String;");
    }

    static jobject get(const jlong& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_invalidate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "invalidate", "method_21587", "invalidate", "m_90297_"), "(J)V");
    }

    static void invalidate(const jlong& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_invalidate();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_put() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "put", "method_21586", "put", "m_90294_"), "(JLjava/lang/String;)V");
    }

    static void put(const jlong& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_put();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_UTIL_UPLOADTOKENCACHE_HPP