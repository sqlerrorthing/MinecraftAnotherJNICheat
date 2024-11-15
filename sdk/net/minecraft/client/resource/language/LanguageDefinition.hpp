// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RESOURCE_LANGUAGE_LANGUAGEDEFINITION_HPP
#define NET_MINECRAFT_CLIENT_RESOURCE_LANGUAGE_LANGUAGEDEFINITION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.resource.language.LanguageDefinition
 * Remapped: grs
 */
namespace LanguageDefinition {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("grs", "net/minecraft/client/resources/language/LanguageInfo", "net/minecraft/class_1077", "net/minecraft/client/resource/language/LanguageDefinition", "net/minecraft/src/C_4514_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.resource.language.LanguageDefinition#region
    static jobject get_field_region(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "region", "comp_1198", "region", "f_118944_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.resource.language.LanguageDefinition#region
    static void set_field_region(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "region", "comp_1198", "region", "f_118944_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.resource.language.LanguageDefinition#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "name", "comp_1199", "name", "f_118945_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.resource.language.LanguageDefinition#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "name", "comp_1199", "name", "f_118945_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.resource.language.LanguageDefinition#rightToLeft
    static jboolean get_field_rightToLeft(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "bidirectional", "comp_1200", "rightToLeft", "f_118946_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.resource.language.LanguageDefinition#rightToLeft
    static void set_field_rightToLeft(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "bidirectional", "comp_1200", "rightToLeft", "f_118946_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.client.resource.language.LanguageDefinition#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_41862", "CODEC", "f_263742_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.resource.language.LanguageDefinition#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_41862", "CODEC", "f_263742_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getDisplayText() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "toComponent", "method_48303", "getDisplayText", "m_264517_"), "()Lwz;");
    }

    static jobject getDisplayText(const jobject& obj) {
                
       const auto methodID = methodID_getDisplayText();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__region() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "region", "comp_1198", "region", "f_118944_"), "()Ljava/lang/String;");
    }

    static jobject _region(const jobject& obj) {
                
       const auto methodID = methodID__region();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__name() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "name", "comp_1199", "name", "f_118945_"), "()Ljava/lang/String;");
    }

    static jobject _name(const jobject& obj) {
                
       const auto methodID = methodID__name();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__rightToLeft() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "bidirectional", "comp_1200", "rightToLeft", "f_118946_"), "()Z");
    }

    static jboolean _rightToLeft(const jobject& obj) {
                
       const auto methodID = methodID__rightToLeft();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RESOURCE_LANGUAGE_LANGUAGEDEFINITION_HPP