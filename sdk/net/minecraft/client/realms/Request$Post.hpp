// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_REQUEST$POST_HPP
#define NET_MINECRAFT_CLIENT_REALMS_REQUEST$POST_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.Request$Post
 * Remapped: fcb$c
 */
namespace Request$Post {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fcb$c", "com/mojang/realmsclient/client/Request$Post", "net/minecraft/class_4346$class_4349", "net/minecraft/client/realms/Request$Post", "net/minecraft/src/C_3228_$C_3231_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.realms.Request$Post#content
    static jobject get_field_content(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "content", "field_19599", "content", "f_87370_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.Request$Post#content
    static void set_field_content(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "content", "field_19599", "content", "f_87370_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_doConnect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "doConnect", "method_21059", "doConnect", "m_7218_"), "()Lfcb$c;");
    }

    static jobject doConnect(const jobject& obj) {
                
       const auto methodID = methodID_doConnect();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_REQUEST$POST_HPP