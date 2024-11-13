// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_BLOCK_BLOCKMODELRENDERER$AMBIENTOCCLUSIONCALCULATOR_HPP
#define NET_MINECRAFT_CLIENT_RENDER_BLOCK_BLOCKMODELRENDERER$AMBIENTOCCLUSIONCALCULATOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.block.BlockModelRenderer$AmbientOcclusionCalculator
 * Remapped: gfv$b
 */
namespace BlockModelRenderer$AmbientOcclusionCalculator {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gfv$b", "net/minecraft/client/renderer/block/ModelBlockRenderer$AmbientOcclusionFace", "net/minecraft/class_778$class_780", "net/minecraft/client/render/block/BlockModelRenderer$AmbientOcclusionCalculator", "net/minecraft/src/C_4186_$C_4189_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.client.render.block.BlockModelRenderer$AmbientOcclusionCalculator#brightness
    static jfloat get_field_brightness(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "brightness", "field_4196", "brightness", "f_111149_"), "[F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.render.block.BlockModelRenderer$AmbientOcclusionCalculator#brightness
    static void set_field_brightness(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "brightness", "field_4196", "brightness", "f_111149_"), "[F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.render.block.BlockModelRenderer$AmbientOcclusionCalculator#light
    static jint get_field_light(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "lightmap", "field_4194", "light", "f_111150_"), "[I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.render.block.BlockModelRenderer$AmbientOcclusionCalculator#light
    static void set_field_light(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "lightmap", "field_4194", "light", "f_111150_"), "[I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "calculate", "method_3388", "apply", "m_111167_"), "(Ldbz;Ldtc;Ljd;Lji;[FLjava/util/BitSet;Z)V");
    }

    static void apply(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jarray& arg4, const jfloat& arg5, const jobject& arg6, const jboolean& arg7) {
                
       const auto methodID = methodID_apply();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    };
    
    static jmethodID methodID_getAmbientOcclusionBrightness() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "blend", "method_3386", "getAmbientOcclusionBrightness", "m_111153_"), "(IIII)I");
    }

    static jint getAmbientOcclusionBrightness(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2, const jint& arg3) {
                
       const auto methodID = methodID_getAmbientOcclusionBrightness();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getBrightness() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "blend", "method_3389", "getBrightness", "m_111158_"), "(IIIIFFFF)I");
    }

    static jint getBrightness(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jfloat& arg4, const jfloat& arg5, const jfloat& arg6, const jfloat& arg7) {
                
       const auto methodID = methodID_getBrightness();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_BLOCK_BLOCKMODELRENDERER$AMBIENTOCCLUSIONCALCULATOR_HPP