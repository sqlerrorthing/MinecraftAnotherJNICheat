// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_OPTION_GRAPHICSMODE_HPP
#define NET_MINECRAFT_CLIENT_OPTION_GRAPHICSMODE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.option.GraphicsMode
 * Remapped: fgh
 */
namespace GraphicsMode {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fgh", "net/minecraft/client/GraphicsStatus", "net/minecraft/class_5365", "net/minecraft/client/option/GraphicsMode", "net/minecraft/src/C_3383_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.option.GraphicsMode#FAST
    [[maybe_unused]] static jobject get_field_FAST() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "FAST", "field_25427", "FAST", "FAST"), "Lfgh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.option.GraphicsMode#FAST
    [[maybe_unused]] static void set_field_FAST(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "FAST", "field_25427", "FAST", "FAST"), "Lfgh;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.option.GraphicsMode#FANCY
    [[maybe_unused]] static jobject get_field_FANCY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "FANCY", "field_25428", "FANCY", "FANCY"), "Lfgh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.option.GraphicsMode#FANCY
    [[maybe_unused]] static void set_field_FANCY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "FANCY", "field_25428", "FANCY", "FANCY"), "Lfgh;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.option.GraphicsMode#FABULOUS
    [[maybe_unused]] static jobject get_field_FABULOUS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "FABULOUS", "field_25429", "FABULOUS", "FABULOUS"), "Lfgh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.option.GraphicsMode#FABULOUS
    [[maybe_unused]] static void set_field_FABULOUS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "FABULOUS", "field_25429", "FABULOUS", "FABULOUS"), "Lfgh;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.option.GraphicsMode#BY_ID
    [[maybe_unused]] static jobject get_field_BY_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "BY_ID", "field_25430", "BY_ID", "f_90763_"), "Ljava/util/function/IntFunction;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.option.GraphicsMode#BY_ID
    [[maybe_unused]] static void set_field_BY_ID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "BY_ID", "field_25430", "BY_ID", "f_90763_"), "Ljava/util/function/IntFunction;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.option.GraphicsMode#id
    static jint get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "id", "field_25431", "id", "f_90764_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.option.GraphicsMode#id
    static void set_field_id(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "id", "field_25431", "id", "f_90764_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.option.GraphicsMode#translationKey
    static jobject get_field_translationKey(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "key", "field_25432", "translationKey", "f_90765_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.option.GraphicsMode#translationKey
    static void set_field_translationKey(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "key", "field_25432", "translationKey", "f_90765_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lfgh;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lfgh;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getId", "method_7362", "getId", "m_35965_"), "()I");
    }

    static jint getId(const jobject& obj) {
                
       const auto methodID = methodID_getId();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTranslationKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getKey", "method_7359", "getTranslationKey", "m_35968_"), "()Ljava/lang/String;");
    }

    static jobject getTranslationKey(const jobject& obj) {
                
       const auto methodID = methodID_getTranslationKey();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_byId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "byId", "method_29592", "byId", "m_90774_"), "(I)Lfgh;");
    }

    static jobject byId(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_byId();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_OPTION_GRAPHICSMODE_HPP