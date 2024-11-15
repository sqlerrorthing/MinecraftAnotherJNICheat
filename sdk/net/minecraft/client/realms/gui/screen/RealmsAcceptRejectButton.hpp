// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSACCEPTREJECTBUTTON_HPP
#define NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSACCEPTREJECTBUTTON_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.gui.screen.RealmsAcceptRejectButton
 * Remapped: fdq
 */
namespace RealmsAcceptRejectButton {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fdq", "com/mojang/realmsclient/gui/RowButton", "net/minecraft/class_4371", "net/minecraft/client/realms/gui/screen/RealmsAcceptRejectButton", "net/minecraft/src/C_3282_"));
        }
        return cachedClass;
    };

    // getter for public field net.minecraft.client.realms.gui.screen.RealmsAcceptRejectButton#width
    static jint get_field_width(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "width", "field_19690", "width", "f_88007_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.gui.screen.RealmsAcceptRejectButton#width
    static void set_field_width(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "width", "field_19690", "width", "f_88007_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.gui.screen.RealmsAcceptRejectButton#height
    static jint get_field_height(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "height", "field_19691", "height", "f_88008_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.gui.screen.RealmsAcceptRejectButton#height
    static void set_field_height(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "height", "field_19691", "height", "f_88008_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.gui.screen.RealmsAcceptRejectButton#x
    static jint get_field_x(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "xOffset", "field_19692", "x", "f_88009_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.gui.screen.RealmsAcceptRejectButton#x
    static void set_field_x(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "xOffset", "field_19692", "x", "f_88009_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.gui.screen.RealmsAcceptRejectButton#y
    static jint get_field_y(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "yOffset", "field_19693", "y", "f_88010_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.gui.screen.RealmsAcceptRejectButton#y
    static void set_field_y(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "yOffset", "field_19693", "y", "f_88010_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "drawForRowAt", "method_21111", "render", "m_88018_"), "(Lfhz;IIII)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID__render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "draw", "method_21112", "render", "m_7537_"), "(Lfhz;IIZ)V");
    }

    static void _render(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jboolean& arg3) {
                
       const auto methodID = methodID__render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getRight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getRight", "method_21109", "getRight", "m_88016_"), "()I");
    }

    static jint getRight(const jobject& obj) {
                
       const auto methodID = methodID_getRight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBottom() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getBottom", "method_21115", "getBottom", "m_88043_"), "()I");
    }

    static jint getBottom(const jobject& obj) {
                
       const auto methodID = methodID_getBottom();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_handleClick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onClick", "method_21110", "handleClick", "m_7516_"), "(I)V");
    }

    static void handleClick(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_handleClick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID___render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "drawButtonsInRow", "method_21113", "render", "m_280516_"), "(Lfhz;Ljava/util/List;Lgwp;IIII)V");
    }

    static void __render(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jint& arg3, const jint& arg4, const jint& arg5, const jint& arg6) {
       const auto clazz = self();
       const auto methodID = methodID___render();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID__handleClick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "rowButtonMouseClicked", "method_21114", "handleClick", "m_88036_"), "(Lgwp;Lfji$a;Ljava/util/List;IDD)V");
    }

    static void _handleClick(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jint& arg3, const jdouble& arg4, const jdouble& arg5) {
       const auto clazz = self();
       const auto methodID = methodID__handleClick();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSACCEPTREJECTBUTTON_HPP