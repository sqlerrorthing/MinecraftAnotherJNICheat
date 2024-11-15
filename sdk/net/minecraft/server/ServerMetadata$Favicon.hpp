// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_SERVERMETADATA$FAVICON_HPP
#define NET_MINECRAFT_SERVER_SERVERMETADATA$FAVICON_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.ServerMetadata$Favicon
 * Remapped: ajq$a
 */
namespace ServerMetadata$Favicon {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ajq$a", "net/minecraft/network/protocol/status/ServerStatus$Favicon", "net/minecraft/class_2926$class_8145", "net/minecraft/server/ServerMetadata$Favicon", "net/minecraft/src/C_5216_$C_271039_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.server.ServerMetadata$Favicon#iconBytes
    static jbyte get_field_iconBytes(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "iconBytes", "comp_1278", "iconBytes", "f_271462_"), "[B");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetByteField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.ServerMetadata$Favicon#iconBytes
    static void set_field_iconBytes(const jobject &obj, const jbyte &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "iconBytes", "comp_1278", "iconBytes", "f_271462_"), "[B");
        return MinecraftSDK::env->SetByteField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.server.ServerMetadata$Favicon#DATA_URI_PREFIX
    [[maybe_unused]] static jobject get_field_DATA_URI_PREFIX() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PREFIX", "field_42539", "DATA_URI_PREFIX", "f_271186_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.ServerMetadata$Favicon#DATA_URI_PREFIX
    [[maybe_unused]] static void set_field_DATA_URI_PREFIX(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PREFIX", "field_42539", "DATA_URI_PREFIX", "f_271186_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.server.ServerMetadata$Favicon#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_42538", "CODEC", "f_271281_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.server.ServerMetadata$Favicon#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_42538", "CODEC", "f_271281_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID__iconBytes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "iconBytes", "comp_1278", "iconBytes", "f_271462_"), "()[B");
    }

    static jbyte _iconBytes(const jobject& obj) {
                
       const auto methodID = methodID__iconBytes();
       return MinecraftSDK::env->CallByteMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SERVER_SERVERMETADATA$FAVICON_HPP