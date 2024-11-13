// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_DTO_REALMSSERVERADDRESS_HPP
#define NET_MINECRAFT_CLIENT_REALMS_DTO_REALMSSERVERADDRESS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.dto.RealmsServerAddress
 * Remapped: fcq
 */
namespace RealmsServerAddress {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fcq", "com/mojang/realmsclient/dto/RealmsServerAddress", "net/minecraft/class_4878", "net/minecraft/client/realms/dto/RealmsServerAddress", "net/minecraft/src/C_3248_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.realms.dto.RealmsServerAddress#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "LOGGER", "field_22621", "LOGGER", "f_87568_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.dto.RealmsServerAddress#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "LOGGER", "field_22621", "LOGGER", "f_87568_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.dto.RealmsServerAddress#address
    static jobject get_field_address(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "address", "field_22618", "address", "f_87565_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServerAddress#address
    static void set_field_address(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "address", "field_22618", "address", "f_87565_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.dto.RealmsServerAddress#resourcePackUrl
    static jobject get_field_resourcePackUrl(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "resourcePackUrl", "field_22619", "resourcePackUrl", "f_87566_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServerAddress#resourcePackUrl
    static void set_field_resourcePackUrl(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "resourcePackUrl", "field_22619", "resourcePackUrl", "f_87566_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.dto.RealmsServerAddress#resourcePackHash
    static jobject get_field_resourcePackHash(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "resourcePackHash", "field_22620", "resourcePackHash", "f_87567_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServerAddress#resourcePackHash
    static void set_field_resourcePackHash(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "resourcePackHash", "field_22620", "resourcePackHash", "f_87567_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_parse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "parse", "method_25071", "parse", "m_87571_"), "(Ljava/lang/String;)Lfcq;");
    }

    static jobject parse(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_parse();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_DTO_REALMSSERVERADDRESS_HPP