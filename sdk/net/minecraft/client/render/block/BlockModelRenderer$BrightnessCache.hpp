// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_BLOCK_BLOCKMODELRENDERER$BRIGHTNESSCACHE_HPP
#define NET_MINECRAFT_CLIENT_RENDER_BLOCK_BLOCKMODELRENDERER$BRIGHTNESSCACHE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.block.BlockModelRenderer$BrightnessCache
 * Remapped: gfv$d
 */
namespace BlockModelRenderer$BrightnessCache {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gfv$d", "net/minecraft/client/renderer/block/ModelBlockRenderer$Cache", "net/minecraft/class_778$class_4303", "net/minecraft/client/render/block/BlockModelRenderer$BrightnessCache", "net/minecraft/src/C_4186_$C_4191_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.render.block.BlockModelRenderer$BrightnessCache#enabled
    static jboolean get_field_enabled(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "enabled", "field_19320", "enabled", "f_111214_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.block.BlockModelRenderer$BrightnessCache#enabled
    static void set_field_enabled(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "enabled", "field_19320", "enabled", "f_111214_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.block.BlockModelRenderer$BrightnessCache#intCache
    static jobject get_field_intCache(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "colorCache", "field_19321", "intCache", "f_111215_"), "Lit/unimi/dsi/fastutil/longs/Long2IntLinkedOpenHashMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.block.BlockModelRenderer$BrightnessCache#intCache
    static void set_field_intCache(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "colorCache", "field_19321", "intCache", "f_111215_"), "Lit/unimi/dsi/fastutil/longs/Long2IntLinkedOpenHashMap;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.block.BlockModelRenderer$BrightnessCache#floatCache
    static jobject get_field_floatCache(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "brightnessCache", "field_19322", "floatCache", "f_111216_"), "Lit/unimi/dsi/fastutil/longs/Long2FloatLinkedOpenHashMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.block.BlockModelRenderer$BrightnessCache#floatCache
    static void set_field_floatCache(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "brightnessCache", "field_19322", "floatCache", "f_111216_"), "Lit/unimi/dsi/fastutil/longs/Long2FloatLinkedOpenHashMap;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_enable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "enable", "method_20548", "enable", "m_111220_"), "()V");
    }

    static void enable(const jobject& obj) {
                
       const auto methodID = methodID_enable();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_disable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "disable", "method_20550", "disable", "m_111225_"), "()V");
    }

    static void disable(const jobject& obj) {
                
       const auto methodID = methodID_disable();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getInt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getLightColor", "method_20549", "getInt", "m_111221_"), "(Ldtc;Ldbz;Ljd;)I");
    }

    static jint getInt(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getInt();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getFloat() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getShadeBrightness", "method_20551", "getFloat", "m_111226_"), "(Ldtc;Ldbz;Ljd;)F");
    }

    static jfloat getFloat(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getFloat();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_BLOCK_BLOCKMODELRENDERER$BRIGHTNESSCACHE_HPP