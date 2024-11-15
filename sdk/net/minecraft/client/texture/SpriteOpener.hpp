// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_TEXTURE_SPRITEOPENER_HPP
#define NET_MINECRAFT_CLIENT_TEXTURE_SPRITEOPENER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.texture.SpriteOpener
 * Remapped: gqo
 */
namespace SpriteOpener {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gqo", "net/minecraft/client/renderer/texture/atlas/SpriteResourceLoader", "net/minecraft/class_8684", "net/minecraft/client/texture/SpriteOpener", "net/minecraft/src/C_260391_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.texture.SpriteOpener#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_45633", "LOGGER", "f_260482_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.texture.SpriteOpener#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_45633", "LOGGER", "f_260482_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("create", "create", "create", "create", "m_292996_"), "(Ljava/util/Collection;)Lgqo;");
    }

    static jobject create(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_loadSprite() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("loadSprite", "loadSprite", "loadSprite", "loadSprite", "m_294584_"), "(Lakr;Lauc;)Lgqf;");
    }

    static jobject loadSprite(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_loadSprite();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_TEXTURE_SPRITEOPENER_HPP