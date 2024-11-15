// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_RENDERLAYERS_HPP
#define NET_MINECRAFT_CLIENT_RENDER_RENDERLAYERS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.RenderLayers
 * Remapped: geu
 */
namespace RenderLayers {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("geu", "net/minecraft/client/renderer/ItemBlockRenderTypes", "net/minecraft/class_4696", "net/minecraft/client/render/RenderLayers", "net/minecraft/src/C_4130_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.render.RenderLayers#BLOCKS
    [[maybe_unused]] static jobject get_field_BLOCKS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TYPE_BY_BLOCK", "field_21469", "BLOCKS", "f_109275_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.RenderLayers#BLOCKS
    [[maybe_unused]] static void set_field_BLOCKS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TYPE_BY_BLOCK", "field_21469", "BLOCKS", "f_109275_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.RenderLayers#FLUIDS
    [[maybe_unused]] static jobject get_field_FLUIDS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TYPE_BY_FLUID", "field_21471", "FLUIDS", "f_109276_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.RenderLayers#FLUIDS
    [[maybe_unused]] static void set_field_FLUIDS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TYPE_BY_FLUID", "field_21471", "FLUIDS", "f_109276_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.RenderLayers#fancyGraphicsOrBetter
    [[maybe_unused]] static jboolean get_field_fancyGraphicsOrBetter() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "renderCutout", "field_21472", "fancyGraphicsOrBetter", "f_109277_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticBooleanField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.RenderLayers#fancyGraphicsOrBetter
    [[maybe_unused]] static void set_field_fancyGraphicsOrBetter(const jboolean &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "renderCutout", "field_21472", "fancyGraphicsOrBetter", "f_109277_"), "Z");
        return MinecraftSDK::env->SetStaticBooleanField(clazz, fieldID, value);
    };

    static jmethodID methodID_getBlockLayer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getChunkRenderType", "method_23679", "getBlockLayer", "m_109282_"), "(Ldtc;)Lgfh;");
    }

    static jobject getBlockLayer(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getBlockLayer();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getMovingBlockLayer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getMovingBlockRenderType", "method_29359", "getMovingBlockLayer", "m_109293_"), "(Ldtc;)Lgfh;");
    }

    static jobject getMovingBlockLayer(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getMovingBlockLayer();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getEntityBlockLayer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getRenderType", "method_23683", "getEntityBlockLayer", "m_109284_"), "(Ldtc;Z)Lgfh;");
    }

    static jobject getEntityBlockLayer(const jobject& arg0, const jboolean& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getEntityBlockLayer();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getItemLayer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getRenderType", "method_23678", "getItemLayer", "m_109279_"), "(Lcuq;Z)Lgfh;");
    }

    static jobject getItemLayer(const jobject& arg0, const jboolean& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getItemLayer();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getFluidLayer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getRenderLayer", "method_23680", "getFluidLayer", "m_109287_"), "(Lepe;)Lgfh;");
    }

    static jobject getFluidLayer(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getFluidLayer();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_setFancyGraphicsOrBetter() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "setFancy", "method_23682", "setFancyGraphicsOrBetter", "m_109291_"), "(Z)V");
    }

    static void setFancyGraphicsOrBetter(const jboolean& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_setFancyGraphicsOrBetter();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_RENDERLAYERS_HPP