// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_FONT_TEXTHANDLER$1_HPP
#define NET_MINECRAFT_CLIENT_FONT_TEXTHANDLER$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.font.TextHandler$1
 * Remapped: fgz$1
 */
namespace TextHandler$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fgz$1", "net/minecraft/client/StringSplitter$1", "net/minecraft/class_5225$1", "net/minecraft/client/font/TextHandler$1", "net/minecraft/src/C_3410_$C_3411_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.font.TextHandler$1#collector
    static jobject get_field_collector(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "collector", "field_24219", "collector", "f_92438_"), "Lfgd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.TextHandler$1#collector
    static void set_field_collector(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "collector", "field_24219", "collector", "f_92438_"), "Lfgd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_accept() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("accept", "accept", "accept", "accept", "m_7164_"), "(Lxw;Ljava/lang/String;)Ljava/util/Optional;");
    }

    static jobject accept(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_accept();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_FONT_TEXTHANDLER$1_HPP