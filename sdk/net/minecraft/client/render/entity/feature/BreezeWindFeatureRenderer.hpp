// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_BREEZEWINDFEATURERENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_BREEZEWINDFEATURERENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.feature.BreezeWindFeatureRenderer
 * Remapped: gnu
 */
namespace BreezeWindFeatureRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gnu", "net/minecraft/client/renderer/entity/layers/BreezeWindLayer", "net/minecraft/class_8989", "net/minecraft/client/render/entity/feature/BreezeWindFeatureRenderer", "net/minecraft/src/C_302064_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.render.entity.feature.BreezeWindFeatureRenderer#TEXTURE
    [[maybe_unused]] static jobject get_field_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TEXTURE_LOCATION", "field_47484", "TEXTURE", "f_315155_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.feature.BreezeWindFeatureRenderer#TEXTURE
    [[maybe_unused]] static void set_field_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TEXTURE_LOCATION", "field_47484", "TEXTURE", "f_315155_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.feature.BreezeWindFeatureRenderer#model
    static jobject get_field_model(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "model", "field_47485", "model", "f_336859_"), "Lfut;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.feature.BreezeWindFeatureRenderer#model
    static void set_field_model(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "model", "field_47485", "model", "f_336859_"), "Lfut;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_55275", "render", "m_6494_"), "(Lfbi;Lgez;ILckz;FFFFFF)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2, const jobject& arg3, const jfloat& arg4, const jfloat& arg5, const jfloat& arg6, const jfloat& arg7, const jfloat& arg8, const jfloat& arg9) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    };
    
    static jmethodID methodID_getXOffset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "xOffset", "method_55273", "getXOffset", "m_306824_"), "(F)F");
    }

    static jfloat getXOffset(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_getXOffset();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_BREEZEWINDFEATURERENDERER_HPP