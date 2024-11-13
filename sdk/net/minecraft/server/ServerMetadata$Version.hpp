// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_SERVERMETADATA$VERSION_HPP
#define NET_MINECRAFT_SERVER_SERVERMETADATA$VERSION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.ServerMetadata$Version
 * Remapped: ajq$c
 */
namespace ServerMetadata$Version {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ajq$c", "net/minecraft/network/protocol/status/ServerStatus$Version", "net/minecraft/class_2926$class_2930", "net/minecraft/server/ServerMetadata$Version", "net/minecraft/src/C_5216_$C_5220_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.server.ServerMetadata$Version#gameVersion
    static jobject get_field_gameVersion(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "name", "comp_1282", "gameVersion", "f_134962_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.ServerMetadata$Version#gameVersion
    static void set_field_gameVersion(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "name", "comp_1282", "gameVersion", "f_134962_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.ServerMetadata$Version#protocolVersion
    static jint get_field_protocolVersion(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "protocol", "comp_1283", "protocolVersion", "f_134963_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.ServerMetadata$Version#protocolVersion
    static void set_field_protocolVersion(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "protocol", "comp_1283", "protocolVersion", "f_134963_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.server.ServerMetadata$Version#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_42542", "CODEC", "f_271272_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.server.ServerMetadata$Version#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_42542", "CODEC", "f_271272_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "current", "method_49097", "create", "m_272202_"), "()Lajq$c;");
    }

    static jobject create() {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID__gameVersion() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "name", "comp_1282", "gameVersion", "f_134962_"), "()Ljava/lang/String;");
    }

    static jobject _gameVersion(const jobject& obj) {
                
       const auto methodID = methodID__gameVersion();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__protocolVersion() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "protocol", "comp_1283", "protocolVersion", "f_134963_"), "()I");
    }

    static jint _protocolVersion(const jobject& obj) {
                
       const auto methodID = methodID__protocolVersion();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SERVER_SERVERMETADATA$VERSION_HPP