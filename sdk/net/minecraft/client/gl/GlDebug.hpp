// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GL_GLDEBUG_HPP
#define NET_MINECRAFT_CLIENT_GL_GLDEBUG_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gl.GlDebug
 * Remapped: fab
 */
namespace GlDebug {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fab", "com/mojang/blaze3d/platform/GlDebug", "net/minecraft/class_1008", "net/minecraft/client/gl/GlDebug", "net/minecraft/src/C_3111_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gl.GlDebug#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_4921", "LOGGER", "f_84028_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.GlDebug#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_4921", "LOGGER", "f_84028_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gl.GlDebug#DEBUG_MESSAGE_QUEUE_SIZE
    [[maybe_unused]] static jint get_field_DEBUG_MESSAGE_QUEUE_SIZE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CIRCULAR_LOG_SIZE", "field_33669", "DEBUG_MESSAGE_QUEUE_SIZE", "f_166220_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.GlDebug#DEBUG_MESSAGE_QUEUE_SIZE
    [[maybe_unused]] static void set_field_DEBUG_MESSAGE_QUEUE_SIZE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CIRCULAR_LOG_SIZE", "field_33669", "DEBUG_MESSAGE_QUEUE_SIZE", "f_166220_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gl.GlDebug#DEBUG_MESSAGES
    [[maybe_unused]] static jobject get_field_DEBUG_MESSAGES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MESSAGE_BUFFER", "field_33670", "DEBUG_MESSAGES", "f_166221_"), "Ljava/util/Queue;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.GlDebug#DEBUG_MESSAGES
    [[maybe_unused]] static void set_field_DEBUG_MESSAGES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MESSAGE_BUFFER", "field_33670", "DEBUG_MESSAGES", "f_166221_"), "Ljava/util/Queue;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gl.GlDebug#lastDebugMessage
    [[maybe_unused]] static jobject get_field_lastDebugMessage() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "lastEntry", "field_33671", "lastDebugMessage", "f_166222_"), "Lfab$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.GlDebug#lastDebugMessage
    [[maybe_unused]] static void set_field_lastDebugMessage(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "lastEntry", "field_33671", "lastDebugMessage", "f_166222_"), "Lfab$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gl.GlDebug#KHR_VERBOSITY_LEVELS
    [[maybe_unused]] static jobject get_field_KHR_VERBOSITY_LEVELS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "DEBUG_LEVELS", "field_4915", "KHR_VERBOSITY_LEVELS", "f_84032_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.GlDebug#KHR_VERBOSITY_LEVELS
    [[maybe_unused]] static void set_field_KHR_VERBOSITY_LEVELS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "DEBUG_LEVELS", "field_4915", "KHR_VERBOSITY_LEVELS", "f_84032_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gl.GlDebug#ARB_VERBOSITY_LEVELS
    [[maybe_unused]] static jobject get_field_ARB_VERBOSITY_LEVELS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "DEBUG_LEVELS_ARB", "field_4919", "ARB_VERBOSITY_LEVELS", "f_84033_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.GlDebug#ARB_VERBOSITY_LEVELS
    [[maybe_unused]] static void set_field_ARB_VERBOSITY_LEVELS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "DEBUG_LEVELS_ARB", "field_4919", "ARB_VERBOSITY_LEVELS", "f_84033_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gl.GlDebug#debugMessageEnabled
    [[maybe_unused]] static jboolean get_field_debugMessageEnabled() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "debugEnabled", "field_33672", "debugMessageEnabled", "f_166223_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticBooleanField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gl.GlDebug#debugMessageEnabled
    [[maybe_unused]] static void set_field_debugMessageEnabled(const jboolean &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "debugEnabled", "field_33672", "debugMessageEnabled", "f_166223_"), "Z");
        return MinecraftSDK::env->SetStaticBooleanField(clazz, fieldID, value);
    };

    static jmethodID methodID_unknown() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "printUnknownToken", "method_4225", "unknown", "m_84036_"), "(I)Ljava/lang/String;");
    }

    static jobject unknown(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_unknown();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getSource() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "sourceToString", "method_4222", "getSource", "m_84055_"), "(I)Ljava/lang/String;");
    }

    static jobject getSource(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getSource();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "typeToString", "method_4228", "getType", "m_84057_"), "(I)Ljava/lang/String;");
    }

    static jobject getType(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getSeverity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "severityToString", "method_4226", "getSeverity", "m_84059_"), "(I)Ljava/lang/String;");
    }

    static jobject getSeverity(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getSeverity();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_info() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "printDebugLog", "method_4224", "info", "m_84038_"), "(IIIIIJJ)V");
    }

    static void info(const jint& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jlong& arg5, const jlong& arg6) {
       const auto clazz = self();
       const auto methodID = methodID_info();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID_collectDebugMessages() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getLastOpenGlDebugMessages", "method_36478", "collectDebugMessages", "m_166225_"), "()Ljava/util/List;");
    }

    static jobject collectDebugMessages() {
       const auto clazz = self();
       const auto methodID = methodID_collectDebugMessages();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_isDebugMessageEnabled() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "isDebugEnabled", "method_36479", "isDebugMessageEnabled", "m_166226_"), "()Z");
    }

    static jboolean isDebugMessageEnabled() {
       const auto clazz = self();
       const auto methodID = methodID_isDebugMessageEnabled();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID);
    };
    
    static jmethodID methodID_enableDebug() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "enableDebugCallback", "method_4227", "enableDebug", "m_84049_"), "(IZ)V");
    }

    static void enableDebug(const jint& arg0, const jboolean& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_enableDebug();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GL_GLDEBUG_HPP