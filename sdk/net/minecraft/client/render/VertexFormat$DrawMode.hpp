// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_VERTEXFORMAT$DRAWMODE_HPP
#define NET_MINECRAFT_CLIENT_RENDER_VERTEXFORMAT$DRAWMODE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.VertexFormat$DrawMode
 * Remapped: fbn$c
 */
namespace VertexFormat$DrawMode {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fbn$c", "com/mojang/blaze3d/vertex/VertexFormat$Mode", "net/minecraft/class_293$class_5596", "net/minecraft/client/render/VertexFormat$DrawMode", "net/minecraft/src/C_3188_$C_141549_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.render.VertexFormat$DrawMode#LINES
    [[maybe_unused]] static jobject get_field_LINES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LINES", "field_27377", "LINES", "LINES"), "Lfbn$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.VertexFormat$DrawMode#LINES
    [[maybe_unused]] static void set_field_LINES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LINES", "field_27377", "LINES", "LINES"), "Lfbn$c;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.VertexFormat$DrawMode#LINE_STRIP
    [[maybe_unused]] static jobject get_field_LINE_STRIP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LINE_STRIP", "field_27378", "LINE_STRIP", "LINE_STRIP"), "Lfbn$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.VertexFormat$DrawMode#LINE_STRIP
    [[maybe_unused]] static void set_field_LINE_STRIP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LINE_STRIP", "field_27378", "LINE_STRIP", "LINE_STRIP"), "Lfbn$c;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.VertexFormat$DrawMode#DEBUG_LINES
    [[maybe_unused]] static jobject get_field_DEBUG_LINES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DEBUG_LINES", "field_29344", "DEBUG_LINES", "DEBUG_LINES"), "Lfbn$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.VertexFormat$DrawMode#DEBUG_LINES
    [[maybe_unused]] static void set_field_DEBUG_LINES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DEBUG_LINES", "field_29344", "DEBUG_LINES", "DEBUG_LINES"), "Lfbn$c;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.VertexFormat$DrawMode#DEBUG_LINE_STRIP
    [[maybe_unused]] static jobject get_field_DEBUG_LINE_STRIP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DEBUG_LINE_STRIP", "field_29345", "DEBUG_LINE_STRIP", "DEBUG_LINE_STRIP"), "Lfbn$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.VertexFormat$DrawMode#DEBUG_LINE_STRIP
    [[maybe_unused]] static void set_field_DEBUG_LINE_STRIP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DEBUG_LINE_STRIP", "field_29345", "DEBUG_LINE_STRIP", "DEBUG_LINE_STRIP"), "Lfbn$c;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.VertexFormat$DrawMode#TRIANGLES
    [[maybe_unused]] static jobject get_field_TRIANGLES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "TRIANGLES", "field_27379", "TRIANGLES", "TRIANGLES"), "Lfbn$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.VertexFormat$DrawMode#TRIANGLES
    [[maybe_unused]] static void set_field_TRIANGLES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "TRIANGLES", "field_27379", "TRIANGLES", "TRIANGLES"), "Lfbn$c;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.VertexFormat$DrawMode#TRIANGLE_STRIP
    [[maybe_unused]] static jobject get_field_TRIANGLE_STRIP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "TRIANGLE_STRIP", "field_27380", "TRIANGLE_STRIP", "TRIANGLE_STRIP"), "Lfbn$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.VertexFormat$DrawMode#TRIANGLE_STRIP
    [[maybe_unused]] static void set_field_TRIANGLE_STRIP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "TRIANGLE_STRIP", "field_27380", "TRIANGLE_STRIP", "TRIANGLE_STRIP"), "Lfbn$c;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.VertexFormat$DrawMode#TRIANGLE_FAN
    [[maybe_unused]] static jobject get_field_TRIANGLE_FAN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "TRIANGLE_FAN", "field_27381", "TRIANGLE_FAN", "TRIANGLE_FAN"), "Lfbn$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.VertexFormat$DrawMode#TRIANGLE_FAN
    [[maybe_unused]] static void set_field_TRIANGLE_FAN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "TRIANGLE_FAN", "field_27381", "TRIANGLE_FAN", "TRIANGLE_FAN"), "Lfbn$c;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.VertexFormat$DrawMode#QUADS
    [[maybe_unused]] static jobject get_field_QUADS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "QUADS", "field_27382", "QUADS", "QUADS"), "Lfbn$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.VertexFormat$DrawMode#QUADS
    [[maybe_unused]] static void set_field_QUADS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "QUADS", "field_27382", "QUADS", "QUADS"), "Lfbn$c;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for public field net.minecraft.client.render.VertexFormat$DrawMode#glMode
    static jint get_field_glMode(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "asGLMode", "field_27383", "glMode", "f_166946_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.render.VertexFormat$DrawMode#glMode
    static void set_field_glMode(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "asGLMode", "field_27383", "glMode", "f_166946_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.render.VertexFormat$DrawMode#firstVertexCount
    static jint get_field_firstVertexCount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "primitiveLength", "field_27384", "firstVertexCount", "f_166947_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.render.VertexFormat$DrawMode#firstVertexCount
    static void set_field_firstVertexCount(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "primitiveLength", "field_27384", "firstVertexCount", "f_166947_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.render.VertexFormat$DrawMode#additionalVertexCount
    static jint get_field_additionalVertexCount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "primitiveStride", "field_27385", "additionalVertexCount", "f_166948_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.render.VertexFormat$DrawMode#additionalVertexCount
    static void set_field_additionalVertexCount(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "primitiveStride", "field_27385", "additionalVertexCount", "f_166948_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.render.VertexFormat$DrawMode#shareVertices
    static jboolean get_field_shareVertices(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "connectedPrimitives", "field_38878", "shareVertices", "f_231234_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.render.VertexFormat$DrawMode#shareVertices
    static void set_field_shareVertices(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "connectedPrimitives", "field_38878", "shareVertices", "f_231234_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lfbn$c;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lfbn$c;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getIndexCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "indexCount", "method_31973", "getIndexCount", "m_166958_"), "(I)I");
    }

    static jint getIndexCount(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getIndexCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_VERTEXFORMAT$DRAWMODE_HPP