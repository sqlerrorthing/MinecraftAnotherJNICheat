// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_FONT_FONTSTORAGE$GLYPHPAIR_HPP
#define NET_MINECRAFT_CLIENT_FONT_FONTSTORAGE$GLYPHPAIR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.font.FontStorage$GlyphPair
 * Remapped: fld$a
 */
namespace FontStorage$GlyphPair {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fld$a", "net/minecraft/client/gui/font/FontSet$GlyphInfoFilter", "net/minecraft/class_377$class_7647", "net/minecraft/client/font/FontStorage$GlyphPair", "net/minecraft/src/C_3511_$C_242985_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.font.FontStorage$GlyphPair#glyph
    static jobject get_field_glyph(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "glyphInfo", "comp_979", "glyph", "f_243013_"), "Lezl;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.FontStorage$GlyphPair#glyph
    static void set_field_glyph(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "glyphInfo", "comp_979", "glyph", "f_243013_"), "Lezl;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.FontStorage$GlyphPair#advanceValidatedGlyph
    static jobject get_field_advanceValidatedGlyph(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "glyphInfoNotFishy", "comp_980", "advanceValidatedGlyph", "f_243006_"), "Lezl;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.FontStorage$GlyphPair#advanceValidatedGlyph
    static void set_field_advanceValidatedGlyph(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "glyphInfoNotFishy", "comp_980", "advanceValidatedGlyph", "f_243006_"), "Lezl;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static default field net.minecraft.client.font.FontStorage$GlyphPair#MISSING
    [[maybe_unused]] static jobject get_field_MISSING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MISSING", "field_39935", "MISSING", "f_243023_"), "Lfld$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.font.FontStorage$GlyphPair#MISSING
    [[maybe_unused]] static void set_field_MISSING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MISSING", "field_39935", "MISSING", "f_243023_"), "Lfld$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getGlyph() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "select", "method_45080", "getGlyph", "m_243099_"), "(Z)Lezl;");
    }

    static jobject getGlyph(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_getGlyph();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__glyph() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "glyphInfo", "comp_979", "glyph", "f_243013_"), "()Lezl;");
    }

    static jobject _glyph(const jobject& obj) {
                
       const auto methodID = methodID__glyph();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__advanceValidatedGlyph() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "glyphInfoNotFishy", "comp_980", "advanceValidatedGlyph", "f_243006_"), "()Lezl;");
    }

    static jobject _advanceValidatedGlyph(const jobject& obj) {
                
       const auto methodID = methodID__advanceValidatedGlyph();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_FONT_FONTSTORAGE$GLYPHPAIR_HPP