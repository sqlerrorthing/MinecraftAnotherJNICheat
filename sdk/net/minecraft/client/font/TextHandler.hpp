// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_FONT_TEXTHANDLER_HPP
#define NET_MINECRAFT_CLIENT_FONT_TEXTHANDLER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.font.TextHandler
 * Remapped: fgz
 */
namespace TextHandler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fgz", "net/minecraft/client/StringSplitter", "net/minecraft/class_5225", "net/minecraft/client/font/TextHandler", "net/minecraft/src/C_3410_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.client.font.TextHandler#widthRetriever
    static jobject get_field_widthRetriever(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "widthProvider", "field_24216", "widthRetriever", "f_92333_"), "Lfgz$f;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.font.TextHandler#widthRetriever
    static void set_field_widthRetriever(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "widthProvider", "field_24216", "widthRetriever", "f_92333_"), "Lfgz$f;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "stringWidth", "method_27482", "getWidth", "m_92353_"), "(Ljava/lang/String;)F");
    }

    static jfloat getWidth(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getWidth();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__getWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "stringWidth", "method_27488", "getWidth", "m_92384_"), "(Lxe;)F");
    }

    static jfloat _getWidth(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__getWidth();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID___getWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "stringWidth", "method_30875", "getWidth", "m_92336_"), "(Laya;)F");
    }

    static jfloat __getWidth(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID___getWidth();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getTrimmedLength() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "plainIndexAtWidth", "method_27484", "getTrimmedLength", "m_92360_"), "(Ljava/lang/String;ILxw;)I");
    }

    static jint getTrimmedLength(const jobject& obj, const jobject& arg0, const jint& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getTrimmedLength();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_trimToWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "plainHeadByWidth", "method_27494", "trimToWidth", "m_92410_"), "(Ljava/lang/String;ILxw;)Ljava/lang/String;");
    }

    static jobject trimToWidth(const jobject& obj, const jobject& arg0, const jint& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_trimToWidth();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_trimToWidthBackwards() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "plainTailByWidth", "method_27497", "trimToWidthBackwards", "m_92423_"), "(Ljava/lang/String;ILxw;)Ljava/lang/String;");
    }

    static jobject trimToWidthBackwards(const jobject& obj, const jobject& arg0, const jint& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_trimToWidthBackwards();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getLimitedStringLength() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "formattedIndexByWidth", "method_35715", "getLimitedStringLength", "m_168626_"), "(Ljava/lang/String;ILxw;)I");
    }

    static jint getLimitedStringLength(const jobject& obj, const jobject& arg0, const jint& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getLimitedStringLength();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getStyleAt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "componentStyleAtWidth", "method_27489", "getStyleAt", "m_92386_"), "(Lxe;I)Lxw;");
    }

    static jobject getStyleAt(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_getStyleAt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__getStyleAt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "componentStyleAtWidth", "method_30876", "getStyleAt", "m_92338_"), "(Laya;I)Lxw;");
    }

    static jobject _getStyleAt(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID__getStyleAt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_limitString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "formattedHeadByWidth", "method_35716", "limitString", "m_168630_"), "(Ljava/lang/String;ILxw;)Ljava/lang/String;");
    }

    static jobject limitString(const jobject& obj, const jobject& arg0, const jint& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_limitString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__trimToWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "headByWidth", "method_27490", "trimToWidth", "m_92389_"), "(Lxe;ILxw;)Lxe;");
    }

    static jobject _trimToWidth(const jobject& obj, const jobject& arg0, const jint& arg1, const jobject& arg2) {
                
       const auto methodID = methodID__trimToWidth();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getEndingIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "findLineBreak", "method_35717", "getEndingIndex", "m_168634_"), "(Ljava/lang/String;ILxw;)I");
    }

    static jint getEndingIndex(const jobject& obj, const jobject& arg0, const jint& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getEndingIndex();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_moveCursorByWords() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getWordPosition", "method_27483", "moveCursorByWords", "m_92355_"), "(Ljava/lang/String;IIZ)I");
    }

    static jint moveCursorByWords(const jobject& arg0, const jint& arg1, const jint& arg2, const jboolean& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_moveCursorByWords();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_wrapLines() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "splitLines", "method_27485", "wrapLines", "m_92364_"), "(Ljava/lang/String;ILxw;ZLfgz$d;)V");
    }

    static void wrapLines(const jobject& obj, const jobject& arg0, const jint& arg1, const jobject& arg2, const jboolean& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_wrapLines();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID__wrapLines() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "splitLines", "method_27498", "wrapLines", "m_92432_"), "(Ljava/lang/String;ILxw;)Ljava/util/List;");
    }

    static jobject _wrapLines(const jobject& obj, const jobject& arg0, const jint& arg1, const jobject& arg2) {
                
       const auto methodID = methodID__wrapLines();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID___wrapLines() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "splitLines", "method_27495", "wrapLines", "m_92414_"), "(Lxe;ILxw;)Ljava/util/List;");
    }

    static jobject __wrapLines(const jobject& obj, const jobject& arg0, const jint& arg1, const jobject& arg2) {
                
       const auto methodID = methodID___wrapLines();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID____wrapLines() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "splitLines", "method_35714", "wrapLines", "m_168621_"), "(Lxe;ILxw;Lxe;)Ljava/util/List;");
    }

    static jobject ___wrapLines(const jobject& obj, const jobject& arg0, const jint& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID____wrapLines();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_____wrapLines() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "splitLines", "method_29971", "wrapLines", "m_92393_"), "(Lxe;ILxw;Ljava/util/function/BiConsumer;)V");
    }

    static void ____wrapLines(const jobject& obj, const jobject& arg0, const jint& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_____wrapLines();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_FONT_TEXTHANDLER_HPP