// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_PIGLINENTITYRENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_PIGLINENTITYRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.PiglinEntityRenderer
 * Remapped: glz
 */
namespace PiglinEntityRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("glz", "net/minecraft/client/renderer/entity/PiglinRenderer", "net/minecraft/class_4842", "net/minecraft/client/render/entity/PiglinEntityRenderer", "net/minecraft/src/C_4376_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.render.entity.PiglinEntityRenderer#TEXTURES
    [[maybe_unused]] static jobject get_field_TEXTURES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TEXTURES", "field_25793", "TEXTURES", "f_174341_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.PiglinEntityRenderer#TEXTURES
    [[maybe_unused]] static void set_field_TEXTURES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TEXTURES", "field_25793", "TEXTURES", "f_174341_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.PiglinEntityRenderer#HORIZONTAL_SCALE
    [[maybe_unused]] static jfloat get_field_HORIZONTAL_SCALE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "PIGLIN_CUSTOM_HEAD_SCALE", "field_32942", "HORIZONTAL_SCALE", "f_174342_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.PiglinEntityRenderer#HORIZONTAL_SCALE
    [[maybe_unused]] static void set_field_HORIZONTAL_SCALE(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "PIGLIN_CUSTOM_HEAD_SCALE", "field_32942", "HORIZONTAL_SCALE", "f_174342_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    static jmethodID methodID_getPiglinModel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createModel", "method_24875", "getPiglinModel", "m_174349_"), "(Lfyg;Lfyi;Z)Lfwo;");
    }

    static jobject getPiglinModel(const jobject& arg0, const jobject& arg1, const jboolean& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_getPiglinModel();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getTexture() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getTextureLocation", "method_3982", "getTexture", "m_5478_"), "(Lbtp;)Lakr;");
    }

    static jobject getTexture(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getTexture();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isShaking() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "isShaking", "method_25451", "isShaking", "m_5936_"), "(Lbtp;)Z");
    }

    static jboolean isShaking(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isShaking();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_PIGLINENTITYRENDERER_HPP