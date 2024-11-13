// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_DRAGONFIREBALLENTITYRENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_DRAGONFIREBALLENTITYRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.DragonFireballEntityRenderer
 * Remapped: gka
 */
namespace DragonFireballEntityRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gka", "net/minecraft/client/renderer/entity/DragonFireballRenderer", "net/minecraft/class_891", "net/minecraft/client/render/entity/DragonFireballEntityRenderer", "net/minecraft/src/C_4322_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.render.entity.DragonFireballEntityRenderer#TEXTURE
    [[maybe_unused]] static jobject get_field_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TEXTURE_LOCATION", "field_4661", "TEXTURE", "f_114060_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.DragonFireballEntityRenderer#TEXTURE
    [[maybe_unused]] static void set_field_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TEXTURE_LOCATION", "field_4661", "TEXTURE", "f_114060_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.DragonFireballEntityRenderer#LAYER
    [[maybe_unused]] static jobject get_field_LAYER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "RENDER_TYPE", "field_21735", "LAYER", "f_114061_"), "Lgfh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.DragonFireballEntityRenderer#LAYER
    [[maybe_unused]] static void set_field_LAYER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "RENDER_TYPE", "field_21735", "LAYER", "f_114061_"), "Lgfh;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getBlockLight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBlockLightLevel", "method_24086", "getBlockLight", "m_6086_"), "(Lcng;Ljd;)I");
    }

    static jint getBlockLight(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getBlockLight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_3906", "render", "m_7392_"), "(Lcng;FFLfbi;Lgez;I)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jfloat& arg2, const jobject& arg3, const jobject& arg4, const jint& arg5) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_produceVertex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "vertex", "method_23837", "produceVertex", "m_253219_"), "(Lfbm;Lfbi$a;IFIII)V");
    }

    static void produceVertex(const jobject& arg0, const jobject& arg1, const jint& arg2, const jfloat& arg3, const jint& arg4, const jint& arg5, const jint& arg6) {
       const auto clazz = self();
       const auto methodID = methodID_produceVertex();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID_getTexture() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTextureLocation", "method_3905", "getTexture", "m_5478_"), "(Lcng;)Lakr;");
    }

    static jobject getTexture(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getTexture();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_DRAGONFIREBALLENTITYRENDERER_HPP