// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_WARDENFEATURERENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_WARDENFEATURERENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.feature.WardenFeatureRenderer
 * Remapped: gph
 */
namespace WardenFeatureRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gph", "net/minecraft/client/renderer/entity/layers/WardenEmissiveLayer", "net/minecraft/class_7288", "net/minecraft/client/render/entity/feature/WardenFeatureRenderer", "net/minecraft/src/C_213432_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.render.entity.feature.WardenFeatureRenderer#texture
    static jobject get_field_texture(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "texture", "field_38355", "texture", "f_234881_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.feature.WardenFeatureRenderer#texture
    static void set_field_texture(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "texture", "field_38355", "texture", "f_234881_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.feature.WardenFeatureRenderer#animationAngleAdjuster
    static jobject get_field_animationAngleAdjuster(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "alphaFunction", "field_38356", "animationAngleAdjuster", "f_234882_"), "Lgph$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.feature.WardenFeatureRenderer#animationAngleAdjuster
    static void set_field_animationAngleAdjuster(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "alphaFunction", "field_38356", "animationAngleAdjuster", "f_234882_"), "Lgph$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.feature.WardenFeatureRenderer#modelPartVisibility
    static jobject get_field_modelPartVisibility(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "drawSelector", "field_38464", "modelPartVisibility", "f_234883_"), "Lgph$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.feature.WardenFeatureRenderer#modelPartVisibility
    static void set_field_modelPartVisibility(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "drawSelector", "field_38464", "modelPartVisibility", "f_234883_"), "Lgph$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_42613", "render", "m_6494_"), "(Lfbi;Lgez;ILcmb;FFFFFF)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2, const jobject& arg3, const jfloat& arg4, const jfloat& arg5, const jfloat& arg6, const jfloat& arg7, const jfloat& arg8, const jfloat& arg9) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    };
    
    static jmethodID methodID_updateModelPartVisibility() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onlyDrawSelectedParts", "method_42746", "updateModelPartVisibility", "m_234889_"), "()V");
    }

    static void updateModelPartVisibility(const jobject& obj) {
                
       const auto methodID = methodID_updateModelPartVisibility();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_unhideAllModelParts() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "resetDrawForAllParts", "method_42748", "unhideAllModelParts", "m_234914_"), "()V");
    }

    static void unhideAllModelParts(const jobject& obj) {
                
       const auto methodID = methodID_unhideAllModelParts();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_WARDENFEATURERENDERER_HPP