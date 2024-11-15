// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_UTIL_SELECTIONMANAGER_HPP
#define NET_MINECRAFT_CLIENT_UTIL_SELECTIONMANAGER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.util.SelectionManager
 * Remapped: flg
 */
namespace SelectionManager {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("flg", "net/minecraft/client/gui/font/TextFieldHelper", "net/minecraft/class_3728", "net/minecraft/client/util/SelectionManager", "net/minecraft/src/C_3515_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.util.SelectionManager#stringGetter
    static jobject get_field_stringGetter(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "getMessageFn", "field_24257", "stringGetter", "f_95129_"), "Ljava/util/function/Supplier;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.util.SelectionManager#stringGetter
    static void set_field_stringGetter(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "getMessageFn", "field_24257", "stringGetter", "f_95129_"), "Ljava/util/function/Supplier;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.util.SelectionManager#stringSetter
    static jobject get_field_stringSetter(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "setMessageFn", "field_24258", "stringSetter", "f_95130_"), "Ljava/util/function/Consumer;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.util.SelectionManager#stringSetter
    static void set_field_stringSetter(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "setMessageFn", "field_24258", "stringSetter", "f_95130_"), "Ljava/util/function/Consumer;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.util.SelectionManager#clipboardGetter
    static jobject get_field_clipboardGetter(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "getClipboardFn", "field_16456", "clipboardGetter", "f_95131_"), "Ljava/util/function/Supplier;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.util.SelectionManager#clipboardGetter
    static void set_field_clipboardGetter(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "getClipboardFn", "field_16456", "clipboardGetter", "f_95131_"), "Ljava/util/function/Supplier;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.util.SelectionManager#clipboardSetter
    static jobject get_field_clipboardSetter(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "setClipboardFn", "field_16458", "clipboardSetter", "f_95132_"), "Ljava/util/function/Consumer;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.util.SelectionManager#clipboardSetter
    static void set_field_clipboardSetter(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "setClipboardFn", "field_16458", "clipboardSetter", "f_95132_"), "Ljava/util/function/Consumer;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.util.SelectionManager#stringFilter
    static jobject get_field_stringFilter(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "stringValidator", "field_24259", "stringFilter", "f_95133_"), "Ljava/util/function/Predicate;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.util.SelectionManager#stringFilter
    static void set_field_stringFilter(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "stringValidator", "field_24259", "stringFilter", "f_95133_"), "Ljava/util/function/Predicate;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.util.SelectionManager#selectionStart
    static jint get_field_selectionStart(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "cursorPos", "field_16453", "selectionStart", "f_95134_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.util.SelectionManager#selectionStart
    static void set_field_selectionStart(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "cursorPos", "field_16453", "selectionStart", "f_95134_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.util.SelectionManager#selectionEnd
    static jint get_field_selectionEnd(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "selectionPos", "field_16452", "selectionEnd", "f_95135_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.util.SelectionManager#selectionEnd
    static void set_field_selectionEnd(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "selectionPos", "field_16452", "selectionEnd", "f_95135_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_makeClipboardGetter() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createClipboardGetter", "method_27550", "makeClipboardGetter", "m_95153_"), "(Lfgo;)Ljava/util/function/Supplier;");
    }

    static jobject makeClipboardGetter(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_makeClipboardGetter();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getClipboard() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getClipboardContents", "method_27556", "getClipboard", "m_95169_"), "(Lfgo;)Ljava/lang/String;");
    }

    static jobject getClipboard(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getClipboard();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_makeClipboardSetter() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "createClipboardSetter", "method_27561", "makeClipboardSetter", "m_95182_"), "(Lfgo;)Ljava/util/function/Consumer;");
    }

