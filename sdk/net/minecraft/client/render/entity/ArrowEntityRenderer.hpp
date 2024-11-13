// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_ARROWENTITYRENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_ARROWENTITYRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.ArrowEntityRenderer
 * Remapped: gmx
 */
namespace ArrowEntityRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gmx", "net/minecraft/client/renderer/entity/TippableArrowRenderer", "net/minecraft/class_954", "net/minecraft/client/render/entity/ArrowEntityRenderer", "net/minecraft/src/C_4399_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.render.entity.ArrowEntityRenderer#TEXTURE
    [[maybe_unused]] static jobject get_field_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NORMAL_ARROW_LOCATION", "field_4795", "TEXTURE", "f_116132_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.entity.ArrowEntityRenderer#TEXTURE
    [[maybe_unused]] static void set_field_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NORMAL_ARROW_LOCATION", "field_4795", "TEXTURE", "f_116132_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.entity.ArrowEntityRenderer#TIPPED_TEXTURE
    [[maybe_unused]] static jobject get_field_TIPPED_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "TIPPED_ARROW_LOCATION", "field_4794", "TIPPED_TEXTURE", "f_116133_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.entity.ArrowEntityRenderer#TIPPED_TEXTURE
    [[maybe_unused]] static void set_field_TIPPED_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "TIPPED_ARROW_LOCATION", "field_4794", "TIPPED_TEXTURE", "f_116133_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getTexture() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTextureLocation", "method_4130", "getTexture", "m_5478_"), "(Lcnf;)Lakr;");
    }

    static jobject getTexture(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getTexture();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_ARROWENTITYRENDERER_HPP