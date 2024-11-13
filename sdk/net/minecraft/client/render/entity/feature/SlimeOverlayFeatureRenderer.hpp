// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_SLIMEOVERLAYFEATURERENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_SLIMEOVERLAYFEATURERENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.feature.SlimeOverlayFeatureRenderer
 * Remapped: gpa
 */
namespace SlimeOverlayFeatureRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gpa", "net/minecraft/client/renderer/entity/layers/SlimeOuterLayer", "net/minecraft/class_997", "net/minecraft/client/render/entity/feature/SlimeOverlayFeatureRenderer", "net/minecraft/src/C_4451_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.render.entity.feature.SlimeOverlayFeatureRenderer#model
    static jobject get_field_model(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "model", "field_4895", "model", "f_117455_"), "Lfvk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.feature.SlimeOverlayFeatureRenderer#model
    static void set_field_model(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "model", "field_4895", "model", "f_117455_"), "Lfvk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_23200", "render", "m_6494_"), "(Lfbi;Lgez;ILbtn;FFFFFF)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2, const jobject& arg3, const jfloat& arg4, const jfloat& arg5, const jfloat& arg6, const jfloat& arg7, const jfloat& arg8, const jfloat& arg9) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_SLIMEOVERLAYFEATURERENDERER_HPP