// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_OUTLINEVERTEXCONSUMERPROVIDER$OUTLINEVERTEXCONSUMER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_OUTLINEVERTEXCONSUMERPROVIDER$OUTLINEVERTEXCONSUMER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.OutlineVertexConsumerProvider$OutlineVertexConsumer
 * Remapped: gfa$a
 */
namespace OutlineVertexConsumerProvider$OutlineVertexConsumer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gfa$a", "net/minecraft/client/renderer/OutlineBufferSource$EntityOutlineGenerator", "net/minecraft/class_4618$class_4586", "net/minecraft/client/render/OutlineVertexConsumerProvider$OutlineVertexConsumer", "net/minecraft/src/C_4141_$C_4143_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.render.OutlineVertexConsumerProvider$OutlineVertexConsumer#delegate
    static jobject get_field_delegate(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "delegate", "comp_2851", "delegate", "f_109936_"), "Lfbm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.OutlineVertexConsumerProvider$OutlineVertexConsumer#delegate
    static void set_field_delegate(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "delegate", "comp_2851", "delegate", "f_109936_"), "Lfbm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.OutlineVertexConsumerProvider$OutlineVertexConsumer#color
    static jint get_field_color(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "color", "comp_2852", "color", "f_337218_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.OutlineVertexConsumerProvider$OutlineVertexConsumer#color
    static void set_field_color(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "color", "comp_2852", "color", "f_337218_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_vertex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addVertex", "method_22912", "vertex", "m_167146_"), "(FFF)Lfbm;");
    }

    static jobject vertex(const jobject& obj, const jfloat& arg0, const jfloat& arg1, const jfloat& arg2) {
                
       const auto methodID = methodID_vertex();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__color() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setColor", "method_1336", "color", "m_167129_"), "(IIII)Lfbm;");
    }

    static jobject _color(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2, const jint& arg3) {
                
       const auto methodID = methodID__color();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_texture() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setUv", "method_22913", "texture", "m_167083_"), "(FF)Lfbm;");
    }

    static jobject texture(const jobject& obj, const jfloat& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_texture();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_overlay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setUv1", "method_60796", "overlay", "m_338369_"), "(II)Lfbm;");
    }

    static jobject overlay(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_overlay();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_light() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setUv2", "method_22921", "light", "m_338813_"), "(II)Lfbm;");
    }

    static jobject light(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_light();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_normal() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setNormal", "method_22914", "normal", "m_338525_"), "(FFF)Lfbm;");
    }

    static jobject normal(const jobject& obj, const jfloat& arg0, const jfloat& arg1, const jfloat& arg2) {
                
       const auto methodID = methodID_normal();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__delegate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "delegate", "comp_2851", "delegate", "f_109936_"), "()Lfbm;");
    }

    static jobject _delegate(const jobject& obj) {
                
       const auto methodID = methodID__delegate();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID___color() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "color", "comp_2852", "color", "f_337218_"), "()I");
    }

    static jint __color(const jobject& obj) {
                
       const auto methodID = methodID___color();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_OUTLINEVERTEXCONSUMERPROVIDER$OUTLINEVERTEXCONSUMER_HPP