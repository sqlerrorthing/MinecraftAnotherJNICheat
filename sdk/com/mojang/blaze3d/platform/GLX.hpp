// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef COM_MOJANG_BLAZE3D_PLATFORM_GLX_HPP
#define COM_MOJANG_BLAZE3D_PLATFORM_GLX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: com.mojang.blaze3d.platform.GLX
 * Remapped: com/mojang/blaze3d/platform/GLX
 */
namespace GLX {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("com/mojang/blaze3d/platform/GLX", "com/mojang/blaze3d/platform/GLX", "com/mojang/blaze3d/platform/GLX", "com/mojang/blaze3d/platform/GLX", "com/mojang/blaze3d/platform/GLX"));
        }
        return cachedClass;
    };

    // getter for static private field com.mojang.blaze3d.platform.GLX#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("LOGGER", "LOGGER", "", "", "LOGGER"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field com.mojang.blaze3d.platform.GLX#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("LOGGER", "LOGGER", "", "", "LOGGER"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field com.mojang.blaze3d.platform.GLX#cpuInfo
    [[maybe_unused]] static jobject get_field_cpuInfo() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cpuInfo", "cpuInfo", "", "", "cpuInfo"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field com.mojang.blaze3d.platform.GLX#cpuInfo
    [[maybe_unused]] static void set_field_cpuInfo(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cpuInfo", "cpuInfo", "", "", "cpuInfo"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getOpenGLVersionString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("getOpenGLVersionString", "getOpenGLVersionString", "", "", "getOpenGLVersionString"), "()Ljava/lang/String;");
    }

    static jobject getOpenGLVersionString() {
       const auto clazz = self();
       const auto methodID = methodID_getOpenGLVersionString();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID__getRefreshRate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("_getRefreshRate", "_getRefreshRate", "_getRefreshRate", "_getRefreshRate", "_getRefreshRate"), "(Lfam;)I");
    }

    static jint _getRefreshRate(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__getRefreshRate();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__getLWJGLVersion() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("_getLWJGLVersion", "_getLWJGLVersion", "", "", "_getLWJGLVersion"), "()Ljava/lang/String;");
    }

    static jobject _getLWJGLVersion() {
       const auto clazz = self();
       const auto methodID = methodID__getLWJGLVersion();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID__initGlfw() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("_initGlfw", "_initGlfw", "", "", "_initGlfw"), "()Ljava/util/function/LongSupplier;");
    }

    static jobject _initGlfw() {
       const auto clazz = self();
       const auto methodID = methodID__initGlfw();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID__setGlfwErrorCallback() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("_setGlfwErrorCallback", "_setGlfwErrorCallback", "_setGlfwErrorCallback", "_setGlfwErrorCallback", "_setGlfwErrorCallback"), "(Lorg/lwjgl/glfw/GLFWErrorCallbackI;)V");
    }

    static void _setGlfwErrorCallback(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__setGlfwErrorCallback();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__shouldClose() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("_shouldClose", "_shouldClose", "_shouldClose", "_shouldClose", "_shouldClose"), "(Lfam;)Z");
    }

    static jboolean _shouldClose(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__shouldClose();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__init() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("_init", "_init", "_init", "_init", "_init"), "(IZ)V");
    }

    static void _init(const jint& arg0, const jboolean& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__init();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__getCpuInfo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("_getCpuInfo", "_getCpuInfo", "", "", "_getCpuInfo"), "()Ljava/lang/String;");
    }

    static jobject _getCpuInfo() {
       const auto clazz = self();
       const auto methodID = methodID__getCpuInfo();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID__renderCrosshair() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("_renderCrosshair", "_renderCrosshair", "_renderCrosshair", "_renderCrosshair", "_renderCrosshair"), "(IZZZ)V");
    }

    static void _renderCrosshair(const jint& arg0, const jboolean& arg1, const jboolean& arg2, const jboolean& arg3) {
       const auto clazz = self();
       const auto methodID = methodID__renderCrosshair();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_make() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("make", "make", "make", "make", "make"), "(Ljava/util/function/Supplier;)Ljava/lang/Object;");
    }

    static jobject make(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_make();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__make() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("make", "make", "make", "make", "make"), "(Ljava/lang/Object;Ljava/util/function/Consumer;)Ljava/lang/Object;");
    }

    static jobject _make(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__make();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // COM_MOJANG_BLAZE3D_PLATFORM_GLX_HPP