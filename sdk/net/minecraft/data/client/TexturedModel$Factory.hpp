// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATA_CLIENT_TEXTUREDMODEL$FACTORY_HPP
#define NET_MINECRAFT_DATA_CLIENT_TEXTUREDMODEL$FACTORY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.data.client.TexturedModel$Factory
 * Remapped: oh$a
 */
namespace TexturedModel$Factory {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("oh$a", "net/minecraft/data/models/model/TexturedModel$Provider", "net/minecraft/class_4946$class_4947", "net/minecraft/data/client/TexturedModel$Factory", "net/minecraft/src/C_4826_$C_4827_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("get", "get", "get", "get", "m_125964_"), "(Ldfy;)Loh;");
    }

    static jobject get(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_upload() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("create", "create", "method_25923", "upload", "m_125956_"), "(Ldfy;Ljava/util/function/BiConsumer;)Lakr;");
    }

    static jobject upload(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_upload();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__upload() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("createWithSuffix", "createWithSuffix", "method_25922", "upload", "m_125952_"), "(Ldfy;Ljava/lang/String;Ljava/util/function/BiConsumer;)Lakr;");
    }

    static jobject _upload(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID__upload();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_andThen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("updateTexture", "updateTexture", "method_35912", "andThen", "m_125959_"), "(Ljava/util/function/Consumer;)Loh$a;");
    }

    static jobject andThen(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_andThen();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATA_CLIENT_TEXTUREDMODEL$FACTORY_HPP