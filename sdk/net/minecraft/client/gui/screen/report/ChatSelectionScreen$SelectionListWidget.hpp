// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_REPORT_CHATSELECTIONSCREEN$SELECTIONLISTWIDGET_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_REPORT_CHATSELECTIONSCREEN$SELECTIONLISTWIDGET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.report.ChatSelectionScreen$SelectionListWidget
 * Remapped: fsn$a
 */
namespace ChatSelectionScreen$SelectionListWidget {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fsn$a", "net/minecraft/client/gui/screens/reporting/ChatSelectionScreen$ChatSelectionList", "net/minecraft/class_7543$class_7544", "net/minecraft/client/gui/screen/report/ChatSelectionScreen$SelectionListWidget", "net/minecraft/src/C_238447_$C_238511_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.gui.screen.report.ChatSelectionScreen$SelectionListWidget#lastSenderEntryPair
    static jobject get_field_lastSenderEntryPair(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "previousHeading", "field_39593", "lastSenderEntryPair", "f_238832_"), "Lfsn$a$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.report.ChatSelectionScreen$SelectionListWidget#lastSenderEntryPair
    static void set_field_lastSenderEntryPair(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "previousHeading", "field_39593", "lastSenderEntryPair", "f_238832_"), "Lfsn$a$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_setScrollAmount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setScrollAmount", "method_25307", "setScrollAmount", "m_93410_"), "(D)V");
    }

    static void setScrollAmount(const jobject& obj, const jdouble& arg0) {
                
       const auto methodID = methodID_setScrollAmount();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addMessage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "acceptMessage", "method_44490", "addMessage", "m_239761_"), "(ILgad$a;)V");
    }

    static void addMessage(const jobject& obj, const jint& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_addMessage();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_addSenderEntry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateHeading", "method_44511", "addSenderEntry", "m_240017_"), "(Lgad$a;Z)V");
    }

    static void addSenderEntry(const jobject& obj, const jobject& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_addSenderEntry();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_addText() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "acceptDivider", "method_44492", "addText", "m_239556_"), "(Lwz;)V");
    }

    static void addText(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addText();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getRowWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getRowWidth", "method_25322", "getRowWidth", "m_5759_"), "()I");
    }

    static jint getRowWidth(const jobject& obj) {
                
       const auto methodID = methodID_getRowWidth();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDisplayedItemCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getMaxVisibleEntries", "method_44513", "getDisplayedItemCount", "m_239954_"), "()I");
    }

    static jint getDisplayedItemCount(const jobject& obj) {
                
       const auto methodID = methodID_getDisplayedItemCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_renderEntry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderItem", "method_44397", "renderEntry", "m_238964_"), "(Lfhz;IIFIIIII)V");
    }

    static void renderEntry(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3, const jint& arg4, const jint& arg5, const jint& arg6, const jint& arg7, const jint& arg8) {
                
       const auto methodID = methodID_renderEntry();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    };
    
    static jmethodID methodID_shouldHighlight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "shouldHighlightEntry", "method_44693", "shouldHighlight", "m_240326_"), "(Lfsn$a$b;)Z");
    }

    static jboolean shouldHighlight(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_shouldHighlight();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getNeighboringEntry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "nextEntry", "method_48284", "getNeighboringEntry", "m_264254_"), "(Lfmq;)Lfsn$a$b;");
    }

    static jobject getNeighboringEntry(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getNeighboringEntry();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setSelected() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setSelected", "method_48283", "setSelected", "m_6987_"), "(Lfsn$a$b;)V");
    }

    static void setSelected(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setSelected();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_keyPressed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "keyPressed", "method_25404", "keyPressed", "m_7933_"), "(III)Z");
    }

    static jboolean keyPressed(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_keyPressed();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getContextMessageY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("J", "getFooterTop", "method_44665", "getContextMessageY", "m_239341_"), "()I");
    }

    static jint getContextMessageY(const jobject& obj) {
                
       const auto methodID = methodID_getContextMessageY();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_REPORT_CHATSELECTIONSCREEN$SELECTIONLISTWIDGET_HPP