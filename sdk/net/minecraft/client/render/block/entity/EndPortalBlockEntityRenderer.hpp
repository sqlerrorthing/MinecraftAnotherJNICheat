// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_BLOCK_ENTITY_ENDPORTALBLOCKENTITYRENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_BLOCK_ENTITY_ENDPORTALBLOCKENTITYRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.block.entity.EndPortalBlockEntityRenderer
 * Remapped: ghs
 */
namespace EndPortalBlockEntityRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ghs", "net/minecraft/client/renderer/blockentity/TheEndPortalRenderer", "net/minecraft/class_840", "net/minecraft/client/render/block/entity/EndPortalBlockEntityRenderer", "net/minecraft/src/C_4260_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.render.block.entity.EndPortalBlockEntityRenderer#SKY_TEXTURE
    [[maybe_unused]] static jobject get_field_SKY_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "END_SKY_LOCATION", "field_4406", "SKY_TEXTURE", "f_112626_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.block.entity.EndPortalBlockEntityRenderer#SKY_TEXTURE
    [[maybe_unused]] static void set_field_SKY_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "END_SKY_LOCATION", "field_4406", "SKY_TEXTURE", "f_112626_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.block.entity.EndPortalBlockEntityRenderer#PORTAL_TEXTURE
    [[maybe_unused]] static jobject get_field_PORTAL_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "END_PORTAL_LOCATION", "field_4407", "PORTAL_TEXTURE", "f_112627_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.block.entity.EndPortalBlockEntityRenderer#PORTAL_TEXTURE
    [[maybe_unused]] static void set_field_PORTAL_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "END_PORTAL_LOCATION", "field_4407", "PORTAL_TEXTURE", "f_112627_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_3591", "render", "m_6922_"), "(Ldrz;FLfbi;Lgez;II)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jobject& arg2, const jobject& arg3, const jint& arg4, const jint& arg5) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_renderSides() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderCube", "method_23084", "renderSides", "m_173690_"), "(Ldrz;Lorg/joml/Matrix4f;Lfbm;)V");
    }

    static void renderSides(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_renderSides();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_renderSide() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderFace", "method_23085", "renderSide", "m_252771_"), "(Ldrz;Lorg/joml/Matrix4f;Lfbm;FFFFFFFFLji;)V");
    }

    static void renderSide(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jfloat& arg3, const jfloat& arg4, const jfloat& arg5, const jfloat& arg6, const jfloat& arg7, const jfloat& arg8, const jfloat& arg9, const jfloat& arg10, const jobject& arg11) {
                
       const auto methodID = methodID_renderSide();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    };
    
    static jmethodID methodID_getTopYOffset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getOffsetUp", "method_3594", "getTopYOffset", "m_142491_"), "()F");
    }

    static jfloat getTopYOffset(const jobject& obj) {
                
       const auto methodID = methodID_getTopYOffset();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBottomYOffset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getOffsetDown", "method_35793", "getBottomYOffset", "m_142489_"), "()F");
    }

    static jfloat getBottomYOffset(const jobject& obj) {
                
       const auto methodID = methodID_getBottomYOffset();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getLayer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "renderType", "method_34589", "getLayer", "m_142330_"), "()Lgfh;");
    }

    static jobject getLayer(const jobject& obj) {
                
       const auto methodID = methodID_getLayer();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_BLOCK_ENTITY_ENDPORTALBLOCKENTITYRENDERER_HPP