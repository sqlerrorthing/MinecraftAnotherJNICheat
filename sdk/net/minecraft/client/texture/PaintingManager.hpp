// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_TEXTURE_PAINTINGMANAGER_HPP
#define NET_MINECRAFT_CLIENT_TEXTURE_PAINTINGMANAGER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.texture.PaintingManager
 * Remapped: grk
 */
namespace PaintingManager {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("grk", "net/minecraft/client/resources/PaintingTextureManager", "net/minecraft/class_4044", "net/minecraft/client/texture/PaintingManager", "net/minecraft/src/C_4505_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.texture.PaintingManager#PAINTING_BACK_ID
    [[maybe_unused]] static jobject get_field_PAINTING_BACK_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BACK_SPRITE_LOCATION", "field_18032", "PAINTING_BACK_ID", "f_118799_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.PaintingManager#PAINTING_BACK_ID
    [[maybe_unused]] static void set_field_PAINTING_BACK_ID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BACK_SPRITE_LOCATION", "field_18032", "PAINTING_BACK_ID", "f_118799_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getPaintingSprite() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_18345", "getPaintingSprite", "m_235033_"), "(Lcjd;)Lgql;");
    }

    static jobject getPaintingSprite(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getPaintingSprite();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getBackSprite() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBackSprite", "method_18342", "getBackSprite", "m_118806_"), "()Lgql;");
    }

    static jobject getBackSprite(const jobject& obj) {
                
       const auto methodID = methodID_getBackSprite();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_TEXTURE_PAINTINGMANAGER_HPP