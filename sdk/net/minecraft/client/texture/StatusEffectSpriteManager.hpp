// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_TEXTURE_STATUSEFFECTSPRITEMANAGER_HPP
#define NET_MINECRAFT_CLIENT_TEXTURE_STATUSEFFECTSPRITEMANAGER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.texture.StatusEffectSpriteManager
 * Remapped: grj
 */
namespace StatusEffectSpriteManager {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("grj", "net/minecraft/client/resources/MobEffectTextureManager", "net/minecraft/class_4074", "net/minecraft/client/texture/StatusEffectSpriteManager", "net/minecraft/src/C_4503_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getSprite() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_18663", "getSprite", "m_118732_"), "(Ljm;)Lgql;");
    }

    static jobject getSprite(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getSprite();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_TEXTURE_STATUSEFFECTSPRITEMANAGER_HPP