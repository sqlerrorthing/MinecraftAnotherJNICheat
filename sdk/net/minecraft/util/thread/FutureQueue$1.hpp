// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_THREAD_FUTUREQUEUE$1_HPP
#define NET_MINECRAFT_UTIL_THREAD_FUTUREQUEUE$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.thread.FutureQueue$1
 * Remapped: azm$1
 */
namespace FutureQueue$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("azm$1", "net/minecraft/util/TaskChainer$1", "net/minecraft/class_7620$1", "net/minecraft/util/thread/FutureQueue$1", "net/minecraft/src/C_241579_$C_302069_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_append() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("append", "append", "append", "append", "m_241849_"), "(Ljava/util/concurrent/CompletableFuture;Ljava/util/function/Consumer;)V");
    }

    static void append(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_append();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_UTIL_THREAD_FUTUREQUEUE$1_HPP