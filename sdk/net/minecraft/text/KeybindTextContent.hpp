// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_TEXT_KEYBINDTEXTCONTENT_HPP
#define NET_MINECRAFT_TEXT_KEYBINDTEXTCONTENT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.text.KeybindTextContent
 * Remapped: yd
 */
namespace KeybindTextContent {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("yd", "net/minecraft/network/chat/contents/KeybindContents", "net/minecraft/class_2572", "net/minecraft/text/KeybindTextContent", "net/minecraft/src/C_213516_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.text.KeybindTextContent#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_46619", "CODEC", "f_303682_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.text.KeybindTextContent#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_46619", "CODEC", "f_303682_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.text.KeybindTextContent#TYPE
    [[maybe_unused]] static jobject get_field_TYPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TYPE", "field_46620", "TYPE", "f_302328_"), "Lxa$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.text.KeybindTextContent#TYPE
    [[maybe_unused]] static void set_field_TYPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TYPE", "field_46620", "TYPE", "f_302328_"), "Lxa$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.text.KeybindTextContent#key
    static jobject get_field_key(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "name", "field_11767", "key", "f_237344_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.text.KeybindTextContent#key
    static void set_field_key(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "name", "field_11767", "key", "f_237344_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.text.KeybindTextContent#translated
    static jobject get_field_translated(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "nameResolver", "field_11768", "translated", "f_237345_"), "Ljava/util/function/Supplier;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.text.KeybindTextContent#translated
    static void set_field_translated(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "nameResolver", "field_11768", "translated", "f_237345_"), "Ljava/util/function/Supplier;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getTranslated() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getNestedComponent", "method_27691", "getTranslated", "m_237354_"), "()Lwz;");
    }

    static jobject getTranslated(const jobject& obj) {
                
       const auto methodID = methodID_getTranslated();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_visit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visit", "method_27659", "visit", "m_213874_"), "(Lxe$a;)Ljava/util/Optional;");
    }

    static jobject visit(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_visit();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__visit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visit", "method_27660", "visit", "m_213724_"), "(Lxe$b;Lxw;)Ljava/util/Optional;");
    }

    static jobject _visit(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__visit();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getName", "method_10901", "getKey", "m_237348_"), "()Ljava/lang/String;");
    }

    static jobject getKey(const jobject& obj) {
                
       const auto methodID = methodID_getKey();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "method_54163", "getType", "m_304650_"), "()Lxa$a;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_TEXT_KEYBINDTEXTCONTENT_HPP