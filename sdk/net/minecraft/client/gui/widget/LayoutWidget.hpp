// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_WIDGET_LAYOUTWIDGET_HPP
#define NET_MINECRAFT_CLIENT_GUI_WIDGET_LAYOUTWIDGET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.widget.LayoutWidget
 * Remapped: fma
 */
namespace LayoutWidget {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fma", "net/minecraft/client/gui/layouts/Layout", "net/minecraft/class_8133", "net/minecraft/client/gui/widget/LayoutWidget", "net/minecraft/src/C_268386_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_forEachElement() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "visitChildren", "method_48227", "forEachElement", "m_264090_"), "(Ljava/util/function/Consumer;)V");
    }

    static void forEachElement(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_forEachElement();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_forEachChild() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitWidgets", "method_48206", "forEachChild", "m_264134_"), "(Ljava/util/function/Consumer;)V");
    }

    static void forEachChild(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_forEachChild();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_refreshPositions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "arrangeElements", "method_48222", "refreshPositions", "m_264036_"), "()V");
    }

    static void refreshPositions(const jobject& obj) {
                
       const auto methodID = methodID_refreshPositions();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_WIDGET_LAYOUTWIDGET_HPP