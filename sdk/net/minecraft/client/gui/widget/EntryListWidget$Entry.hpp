// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_WIDGET_ENTRYLISTWIDGET$ENTRY_HPP
#define NET_MINECRAFT_CLIENT_GUI_WIDGET_ENTRYLISTWIDGET$ENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.widget.EntryListWidget$Entry
 * Remapped: fih$a
 */
namespace EntryListWidget$Entry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fih$a", "net/minecraft/client/gui/components/AbstractSelectionList$Entry", "net/minecraft/class_350$class_351", "net/minecraft/client/gui/widget/EntryListWidget$Entry", "net/minecraft/src/C_3443_$C_3445_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.client.gui.widget.EntryListWidget$Entry#parentList
    static jobject get_field_parentList(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "list", "field_22752", "parentList", "f_93521_"), "Lfih;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.widget.EntryListWidget$Entry#parentList
    static void set_field_parentList(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "list", "field_22752", "parentList", "f_93521_"), "Lfih;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
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
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_25343", "render", "m_6311_"), "(Lfhz;IIIIIIIZF)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jint& arg5, const jint& arg6, const jint& arg7, const jboolean& arg8, const jfloat& arg9) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    };
    
    static jmethodID methodID_drawBorder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "renderBack", "method_49568", "drawBorder", "m_274437_"), "(Lfhz;IIIIIIIZF)V");
    }

    static void drawBorder(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jint& arg5, const jint& arg6, const jint& arg7, const jboolean& arg8, const jfloat& arg9) {
                
       const auto methodID = methodID_drawBorder();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    };
    
    static jmethodID methodID_isMouseOver() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "isMouseOver", "method_25405", "isMouseOver", "m_5953_"), "(DD)Z");
    }

    static jboolean isMouseOver(const jobject& obj, const jdouble& arg0, const jdouble& arg1) {
                
       const auto methodID = methodID_isMouseOver();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_WIDGET_ENTRYLISTWIDGET$ENTRY_HPP