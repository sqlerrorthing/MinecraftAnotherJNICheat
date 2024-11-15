// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_REGISTRY_ENTRY_REGISTRYELEMENTCODEC_HPP
#define NET_MINECRAFT_REGISTRY_ENTRY_REGISTRYELEMENTCODEC_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.registry.entry.RegistryElementCodec
 * Remapped: akn
 */
namespace RegistryElementCodec {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("akn", "net/minecraft/resources/RegistryFileCodec", "net/minecraft/class_5381", "net/minecraft/registry/entry/RegistryElementCodec", "net/minecraft/src/C_5255_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.registry.entry.RegistryElementCodec#registryRef
    static jobject get_field_registryRef(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "registryKey", "field_25507", "registryRef", "f_135570_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.registry.entry.RegistryElementCodec#registryRef
    static void set_field_registryRef(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "registryKey", "field_25507", "registryRef", "f_135570_"), "Lakq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.registry.entry.RegistryElementCodec#elementCodec
    static jobject get_field_elementCodec(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "elementCodec", "field_25508", "elementCodec", "f_135571_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.registry.entry.RegistryElementCodec#elementCodec
    static void set_field_elementCodec(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "elementCodec", "field_25508", "elementCodec", "f_135571_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.registry.entry.RegistryElementCodec#allowInlineDefinitions
    static jboolean get_field_allowInlineDefinitions(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "allowInline", "field_26758", "allowInlineDefinitions", "f_135572_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.registry.entry.RegistryElementCodec#allowInlineDefinitions
    static void set_field_allowInlineDefinitions(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "allowInline", "field_26758", "allowInlineDefinitions", "f_135572_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_29749", "of", "m_135589_"), "(Lakq;Lcom/mojang/serialization/Codec;)Lakn;");
    }

    static jobject of(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_31192", "of", "m_135592_"), "(Lakq;Lcom/mojang/serialization/Codec;Z)Lakn;");
    }

    static jobject _of(const jobject& arg0, const jobject& arg1, const jboolean& arg2) {
       const auto clazz = self();
       const auto methodID = methodID__of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_encode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "encode", "method_29748", "encode", "encode"), "(Ljm;Lcom/mojang/serialization/DynamicOps;Ljava/lang/Object;)Lcom/mojang/serialization/DataResult;");
    }

    static jobject encode(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_encode();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_decode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("decode", "decode", "decode", "decode", "decode"), "(Lcom/mojang/serialization/DynamicOps;Ljava/lang/Object;)Lcom/mojang/serialization/DataResult;");
    }

    static jobject decode(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_decode();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_REGISTRY_ENTRY_REGISTRYELEMENTCODEC_HPP