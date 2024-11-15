// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_MOOSHROOMENTITYRENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_MOOSHROOMENTITYRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.MooshroomEntityRenderer
 * Remapped: glq
 */
namespace MooshroomEntityRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("glq", "net/minecraft/client/renderer/entity/MushroomCowRenderer", "net/minecraft/class_926", "net/minecraft/client/render/entity/MooshroomEntityRenderer", "net/minecraft/src/C_4364_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.render.entity.MooshroomEntityRenderer#TEXTURES
    [[maybe_unused]] static jobject get_field_TEXTURES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TEXTURES", "field_4748", "TEXTURES", "f_115507_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.MooshroomEntityRenderer#TEXTURES
    [[maybe_unused]] static void set_field_TEXTURES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TEXTURES", "field_4748", "TEXTURES", "f_115507_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getTexture() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTextureLocation", "method_4066", "getTexture", "m_5478_"), "(Lcfr;)Lakr;");
    }

    static jobject getTexture(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getTexture();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_MOOSHROOMENTITYRENDERER_HPP