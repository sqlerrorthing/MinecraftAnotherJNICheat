// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCREEN_SCREENHANDLERCONTEXT_HPP
#define NET_MINECRAFT_SCREEN_SCREENHANDLERCONTEXT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.screen.ScreenHandlerContext
 * Remapped: cqg
 */
namespace ScreenHandlerContext {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cqg", "net/minecraft/world/inventory/ContainerLevelAccess", "net/minecraft/class_3914", "net/minecraft/screen/ScreenHandlerContext", "net/minecraft/src/C_1247_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.screen.ScreenHandlerContext#EMPTY
    [[maybe_unused]] static jobject get_field_EMPTY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NULL", "field_17304", "EMPTY", "f_39287_"), "Lcqg;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.ScreenHandlerContext#EMPTY
    [[maybe_unused]] static void set_field_EMPTY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NULL", "field_17304", "EMPTY", "f_39287_"), "Lcqg;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_17392", "create", "m_39289_"), "(Ldcw;Ljd;)Lcqg;");
    }

    static jobject create(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "evaluate", "method_17395", "get", "m_6721_"), "(Ljava/util/function/BiFunction;)Ljava/util/Optional;");
    }

    static jobject get(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "evaluate", "method_17396", "get", "m_39299_"), "(Ljava/util/function/BiFunction;Ljava/lang/Object;)Ljava/lang/Object;");
    }

    static jobject _get(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_run() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "execute", "method_17393", "run", "m_39292_"), "(Ljava/util/function/BiConsumer;)V");
    }

    static void run(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_run();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SCREEN_SCREENHANDLERCONTEXT_HPP