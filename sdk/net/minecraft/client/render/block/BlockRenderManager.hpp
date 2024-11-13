// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_BLOCK_BLOCKRENDERMANAGER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_BLOCK_BLOCKRENDERMANAGER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.block.BlockRenderManager
 * Remapped: gft
 */
namespace BlockRenderManager {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gft", "net/minecraft/client/renderer/block/BlockRenderDispatcher", "net/minecraft/class_776", "net/minecraft/client/render/block/BlockRenderManager", "net/minecraft/src/C_4183_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.render.block.BlockRenderManager#models
    static jobject get_field_models(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "blockModelShaper", "field_4168", "models", "f_110899_"), "Lgfs;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.block.BlockRenderManager#models
    static void set_field_models(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "blockModelShaper", "field_4168", "models", "f_110899_"), "Lgfs;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.block.BlockRenderManager#blockModelRenderer
    static jobject get_field_blockModelRenderer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "modelRenderer", "field_4170", "blockModelRenderer", "f_110900_"), "Lgfv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.block.BlockRenderManager#blockModelRenderer
    static void set_field_blockModelRenderer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "modelRenderer", "field_4170", "blockModelRenderer", "f_110900_"), "Lgfv;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.block.BlockRenderManager#builtinModelItemRenderer
    static jobject get_field_builtinModelItemRenderer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "blockEntityRenderer", "field_27742", "builtinModelItemRenderer", "f_173397_"), "Lgem;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.block.BlockRenderManager#builtinModelItemRenderer
    static void set_field_builtinModelItemRenderer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "blockEntityRenderer", "field_27742", "builtinModelItemRenderer", "f_173397_"), "Lgem;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.block.BlockRenderManager#fluidRenderer
    static jobject get_field_fluidRenderer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "liquidBlockRenderer", "field_4167", "fluidRenderer", "f_110901_"), "Lgfu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.block.BlockRenderManager#fluidRenderer
    static void set_field_fluidRenderer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "liquidBlockRenderer", "field_4167", "fluidRenderer", "f_110901_"), "Lgfu;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.block.BlockRenderManager#random
    static jobject get_field_random(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "random", "field_4169", "random", "f_110902_"), "Layw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.block.BlockRenderManager#random
    static void set_field_random(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "random", "field_4169", "random", "f_110902_"), "Layw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.block.BlockRenderManager#blockColors
    static jobject get_field_blockColors(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "blockColors", "field_20987", "blockColors", "f_110903_"), "Lfhq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.block.BlockRenderManager#blockColors
    static void set_field_blockColors(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "blockColors", "field_20987", "blockColors", "f_110903_"), "Lfhq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getModels() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBlockModelShaper", "method_3351", "getModels", "m_110907_"), "()Lgfs;");
    }

    static jobject getModels(const jobject& obj) {
                
       const auto methodID = methodID_getModels();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_renderDamage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderBreakingTexture", "method_23071", "renderDamage", "m_110918_"), "(Ldtc;Ljd;Ldbz;Lfbi;Lfbm;)V");
    }

    static void renderDamage(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_renderDamage();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_renderBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderBatched", "method_3355", "renderBlock", "m_234355_"), "(Ldtc;Ljd;Ldbz;Lfbi;Lfbm;ZLayw;)V");
    }

    static void renderBlock(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jboolean& arg5, const jobject& arg6) {
                
       const auto methodID = methodID_renderBlock();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID_renderFluid() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderLiquid", "method_3352", "renderFluid", "m_234363_"), "(Ljd;Ldbz;Lfbm;Ldtc;Lepe;)V");
    }

    static void renderFluid(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_renderFluid();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_getModelRenderer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getModelRenderer", "method_3350", "getModelRenderer", "m_110937_"), "()Lgfv;");
    }

    static jobject getModelRenderer(const jobject& obj) {
                
       const auto methodID = methodID_getModelRenderer();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getModel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBlockModel", "method_3349", "getModel", "m_110910_"), "(Ldtc;)Lgsm;");
    }

    static jobject getModel(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getModel();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_renderBlockAsEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderSingleBlock", "method_3353", "renderBlockAsEntity", "m_110912_"), "(Ldtc;Lfbi;Lgez;II)V");
    }

    static void renderBlockAsEntity(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jint& arg3, const jint& arg4) {
                
       const auto methodID = methodID_renderBlockAsEntity();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_reload() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onResourceManagerReload", "method_14491", "reload", "m_6213_"), "(Laue;)V");
    }

    static void reload(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_reload();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_BLOCK_BLOCKRENDERMANAGER_HPP