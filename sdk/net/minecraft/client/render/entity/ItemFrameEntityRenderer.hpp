// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_ITEMFRAMEENTITYRENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_ITEMFRAMEENTITYRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.ItemFrameEntityRenderer
 * Remapped: glg
 */
namespace ItemFrameEntityRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("glg", "net/minecraft/client/renderer/entity/ItemFrameRenderer", "net/minecraft/class_915", "net/minecraft/client/render/entity/ItemFrameEntityRenderer", "net/minecraft/src/C_4353_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.render.entity.ItemFrameEntityRenderer#NORMAL_FRAME
    [[maybe_unused]] static jobject get_field_NORMAL_FRAME() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "FRAME_LOCATION", "field_4721", "NORMAL_FRAME", "f_115044_"), "Lgsu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.ItemFrameEntityRenderer#NORMAL_FRAME
    [[maybe_unused]] static void set_field_NORMAL_FRAME(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "FRAME_LOCATION", "field_4721", "NORMAL_FRAME", "f_115044_"), "Lgsu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.ItemFrameEntityRenderer#MAP_FRAME
    [[maybe_unused]] static jobject get_field_MAP_FRAME() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "MAP_FRAME_LOCATION", "field_4723", "MAP_FRAME", "f_115045_"), "Lgsu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.ItemFrameEntityRenderer#MAP_FRAME
    [[maybe_unused]] static void set_field_MAP_FRAME(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "MAP_FRAME_LOCATION", "field_4723", "MAP_FRAME", "f_115045_"), "Lgsu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.ItemFrameEntityRenderer#GLOW_FRAME
    [[maybe_unused]] static jobject get_field_GLOW_FRAME() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "GLOW_FRAME_LOCATION", "field_28462", "GLOW_FRAME", "f_174201_"), "Lgsu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.ItemFrameEntityRenderer#GLOW_FRAME
    [[maybe_unused]] static void set_field_GLOW_FRAME(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "GLOW_FRAME_LOCATION", "field_28462", "GLOW_FRAME", "f_174201_"), "Lgsu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.ItemFrameEntityRenderer#MAP_GLOW_FRAME
    [[maybe_unused]] static jobject get_field_MAP_GLOW_FRAME() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "GLOW_MAP_FRAME_LOCATION", "field_28463", "MAP_GLOW_FRAME", "f_174202_"), "Lgsu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.ItemFrameEntityRenderer#MAP_GLOW_FRAME
    [[maybe_unused]] static void set_field_MAP_GLOW_FRAME(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "GLOW_MAP_FRAME_LOCATION", "field_28463", "MAP_GLOW_FRAME", "f_174202_"), "Lgsu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.entity.ItemFrameEntityRenderer#GLOW_FRAME_BLOCK_LIGHT
    [[maybe_unused]] static jint get_field_GLOW_FRAME_BLOCK_LIGHT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "GLOW_FRAME_BRIGHTNESS", "field_32932", "GLOW_FRAME_BLOCK_LIGHT", "f_174199_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.entity.ItemFrameEntityRenderer#GLOW_FRAME_BLOCK_LIGHT
    [[maybe_unused]] static void set_field_GLOW_FRAME_BLOCK_LIGHT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "GLOW_FRAME_BRIGHTNESS", "field_32932", "GLOW_FRAME_BLOCK_LIGHT", "f_174199_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.entity.ItemFrameEntityRenderer#field_32933
    [[maybe_unused]] static jint get_field_field_32933() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "BRIGHT_MAP_LIGHT_ADJUSTMENT", "field_32933", "field_32933", "f_174200_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.entity.ItemFrameEntityRenderer#field_32933
    [[maybe_unused]] static void set_field_field_32933(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "BRIGHT_MAP_LIGHT_ADJUSTMENT", "field_32933", "field_32933", "f_174200_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.ItemFrameEntityRenderer#itemRenderer
    static jobject get_field_itemRenderer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "itemRenderer", "field_4720", "itemRenderer", "f_115047_"), "Lglh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.ItemFrameEntityRenderer#itemRenderer
    static void set_field_itemRenderer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "itemRenderer", "field_4720", "itemRenderer", "f_115047_"), "Lglh;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.ItemFrameEntityRenderer#blockRenderManager
    static jobject get_field_blockRenderManager(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "blockRenderer", "field_38891", "blockRenderManager", "f_234645_"), "Lgft;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.ItemFrameEntityRenderer#blockRenderManager
    static void set_field_blockRenderManager(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "blockRenderer", "field_38891", "blockRenderManager", "f_234645_"), "Lgft;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getBlockLight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBlockLightLevel", "method_33435", "getBlockLight", "m_6086_"), "(Lcja;Ljd;)I");
    }

    static jint getBlockLight(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getBlockLight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_3994", "render", "m_7392_"), "(Lcja;FFLfbi;Lgez;I)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jfloat& arg2, const jobject& arg3, const jobject& arg4, const jint& arg5) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_getLight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getLightVal", "method_33433", "getLight", "m_174208_"), "(Lcja;II)I");
    }

    static jint getLight(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_getLight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getModelId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getFrameModelResourceLoc", "method_33434", "getModelId", "m_174212_"), "(Lcja;Lcuq;)Lgsu;");
    }

    static jobject getModelId(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getModelId();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getPositionOffset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getRenderOffset", "method_23174", "getPositionOffset", "m_7860_"), "(Lcja;F)Lexc;");
    }

    static jobject getPositionOffset(const jobject& obj, const jobject& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_getPositionOffset();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getTexture() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTextureLocation", "method_3993", "getTexture", "m_5478_"), "(Lcja;)Lakr;");
    }

    static jobject getTexture(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getTexture();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_hasLabel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "shouldShowName", "method_23176", "hasLabel", "m_6512_"), "(Lcja;)Z");
    }

    static jboolean hasLabel(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_hasLabel();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_renderLabelIfPresent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderNameTag", "method_23175", "renderLabelIfPresent", "m_7649_"), "(Lcja;Lwz;Lfbi;Lgez;IF)V");
    }

    static void renderLabelIfPresent(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jint& arg4, const jfloat& arg5) {
                
       const auto methodID = methodID_renderLabelIfPresent();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_ITEMFRAMEENTITYRENDERER_HPP