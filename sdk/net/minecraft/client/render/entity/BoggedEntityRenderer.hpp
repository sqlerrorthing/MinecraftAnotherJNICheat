// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_BOGGEDENTITYRENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_BOGGEDENTITYRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.BoggedEntityRenderer
 * Remapped: gjo
 */
namespace BoggedEntityRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gjo", "net/minecraft/client/renderer/entity/BoggedRenderer", "net/minecraft/class_9255", "net/minecraft/client/render/entity/BoggedEntityRenderer", "net/minecraft/src/C_313557_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.render.entity.BoggedEntityRenderer#TEXTURE
    [[maybe_unused]] static jobject get_field_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BOGGED_SKELETON_LOCATION", "field_49163", "TEXTURE", "f_316256_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.BoggedEntityRenderer#TEXTURE
    [[maybe_unused]] static void set_field_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BOGGED_SKELETON_LOCATION", "field_49163", "TEXTURE", "f_316256_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.BoggedEntityRenderer#OVERLAY_TEXTURE
    [[maybe_unused]] static jobject get_field_OVERLAY_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "BOGGED_OUTER_LAYER_LOCATION", "field_49164", "OVERLAY_TEXTURE", "f_316202_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.BoggedEntityRenderer#OVERLAY_TEXTURE
    [[maybe_unused]] static void set_field_OVERLAY_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "BOGGED_OUTER_LAYER_LOCATION", "field_49164", "OVERLAY_TEXTURE", "f_316202_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getTexture() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTextureLocation", "method_57803", "getTexture", "m_5478_"), "(Lcjn;)Lakr;");
    }

    static jobject getTexture(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getTexture();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_BOGGEDENTITYRENDERER_HPP