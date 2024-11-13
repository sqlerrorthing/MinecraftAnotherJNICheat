// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RESOURCE_METADATA_LANGUAGERESOURCEMETADATA_HPP
#define NET_MINECRAFT_CLIENT_RESOURCE_METADATA_LANGUAGERESOURCEMETADATA_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.resource.metadata.LanguageResourceMetadata
 * Remapped: gsf
 */
namespace LanguageResourceMetadata {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gsf", "net/minecraft/client/resources/metadata/language/LanguageMetadataSection", "net/minecraft/class_1082", "net/minecraft/client/resource/metadata/LanguageResourceMetadata", "net/minecraft/src/C_4524_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.resource.metadata.LanguageResourceMetadata#definitions
    static jobject get_field_definitions(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "languages", "comp_1201", "definitions", "f_119097_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.resource.metadata.LanguageResourceMetadata#definitions
    static void set_field_definitions(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "languages", "comp_1201", "definitions", "f_119097_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.client.resource.metadata.LanguageResourceMetadata#LANGUAGE_CODE_CODEC
    [[maybe_unused]] static jobject get_field_LANGUAGE_CODE_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LANGUAGE_CODE_CODEC", "field_41863", "LANGUAGE_CODE_CODEC", "f_263769_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.resource.metadata.LanguageResourceMetadata#LANGUAGE_CODE_CODEC
    [[maybe_unused]] static void set_field_LANGUAGE_CODE_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LANGUAGE_CODE_CODEC", "field_41863", "LANGUAGE_CODE_CODEC", "f_263769_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.resource.metadata.LanguageResourceMetadata#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_41864", "CODEC", "f_263762_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.resource.metadata.LanguageResourceMetadata#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_41864", "CODEC", "f_263762_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.resource.metadata.LanguageResourceMetadata#SERIALIZER
    [[maybe_unused]] static jobject get_field_SERIALIZER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "TYPE", "field_41865", "SERIALIZER", "f_263724_"), "Late;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.resource.metadata.LanguageResourceMetadata#SERIALIZER
    [[maybe_unused]] static void set_field_SERIALIZER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "TYPE", "field_41865", "SERIALIZER", "f_263724_"), "Late;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID__definitions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "languages", "comp_1201", "definitions", "f_119097_"), "()Ljava/util/Map;");
    }

    static jobject _definitions(const jobject& obj) {
                
       const auto methodID = methodID__definitions();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RESOURCE_METADATA_LANGUAGERESOURCEMETADATA_HPP