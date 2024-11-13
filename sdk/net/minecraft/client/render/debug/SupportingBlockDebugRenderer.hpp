// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_DEBUG_SUPPORTINGBLOCKDEBUGRENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_DEBUG_SUPPORTINGBLOCKDEBUGRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.debug.SupportingBlockDebugRenderer
 * Remapped: giy
 */
namespace SupportingBlockDebugRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("giy", "net/minecraft/client/renderer/debug/SupportBlockRenderer", "net/minecraft/class_8560", "net/minecraft/client/render/debug/SupportingBlockDebugRenderer", "net/minecraft/src/C_285537_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.render.debug.SupportingBlockDebugRenderer#client
    static jobject get_field_client(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "minecraft", "field_44828", "client", "f_285628_"), "Lfgo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.debug.SupportingBlockDebugRenderer#client
    static void set_field_client(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "minecraft", "field_44828", "client", "f_285628_"), "Lfgo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.debug.SupportingBlockDebugRenderer#lastEntityCheckTime
    static jdouble get_field_lastEntityCheckTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "lastUpdateTime", "field_44829", "lastEntityCheckTime", "f_285602_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.debug.SupportingBlockDebugRenderer#lastEntityCheckTime
    static void set_field_lastEntityCheckTime(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "lastUpdateTime", "field_44829", "lastEntityCheckTime", "f_285602_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.debug.SupportingBlockDebugRenderer#entities
    static jobject get_field_entities(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "surroundEntities", "field_44830", "entities", "f_285572_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.debug.SupportingBlockDebugRenderer#entities
    static void set_field_entities(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "surroundEntities", "field_44830", "entities", "f_285572_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_23109", "render", "m_7790_"), "(Lfbi;Lgez;DDD)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jobject& arg1, const jdouble& arg2, const jdouble& arg3, const jdouble& arg4) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_renderBlockHighlights() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "drawHighlights", "method_51790", "renderBlockHighlights", "m_286095_"), "(Lfbi;Lgez;DDDLbsr;Ljava/util/function/DoubleSupplier;FFF)V");
    }

    static void renderBlockHighlights(const jobject& obj, const jobject& arg0, const jobject& arg1, const jdouble& arg2, const jdouble& arg3, const jdouble& arg4, const jobject& arg5, const jobject& arg6, const jfloat& arg7, const jfloat& arg8, const jfloat& arg9) {
                
       const auto methodID = methodID_renderBlockHighlights();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    };
    
    static jmethodID methodID_getAdditionalDilation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBias", "method_51789", "getAdditionalDilation", "m_285734_"), "(Lbsr;)D");
    }

    static jdouble getAdditionalDilation(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getAdditionalDilation();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_renderBlockHighlight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "highlightPosition", "method_51791", "renderBlockHighlight", "m_285847_"), "(Ljd;Lfbi;DDDLgez;DFFF)V");
    }

    static void renderBlockHighlight(const jobject& obj, const jobject& arg0, const jobject& arg1, const jdouble& arg2, const jdouble& arg3, const jdouble& arg4, const jobject& arg5, const jdouble& arg6, const jfloat& arg7, const jfloat& arg8, const jfloat& arg9) {
                
       const auto methodID = methodID_renderBlockHighlight();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_DEBUG_SUPPORTINGBLOCKDEBUGRENDERER_HPP