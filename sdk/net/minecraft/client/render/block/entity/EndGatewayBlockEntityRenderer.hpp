// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_BLOCK_ENTITY_ENDGATEWAYBLOCKENTITYRENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_BLOCK_ENTITY_ENDGATEWAYBLOCKENTITYRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.block.entity.EndGatewayBlockEntityRenderer
 * Remapped: ghr
 */
namespace EndGatewayBlockEntityRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ghr", "net/minecraft/client/renderer/blockentity/TheEndGatewayRenderer", "net/minecraft/class_841", "net/minecraft/client/render/block/entity/EndGatewayBlockEntityRenderer", "net/minecraft/src/C_4259_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.render.block.entity.EndGatewayBlockEntityRenderer#BEAM_TEXTURE
    [[maybe_unused]] static jobject get_field_BEAM_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "BEAM_LOCATION", "field_4409", "BEAM_TEXTURE", "f_112598_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.block.entity.EndGatewayBlockEntityRenderer#BEAM_TEXTURE
    [[maybe_unused]] static void set_field_BEAM_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "BEAM_LOCATION", "field_4409", "BEAM_TEXTURE", "f_112598_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_22751", "render", "m_6922_"), "(Ldry;FLfbi;Lgez;II)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jobject& arg2, const jobject& arg3, const jint& arg4, const jint& arg5) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
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
    
    static jmethodID methodID_getRenderDistance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aW_", "getViewDistance", "method_33893", "getRenderDistance", "m_142163_"), "()I");
    }

    static jint getRenderDistance(const jobject& obj) {
                
       const auto methodID = methodID_getRenderDistance();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_BLOCK_ENTITY_ENDGATEWAYBLOCKENTITYRENDERER_HPP