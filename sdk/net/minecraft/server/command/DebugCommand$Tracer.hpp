// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_DEBUGCOMMAND$TRACER_HPP
#define NET_MINECRAFT_SERVER_COMMAND_DEBUGCOMMAND$TRACER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.DebugCommand$Tracer
 * Remapped: amk$b
 */
namespace DebugCommand$Tracer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("amk$b", "net/minecraft/server/commands/DebugCommand$Tracer", "net/minecraft/class_3032$class_6347", "net/minecraft/server/command/DebugCommand$Tracer", "net/minecraft/src/C_5309_$C_141896_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.server.command.DebugCommand$Tracer#MARGIN
    [[maybe_unused]] static jint get_field_MARGIN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "INDENT_OFFSET", "field_33550", "MARGIN", "f_180074_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.server.command.DebugCommand$Tracer#MARGIN
    [[maybe_unused]] static void set_field_MARGIN(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "INDENT_OFFSET", "field_33550", "MARGIN", "f_180074_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.server.command.DebugCommand$Tracer#writer
    static jobject get_field_writer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "output", "field_33551", "writer", "f_180075_"), "Ljava/io/PrintWriter;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.command.DebugCommand$Tracer#writer
    static void set_field_writer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "output", "field_33551", "writer", "f_180075_"), "Ljava/io/PrintWriter;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.command.DebugCommand$Tracer#lastIndentWidth
    static jint get_field_lastIndentWidth(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "lastIndent", "field_33552", "lastIndentWidth", "f_180076_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.command.DebugCommand$Tracer#lastIndentWidth
    static void set_field_lastIndentWidth(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "lastIndent", "field_33552", "lastIndentWidth", "f_180076_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.command.DebugCommand$Tracer#expectsCommandResult
    static jboolean get_field_expectsCommandResult(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "waitingForResult", "field_33553", "expectsCommandResult", "f_180077_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.command.DebugCommand$Tracer#expectsCommandResult
    static void set_field_expectsCommandResult(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "waitingForResult", "field_33553", "expectsCommandResult", "f_180077_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_writeIndent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "indentAndSave", "method_36355", "writeIndent", "m_180081_"), "(I)V");
    }

    static void writeIndent(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_writeIndent();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_writeIndentWithoutRememberingWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "printIndent", "method_36356", "writeIndentWithoutRememberingWidth", "m_180097_"), "(I)V");
    }

    static void writeIndentWithoutRememberingWidth(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_writeIndentWithoutRememberingWidth();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_writeNewLine() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "newLine", "method_36357", "writeNewLine", "m_180103_"), "()V");
    }

    static void writeNewLine(const jobject& obj) {
                
       const auto methodID = methodID_writeNewLine();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_traceCommandStart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onCommand", "method_36349", "traceCommandStart", "m_180083_"), "(ILjava/lang/String;)V");
    }

    static void traceCommandStart(const jobject& obj, const jint& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_traceCommandStart();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_traceCommandEnd() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onReturn", "method_36350", "traceCommandEnd", "m_180086_"), "(ILjava/lang/String;I)V");
    }

    static void traceCommandEnd(const jobject& obj, const jint& arg0, const jobject& arg1, const jint& arg2) {
                
       const auto methodID = methodID_traceCommandEnd();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_traceFunctionCall() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onCall", "method_36351", "traceFunctionCall", "m_180090_"), "(ILakr;I)V");
    }

    static void traceFunctionCall(const jobject& obj, const jint& arg0, const jobject& arg1, const jint& arg2) {
                
       const auto methodID = methodID_traceFunctionCall();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_traceError() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onError", "method_36352", "traceError", "m_180099_"), "(Ljava/lang/String;)V");
    }

    static void traceError(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_traceError();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_sendMessage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "sendSystemMessage", "method_43496", "sendMessage", "m_213846_"), "(Lwz;)V");
    }

    static void sendMessage(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_sendMessage();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_shouldReceiveFeedback() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k_", "acceptsSuccess", "method_9200", "shouldReceiveFeedback", "m_6999_"), "()Z");
    }

    static jboolean shouldReceiveFeedback(const jobject& obj) {
                
       const auto methodID = methodID_shouldReceiveFeedback();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldTrackOutput() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("w_", "acceptsFailure", "method_9202", "shouldTrackOutput", "m_7028_"), "()Z");
    }

    static jboolean shouldTrackOutput(const jobject& obj) {
                
       const auto methodID = methodID_shouldTrackOutput();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldBroadcastConsoleToOps() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("M_", "shouldInformAdmins", "method_9201", "shouldBroadcastConsoleToOps", "m_6102_"), "()Z");
    }

    static jboolean shouldBroadcastConsoleToOps(const jobject& obj) {
                
       const auto methodID = methodID_shouldBroadcastConsoleToOps();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_cannotBeSilenced() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l_", "alwaysAccepts", "method_36320", "cannotBeSilenced", "m_142559_"), "()Z");
    }

    static jboolean cannotBeSilenced(const jobject& obj) {
                
       const auto methodID = methodID_cannotBeSilenced();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("close", "close", "", "", "close"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_DEBUGCOMMAND$TRACER_HPP