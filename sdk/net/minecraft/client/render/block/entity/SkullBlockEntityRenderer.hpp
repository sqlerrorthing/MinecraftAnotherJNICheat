// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_BLOCK_ENTITY_SKULLBLOCKENTITYRENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_BLOCK_ENTITY_SKULLBLOCKENTITYRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.block.entity.SkullBlockEntityRenderer
 * Remapped: gho
 */
namespace SkullBlockEntityRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gho", "net/minecraft/client/renderer/blockentity/SkullBlockRenderer", "net/minecraft/class_836", "net/minecraft/client/render/block/entity/SkullBlockEntityRenderer", "net/minecraft/src/C_4255_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.render.block.entity.SkullBlockEntityRenderer#MODELS
    static jobject get_field_MODELS(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "modelByType", "field_4391", "MODELS", "f_173658_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.block.entity.SkullBlockEntityRenderer#MODELS
    static void set_field_MODELS(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "modelByType", "field_4391", "MODELS", "f_173658_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.block.entity.SkullBlockEntityRenderer#TEXTURES
    [[maybe_unused]] static jobject get_field_TEXTURES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SKIN_BY_TYPE", "field_4390", "TEXTURES", "f_112519_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.block.entity.SkullBlockEntityRenderer#TEXTURES
    [[maybe_unused]] static void set_field_TEXTURES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SKIN_BY_TYPE", "field_4390", "TEXTURES", "f_112519_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getModels() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createSkullRenderers", "method_32160", "getModels", "m_173661_"), "(Lfyg;)Ljava/util/Map;");
    }

    static jobject getModels(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getModels();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_3577", "render", "m_6922_"), "(Ldru;FLfbi;Lgez;II)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jobject& arg2, const jobject& arg3, const jint& arg4, const jint& arg5) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_renderSkull() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "renderSkull", "method_32161", "renderSkull", "m_173663_"), "(Lji;FFLfbi;Lgez;ILfxh;Lgfh;)V");
    }

    static void renderSkull(const jobject& arg0, const jfloat& arg1, const jfloat& arg2, const jobject& arg3, const jobject& arg4, const jint& arg5, const jobject& arg6, const jobject& arg7) {
       const auto clazz = self();
       const auto methodID = methodID_renderSkull();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    };
    
    static jmethodID methodID_getRenderLayer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getRenderType", "method_3578", "getRenderLayer", "m_112523_"), "(Ldnb$a;Lcxu;)Lgfh;");
    }

    static jobject getRenderLayer(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getRenderLayer();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_BLOCK_ENTITY_SKULLBLOCKENTITYRENDERER_HPP