// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_WIDGET_ICONWIDGET_HPP
#define NET_MINECRAFT_CLIENT_GUI_WIDGET_ICONWIDGET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.widget.IconWidget
 * Remapped: fiz
 */
namespace IconWidget {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fiz", "net/minecraft/client/gui/components/ImageWidget", "net/minecraft/class_8208", "net/minecraft/client/gui/widget/IconWidget", "net/minecraft/src/C_273809_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "texture", "method_52721", "create", "m_295223_"), "(IILakr;II)Lfiz;");
    }

    static jobject create(const jint& arg0, const jint& arg1, const jobject& arg2, const jint& arg3, const jint& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID__create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "sprite", "method_52720", "create", "m_294506_"), "(IILakr;)Lfiz;");
    }

    static jobject _create(const jint& arg0, const jint& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID__create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_appendClickableNarrations() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateWidgetNarration", "method_47399", "appendClickableNarrations", "m_168797_"), "(Lfmi;)V");
    }

    static void appendClickableNarrations(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_appendClickableNarrations();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_playDownSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "playDownSound", "method_25354", "playDownSound", "m_7435_"), "(Lgvf;)V");
    }

    static void playDownSound(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_playDownSound();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isNarratable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("C", "isActive", "method_37303", "isNarratable", "m_142518_"), "()Z");
    }

    static jboolean isNarratable(const jobject& obj) {
                
       const auto methodID = methodID_isNarratable();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getNavigationPath() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "nextFocusPath", "method_48205", "getNavigationPath", "m_264064_"), "(Lfmo;)Lfhw;");
    }

    static jobject getNavigationPath(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getNavigationPath();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_WIDGET_ICONWIDGET_HPP