// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_ELEMENT_HPP
#define NET_MINECRAFT_CLIENT_GUI_ELEMENT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.Element
 * Remapped: fki
 */
namespace Element {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fki", "net/minecraft/client/gui/components/events/GuiEventListener", "net/minecraft/class_364", "net/minecraft/client/gui/Element", "net/minecraft/src/C_3495_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.gui.Element#MAX_DOUBLE_CLICK_INTERVAL
    [[maybe_unused]] static jlong get_field_MAX_DOUBLE_CLICK_INTERVAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("t", "DOUBLE_CLICK_THRESHOLD_MS", "field_37268", "MAX_DOUBLE_CLICK_INTERVAL", "f_212360_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticLongField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.Element#MAX_DOUBLE_CLICK_INTERVAL
    [[maybe_unused]] static void set_field_MAX_DOUBLE_CLICK_INTERVAL(const jlong &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("t", "DOUBLE_CLICK_THRESHOLD_MS", "field_37268", "MAX_DOUBLE_CLICK_INTERVAL", "f_212360_"), "J");
        return MinecraftSDK::env->SetStaticLongField(clazz, fieldID, value);
    };

    static jmethodID methodID_mouseMoved() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "mouseMoved", "method_16014", "mouseMoved", "m_94757_"), "(DD)V");
    }

    static void mouseMoved(const jobject& obj, const jdouble& arg0, const jdouble& arg1) {
                
       const auto methodID = methodID_mouseMoved();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_mouseClicked() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mouseClicked", "method_25402", "mouseClicked", "m_6375_"), "(DDI)Z");
    }

    static jboolean mouseClicked(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jint& arg2) {
                
       const auto methodID = methodID_mouseClicked();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_mouseReleased() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "mouseReleased", "method_25406", "mouseReleased", "m_6348_"), "(DDI)Z");
    }

    static jboolean mouseReleased(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jint& arg2) {
                
       const auto methodID = methodID_mouseReleased();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_mouseDragged() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mouseDragged", "method_25403", "mouseDragged", "m_7979_"), "(DDIDD)Z");
    }

    static jboolean mouseDragged(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jint& arg2, const jdouble& arg3, const jdouble& arg4) {
                
       const auto methodID = methodID_mouseDragged();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_mouseScrolled() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mouseScrolled", "method_25401", "mouseScrolled", "m_6050_"), "(DDDD)Z");
    }

    static jboolean mouseScrolled(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jdouble& arg2, const jdouble& arg3) {
                
       const auto methodID = methodID_mouseScrolled();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_keyPressed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "keyPressed", "method_25404", "keyPressed", "m_7933_"), "(III)Z");
    }

    static jboolean keyPressed(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_keyPressed();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_keyReleased() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "keyReleased", "method_16803", "keyReleased", "m_7920_"), "(III)Z");
    }

    static jboolean keyReleased(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_keyReleased();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_charTyped() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "charTyped", "method_25400", "charTyped", "m_5534_"), "(CI)Z");
    }

    static jboolean charTyped(const jobject& obj, const jchar& arg0, const jint& arg1) {
                
       const auto methodID = methodID_charTyped();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getNavigationPath() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "nextFocusPath", "method_48205", "getNavigationPath", "m_264064_"), "(Lfmo;)Lfhw;");
    }

    static jobject getNavigationPath(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getNavigationPath();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isMouseOver() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "isMouseOver", "method_25405", "isMouseOver", "m_5953_"), "(DD)Z");
    }

    static jboolean isMouseOver(const jobject& obj, const jdouble& arg0, const jdouble& arg1) {
                
       const auto methodID = methodID_isMouseOver();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_setFocused() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setFocused", "method_25365", "setFocused", "m_93692_"), "(Z)V");
    }

    static void setFocused(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setFocused();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isFocused() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aO_", "isFocused", "method_25370", "isFocused", "m_93696_"), "()Z");
    }

    static jboolean isFocused(const jobject& obj) {
                
       const auto methodID = methodID_isFocused();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getFocusedPath() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aP_", "getCurrentFocusPath", "method_48218", "getFocusedPath", "m_264435_"), "()Lfhw;");
    }

    static jobject getFocusedPath(const jobject& obj) {
                
       const auto methodID = methodID_getFocusedPath();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getNavigationFocus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("H", "getRectangle", "method_48202", "getNavigationFocus", "m_264198_"), "()Lfms;");
    }

    static jobject getNavigationFocus(const jobject& obj) {
                
       const auto methodID = methodID_getNavigationFocus();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_ELEMENT_HPP