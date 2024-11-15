// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_BLOCK_ENTITY_BEACONBLOCKENTITYRENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_BLOCK_ENTITY_BEACONBLOCKENTITYRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.block.entity.BeaconBlockEntityRenderer
 * Remapped: ggv
 */
namespace BeaconBlockEntityRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ggv", "net/minecraft/client/renderer/blockentity/BeaconRenderer", "net/minecraft/class_822", "net/minecraft/client/render/block/entity/BeaconBlockEntityRenderer", "net/minecraft/src/C_4240_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.render.block.entity.BeaconBlockEntityRenderer#BEAM_TEXTURE
    [[maybe_unused]] static jobject get_field_BEAM_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BEAM_LOCATION", "field_4338", "BEAM_TEXTURE", "f_112102_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.block.entity.BeaconBlockEntityRenderer#BEAM_TEXTURE
    [[maybe_unused]] static void set_field_BEAM_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BEAM_LOCATION", "field_4338", "BEAM_TEXTURE", "f_112102_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.block.entity.BeaconBlockEntityRenderer#MAX_BEAM_HEIGHT
    [[maybe_unused]] static jint get_field_MAX_BEAM_HEIGHT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_RENDER_Y", "field_32822", "MAX_BEAM_HEIGHT", "f_173527_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.block.entity.BeaconBlockEntityRenderer#MAX_BEAM_HEIGHT
    [[maybe_unused]] static void set_field_MAX_BEAM_HEIGHT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_RENDER_Y", "field_32822", "MAX_BEAM_HEIGHT", "f_173527_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_3541", "render", "m_6922_"), "(Ldqc;FLfbi;Lgez;II)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jobject& arg2, const jobject& arg3, const jint& arg4, const jint& arg5) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_renderBeam() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "renderBeaconBeam", "method_3543", "renderBeam", "m_112176_"), "(Lfbi;Lgez;FJIII)V");
    }

    static void renderBeam(const jobject& arg0, const jobject& arg1, const jfloat& arg2, const jlong& arg3, const jint& arg4, const jint& arg5, const jint& arg6) {
       const auto clazz = self();
       const auto methodID = methodID_renderBeam();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID__renderBeam() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "renderBeaconBeam", "method_3545", "renderBeam", "m_112184_"), "(Lfbi;Lgez;Lakr;FFJIIIFF)V");
    }

    static void _renderBeam(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jfloat& arg3, const jfloat& arg4, const jlong& arg5, const jint& arg6, const jint& arg7, const jint& arg8, const jfloat& arg9, const jfloat& arg10) {
       const auto clazz = self();
       const auto methodID = methodID__renderBeam();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    };
    
    static jmethodID methodID_renderBeamLayer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "renderPart", "method_22741", "renderBeamLayer", "m_112155_"), "(Lfbi;Lfbm;IIIFFFFFFFFFFFF)V");
    }

    static void renderBeamLayer(const jobject& arg0, const jobject& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jfloat& arg5, const jfloat& arg6, const jfloat& arg7, const jfloat& arg8, const jfloat& arg9, const jfloat& arg10, const jfloat& arg11, const jfloat& arg12, const jfloat& arg13, const jfloat& arg14, const jfloat& arg15, const jfloat& arg16) {
       const auto clazz = self();
       const auto methodID = methodID_renderBeamLayer();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16);
    };
    
    static jmethodID methodID_renderBeamFace() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "renderQuad", "method_22740", "renderBeamFace", "m_112119_"), "(Lfbi$a;Lfbm;IIIFFFFFFFF)V");
    }

    static void renderBeamFace(const jobject& arg0, const jobject& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jfloat& arg5, const jfloat& arg6, const jfloat& arg7, const jfloat& arg8, const jfloat& arg9, const jfloat& arg10, const jfloat& arg11, const jfloat& arg12) {
       const auto clazz = self();
       const auto methodID = methodID_renderBeamFace();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
    };
    
    static jmethodID methodID_renderBeamVertex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "addVertex", "method_23076", "renderBeamVertex", "m_253258_"), "(Lfbi$a;Lfbm;IIFFFF)V");
    }

    static void renderBeamVertex(const jobject& arg0, const jobject& arg1, const jint& arg2, const jint& arg3, const jfloat& arg4, const jfloat& arg5, const jfloat& arg6, const jfloat& arg7) {
       const auto clazz = self();
       const auto methodID = methodID_renderBeamVertex();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    };
    
    static jmethodID methodID_rendersOutsideBoundingBox() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "shouldRenderOffScreen", "method_3542", "rendersOutsideBoundingBox", "m_5932_"), "(Ldqc;)Z");
    }

    static jboolean rendersOutsideBoundingBox(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_rendersOutsideBoundingBox();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getRenderDistance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aW_", "getViewDistance", "method_33893", "getRenderDistance", "m_142163_"), "()I");
    }

    static jint getRenderDistance(const jobject& obj) {
                
       const auto methodID = methodID_getRenderDistance();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_isInRenderDistance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "shouldRender", "method_33891", "isInRenderDistance", "m_142756_"), "(Ldqc;Lexc;)Z");
    }

    static jboolean isInRenderDistance(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_isInRenderDistance();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_BLOCK_ENTITY_BEACONBLOCKENTITYRENDERER_HPP