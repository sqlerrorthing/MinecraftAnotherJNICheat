// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_FONT_BUILTINEMPTYGLYPH$COLORSUPPLIER_HPP
#define NET_MINECRAFT_CLIENT_FONT_BUILTINEMPTYGLYPH$COLORSUPPLIER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.font.BuiltinEmptyGlyph$ColorSupplier
 * Remapped: flj$a
 */
namespace BuiltinEmptyGlyph$ColorSupplier {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("flj$a", "net/minecraft/client/gui/font/glyphs/SpecialGlyphs$PixelProvider", "net/minecraft/class_7191$class_7192", "net/minecraft/client/font/BuiltinEmptyGlyph$ColorSupplier", "net/minecraft/src/C_213376_$C_213378_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("getColor", "getColor", "getColor", "getColor", "m_232634_"), "(II)I");
    }

    static jint getColor(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_getColor();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_FONT_BUILTINEMPTYGLYPH$COLORSUPPLIER_HPP