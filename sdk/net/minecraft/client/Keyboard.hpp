// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_KEYBOARD_HPP
#define NET_MINECRAFT_CLIENT_KEYBOARD_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.Keyboard
 * Remapped: fgn
 */
namespace Keyboard {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fgn", "net/minecraft/client/KeyboardHandler", "net/minecraft/class_309", "net/minecraft/client/Keyboard", "net/minecraft/src/C_3388_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.Keyboard#DEBUG_CRASH_TIME
    [[maybe_unused]] static jint get_field_DEBUG_CRASH_TIME() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DEBUG_CRASH_TIME", "field_32143", "DEBUG_CRASH_TIME", "f_167812_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.Keyboard#DEBUG_CRASH_TIME
    [[maybe_unused]] static void set_field_DEBUG_CRASH_TIME(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DEBUG_CRASH_TIME", "field_32143", "DEBUG_CRASH_TIME", "f_167812_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.Keyboard#client
    static jobject get_field_client(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "minecraft", "field_1678", "client", "f_90867_"), "Lfgo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.Keyboard#client
    static void set_field_client(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "minecraft", "field_1678", "client", "f_90867_"), "Lfgo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.Keyboard#clipboard
    static jobject get_field_clipboard(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "clipboardManager", "field_16241", "clipboard", "f_90869_"), "Lezy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.Keyboard#clipboard
    static void set_field_clipboard(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "clipboardManager", "field_16241", "clipboard", "f_90869_"), "Lezy;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.Keyboard#debugCrashStartTime
    static jlong get_field_debugCrashStartTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "debugCrashKeyTime", "field_1682", "debugCrashStartTime", "f_90870_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.Keyboard#debugCrashStartTime
    static void set_field_debugCrashStartTime(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "debugCrashKeyTime", "field_1682", "debugCrashStartTime", "f_90870_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.Keyboard#debugCrashLastLogTime
    static jlong get_field_debugCrashLastLogTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "debugCrashKeyReportedTime", "field_1681", "debugCrashLastLogTime", "f_90871_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.Keyboard#debugCrashLastLogTime
    static void set_field_debugCrashLastLogTime(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "debugCrashKeyReportedTime", "field_1681", "debugCrashLastLogTime", "f_90871_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.Keyboard#debugCrashElapsedTime
    static jlong get_field_debugCrashElapsedTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "debugCrashKeyReportedCount", "field_1680", "debugCrashElapsedTime", "f_90872_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.Keyboard#debugCrashElapsedTime
    static void set_field_debugCrashElapsedTime(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "debugCrashKeyReportedCount", "field_1680", "debugCrashElapsedTime", "f_90872_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.Keyboard#switchF3State
    static jboolean get_field_switchF3State(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "handledDebugKey", "field_1679", "switchF3State", "f_90873_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.Keyboard#switchF3State
    static void set_field_switchF3State(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "handledDebugKey", "field_1679", "switchF3State", "f_90873_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_processDebugKeys() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleChunkDebugKeys", "method_35696", "processDebugKeys", "m_167813_"), "(I)Z");
    }

    static jboolean processDebugKeys(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_processDebugKeys();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addDebugMessage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "debugComponent", "method_37273", "addDebugMessage", "m_167824_"), "(Ln;Lwz;)V");
    }

    static void addDebugMessage(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_addDebugMessage();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_debugLog() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "debugFeedbackComponent", "method_37272", "debugLog", "m_167822_"), "(Lwz;)V");
    }

    static void debugLog(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_debugLog();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__debugLog() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "debugFeedbackTranslated", "method_1459", "debugLog", "m_90913_"), "(Ljava/lang/String;[Ljava/lang/Object;)V");
    }

    static void _debugLog(const jobject& obj, const jobject& arg0, const jarray& arg1, const jobject& arg2) {
                
       const auto methodID = methodID__debugLog();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_debugError() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "debugWarningTranslated", "method_1456", "debugError", "m_90948_"), "(Ljava/lang/String;[Ljava/lang/Object;)V");
    }

    static void debugError(const jobject& obj, const jobject& arg0, const jarray& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_debugError();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_debugFormattedLog() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "debugFeedback", "method_35697", "debugFormattedLog", "m_167837_"), "(Ljava/lang/String;[Ljava/lang/Object;)V");
    }

    static void debugFormattedLog(const jobject& obj, const jobject& arg0, const jarray& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_debugFormattedLog();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_processF3() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "handleDebugKeys", "method_1468", "processF3", "m_90932_"), "(I)Z");
    }

    static jboolean processF3(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_processF3();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_copyLookAt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "copyRecreateCommand", "method_1465", "copyLookAt", "m_90928_"), "(ZZ)V");
    }

    static void copyLookAt(const jobject& obj, const jboolean& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_copyLookAt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_copyBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "copyCreateBlockCommand", "method_1475", "copyBlock", "m_90899_"), "(Ldtc;Ljd;Lub;)V");
    }

    static void copyBlock(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_copyBlock();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_copyEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "copyCreateEntityCommand", "method_1469", "copyEntity", "m_90922_"), "(Lakr;Lexc;Lub;)V");
    }

    static void copyEntity(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_copyEntity();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_onKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "keyPress", "method_1466", "onKey", "m_90893_"), "(JIIII)V");
    }

    static void onKey(const jobject& obj, const jlong& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4) {
                
       const auto methodID = methodID_onKey();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_onChar() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "charTyped", "method_1457", "onChar", "m_90889_"), "(JII)V");
    }

    static void onChar(const jobject& obj, const jlong& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_onChar();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_setup() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setup", "method_1472", "setup", "m_90887_"), "(J)V");
    }

    static void setup(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_setup();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getClipboard() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getClipboard", "method_1460", "getClipboard", "m_90876_"), "()Ljava/lang/String;");
    }

    static jobject getClipboard(const jobject& obj) {
                
       const auto methodID = methodID_getClipboard();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setClipboard() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setClipboard", "method_1455", "setClipboard", "m_90911_"), "(Ljava/lang/String;)V");
    }

    static void setClipboard(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setClipboard();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_pollDebugCrash() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "tick", "method_1474", "pollDebugCrash", "m_90931_"), "()V");
    }

    static void pollDebugCrash(const jobject& obj) {
                
       const auto methodID = methodID_pollDebugCrash();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_KEYBOARD_HPP