// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_OPTION_GAMEOPTIONS$VISITOR_HPP
#define NET_MINECRAFT_CLIENT_OPTION_GAMEOPTIONS$VISITOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.option.GameOptions$Visitor
 * Remapped: fgs$a
 */
namespace GameOptions$Visitor {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fgs$a", "net/minecraft/client/Options$FieldAccess", "net/minecraft/class_315$class_5823", "net/minecraft/client/option/GameOptions$Visitor", "net/minecraft/src/C_3401_$C_141581_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_visitInt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "process", "method_33680", "visitInt", "m_142708_"), "(Ljava/lang/String;I)I");
    }

    static jint visitInt(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_visitInt();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_visitBoolean() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "process", "method_33684", "visitBoolean", "m_142682_"), "(Ljava/lang/String;Z)Z");
    }

    static jboolean visitBoolean(const jobject& obj, const jobject& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_visitBoolean();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_visitString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "process", "method_33683", "visitString", "m_141943_"), "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    }

    static jobject visitString(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_visitString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_visitFloat() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "process", "method_33679", "visitFloat", "m_142432_"), "(Ljava/lang/String;F)F");
    }

    static jfloat visitFloat(const jobject& obj, const jobject& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_visitFloat();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_visitObject() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "process", "method_33681", "visitObject", "m_142634_"), "(Ljava/lang/String;Ljava/lang/Object;Ljava/util/function/Function;Ljava/util/function/Function;)Ljava/lang/Object;");
    }

    static jobject visitObject(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_visitObject();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_OPTION_GAMEOPTIONS$VISITOR_HPP