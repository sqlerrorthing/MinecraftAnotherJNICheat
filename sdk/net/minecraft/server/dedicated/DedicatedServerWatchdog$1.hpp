// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_DEDICATED_DEDICATEDSERVERWATCHDOG$1_HPP
#define NET_MINECRAFT_SERVER_DEDICATED_DEDICATEDSERVERWATCHDOG$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.dedicated.DedicatedServerWatchdog$1
 * Remapped: apq$1
 */
namespace DedicatedServerWatchdog$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("apq$1", "net/minecraft/server/dedicated/ServerWatchdog$1", "net/minecraft/class_3178$1", "net/minecraft/server/dedicated/DedicatedServerWatchdog$1", "net/minecraft/src/C_5411_$C_5412_"));
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

#endif // NET_MINECRAFT_SERVER_DEDICATED_DEDICATEDSERVERWATCHDOG$1_HPP