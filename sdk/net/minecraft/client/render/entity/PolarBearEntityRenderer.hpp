// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_POLARBEARENTITYRENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_POLARBEARENTITYRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.PolarBearEntityRenderer
 * Remapped: gmb
 */
namespace PolarBearEntityRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gmb", "net/minecraft/client/renderer/entity/PolarBearRenderer", "net/minecraft/class_937", "net/minecraft/client/render/entity/PolarBearEntityRenderer", "net/minecraft/src/C_4378_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.render.entity.PolarBearEntityRenderer#TEXTURE
    [[maybe_unused]] static jobject get_field_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BEAR_LOCATION", "field_4766", "TEXTURE", "f_115721_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.PolarBearEntityRenderer#TEXTURE
    [[maybe_unused]] static void set_field_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BEAR_LOCATION", "field_4766", "TEXTURE", "f_115721_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getTexture() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTextureLocation", "method_4097", "getTexture", "m_5478_"), "(Lcfw;)Lakr;");
    }

    static jobject getTexture(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getTexture();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_scale() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "scale", "method_4099", "scale", "m_7546_"), "(Lcfw;Lfbi;F)V");
    }

    static void scale(const jobject& obj, const jobject& arg0, const jobject& arg1, const jfloat& arg2) {
                
       const auto methodID = methodID_scale();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_POLARBEARENTITYRENDERER_HPP