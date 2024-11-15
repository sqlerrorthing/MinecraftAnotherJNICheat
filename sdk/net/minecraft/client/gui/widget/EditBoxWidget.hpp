// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_WIDGET_EDITBOXWIDGET_HPP
#define NET_MINECRAFT_CLIENT_GUI_WIDGET_EDITBOXWIDGET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.widget.EditBoxWidget
 * Remapped: fje
 */
namespace EditBoxWidget {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fje", "net/minecraft/client/gui/components/MultiLineEditBox", "net/minecraft/class_7529", "net/minecraft/client/gui/widget/EditBoxWidget", "net/minecraft/src/C_238461_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.widget.EditBoxWidget#CURSOR_PADDING
    [[maybe_unused]] static jint get_field_CURSOR_PADDING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CURSOR_INSERT_WIDTH", "field_39502", "CURSOR_PADDING", "f_238826_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.EditBoxWidget#CURSOR_PADDING
    [[maybe_unused]] static void set_field_CURSOR_PADDING(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CURSOR_INSERT_WIDTH", "field_39502", "CURSOR_PADDING", "f_238826_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.widget.EditBoxWidget#CURSOR_COLOR
    [[maybe_unused]] static jint get_field_CURSOR_COLOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CURSOR_INSERT_COLOR", "field_39503", "CURSOR_COLOR", "f_238688_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.EditBoxWidget#CURSOR_COLOR
    [[maybe_unused]] static void set_field_CURSOR_COLOR(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CURSOR_INSERT_COLOR", "field_39503", "CURSOR_COLOR", "f_238688_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.widget.EditBoxWidget#UNDERSCORE
    [[maybe_unused]] static jobject get_field_UNDERSCORE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CURSOR_APPEND_CHARACTER", "field_39504", "UNDERSCORE", "f_238647_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.EditBoxWidget#UNDERSCORE
    [[maybe_unused]] static void set_field_UNDERSCORE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CURSOR_APPEND_CHARACTER", "field_39504", "UNDERSCORE", "f_238647_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.widget.EditBoxWidget#FOCUSED_BOX_TEXT_COLOR
    [[maybe_unused]] static jint get_field_FOCUSED_BOX_TEXT_COLOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "TEXT_COLOR", "field_39505", "FOCUSED_BOX_TEXT_COLOR", "f_238712_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.EditBoxWidget#FOCUSED_BOX_TEXT_COLOR
    [[maybe_unused]] static void set_field_FOCUSED_BOX_TEXT_COLOR(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "TEXT_COLOR", "field_39505", "FOCUSED_BOX_TEXT_COLOR", "f_238712_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.widget.EditBoxWidget#UNFOCUSED_BOX_TEXT_COLOR
    [[maybe_unused]] static jint get_field_UNFOCUSED_BOX_TEXT_COLOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "PLACEHOLDER_TEXT_COLOR", "field_39506", "UNFOCUSED_BOX_TEXT_COLOR", "f_238758_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.EditBoxWidget#UNFOCUSED_BOX_TEXT_COLOR
    [[maybe_unused]] static void set_field_UNFOCUSED_BOX_TEXT_COLOR(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "PLACEHOLDER_TEXT_COLOR", "field_39506", "UNFOCUSED_BOX_TEXT_COLOR", "f_238758_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.widget.EditBoxWidget#CURSOR_BLINK_INTERVAL
    [[maybe_unused]] static jint get_field_CURSOR_BLINK_INTERVAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "CURSOR_BLINK_INTERVAL_MS", "field_45363", "CURSOR_BLINK_INTERVAL", "f_290722_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.EditBoxWidget#CURSOR_BLINK_INTERVAL
    [[maybe_unused]] static void set_field_CURSOR_BLINK_INTERVAL(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "CURSOR_BLINK_INTERVAL_MS", "field_45363", "CURSOR_BLINK_INTERVAL", "f_290722_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.widget.EditBoxWidget#textRenderer
    static jobject get_field_textRenderer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "font", "field_39507", "textRenderer", "f_238790_"), "Lfhx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.EditBoxWidget#textRenderer
    static void set_field_textRenderer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "font", "field_39507", "textRenderer", "f_238790_"), "Lfhx;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.widget.EditBoxWidget#placeholder
    static jobject get_field_placeholder(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "placeholder", "field_39508", "placeholder", "f_238653_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.EditBoxWidget#placeholder
    static void set_field_placeholder(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "placeholder", "field_39508", "placeholder", "f_238653_"), "Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.widget.EditBoxWidget#editBox
    static jobject get_field_editBox(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "textField", "field_39509", "editBox", "f_238540_"), "Lfjh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.EditBoxWidget#editBox
    static void set_field_editBox(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "textField", "field_39509", "editBox", "f_238540_"), "Lfjh;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.widget.EditBoxWidget#lastSwitchFocusTime
    static jlong get_field_lastSwitchFocusTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "focusedTime", "field_45364", "lastSwitchFocusTime", "f_291262_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.EditBoxWidget#lastSwitchFocusTime
    static void set_field_lastSwitchFocusTime(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "focusedTime", "field_45364", "lastSwitchFocusTime", "f_291262_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    static jmethodID methodID_setMaxLength() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setCharacterLimit", "method_44402", "setMaxLength", "m_239313_"), "(I)V");
    }

    static void setMaxLength(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setMaxLength();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setChangeListener() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setValueListener", "method_44401", "setChangeListener", "m_239273_"), "(Ljava/util/function/Consumer;)V");
    }

    static void setChangeListener(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setChangeListener();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setText() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setValue", "method_44400", "setText", "m_240159_"), "(Ljava/lang/String;)V");
    }

    static void setText(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setText();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getText() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "getValue", "method_44405", "getText", "m_239249_"), "()Ljava/lang/String;");
    }

