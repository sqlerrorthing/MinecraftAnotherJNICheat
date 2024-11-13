// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_UTIL_SKINTEXTURES_HPP
#define NET_MINECRAFT_CLIENT_UTIL_SKINTEXTURES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.util.SkinTextures
 * Remapped: grl
 */
namespace SkinTextures {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("grl", "net/minecraft/client/resources/PlayerSkin", "net/minecraft/class_8685", "net/minecraft/client/util/SkinTextures", "net/minecraft/src/C_290287_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.util.SkinTextures#texture
    static jobject get_field_texture(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "texture", "comp_1626", "texture", "f_290339_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.util.SkinTextures#texture
    static void set_field_texture(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "texture", "comp_1626", "texture", "f_290339_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.util.SkinTextures#textureUrl
    static jobject get_field_textureUrl(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "textureUrl", "comp_1911", "textureUrl", "f_290349_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.util.SkinTextures#textureUrl
    static void set_field_textureUrl(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "textureUrl", "comp_1911", "textureUrl", "f_290349_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.util.SkinTextures#capeTexture
    static jobject get_field_capeTexture(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "capeTexture", "comp_1627", "capeTexture", "f_291348_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.util.SkinTextures#capeTexture
    static void set_field_capeTexture(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "capeTexture", "comp_1627", "capeTexture", "f_291348_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.util.SkinTextures#elytraTexture
    static jobject get_field_elytraTexture(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "elytraTexture", "comp_1628", "elytraTexture", "f_290452_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.util.SkinTextures#elytraTexture
    static void set_field_elytraTexture(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "elytraTexture", "comp_1628", "elytraTexture", "f_290452_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.util.SkinTextures#model
    static jobject get_field_model(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "model", "comp_1629", "model", "f_290793_"), "Lgrl$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.util.SkinTextures#model
    static void set_field_model(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "model", "comp_1629", "model", "f_290793_"), "Lgrl$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.util.SkinTextures#secure
    static jboolean get_field_secure(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "secure", "comp_1630", "secure", "f_290871_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.util.SkinTextures#secure
    static void set_field_secure(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "secure", "comp_1630", "secure", "f_290871_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID__texture() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "texture", "comp_1626", "texture", "f_290339_"), "()Lakr;");
    }

    static jobject _texture(const jobject& obj) {
                
       const auto methodID = methodID__texture();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__textureUrl() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "textureUrl", "comp_1911", "textureUrl", "f_290349_"), "()Ljava/lang/String;");
    }

    static jobject _textureUrl(const jobject& obj) {
                
       const auto methodID = methodID__textureUrl();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__capeTexture() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "capeTexture", "comp_1627", "capeTexture", "f_291348_"), "()Lakr;");
    }

    static jobject _capeTexture(const jobject& obj) {
                
       const auto methodID = methodID__capeTexture();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__elytraTexture() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "elytraTexture", "comp_1628", "elytraTexture", "f_290452_"), "()Lakr;");
    }

    static jobject _elytraTexture(const jobject& obj) {
                
       const auto methodID = methodID__elytraTexture();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__model() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "model", "comp_1629", "model", "f_290793_"), "()Lgrl$a;");
    }

    static jobject _model(const jobject& obj) {
                
       const auto methodID = methodID__model();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__secure() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "secure", "comp_1630", "secure", "f_290871_"), "()Z");
    }

    static jboolean _secure(const jobject& obj) {
                
       const auto methodID = methodID__secure();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_UTIL_SKINTEXTURES_HPP