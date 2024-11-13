// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_MAPRENDERER$MAPTEXTURE_HPP
#define NET_MINECRAFT_CLIENT_RENDER_MAPRENDERER$MAPTEXTURE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.MapRenderer$MapTexture
 * Remapped: fic$a
 */
namespace MapRenderer$MapTexture {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fic$a", "net/minecraft/client/gui/MapRenderer$MapInstance", "net/minecraft/class_330$class_331", "net/minecraft/client/render/MapRenderer$MapTexture", "net/minecraft/src/C_3433_$C_3435_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.render.MapRenderer$MapTexture#state
    static jobject get_field_state(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "data", "field_2046", "state", "f_93280_"), "Leqt;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.MapRenderer$MapTexture#state
    static void set_field_state(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "data", "field_2046", "state", "f_93280_"), "Leqt;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.MapRenderer$MapTexture#texture
    static jobject get_field_texture(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "texture", "field_2048", "texture", "f_93281_"), "Lgpy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.MapRenderer$MapTexture#texture
    static void set_field_texture(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "texture", "field_2048", "texture", "f_93281_"), "Lgpy;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.MapRenderer$MapTexture#renderLayer
    static jobject get_field_renderLayer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "renderType", "field_21689", "renderLayer", "f_93282_"), "Lgfh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.MapRenderer$MapTexture#renderLayer
    static void set_field_renderLayer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "renderType", "field_21689", "renderLayer", "f_93282_"), "Lgfh;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.MapRenderer$MapTexture#needsUpdate
    static jboolean get_field_needsUpdate(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "requiresUpload", "field_34044", "needsUpdate", "f_182565_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.MapRenderer$MapTexture#needsUpdate
    static void set_field_needsUpdate(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "requiresUpload", "field_34044", "needsUpdate", "f_182565_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_setState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "replaceMapData", "method_37451", "setState", "m_182567_"), "(Leqt;)V");
    }

    static void setState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setState();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setNeedsUpdate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "forceUpload", "method_37450", "setNeedsUpdate", "m_182566_"), "()V");
    }

    static void setNeedsUpdate(const jobject& obj) {
                
       const auto methodID = methodID_setNeedsUpdate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_updateTexture() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "updateTexture", "method_1776", "updateTexture", "m_93290_"), "()V");
    }

    static void updateTexture(const jobject& obj) {
                
       const auto methodID = methodID_updateTexture();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_draw() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "draw", "method_1777", "draw", "m_93291_"), "(Lfbi;Lgez;ZI)V");
    }

    static void draw(const jobject& obj, const jobject& arg0, const jobject& arg1, const jboolean& arg2, const jint& arg3) {
                
       const auto methodID = methodID_draw();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("close", "close", "", "", "close"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_MAPRENDERER$MAPTEXTURE_HPP