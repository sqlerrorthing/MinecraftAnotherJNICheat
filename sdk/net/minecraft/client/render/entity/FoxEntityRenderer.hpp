// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_FOXENTITYRENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_FOXENTITYRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.FoxEntityRenderer
 * Remapped: gkr
 */
namespace FoxEntityRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gkr", "net/minecraft/client/renderer/entity/FoxRenderer", "net/minecraft/class_4042", "net/minecraft/client/render/entity/FoxEntityRenderer", "net/minecraft/src/C_4340_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.render.entity.FoxEntityRenderer#TEXTURE
    [[maybe_unused]] static jobject get_field_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RED_FOX_TEXTURE", "field_18026", "TEXTURE", "f_114720_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.FoxEntityRenderer#TEXTURE
    [[maybe_unused]] static void set_field_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RED_FOX_TEXTURE", "field_18026", "TEXTURE", "f_114720_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.FoxEntityRenderer#SLEEPING_TEXTURE
    [[maybe_unused]] static jobject get_field_SLEEPING_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "RED_FOX_SLEEP_TEXTURE", "field_18027", "SLEEPING_TEXTURE", "f_114721_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.FoxEntityRenderer#SLEEPING_TEXTURE
    [[maybe_unused]] static void set_field_SLEEPING_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "RED_FOX_SLEEP_TEXTURE", "field_18027", "SLEEPING_TEXTURE", "f_114721_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.FoxEntityRenderer#SNOW_TEXTURE
    [[maybe_unused]] static jobject get_field_SNOW_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "SNOW_FOX_TEXTURE", "field_18028", "SNOW_TEXTURE", "f_114722_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.FoxEntityRenderer#SNOW_TEXTURE
    [[maybe_unused]] static void set_field_SNOW_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "SNOW_FOX_TEXTURE", "field_18028", "SNOW_TEXTURE", "f_114722_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.FoxEntityRenderer#SLEEPING_SNOW_TEXTURE
    [[maybe_unused]] static jobject get_field_SLEEPING_SNOW_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "SNOW_FOX_SLEEP_TEXTURE", "field_18029", "SLEEPING_SNOW_TEXTURE", "f_114723_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.FoxEntityRenderer#SLEEPING_SNOW_TEXTURE
    [[maybe_unused]] static void set_field_SLEEPING_SNOW_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "SNOW_FOX_SLEEP_TEXTURE", "field_18029", "SLEEPING_SNOW_TEXTURE", "f_114723_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_setupTransforms() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setupRotations", "method_18334", "setupTransforms", "m_7523_"), "(Lcfo;Lfbi;FFFF)V");
    }

    static void setupTransforms(const jobject& obj, const jobject& arg0, const jobject& arg1, const jfloat& arg2, const jfloat& arg3, const jfloat& arg4, const jfloat& arg5) {
                
       const auto methodID = methodID_setupTransforms();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_getTexture() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTextureLocation", "method_18333", "getTexture", "m_5478_"), "(Lcfo;)Lakr;");
    }

    static jobject getTexture(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getTexture();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_FOXENTITYRENDERER_HPP