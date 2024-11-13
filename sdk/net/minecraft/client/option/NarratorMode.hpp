// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_OPTION_NARRATORMODE_HPP
#define NET_MINECRAFT_CLIENT_OPTION_NARRATORMODE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.option.NarratorMode
 * Remapped: fgq
 */
namespace NarratorMode {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fgq", "net/minecraft/client/NarratorStatus", "net/minecraft/class_4065", "net/minecraft/client/option/NarratorMode", "net/minecraft/src/C_3398_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.option.NarratorMode#OFF
    [[maybe_unused]] static jobject get_field_OFF() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "OFF", "field_18176", "OFF", "OFF"), "Lfgq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.option.NarratorMode#OFF
    [[maybe_unused]] static void set_field_OFF(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "OFF", "field_18176", "OFF", "OFF"), "Lfgq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.option.NarratorMode#ALL
    [[maybe_unused]] static jobject get_field_ALL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ALL", "field_18177", "ALL", "ALL"), "Lfgq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.option.NarratorMode#ALL
    [[maybe_unused]] static void set_field_ALL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ALL", "field_18177", "ALL", "ALL"), "Lfgq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.option.NarratorMode#CHAT
    [[maybe_unused]] static jobject get_field_CHAT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CHAT", "field_18178", "CHAT", "CHAT"), "Lfgq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.option.NarratorMode#CHAT
    [[maybe_unused]] static void set_field_CHAT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CHAT", "field_18178", "CHAT", "CHAT"), "Lfgq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.option.NarratorMode#SYSTEM
    [[maybe_unused]] static jobject get_field_SYSTEM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SYSTEM", "field_18179", "SYSTEM", "SYSTEM"), "Lfgq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.option.NarratorMode#SYSTEM
    [[maybe_unused]] static void set_field_SYSTEM(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SYSTEM", "field_18179", "SYSTEM", "SYSTEM"), "Lfgq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.option.NarratorMode#BY_ID
    [[maybe_unused]] static jobject get_field_BY_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "BY_ID", "field_18180", "BY_ID", "f_91608_"), "Ljava/util/function/IntFunction;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.option.NarratorMode#BY_ID
    [[maybe_unused]] static void set_field_BY_ID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "BY_ID", "field_18180", "BY_ID", "f_91608_"), "Ljava/util/function/IntFunction;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.option.NarratorMode#id
    static jint get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "id", "field_18181", "id", "f_91609_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.option.NarratorMode#id
    static void set_field_id(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "id", "field_18181", "id", "f_91609_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.option.NarratorMode#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "name", "field_24212", "name", "f_91610_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.option.NarratorMode#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "name", "field_24212", "name", "f_91610_"), "Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lfgq;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lfgq;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getId", "method_18509", "getId", "m_91618_"), "()I");
    }

    static jint getId(const jobject& obj) {
                
       const auto methodID = methodID_getId();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getName", "method_18511", "getName", "m_91621_"), "()Lwz;");
    }

    static jobject getName(const jobject& obj) {
                
       const auto methodID = methodID_getName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_byId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "byId", "method_18510", "byId", "m_91619_"), "(I)Lfgq;");
    }

    static jobject byId(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_byId();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_shouldNarrateChat() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "shouldNarrateChat", "method_44715", "shouldNarrateChat", "m_240504_"), "()Z");
    }

    static jboolean shouldNarrateChat(const jobject& obj) {
                
       const auto methodID = methodID_shouldNarrateChat();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldNarrateSystem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "shouldNarrateSystem", "method_44716", "shouldNarrateSystem", "m_240472_"), "()Z");
    }

    static jboolean shouldNarrateSystem(const jobject& obj) {
                
       const auto methodID = methodID_shouldNarrateSystem();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_OPTION_NARRATORMODE_HPP