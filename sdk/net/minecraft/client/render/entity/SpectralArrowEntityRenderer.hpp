// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_SPECTRALARROWENTITYRENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_SPECTRALARROWENTITYRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.SpectralArrowEntityRenderer
 * Remapped: gmp
 */
namespace SpectralArrowEntityRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gmp", "net/minecraft/client/renderer/entity/SpectralArrowRenderer", "net/minecraft/class_947", "net/minecraft/client/render/entity/SpectralArrowEntityRenderer", "net/minecraft/src/C_4391_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.render.entity.SpectralArrowEntityRenderer#TEXTURE
    [[maybe_unused]] static jobject get_field_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SPECTRAL_ARROW_LOCATION", "field_4787", "TEXTURE", "f_115994_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.entity.SpectralArrowEntityRenderer#TEXTURE
    [[maybe_unused]] static void set_field_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SPECTRAL_ARROW_LOCATION", "field_4787", "TEXTURE", "f_115994_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getTexture() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTextureLocation", "method_4120", "getTexture", "m_5478_"), "(Lcnv;)Lakr;");
    }

    static jobject getTexture(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getTexture();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_SPECTRALARROWENTITYRENDERER_HPP