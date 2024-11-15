// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_REALMSAVAILABILITY$TYPE_HPP
#define NET_MINECRAFT_CLIENT_REALMS_REALMSAVAILABILITY$TYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.RealmsAvailability$Type
 * Remapped: fbs$b
 */
namespace RealmsAvailability$Type {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fbs$b", "com/mojang/realmsclient/RealmsAvailability$Type", "net/minecraft/class_8647$class_8649", "net/minecraft/client/realms/RealmsAvailability$Type", "net/minecraft/src/C_290283_$C_290247_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.realms.RealmsAvailability$Type#SUCCESS
    [[maybe_unused]] static jobject get_field_SUCCESS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SUCCESS", "field_45185", "SUCCESS", "SUCCESS"), "Lfbs$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.RealmsAvailability$Type#SUCCESS
    [[maybe_unused]] static void set_field_SUCCESS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SUCCESS", "field_45185", "SUCCESS", "SUCCESS"), "Lfbs$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.realms.RealmsAvailability$Type#INCOMPATIBLE_CLIENT
    [[maybe_unused]] static jobject get_field_INCOMPATIBLE_CLIENT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "INCOMPATIBLE_CLIENT", "field_45186", "INCOMPATIBLE_CLIENT", "INCOMPATIBLE_CLIENT"), "Lfbs$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.RealmsAvailability$Type#INCOMPATIBLE_CLIENT
    [[maybe_unused]] static void set_field_INCOMPATIBLE_CLIENT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "INCOMPATIBLE_CLIENT", "field_45186", "INCOMPATIBLE_CLIENT", "INCOMPATIBLE_CLIENT"), "Lfbs$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.realms.RealmsAvailability$Type#NEEDS_PARENTAL_CONSENT
    [[maybe_unused]] static jobject get_field_NEEDS_PARENTAL_CONSENT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "NEEDS_PARENTAL_CONSENT", "field_45187", "NEEDS_PARENTAL_CONSENT", "NEEDS_PARENTAL_CONSENT"), "Lfbs$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.RealmsAvailability$Type#NEEDS_PARENTAL_CONSENT
    [[maybe_unused]] static void set_field_NEEDS_PARENTAL_CONSENT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "NEEDS_PARENTAL_CONSENT", "field_45187", "NEEDS_PARENTAL_CONSENT", "NEEDS_PARENTAL_CONSENT"), "Lfbs$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.realms.RealmsAvailability$Type#AUTHENTICATION_ERROR
    [[maybe_unused]] static jobject get_field_AUTHENTICATION_ERROR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "AUTHENTICATION_ERROR", "field_45188", "AUTHENTICATION_ERROR", "AUTHENTICATION_ERROR"), "Lfbs$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.RealmsAvailability$Type#AUTHENTICATION_ERROR
    [[maybe_unused]] static void set_field_AUTHENTICATION_ERROR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "AUTHENTICATION_ERROR", "field_45188", "AUTHENTICATION_ERROR", "AUTHENTICATION_ERROR"), "Lfbs$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.realms.RealmsAvailability$Type#UNEXPECTED_ERROR
    [[maybe_unused]] static jobject get_field_UNEXPECTED_ERROR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "UNEXPECTED_ERROR", "field_45189", "UNEXPECTED_ERROR", "UNEXPECTED_ERROR"), "Lfbs$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.RealmsAvailability$Type#UNEXPECTED_ERROR
    [[maybe_unused]] static void set_field_UNEXPECTED_ERROR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "UNEXPECTED_ERROR", "field_45189", "UNEXPECTED_ERROR", "UNEXPECTED_ERROR"), "Lfbs$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lfbs$b;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lfbs$b;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_REALMSAVAILABILITY$TYPE_HPP