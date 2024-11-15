// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_PARTICLE_SPRITEPROVIDER_HPP
#define NET_MINECRAFT_CLIENT_PARTICLE_SPRITEPROVIDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.particle.SpriteProvider
 * Remapped: gdi
 */
namespace SpriteProvider {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gdi", "net/minecraft/client/particle/SpriteSet", "net/minecraft/class_4002", "net/minecraft/client/particle/SpriteProvider", "net/minecraft/src/C_4066_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getSprite() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_18138", "getSprite", "m_5819_"), "(II)Lgql;");
    }

    static jobject getSprite(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_getSprite();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__getSprite() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_18139", "getSprite", "m_213979_"), "(Layw;)Lgql;");
    }

    static jobject _getSprite(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__getSprite();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_PARTICLE_SPRITEPROVIDER_HPP