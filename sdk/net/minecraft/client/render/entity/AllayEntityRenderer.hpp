// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_ALLAYENTITYRENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_ALLAYENTITYRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.AllayEntityRenderer
 * Remapped: gjf
 */
namespace AllayEntityRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gjf", "net/minecraft/client/renderer/entity/AllayRenderer", "net/minecraft/class_7310", "net/minecraft/client/render/entity/AllayEntityRenderer", "net/minecraft/src/C_213426_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.render.entity.AllayEntityRenderer#TEXTURE
    [[maybe_unused]] static jobject get_field_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ALLAY_TEXTURE", "field_38461", "TEXTURE", "f_234548_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.AllayEntityRenderer#TEXTURE
    [[maybe_unused]] static void set_field_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ALLAY_TEXTURE", "field_38461", "TEXTURE", "f_234548_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getTexture() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTextureLocation", "method_42744", "getTexture", "m_5478_"), "(Lcgk;)Lakr;");
    }

    static jobject getTexture(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getTexture();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getBlockLight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBlockLightLevel", "method_42745", "getBlockLight", "m_6086_"), "(Lcgk;Ljd;)I");
    }

    static jint getBlockLight(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getBlockLight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_ALLAYENTITYRENDERER_HPP