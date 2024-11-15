// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_OPTION_CONTROLSLISTWIDGET$CATEGORYENTRY_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_OPTION_CONTROLSLISTWIDGET$CATEGORYENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.option.ControlsListWidget$CategoryEntry
 * Remapped: frn$a
 */
namespace ControlsListWidget$CategoryEntry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("frn$a", "net/minecraft/client/gui/screens/options/controls/KeyBindsList$CategoryEntry", "net/minecraft/class_459$class_460", "net/minecraft/client/gui/screen/option/ControlsListWidget$CategoryEntry", "net/minecraft/src/C_336466_$C_336529_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.client.gui.screen.option.ControlsListWidget$CategoryEntry#text
    static jobject get_field_text(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "name", "field_2736", "text", "f_337220_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.option.ControlsListWidget$CategoryEntry#text
    static void set_field_text(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "name", "field_2736", "text", "f_337220_"), "Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.option.ControlsListWidget$CategoryEntry#textWidth
    static jint get_field_textWidth(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "width", "field_2737", "textWidth", "f_336680_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.option.ControlsListWidget$CategoryEntry#textWidth
    static void set_field_textWidth(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "width", "field_2737", "textWidth", "f_336680_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_25343", "render", "m_6311_"), "(Lfhz;IIIIIIIZF)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jint& arg5, const jint& arg6, const jint& arg7, const jboolean& arg8, const jfloat& arg9) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    };
    
    static jmethodID methodID_getNavigationPath() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "nextFocusPath", "method_48205", "getNavigationPath", "m_264064_"), "(Lfmo;)Lfhw;");
    }

    static jobject getNavigationPath(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getNavigationPath();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_children() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aK_", "children", "method_25396", "children", "m_6702_"), "()Ljava/util/List;");
    }

    static jobject children(const jobject& obj) {
                
       const auto methodID = methodID_children();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_selectableChildren() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "narratables", "method_37025", "selectableChildren", "m_142437_"), "()Ljava/util/List;");
    }

    static jobject selectableChildren(const jobject& obj) {
                
       const auto methodID = methodID_selectableChildren();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_update() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "refreshEntry", "method_48269", "update", "m_338442_"), "()V");
    }

    static void update(const jobject& obj) {
                
       const auto methodID = methodID_update();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_OPTION_CONTROLSLISTWIDGET$CATEGORYENTRY_HPP