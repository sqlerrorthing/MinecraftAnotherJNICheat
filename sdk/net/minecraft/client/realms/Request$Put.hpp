// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_REQUEST$PUT_HPP
#define NET_MINECRAFT_CLIENT_REALMS_REQUEST$PUT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.Request$Put
 * Remapped: fcb$d
 */
namespace Request$Put {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fcb$d", "com/mojang/realmsclient/client/Request$Put", "net/minecraft/class_4346$class_4350", "net/minecraft/client/realms/Request$Put", "net/minecraft/src/C_3228_$C_3232_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.realms.Request$Put#content
    static jobject get_field_content(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "content", "field_19600", "content", "f_87378_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.Request$Put#content
    static void set_field_content(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "content", "field_19600", "content", "f_87378_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_doConnect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "doConnect", "method_21060", "doConnect", "m_7218_"), "()Lfcb$d;");
    }

    static jobject doConnect(const jobject& obj) {
                
       const auto methodID = methodID_doConnect();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_REQUEST$PUT_HPP