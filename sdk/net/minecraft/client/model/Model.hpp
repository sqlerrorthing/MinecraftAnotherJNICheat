// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_MODEL_MODEL_HPP
#define NET_MINECRAFT_CLIENT_MODEL_MODEL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.model.Model
 * Remapped: fwg
 */
namespace Model {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fwg", "net/minecraft/client/model/Model", "net/minecraft/class_3879", "net/minecraft/client/model/Model", "net/minecraft/src/C_3840_"));
        }
        return cachedClass;
    };

    // getter for protected field net.minecraft.client.model.Model#layerFactory
    static jobject get_field_layerFactory(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("v", "renderType", "field_21343", "layerFactory", "f_103106_"), "Ljava/util/function/Function;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.client.model.Model#layerFactory
    static void set_field_layerFactory(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("v", "renderType", "field_21343", "layerFactory", "f_103106_"), "Ljava/util/function/Function;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getLayer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderType", "method_23500", "getLayer", "m_103119_"), "(Lakr;)Lgfh;");
    }

    static jobject getLayer(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getLayer();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderToBuffer", "method_2828", "render", "m_7695_"), "(Lfbi;Lfbm;III)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2, const jint& arg3, const jint& arg4) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID__render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderToBuffer", "method_60879", "render", "m_340227_"), "(Lfbi;Lfbm;II)V");
    }

    static void _render(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2, const jint& arg3) {
                
       const auto methodID = methodID__render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_MODEL_MODEL_HPP