    static jobject getText(const jobject& obj) {
                
       const auto methodID = methodID_getText();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_appendClickableNarrations() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateWidgetNarration", "method_47399", "appendClickableNarrations", "m_168797_"), "(Lfmi;)V");
    }

    static void appendClickableNarrations(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_appendClickableNarrations();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_mouseClicked() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mouseClicked", "method_25402", "mouseClicked", "m_6375_"), "(DDI)Z");
    }

    static jboolean mouseClicked(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jint& arg2) {
                
       const auto methodID = methodID_mouseClicked();
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
    
    static jmethodID methodID_keyPressed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "keyPressed", "method_25404", "keyPressed", "m_7933_"), "(III)Z");
    }

    static jboolean keyPressed(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_keyPressed();
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
    
    static jmethodID methodID_renderContents() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "renderContents", "method_44389", "renderContents", "m_239197_"), "(Lfhz;IIF)V");
    }

    static void renderContents(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_renderContents();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_renderOverlay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderDecorations", "method_44384", "renderOverlay", "m_239516_"), "(Lfhz;)V");
    }

    static void renderOverlay(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_renderOverlay();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getContentsHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "getInnerHeight", "method_44391", "getContentsHeight", "m_239019_"), "()I");
    }

    static jint getContentsHeight(const jobject& obj) {
                
       const auto methodID = methodID_getContentsHeight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_overflows() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "scrollbarVisible", "method_44392", "overflows", "m_239656_"), "()Z");
    }

    static jboolean overflows(const jobject& obj) {
                
       const auto methodID = methodID_overflows();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDeltaYPerScroll() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "scrollRate", "method_44393", "getDeltaYPerScroll", "m_239725_"), "()D");
    }

    static jdouble getDeltaYPerScroll(const jobject& obj) {
                
       const auto methodID = methodID_getDeltaYPerScroll();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_drawSelection() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "renderHighlight", "method_44403", "drawSelection", "m_280065_"), "(Lfhz;IIII)V");
    }

    static void drawSelection(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4) {
                
       const auto methodID = methodID_drawSelection();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_onCursorChange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "scrollToCursor", "method_44407", "onCursorChange", "m_239911_"), "()V");
    }

    static void onCursorChange(const jobject& obj) {
                
       const auto methodID = methodID_onCursorChange();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMaxLinesWithoutOverflow() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "getDisplayableLineCount", "method_44408", "getMaxLinesWithoutOverflow", "m_239745_"), "()D");
    }

    static jdouble getMaxLinesWithoutOverflow(const jobject& obj) {
                
       const auto methodID = methodID_getMaxLinesWithoutOverflow();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_moveCursor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "seekCursorScreen", "method_44404", "moveCursor", "m_239275_"), "(DD)V");
    }

    static void moveCursor(const jobject& obj, const jdouble& arg0, const jdouble& arg1) {
                
       const auto methodID = methodID_moveCursor();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_setFocused() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setFocused", "method_25365", "setFocused", "m_93692_"), "(Z)V");
    }

    static void setFocused(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setFocused();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_WIDGET_EDITBOXWIDGET_HPP