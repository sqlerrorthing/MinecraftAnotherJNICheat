// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_UTIL_GLFWUTIL_HPP
#define NET_MINECRAFT_CLIENT_UTIL_GLFWUTIL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.util.GlfwUtil
 * Remapped: eza
 */
namespace GlfwUtil {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eza", "com/mojang/blaze3d/Blaze3D", "net/minecraft/class_3673", "net/minecraft/client/util/GlfwUtil", "net/minecraft/src/C_3083_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_accessRecordingQueue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "process", "method_35596", "accessRecordingQueue", "m_166118_"), "(Lezu;F)V");
    }

    static void accessRecordingQueue(const jobject& arg0, const jfloat& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_accessRecordingQueue();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_accessProcessingQueue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "render", "method_35597", "accessProcessingQueue", "m_166121_"), "(Lezu;F)V");
    }

    static void accessProcessingQueue(const jobject& arg0, const jfloat& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_accessProcessingQueue();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_makeJvmCrash() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "youJustLostTheGame", "method_15973", "makeJvmCrash", "m_83639_"), "()V");
    }

    static void makeJvmCrash() {
       const auto clazz = self();
       const auto methodID = methodID_makeJvmCrash();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID);
    };
    
    static jmethodID methodID_getTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getTime", "method_15974", "getTime", "m_83640_"), "()D");
    }

    static jdouble getTime() {
       const auto clazz = self();
       const auto methodID = methodID_getTime();
       return MinecraftSDK::env->CallStaticDoubleMethod(clazz, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_UTIL_GLFWUTIL_HPP