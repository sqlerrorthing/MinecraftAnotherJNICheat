// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_MESSAGE_LASTSEENMESSAGELIST_HPP
#define NET_MINECRAFT_NETWORK_MESSAGE_LASTSEENMESSAGELIST_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.message.LastSeenMessageList
 * Remapped: xg
 */
namespace LastSeenMessageList {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("xg", "net/minecraft/network/chat/LastSeenMessages", "net/minecraft/class_7635", "net/minecraft/network/message/LastSeenMessageList", "net/minecraft/src/C_241590_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.network.message.LastSeenMessageList#entries
    static jobject get_field_entries(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "entries", "comp_965", "entries", "f_241630_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.message.LastSeenMessageList#entries
    static void set_field_entries(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "entries", "comp_965", "entries", "f_241630_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.network.message.LastSeenMessageList#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_40843", "CODEC", "f_252509_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.message.LastSeenMessageList#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_40843", "CODEC", "f_252509_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.message.LastSeenMessageList#EMPTY
    [[maybe_unused]] static jobject get_field_EMPTY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EMPTY", "field_39883", "EMPTY", "f_241634_"), "Lxg;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.message.LastSeenMessageList#EMPTY
    [[maybe_unused]] static void set_field_EMPTY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EMPTY", "field_39883", "EMPTY", "f_241634_"), "Lxg;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.message.LastSeenMessageList#MAX_ENTRIES
    [[maybe_unused]] static jint get_field_MAX_ENTRIES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LAST_SEEN_MESSAGES_MAX_LENGTH", "field_39884", "MAX_ENTRIES", "f_241617_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.message.LastSeenMessageList#MAX_ENTRIES
    [[maybe_unused]] static void set_field_MAX_ENTRIES(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LAST_SEEN_MESSAGES_MAX_LENGTH", "field_39884", "MAX_ENTRIES", "f_241617_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_updateSignatures() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateSignature", "method_46257", "updateSignatures", "m_245933_"), "(Laza$a;)V");
    }

    static void updateSignatures(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_updateSignatures();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_pack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "pack", "method_46258", "pack", "m_247067_"), "(Lxm;)Lxg$a;");
    }

    static jobject pack(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_pack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__entries() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "entries", "comp_965", "entries", "f_241630_"), "()Ljava/util/List;");
    }

    static jobject _entries(const jobject& obj) {
                
       const auto methodID = methodID__entries();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_MESSAGE_LASTSEENMESSAGELIST_HPP