// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_VERTEXFORMATELEMENT$USAGE_HPP
#define NET_MINECRAFT_CLIENT_RENDER_VERTEXFORMATELEMENT$USAGE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.VertexFormatElement$Usage
 * Remapped: fbo$b
 */
namespace VertexFormatElement$Usage {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fbo$b", "com/mojang/blaze3d/vertex/VertexFormatElement$Usage", "net/minecraft/class_296$class_298", "net/minecraft/client/render/VertexFormatElement$Usage", "net/minecraft/src/C_3189_$C_3191_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.render.VertexFormatElement$Usage#POSITION
    [[maybe_unused]] static jobject get_field_POSITION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "POSITION", "field_1633", "POSITION", "POSITION"), "Lfbo$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.VertexFormatElement$Usage#POSITION
    [[maybe_unused]] static void set_field_POSITION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "POSITION", "field_1633", "POSITION", "POSITION"), "Lfbo$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.VertexFormatElement$Usage#NORMAL
    [[maybe_unused]] static jobject get_field_NORMAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NORMAL", "field_1635", "NORMAL", "NORMAL"), "Lfbo$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.VertexFormatElement$Usage#NORMAL
    [[maybe_unused]] static void set_field_NORMAL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NORMAL", "field_1635", "NORMAL", "NORMAL"), "Lfbo$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.VertexFormatElement$Usage#COLOR
    [[maybe_unused]] static jobject get_field_COLOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "COLOR", "field_1632", "COLOR", "COLOR"), "Lfbo$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.VertexFormatElement$Usage#COLOR
    [[maybe_unused]] static void set_field_COLOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "COLOR", "field_1632", "COLOR", "COLOR"), "Lfbo$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.VertexFormatElement$Usage#UV
    [[maybe_unused]] static jobject get_field_UV() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "UV", "field_1636", "UV", "UV"), "Lfbo$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.VertexFormatElement$Usage#UV
    [[maybe_unused]] static void set_field_UV(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "UV", "field_1636", "UV", "UV"), "Lfbo$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.VertexFormatElement$Usage#GENERIC
    [[maybe_unused]] static jobject get_field_GENERIC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "GENERIC", "field_20782", "GENERIC", "GENERIC"), "Lfbo$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.VertexFormatElement$Usage#GENERIC
    [[maybe_unused]] static void set_field_GENERIC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "GENERIC", "field_20782", "GENERIC", "GENERIC"), "Lfbo$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.VertexFormatElement$Usage#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "name", "field_1630", "name", "f_86086_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.VertexFormatElement$Usage#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "name", "field_1630", "name", "f_86086_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.render.VertexFormatElement$Usage#setupTask
    static jobject get_field_setupTask(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "setupState", "field_20783", "setupTask", "f_86087_"), "Lfbo$b$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.render.VertexFormatElement$Usage#setupTask
    static void set_field_setupTask(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "setupState", "field_20783", "setupTask", "f_86087_"), "Lfbo$b$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lfbo$b;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lfbo$b;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_VERTEXFORMATELEMENT$USAGE_HPP