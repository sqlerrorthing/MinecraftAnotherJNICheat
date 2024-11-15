// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_FONT_GLYPHRENDERER_HPP
#define NET_MINECRAFT_CLIENT_FONT_GLYPHRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.font.GlyphRenderer
 * Remapped: flh
 */
namespace GlyphRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("flh", "net/minecraft/client/gui/font/glyphs/BakedGlyph", "net/minecraft/class_382", "net/minecraft/client/font/GlyphRenderer", "net/minecraft/src/C_3516_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.font.GlyphRenderer#textRenderLayers
    static jobject get_field_textRenderLayers(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "renderTypes", "field_44760", "textRenderLayers", "f_283799_"), "Lflf;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.GlyphRenderer#textRenderLayers
    static void set_field_textRenderLayers(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "renderTypes", "field_44760", "textRenderLayers", "f_283799_"), "Lflf;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.GlyphRenderer#minU
    static jfloat get_field_minU(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "u0", "field_2276", "minU", "f_95201_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.GlyphRenderer#minU
    static void set_field_minU(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "u0", "field_2276", "minU", "f_95201_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.GlyphRenderer#maxU
    static jfloat get_field_maxU(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "u1", "field_2275", "maxU", "f_95202_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.GlyphRenderer#maxU
    static void set_field_maxU(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "u1", "field_2275", "maxU", "f_95202_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.GlyphRenderer#minV
    static jfloat get_field_minV(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "v0", "field_2274", "minV", "f_95203_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.GlyphRenderer#minV
    static void set_field_minV(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "v0", "field_2274", "minV", "f_95203_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.GlyphRenderer#maxV
    static jfloat get_field_maxV(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "v1", "field_2273", "maxV", "f_95204_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.GlyphRenderer#maxV
    static void set_field_maxV(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "v1", "field_2273", "maxV", "f_95204_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.GlyphRenderer#minX
    static jfloat get_field_minX(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "left", "field_2272", "minX", "f_95205_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.GlyphRenderer#minX
    static void set_field_minX(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "left", "field_2272", "minX", "f_95205_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.GlyphRenderer#maxX
    static jfloat get_field_maxX(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "right", "field_2280", "maxX", "f_95206_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.GlyphRenderer#maxX
    static void set_field_maxX(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "right", "field_2280", "maxX", "f_95206_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.GlyphRenderer#minY
    static jfloat get_field_minY(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "up", "field_2279", "minY", "f_95207_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.GlyphRenderer#minY
    static void set_field_minY(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "up", "field_2279", "minY", "f_95207_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.GlyphRenderer#maxY
    static jfloat get_field_maxY(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "down", "field_2278", "maxY", "f_95208_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.GlyphRenderer#maxY
    static void set_field_maxY(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "down", "field_2278", "maxY", "f_95208_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    static jmethodID methodID_draw() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_2025", "draw", "m_5626_"), "(ZFFLorg/joml/Matrix4f;Lfbm;FFFFI)V");
    }

    static void draw(const jobject& obj, const jboolean& arg0, const jfloat& arg1, const jfloat& arg2, const jobject& arg3, const jobject& arg4, const jfloat& arg5, const jfloat& arg6, const jfloat& arg7, const jfloat& arg8, const jint& arg9) {
                
       const auto methodID = methodID_draw();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    };
    
    static jmethodID methodID_drawRectangle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderEffect", "method_22944", "drawRectangle", "m_95220_"), "(Lflh$a;Lorg/joml/Matrix4f;Lfbm;I)V");
    }

    static void drawRectangle(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jint& arg3) {
                
       const auto methodID = methodID_drawRectangle();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getLayer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderType", "method_24045", "getLayer", "m_181387_"), "(Lfhx$a;)Lgfh;");
    }

    static jobject getLayer(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getLayer();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_FONT_GLYPHRENDERER_HPP