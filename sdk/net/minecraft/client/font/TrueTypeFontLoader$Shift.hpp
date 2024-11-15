// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_FONT_TRUETYPEFONTLOADER$SHIFT_HPP
#define NET_MINECRAFT_CLIENT_FONT_TRUETYPEFONTLOADER$SHIFT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.font.TrueTypeFontLoader$Shift
 * Remapped: flr$a
 */
namespace TrueTypeFontLoader$Shift {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("flr$a", "net/minecraft/client/gui/font/providers/TrueTypeGlyphProviderDefinition$Shift", "net/minecraft/class_8557$class_8558", "net/minecraft/client/font/TrueTypeFontLoader$Shift", "net/minecraft/src/C_285551_$C_285555_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.client.font.TrueTypeFontLoader$Shift#x
    static jfloat get_field_x(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "x", "comp_1529", "x", "f_285596_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.font.TrueTypeFontLoader$Shift#x
    static void set_field_x(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "x", "comp_1529", "x", "f_285596_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.font.TrueTypeFontLoader$Shift#y
    static jfloat get_field_y(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "y", "comp_1530", "y", "f_285597_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.font.TrueTypeFontLoader$Shift#y
    static void set_field_y(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "y", "comp_1530", "y", "f_285597_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.client.font.TrueTypeFontLoader$Shift#NONE
    [[maybe_unused]] static jobject get_field_NONE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NONE", "field_44806", "NONE", "f_285613_"), "Lflr$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.font.TrueTypeFontLoader$Shift#NONE
    [[maybe_unused]] static void set_field_NONE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NONE", "field_44806", "NONE", "f_285613_"), "Lflr$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.font.TrueTypeFontLoader$Shift#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_44807", "CODEC", "f_285647_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.font.TrueTypeFontLoader$Shift#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_44807", "CODEC", "f_285647_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID__x() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "x", "comp_1529", "x", "f_285596_"), "()F");
    }

    static jfloat _x(const jobject& obj) {
                
       const auto methodID = methodID__x();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID__y() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "y", "comp_1530", "y", "f_285597_"), "()F");
    }

    static jfloat _y(const jobject& obj) {
                
       const auto methodID = methodID__y();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_FONT_TRUETYPEFONTLOADER$SHIFT_HPP