    static jobject makeClipboardSetter(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_makeClipboardSetter();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_setClipboard() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "setClipboardContents", "method_27551", "setClipboard", "m_95155_"), "(Lfgo;Ljava/lang/String;)V");
    }

    static void setClipboard(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_setClipboard();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_insert() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "charTyped", "method_16199", "insert", "m_95143_"), "(C)Z");
    }

    static jboolean insert(const jobject& obj, const jchar& arg0) {
                
       const auto methodID = methodID_insert();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_handleSpecialKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "keyPressed", "method_16202", "handleSpecialKey", "m_95145_"), "(I)Z");
    }

    static jboolean handleSpecialKey(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_handleSpecialKey();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_clampCursorPosition() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "clampToMsgLength", "method_27567", "clampCursorPosition", "m_95195_"), "(I)I");
    }

    static jint clampCursorPosition(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_clampCursorPosition();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__insert() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "insertText", "method_27552", "insert", "m_95160_"), "(Ljava/lang/String;Ljava/lang/String;)V");
    }

    static void _insert(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__insert();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID___insert() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "insertText", "method_16197", "insert", "m_95158_"), "(Ljava/lang/String;)V");
    }

    static void __insert(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID___insert();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_updateSelectionRange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "resetSelectionIfNeeded", "method_27562", "updateSelectionRange", "m_95163_"), "(Z)V");
    }

    static void updateSelectionRange(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_updateSelectionRange();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_moveCursor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "moveBy", "method_42575", "moveCursor", "m_232575_"), "(IZLflg$a;)V");
    }

    static void moveCursor(const jobject& obj, const jint& arg0, const jboolean& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_moveCursor();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__moveCursor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "moveByChars", "method_35727", "moveCursor", "m_169093_"), "(I)V");
    }

    static void _moveCursor(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID__moveCursor();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID___moveCursor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "moveByChars", "method_27549", "moveCursor", "m_95150_"), "(IZ)V");
    }

    static void __moveCursor(const jobject& obj, const jint& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID___moveCursor();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_moveCursorPastWord() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "moveByWords", "method_35728", "moveCursorPastWord", "m_169095_"), "(I)V");
    }

    static void moveCursorPastWord(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_moveCursorPastWord();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__moveCursorPastWord() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "moveByWords", "method_27555", "moveCursorPastWord", "m_95166_"), "(IZ)V");
    }

    static void _moveCursorPastWord(const jobject& obj, const jint& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID__moveCursorPastWord();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_delete() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "removeFromCursor", "method_42574", "delete", "m_232572_"), "(ILflg$a;)V");
    }

    static void delete(const jobject& obj, const jint& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_delete();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_deleteWord() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "removeWordsFromCursor", "method_42576", "deleteWord", "m_232579_"), "(I)V");
    }

    static void deleteWord(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_deleteWord();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__delete() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "removeCharsFromCursor", "method_27564", "delete", "m_95189_"), "(I)V");
    }

    static void _delete(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID__delete();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_cut() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "cut", "method_27547", "cut", "m_95142_"), "()V");
    }

    static void cut(const jobject& obj) {
                
       const auto methodID = methodID_cut();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_paste() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "paste", "method_27554", "paste", "m_95165_"), "()V");
    }

    static void paste(const jobject& obj) {
                
       const auto methodID = methodID_paste();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_copy() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "copy", "method_27559", "copy", "m_95178_"), "()V");
    }

    static void copy(const jobject& obj) {
                
       const auto methodID = methodID_copy();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_selectAll() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "selectAll", "method_27563", "selectAll", "m_95188_"), "()V");
    }

    static void selectAll(const jobject& obj) {
                
       const auto methodID = methodID_selectAll();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSelectedText() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getSelected", "method_16200", "getSelectedText", "m_95174_"), "(Ljava/lang/String;)Ljava/lang/String;");
    }

    static jobject getSelectedText(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getSelectedText();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_deleteSelectedText() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "deleteSelection", "method_16198", "deleteSelectedText", "m_95184_"), "(Ljava/lang/String;)Ljava/lang/String;");
    }

    static jobject deleteSelectedText(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_deleteSelectedText();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_moveCursorToStart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "setCursorToStart", "method_35729", "moveCursorToStart", "m_169097_"), "()V");
    }

    static void moveCursorToStart(const jobject& obj) {
                
       const auto methodID = methodID_moveCursorToStart();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID__moveCursorToStart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setCursorToStart", "method_27553", "moveCursorToStart", "m_95176_"), "(Z)V");
    }

    static void _moveCursorToStart(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID__moveCursorToStart();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_putCursorAtEnd() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "setCursorToEnd", "method_16204", "putCursorAtEnd", "m_95193_"), "()V");
    }

    static void putCursorAtEnd(const jobject& obj) {
                
       const auto methodID = methodID_putCursorAtEnd();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_moveCursorToEnd() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setCursorToEnd", "method_27558", "moveCursorToEnd", "m_95186_"), "(Z)V");
    }

    static void moveCursorToEnd(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_moveCursorToEnd();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getSelectionStart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getCursorPos", "method_16201", "getSelectionStart", "m_95194_"), "()I");
    }

    static jint getSelectionStart(const jobject& obj) {
                
       const auto methodID = methodID_getSelectionStart();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_moveCursorTo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "setCursorPos", "method_35730", "moveCursorTo", "m_169098_"), "(I)V");
    }

    static void moveCursorTo(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_moveCursorTo();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__moveCursorTo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "setCursorPos", "method_27560", "moveCursorTo", "m_95179_"), "(IZ)V");
    }

    static void _moveCursorTo(const jobject& obj, const jint& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID__moveCursorTo();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getSelectionEnd() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "getSelectionPos", "method_16203", "getSelectionEnd", "m_95197_"), "()I");
    }

    static jint getSelectionEnd(const jobject& obj) {
                
       const auto methodID = methodID_getSelectionEnd();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_setSelectionEnd() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "setSelectionPos", "method_35731", "setSelectionEnd", "m_169100_"), "(I)V");
    }

    static void setSelectionEnd(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setSelectionEnd();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setSelection() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setSelectionRange", "method_27548", "setSelection", "m_95147_"), "(II)V");
    }

    static void setSelection(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_setSelection();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isSelecting() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "isSelecting", "method_27568", "isSelecting", "m_95198_"), "()Z");
    }

    static jboolean isSelecting(const jobject& obj) {
                
       const auto methodID = methodID_isSelecting();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_UTIL_SELECTIONMANAGER_HPP