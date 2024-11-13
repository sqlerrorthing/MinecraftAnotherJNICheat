// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_DTO_REALMSNEWS_HPP
#define NET_MINECRAFT_CLIENT_REALMS_DTO_REALMSNEWS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.dto.RealmsNews
 * Remapped: fcn
 */
namespace RealmsNews {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fcn", "com/mojang/realmsclient/dto/RealmsNews", "net/minecraft/class_4876", "net/minecraft/client/realms/dto/RealmsNews", "net/minecraft/src/C_3243_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.realms.dto.RealmsNews#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_22598", "LOGGER", "f_87468_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.dto.RealmsNews#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_22598", "LOGGER", "f_87468_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.dto.RealmsNews#newsLink
    static jobject get_field_newsLink(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "newsLink", "field_22597", "newsLink", "f_87467_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsNews#newsLink
    static void set_field_newsLink(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "newsLink", "field_22597", "newsLink", "f_87467_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_parse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "parse", "method_25052", "parse", "m_87471_"), "(Ljava/lang/String;)Lfcn;");
    }

    static jobject parse(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_parse();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_DTO_REALMSNEWS_HPP