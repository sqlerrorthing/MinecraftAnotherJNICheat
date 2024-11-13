// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_FONT_UNIHEXFONT$FONTIMAGE8X16_HPP
#define NET_MINECRAFT_CLIENT_FONT_UNIHEXFONT$FONTIMAGE8X16_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.font.UnihexFont$FontImage8x16
 * Remapped: fls$a
 */
namespace UnihexFont$FontImage8x16 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fls$a", "net/minecraft/client/gui/font/providers/UnihexProvider$ByteContents", "net/minecraft/class_391$class_7736", "net/minecraft/client/font/UnihexFont$FontImage8x16", "net/minecraft/src/C_283731_$C_283706_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.font.UnihexFont$FontImage8x16#contents
    static jbyte get_field_contents(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "contents", "comp_1505", "contents", "f_283836_"), "[B");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetByteField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.UnihexFont$FontImage8x16#contents
    static void set_field_contents(const jobject &obj, const jbyte &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "contents", "comp_1505", "contents", "f_283836_"), "[B");
        return MinecraftSDK::env->SetByteField(obj, fieldID, value);
    };

    static jmethodID methodID_getPixels() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "line", "method_51668", "getPixels", "m_284144_"), "(I)I");
    }

    static jint getPixels(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getPixels();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_read() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "read", "method_51669", "read", "m_284446_"), "(ILit/unimi/dsi/fastutil/bytes/ByteList;)Lfls$f;");
    }

    static jobject read(const jint& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_read();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_bitWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "bitWidth", "comp_1512", "bitWidth", "m_284266_"), "()I");
    }

    static jint bitWidth(const jobject& obj) {
                
       const auto methodID = methodID_bitWidth();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__contents() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "contents", "comp_1505", "contents", "f_283836_"), "()[B");
    }

    static jbyte _contents(const jobject& obj) {
                
       const auto methodID = methodID__contents();
       return MinecraftSDK::env->CallByteMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_FONT_UNIHEXFONT$FONTIMAGE8X16_HPP