// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_STRIDERENTITYRENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_STRIDERENTITYRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.StriderEntityRenderer
 * Remapped: gmt
 */
namespace StriderEntityRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gmt", "net/minecraft/client/renderer/entity/StriderRenderer", "net/minecraft/class_4999", "net/minecraft/client/render/entity/StriderEntityRenderer", "net/minecraft/src/C_4395_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.render.entity.StriderEntityRenderer#TEXTURE
    [[maybe_unused]] static jobject get_field_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STRIDER_LOCATION", "field_23372", "TEXTURE", "f_116050_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.StriderEntityRenderer#TEXTURE
    [[maybe_unused]] static void set_field_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STRIDER_LOCATION", "field_23372", "TEXTURE", "f_116050_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.StriderEntityRenderer#COLD_TEXTURE
    [[maybe_unused]] static jobject get_field_COLD_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "COLD_LOCATION", "field_23937", "COLD_TEXTURE", "f_116051_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.StriderEntityRenderer#COLD_TEXTURE
    [[maybe_unused]] static void set_field_COLD_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "COLD_LOCATION", "field_23937", "COLD_TEXTURE", "f_116051_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.StriderEntityRenderer#BABY_SHADOW_RADIUS_SCALE
    [[maybe_unused]] static jfloat get_field_BABY_SHADOW_RADIUS_SCALE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "SHADOW_RADIUS", "field_47888", "BABY_SHADOW_RADIUS_SCALE", "f_314675_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.StriderEntityRenderer#BABY_SHADOW_RADIUS_SCALE
    [[maybe_unused]] static void set_field_BABY_SHADOW_RADIUS_SCALE(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "SHADOW_RADIUS", "field_47888", "BABY_SHADOW_RADIUS_SCALE", "f_314675_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    static jmethodID methodID_getTexture() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTextureLocation", "method_26421", "getTexture", "m_5478_"), "(Lckq;)Lakr;");
    }

    static jobject getTexture(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getTexture();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getShadowRadius() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getShadowRadius", "method_55834", "getShadowRadius", "m_318622_"), "(Lckq;)F");
    }

    static jfloat getShadowRadius(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getShadowRadius();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_scale() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "scale", "method_56155", "scale", "m_7546_"), "(Lckq;Lfbi;F)V");
    }

    static void scale(const jobject& obj, const jobject& arg0, const jobject& arg1, const jfloat& arg2) {
                
       const auto methodID = methodID_scale();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_isShaking() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "isShaking", "method_26423", "isShaking", "m_5936_"), "(Lckq;)Z");
    }

    static jboolean isShaking(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isShaking();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_STRIDERENTITYRENDERER_HPP