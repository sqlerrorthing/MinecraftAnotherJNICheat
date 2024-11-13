// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_FONT_UNIHEXFONT$FONTIMAGE32X16_HPP
#define NET_MINECRAFT_CLIENT_FONT_UNIHEXFONT$FONTIMAGE32X16_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.font.UnihexFont$FontImage32x16
 * Remapped: fls$e
 */
namespace UnihexFont$FontImage32x16 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fls$e", "net/minecraft/client/gui/font/providers/UnihexProvider$IntContents", "net/minecraft/class_391$class_8543", "net/minecraft/client/font/UnihexFont$FontImage32x16", "net/minecraft/src/C_283731_$C_283732_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.font.UnihexFont$FontImage32x16#contents
    static jint get_field_contents(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "contents", "comp_1511", "contents", "f_283738_"), "[I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.UnihexFont$FontImage32x16#contents
    static void set_field_contents(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "contents", "comp_1511", "contents", "f_283738_"), "[I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.UnihexFont$FontImage32x16#bitWidth
    static jint get_field_bitWidth(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "bitWidth", "comp_1512", "bitWidth", "f_283787_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.UnihexFont$FontImage32x16#bitWidth
    static void set_field_bitWidth(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "bitWidth", "comp_1512", "bitWidth", "f_283787_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.client.font.UnihexFont$FontImage32x16#field_44775
    [[maybe_unused]] static jint get_field_field_44775() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SIZE_24", "field_44775", "field_44775", "f_283925_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.font.UnihexFont$FontImage32x16#field_44775
    [[maybe_unused]] static void set_field_field_44775(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SIZE_24", "field_44775", "field_44775", "f_283925_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_getPixels() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "line", "method_51668", "getPixels", "m_284144_"), "(I)I");
    }

    static jint getPixels(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getPixels();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_read24x16() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "read24", "method_51677", "read24x16", "m_284350_"), "(ILit/unimi/dsi/fastutil/bytes/ByteList;)Lfls$f;");
    }

    static jobject read24x16(const jint& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_read24x16();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_read32x16() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "read32", "method_51676", "read32x16", "m_284358_"), "(ILit/unimi/dsi/fastutil/bytes/ByteList;)Lfls$f;");
    }

    static jobject read32x16(const jint& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_read32x16();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__contents() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "contents", "comp_1511", "contents", "f_283738_"), "()[I");
    }

    static jint _contents(const jobject& obj) {
                
       const auto methodID = methodID__contents();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__bitWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "bitWidth", "comp_1512", "bitWidth", "m_284266_"), "()I");
    }

    static jint _bitWidth(const jobject& obj) {
                
       const auto methodID = methodID__bitWidth();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_FONT_UNIHEXFONT$FONTIMAGE32X16_HPP