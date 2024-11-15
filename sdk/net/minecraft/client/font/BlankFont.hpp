// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_FONT_BLANKFONT_HPP
#define NET_MINECRAFT_CLIENT_FONT_BLANKFONT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.font.BlankFont
 * Remapped: fkz
 */
namespace BlankFont {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fkz", "net/minecraft/client/gui/font/AllMissingGlyphProvider", "net/minecraft/class_376", "net/minecraft/client/font/BlankFont", "net/minecraft/src/C_3508_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getGlyph() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getGlyph", "method_2040", "getGlyph", "m_214022_"), "(I)Lezl;");
    }

    static jobject getGlyph(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getGlyph();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getProvidedGlyphs() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getSupportedGlyphs", "method_27442", "getProvidedGlyphs", "m_6990_"), "()Lit/unimi/dsi/fastutil/ints/IntSet;");
    }

    static jobject getProvidedGlyphs(const jobject& obj) {
                
       const auto methodID = methodID_getProvidedGlyphs();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_FONT_BLANKFONT_HPP