// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RESOURCE_ABSTRACTFILERESOURCEPACK_HPP
#define NET_MINECRAFT_RESOURCE_ABSTRACTFILERESOURCEPACK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.resource.AbstractFileResourcePack
 * Remapped: ash
 */
namespace AbstractFileResourcePack {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ash", "net/minecraft/server/packs/AbstractPackResources", "net/minecraft/class_3255", "net/minecraft/resource/AbstractFileResourcePack", "net/minecraft/src/C_47_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.resource.AbstractFileResourcePack#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LOGGER", "field_14182", "LOGGER", "f_10204_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.resource.AbstractFileResourcePack#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LOGGER", "field_14182", "LOGGER", "f_10204_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.resource.AbstractFileResourcePack#info
    static jobject get_field_info(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "location", "field_49031", "info", "f_315234_"), "Lasp;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.resource.AbstractFileResourcePack#info
    static void set_field_info(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "location", "field_49031", "info", "f_315234_"), "Lasp;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_parseMetadata() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getMetadataSection", "method_14407", "parseMetadata", "m_5550_"), "(Latd;)Ljava/lang/Object;");
    }

    static jobject parseMetadata(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_parseMetadata();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__parseMetadata() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getMetadataFromStream", "method_14392", "parseMetadata", "m_10214_"), "(Latd;Ljava/io/InputStream;)Ljava/lang/Object;");
    }

    static jobject _parseMetadata(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__parseMetadata();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getInfo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "location", "method_56926", "getInfo", "m_318586_"), "()Lasp;");
    }

    static jobject getInfo(const jobject& obj) {
                
       const auto methodID = methodID_getInfo();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_RESOURCE_ABSTRACTFILERESOURCEPACK_HPP