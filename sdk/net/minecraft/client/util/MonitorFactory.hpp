// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_UTIL_MONITORFACTORY_HPP
#define NET_MINECRAFT_CLIENT_UTIL_MONITORFACTORY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.util.MonitorFactory
 * Remapped: fai
 */
namespace MonitorFactory {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fai", "com/mojang/blaze3d/platform/MonitorCreator", "net/minecraft/class_3676", "net/minecraft/client/util/MonitorFactory", "net/minecraft/src/C_3147_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_createMonitor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("createMonitor", "createMonitor", "createMonitor", "createMonitor", "m_84956_"), "(J)Lfah;");
    }

    static jobject createMonitor(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_createMonitor();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_UTIL_MONITORFACTORY_HPP