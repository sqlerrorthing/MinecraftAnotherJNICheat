// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_REPORT_CHATSELECTIONSCREEN$SELECTIONLISTWIDGET$SEPARATORENTRY_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_REPORT_CHATSELECTIONSCREEN$SELECTIONLISTWIDGET$SEPARATORENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.report.ChatSelectionScreen$SelectionListWidget$SeparatorEntry
 * Remapped: fsn$a$f
 */
namespace ChatSelectionScreen$SelectionListWidget$SeparatorEntry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fsn$a$f", "net/minecraft/client/gui/screens/reporting/ChatSelectionScreen$ChatSelectionList$PaddingEntry", "net/minecraft/class_7543$class_7544$class_7550", "net/minecraft/client/gui/screen/report/ChatSelectionScreen$SelectionListWidget$SeparatorEntry", "net/minecraft/src/C_238447_$C_238511_$C_238483_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_25343", "render", "m_6311_"), "(Lfhz;IIIIIIIZF)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jint& arg5, const jint& arg6, const jint& arg7, const jboolean& arg8, const jfloat& arg9) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_REPORT_CHATSELECTIONSCREEN$SELECTIONLISTWIDGET$SEPARATORENTRY_HPP