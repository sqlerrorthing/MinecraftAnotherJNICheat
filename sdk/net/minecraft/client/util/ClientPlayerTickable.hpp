// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_UTIL_CLIENTPLAYERTICKABLE_HPP
#define NET_MINECRAFT_CLIENT_UTIL_CLIENTPLAYERTICKABLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.util.ClientPlayerTickable
 * Remapped: gtk
 */
namespace ClientPlayerTickable {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gtk", "net/minecraft/client/resources/sounds/AmbientSoundHandler", "net/minecraft/class_1104", "net/minecraft/client/util/ClientPlayerTickable", "net/minecraft/src/C_4549_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_4756", "tick", "m_7551_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_UTIL_CLIENTPLAYERTICKABLE_HPP