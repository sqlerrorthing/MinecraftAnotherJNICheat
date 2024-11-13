// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_SQUIDENTITYRENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_SQUIDENTITYRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.SquidEntityRenderer
 * Remapped: gmr
 */
namespace SquidEntityRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gmr", "net/minecraft/client/renderer/entity/SquidRenderer", "net/minecraft/class_951", "net/minecraft/client/render/entity/SquidEntityRenderer", "net/minecraft/src/C_4393_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.render.entity.SquidEntityRenderer#TEXTURE
    [[maybe_unused]] static jobject get_field_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SQUID_LOCATION", "field_4791", "TEXTURE", "f_116014_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.SquidEntityRenderer#TEXTURE
    [[maybe_unused]] static void set_field_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SQUID_LOCATION", "field_4791", "TEXTURE", "f_116014_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getTexture() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTextureLocation", "method_4127", "getTexture", "m_5478_"), "(Lcgd;)Lakr;");
    }

    static jobject getTexture(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getTexture();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setupTransforms() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setupRotations", "method_4126", "setupTransforms", "m_7523_"), "(Lcgd;Lfbi;FFFF)V");
    }

    static void setupTransforms(const jobject& obj, const jobject& arg0, const jobject& arg1, const jfloat& arg2, const jfloat& arg3, const jfloat& arg4, const jfloat& arg5) {
                
       const auto methodID = methodID_setupTransforms();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_getAnimationProgress() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBob", "method_4125", "getAnimationProgress", "m_6930_"), "(Lcgd;F)F");
    }

    static jfloat getAnimationProgress(const jobject& obj, const jobject& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_getAnimationProgress();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_SQUIDENTITYRENDERER_HPP