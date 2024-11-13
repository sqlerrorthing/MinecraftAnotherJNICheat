// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_NETWORK_SERVERINFO$RESOURCEPACKPOLICY_HPP
#define NET_MINECRAFT_CLIENT_NETWORK_SERVERINFO$RESOURCEPACKPOLICY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.network.ServerInfo$ResourcePackPolicy
 * Remapped: fzt$a
 */
namespace ServerInfo$ResourcePackPolicy {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fzt$a", "net/minecraft/client/multiplayer/ServerData$ServerPackStatus", "net/minecraft/class_642$class_643", "net/minecraft/client/network/ServerInfo$ResourcePackPolicy", "net/minecraft/src/C_3908_$C_3909_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.network.ServerInfo$ResourcePackPolicy#ENABLED
    [[maybe_unused]] static jobject get_field_ENABLED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ENABLED", "field_3768", "ENABLED", "ENABLED"), "Lfzt$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.network.ServerInfo$ResourcePackPolicy#ENABLED
    [[maybe_unused]] static void set_field_ENABLED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ENABLED", "field_3768", "ENABLED", "ENABLED"), "Lfzt$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.network.ServerInfo$ResourcePackPolicy#DISABLED
    [[maybe_unused]] static jobject get_field_DISABLED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DISABLED", "field_3764", "DISABLED", "DISABLED"), "Lfzt$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.network.ServerInfo$ResourcePackPolicy#DISABLED
    [[maybe_unused]] static void set_field_DISABLED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DISABLED", "field_3764", "DISABLED", "DISABLED"), "Lfzt$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.network.ServerInfo$ResourcePackPolicy#PROMPT
    [[maybe_unused]] static jobject get_field_PROMPT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PROMPT", "field_3767", "PROMPT", "PROMPT"), "Lfzt$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.network.ServerInfo$ResourcePackPolicy#PROMPT
    [[maybe_unused]] static void set_field_PROMPT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PROMPT", "field_3767", "PROMPT", "PROMPT"), "Lfzt$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.network.ServerInfo$ResourcePackPolicy#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "name", "field_3765", "name", "f_105393_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.network.ServerInfo$ResourcePackPolicy#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "name", "field_3765", "name", "f_105393_"), "Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lfzt$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lfzt$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getName", "method_2997", "getName", "m_105400_"), "()Lwz;");
    }

    static jobject getName(const jobject& obj) {
                
       const auto methodID = methodID_getName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_NETWORK_SERVERINFO$RESOURCEPACKPOLICY_HPP