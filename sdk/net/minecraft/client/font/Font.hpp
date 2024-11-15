// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_FONT_FONT_HPP
#define NET_MINECRAFT_CLIENT_FONT_FONT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.font.Font
 * Remapped: ezm
 */
namespace Font {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ezm", "com/mojang/blaze3d/font/GlyphProvider", "net/minecraft/class_390", "net/minecraft/client/font/Font", "net/minecraft/src/C_3099_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.font.Font#field_48382
    [[maybe_unused]] static jfloat get_field_field_48382() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BASELINE", "field_48382", "field_48382", "f_315786_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.font.Font#field_48382
    [[maybe_unused]] static void set_field_field_48382(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BASELINE", "field_48382", "field_48382", "f_315786_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("close", "close", "", "", "close"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
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

#endif // NET_MINECRAFT_CLIENT_FONT_FONT_HPP