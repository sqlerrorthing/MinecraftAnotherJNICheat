// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_MAIN_MAIN$2_HPP
#define NET_MINECRAFT_CLIENT_MAIN_MAIN$2_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.main.Main$2
 * Remapped: net/minecraft/client/main/Main$2
 */
namespace Main$2 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("net/minecraft/client/main/Main$2", "net/minecraft/client/main/Main$2", "", "", "net/minecraft/client/main/Main$C_4972_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_run() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("run", "run", "", "", "run"), "()V");
    }

    static void run(const jobject& obj) {
                
       const auto methodID = methodID_run();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_MAIN_MAIN$2_HPP