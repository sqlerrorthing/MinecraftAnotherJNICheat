// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_REGISTRY_TAG_TAGKEY_HPP
#define NET_MINECRAFT_REGISTRY_TAG_TAGKEY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.registry.tag.TagKey
 * Remapped: awu
 */
namespace TagKey {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("awu", "net/minecraft/tags/TagKey", "net/minecraft/class_6862", "net/minecraft/registry/tag/TagKey", "net/minecraft/src/C_203208_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.registry.tag.TagKey#registry
    static jobject get_field_registry(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "registry", "comp_326", "registry", "f_203867_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.registry.tag.TagKey#registry
    static void set_field_registry(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "registry", "comp_326", "registry", "f_203867_"), "Lakq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.registry.tag.TagKey#id
    static jobject get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "location", "comp_327", "id", "f_203868_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.registry.tag.TagKey#id
    static void set_field_id(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "location", "comp_327", "id", "f_203868_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.registry.tag.TagKey#INTERNER
    [[maybe_unused]] static jobject get_field_INTERNER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "VALUES", "field_36394", "INTERNER", "f_203869_"), "Lcom/google/common/collect/Interner;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.registry.tag.TagKey#INTERNER
    [[maybe_unused]] static void set_field_INTERNER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "VALUES", "field_36394", "INTERNER", "f_203869_"), "Lcom/google/common/collect/Interner;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_unprefixedCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_40090", "unprefixedCodec", "m_203877_"), "(Lakq;)Lcom/mojang/serialization/Codec;");
    }

    static jobject unprefixedCodec(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_unprefixedCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_codec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "hashedCodec", "method_40093", "codec", "m_203886_"), "(Lakq;)Lcom/mojang/serialization/Codec;");
    }

    static jobject codec(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_codec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_40092", "of", "m_203882_"), "(Lakq;Lakr;)Lawu;");
    }

    static jobject of(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "isFor", "method_41007", "isOf", "m_207645_"), "(Lakq;)Z");
    }

    static jboolean isOf(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isOf();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_tryCast() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "cast", "method_41008", "tryCast", "m_207647_"), "(Lakq;)Ljava/util/Optional;");
    }

    static jobject tryCast(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_tryCast();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__registry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "registry", "comp_326", "registry", "f_203867_"), "()Lakq;");
    }

    static jobject _registry(const jobject& obj) {
                
       const auto methodID = methodID__registry();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__id() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "location", "comp_327", "id", "f_203868_"), "()Lakr;");
    }

    static jobject _id(const jobject& obj) {
                
       const auto methodID = methodID__id();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_REGISTRY_TAG_TAGKEY_HPP