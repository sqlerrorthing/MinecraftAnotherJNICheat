// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_SCHEMA_IDENTIFIERNORMALIZINGSCHEMA_HPP
#define NET_MINECRAFT_DATAFIXER_SCHEMA_IDENTIFIERNORMALIZINGSCHEMA_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.schema.IdentifierNormalizingSchema
 * Remapped: bid
 */
namespace IdentifierNormalizingSchema {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bid", "net/minecraft/util/datafix/schemas/NamespacedSchema", "net/minecraft/class_1220", "net/minecraft/datafixer/schema/IdentifierNormalizingSchema", "net/minecraft/src/C_369_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.datafixer.schema.IdentifierNormalizingSchema#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NAMESPACED_STRING_CODEC", "field_24652", "CODEC", "f_17304_"), "Lcom/mojang/serialization/codecs/PrimitiveCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.datafixer.schema.IdentifierNormalizingSchema#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NAMESPACED_STRING_CODEC", "field_24652", "CODEC", "f_17304_"), "Lcom/mojang/serialization/codecs/PrimitiveCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.schema.IdentifierNormalizingSchema#IDENTIFIER_TYPE
    [[maybe_unused]] static jobject get_field_IDENTIFIER_TYPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NAMESPACED_STRING", "field_24653", "IDENTIFIER_TYPE", "f_17305_"), "Lcom/mojang/datafixers/types/Type;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.schema.IdentifierNormalizingSchema#IDENTIFIER_TYPE
    [[maybe_unused]] static void set_field_IDENTIFIER_TYPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NAMESPACED_STRING", "field_24653", "IDENTIFIER_TYPE", "f_17305_"), "Lcom/mojang/datafixers/types/Type;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_normalize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "ensureNamespaced", "method_5193", "normalize", "m_17311_"), "(Ljava/lang/String;)Ljava/lang/String;");
    }

    static jobject normalize(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_normalize();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getIdentifierType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "namespacedString", "method_28295", "getIdentifierType", "m_17310_"), "()Lcom/mojang/datafixers/types/Type;");
    }

    static jobject getIdentifierType() {
       const auto clazz = self();
       const auto methodID = methodID_getIdentifierType();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_getChoiceType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("getChoiceType", "getChoiceType", "getChoiceType", "getChoiceType", "getChoiceType"), "(Lcom/mojang/datafixers/DSL$TypeReference;Ljava/lang/String;)Lcom/mojang/datafixers/types/Type;");
    }

    static jobject getChoiceType(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getChoiceType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_SCHEMA_IDENTIFIERNORMALIZINGSCHEMA_HPP