// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_TEXT_STRINGVISITABLE_HPP
#define NET_MINECRAFT_TEXT_STRINGVISITABLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.text.StringVisitable
 * Remapped: xe
 */
namespace StringVisitable {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("xe", "net/minecraft/network/chat/FormattedText", "net/minecraft/class_5348", "net/minecraft/text/StringVisitable", "net/minecraft/src/C_5000_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.text.StringVisitable#TERMINATE_VISIT
    [[maybe_unused]] static jobject get_field_TERMINATE_VISIT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STOP_ITERATION", "field_25309", "TERMINATE_VISIT", "f_130759_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.text.StringVisitable#TERMINATE_VISIT
    [[maybe_unused]] static void set_field_TERMINATE_VISIT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STOP_ITERATION", "field_25309", "TERMINATE_VISIT", "f_130759_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.text.StringVisitable#EMPTY
    [[maybe_unused]] static jobject get_field_EMPTY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EMPTY", "field_25310", "EMPTY", "f_130760_"), "Lxe;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.text.StringVisitable#EMPTY
    [[maybe_unused]] static void set_field_EMPTY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EMPTY", "field_25310", "EMPTY", "f_130760_"), "Lxe;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_visit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visit", "method_27657", "visit", "m_5651_"), "(Lxe$a;)Ljava/util/Optional;");
    }

    static jobject visit(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_visit();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__visit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visit", "method_27658", "visit", "m_7451_"), "(Lxe$b;Lxw;)Ljava/util/Optional;");
    }

    static jobject _visit(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__visit();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_plain() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("e", "of", "method_29430", "plain", "m_130775_"), "(Ljava/lang/String;)Lxe;");
    }

    static jobject plain(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_plain();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_styled() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "of", "method_29431", "styled", "m_130762_"), "(Ljava/lang/String;Lxw;)Lxe;");
    }

    static jobject styled(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_styled();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_concat() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "composite", "method_29433", "concat", "m_130773_"), "([Lxe;)Lxe;");
    }

    static jobject concat(const jarray& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_concat();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__concat() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "composite", "method_29432", "concat", "m_130768_"), "(Ljava/util/List;)Lxe;");
    }

    static jobject _concat(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__concat();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("getString", "getString", "", "", "getString"), "()Ljava/lang/String;");
    }

    static jobject getString(const jobject& obj) {
                
       const auto methodID = methodID_getString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_TEXT_STRINGVISITABLE_HPP