// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_WITHERSKULLENTITYRENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_WITHERSKULLENTITYRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.WitherSkullEntityRenderer
 * Remapped: gnm
 */
namespace WitherSkullEntityRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gnm", "net/minecraft/client/renderer/entity/WitherSkullRenderer", "net/minecraft/class_966", "net/minecraft/client/render/entity/WitherSkullEntityRenderer", "net/minecraft/src/C_4413_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.render.entity.WitherSkullEntityRenderer#INVULNERABLE_TEXTURE
    [[maybe_unused]] static jobject get_field_INVULNERABLE_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "WITHER_INVULNERABLE_LOCATION", "field_4817", "INVULNERABLE_TEXTURE", "f_116463_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.WitherSkullEntityRenderer#INVULNERABLE_TEXTURE
    [[maybe_unused]] static void set_field_INVULNERABLE_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "WITHER_INVULNERABLE_LOCATION", "field_4817", "INVULNERABLE_TEXTURE", "f_116463_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.WitherSkullEntityRenderer#TEXTURE
    [[maybe_unused]] static jobject get_field_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "WITHER_LOCATION", "field_4815", "TEXTURE", "f_116464_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.WitherSkullEntityRenderer#TEXTURE
    [[maybe_unused]] static void set_field_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "WITHER_LOCATION", "field_4815", "TEXTURE", "f_116464_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.WitherSkullEntityRenderer#model
    static jobject get_field_model(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "model", "field_4816", "model", "f_116465_"), "Lfxg;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.WitherSkullEntityRenderer#model
    static void set_field_model(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "model", "field_4816", "model", "f_116465_"), "Lfxg;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getTexturedModelData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createSkullLayer", "method_32199", "getTexturedModelData", "m_174450_"), "()Lfyq;");
    }

    static jobject getTexturedModelData() {
       const auto clazz = self();
       const auto methodID = methodID_getTexturedModelData();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_getBlockLight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBlockLightLevel", "method_24094", "getBlockLight", "m_6086_"), "(Lcod;Ljd;)I");
    }

    static jint getBlockLight(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getBlockLight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_4159", "render", "m_7392_"), "(Lcod;FFLfbi;Lgez;I)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jfloat& arg2, const jobject& arg3, const jobject& arg4, const jint& arg5) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_getTexture() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTextureLocation", "method_4160", "getTexture", "m_5478_"), "(Lcod;)Lakr;");
    }

    static jobject getTexture(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getTexture();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_WITHERSKULLENTITYRENDERER_HPP