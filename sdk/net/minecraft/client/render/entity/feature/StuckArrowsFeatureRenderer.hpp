// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_STUCKARROWSFEATURERENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_STUCKARROWSFEATURERENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.feature.StuckArrowsFeatureRenderer
 * Remapped: gnr
 */
namespace StuckArrowsFeatureRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gnr", "net/minecraft/client/renderer/entity/layers/ArrowLayer", "net/minecraft/class_973", "net/minecraft/client/render/entity/feature/StuckArrowsFeatureRenderer", "net/minecraft/src/C_4418_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.render.entity.feature.StuckArrowsFeatureRenderer#dispatcher
    static jobject get_field_dispatcher(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "dispatcher", "field_17153", "dispatcher", "f_116562_"), "Lgkh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.feature.StuckArrowsFeatureRenderer#dispatcher
    static void set_field_dispatcher(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "dispatcher", "field_17153", "dispatcher", "f_116562_"), "Lgkh;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getObjectCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "numStuck", "method_22134", "getObjectCount", "m_7040_"), "(Lbtn;)I");
    }

    static jint getObjectCount(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getObjectCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_renderObject() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderStuckItem", "method_22130", "renderObject", "m_5558_"), "(Lfbi;Lgez;ILbsr;FFFF)V");
    }

    static void renderObject(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2, const jobject& arg3, const jfloat& arg4, const jfloat& arg5, const jfloat& arg6, const jfloat& arg7) {
                
       const auto methodID = methodID_renderObject();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_STUCKARROWSFEATURERENDERER_HPP