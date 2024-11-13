// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATA_MAIN_HPP
#define NET_MINECRAFT_DATA_MAIN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.data.Main
 * Remapped: net/minecraft/data/Main
 */
namespace Main {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("net/minecraft/data/Main", "net/minecraft/data/Main", "net/minecraft/data/Main", "net/minecraft/data/Main", "net/minecraft/data/Main"));
        }
        return cachedClass;
    };

    static jmethodID methodID_main() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("main", "main", "main", "main", "main"), "([Ljava/lang/String;)V");
    }

    static void main(const jarray& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_main();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_toFactory() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "bindRegistries", "method_46839", "toFactory", "m_255400_"), "(Ljava/util/function/BiFunction;Ljava/util/concurrent/CompletableFuture;)Lma$a;");
    }

    static jobject toFactory(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_toFactory();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createStandardGenerator", "method_4968", "create", "m_236679_"), "(Ljava/nio/file/Path;Ljava/util/Collection;ZZZZZLae;Z)Llz;");
    }

    static jobject create(const jobject& arg0, const jobject& arg1, const jboolean& arg2, const jboolean& arg3, const jboolean& arg4, const jboolean& arg5, const jboolean& arg6, const jobject& arg7, const jboolean& arg8) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    };
    
};

#endif // NET_MINECRAFT_DATA_MAIN_HPP