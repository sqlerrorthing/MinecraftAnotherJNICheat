// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_WIDGET_WIDGET_HPP
#define NET_MINECRAFT_CLIENT_GUI_WIDGET_WIDGET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.widget.Widget
 * Remapped: fmb
 */
namespace Widget {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fmb", "net/minecraft/client/gui/layouts/LayoutElement", "net/minecraft/class_8021", "net/minecraft/client/gui/widget/Widget", "net/minecraft/src/C_263644_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_setX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "setX", "method_46421", "setX", "m_252865_"), "(I)V");
    }

    static void setX(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setX();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n", "setY", "method_46419", "setY", "m_253211_"), "(I)V");
    }

    static void setY(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setY();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("D", "getX", "method_46426", "getX", "m_252754_"), "()I");
    }

    static jint getX(const jobject& obj) {
                
       const auto methodID = methodID_getX();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("E", "getY", "method_46427", "getY", "m_252907_"), "()I");
    }

    static jint getY(const jobject& obj) {
                
       const auto methodID = methodID_getY();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("y", "getWidth", "method_25368", "getWidth", "m_5711_"), "()I");
    }

    static jint getWidth(const jobject& obj) {
                
       const auto methodID = methodID_getWidth();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("w", "getHeight", "method_25364", "getHeight", "m_93694_"), "()I");
    }

    static jint getHeight(const jobject& obj) {
                
       const auto methodID = methodID_getHeight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getNavigationFocus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("H", "getRectangle", "method_48202", "getNavigationFocus", "m_264198_"), "()Lfms;");
    }

    static jobject getNavigationFocus(const jobject& obj) {
                
       const auto methodID = methodID_getNavigationFocus();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setPosition() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "setPosition", "method_48229", "setPosition", "m_264152_"), "(II)V");
    }

    static void setPosition(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_setPosition();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_forEachChild() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitWidgets", "method_48206", "forEachChild", "m_264134_"), "(Ljava/util/function/Consumer;)V");
    }

    static void forEachChild(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_forEachChild();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_WIDGET_WIDGET_HPP