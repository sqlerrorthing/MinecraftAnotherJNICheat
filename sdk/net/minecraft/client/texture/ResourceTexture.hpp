// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_TEXTURE_RESOURCETEXTURE_HPP
#define NET_MINECRAFT_CLIENT_TEXTURE_RESOURCETEXTURE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.texture.ResourceTexture
 * Remapped: gqe
 */
namespace ResourceTexture {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gqe", "net/minecraft/client/renderer/texture/SimpleTexture", "net/minecraft/class_1049", "net/minecraft/client/texture/ResourceTexture", "net/minecraft/src/C_4476_"));
        }
        return cachedClass;
    };

    // getter for static default field net.minecraft.client.texture.ResourceTexture#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "LOGGER", "field_5225", "LOGGER", "f_118130_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.texture.ResourceTexture#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "LOGGER", "field_5225", "LOGGER", "f_118130_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for protected field net.minecraft.client.texture.ResourceTexture#location
    static jobject get_field_location(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "location", "field_5224", "location", "f_118129_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.client.texture.ResourceTexture#location
    static void set_field_location(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "location", "field_5224", "location", "f_118129_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_load() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "load", "method_4625", "load", "m_6704_"), "(Laue;)V");
    }

    static void load(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_load();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_upload() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "doLoad", "method_22810", "upload", "m_118136_"), "(Lfaj;ZZ)V");
    }

    static void upload(const jobject& obj, const jobject& arg0, const jboolean& arg1, const jboolean& arg2) {
                
       const auto methodID = methodID_upload();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_loadTextureData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getTextureImage", "method_18153", "loadTextureData", "m_6335_"), "(Laue;)Lgqe$a;");
    }

    static jobject loadTextureData(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_loadTextureData();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_TEXTURE_RESOURCETEXTURE_HPP