// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_SNOWGOLEMPUMPKINFEATURERENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_SNOWGOLEMPUMPKINFEATURERENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.feature.SnowGolemPumpkinFeatureRenderer
 * Remapped: gpb
 */
namespace SnowGolemPumpkinFeatureRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gpb", "net/minecraft/client/renderer/entity/layers/SnowGolemHeadLayer", "net/minecraft/class_996", "net/minecraft/client/render/entity/feature/SnowGolemPumpkinFeatureRenderer", "net/minecraft/src/C_4452_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.render.entity.feature.SnowGolemPumpkinFeatureRenderer#blockRenderManager
    static jobject get_field_blockRenderManager(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "blockRenderer", "field_38905", "blockRenderManager", "f_234868_"), "Lgft;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.feature.SnowGolemPumpkinFeatureRenderer#blockRenderManager
    static void set_field_blockRenderManager(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "blockRenderer", "field_38905", "blockRenderManager", "f_234868_"), "Lgft;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.feature.SnowGolemPumpkinFeatureRenderer#itemRenderer
    static jobject get_field_itemRenderer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "itemRenderer", "field_38906", "itemRenderer", "f_234869_"), "Lglh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.feature.SnowGolemPumpkinFeatureRenderer#itemRenderer
    static void set_field_itemRenderer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "itemRenderer", "field_38906", "itemRenderer", "f_234869_"), "Lglh;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_4201", "render", "m_6494_"), "(Lfbi;Lgez;ILcgc;FFFFFF)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2, const jobject& arg3, const jfloat& arg4, const jfloat& arg5, const jfloat& arg6, const jfloat& arg7, const jfloat& arg8, const jfloat& arg9) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_SNOWGOLEMPUMPKINFEATURERENDERER_HPP