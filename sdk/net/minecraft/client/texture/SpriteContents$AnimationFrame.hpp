// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_TEXTURE_SPRITECONTENTS$ANIMATIONFRAME_HPP
#define NET_MINECRAFT_CLIENT_TEXTURE_SPRITECONTENTS$ANIMATIONFRAME_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.texture.SpriteContents$AnimationFrame
 * Remapped: gqf$b
 */
namespace SpriteContents$AnimationFrame {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gqf$b", "net/minecraft/client/renderer/texture/SpriteContents$FrameInfo", "net/minecraft/class_7764$class_5791", "net/minecraft/client/texture/SpriteContents$AnimationFrame", "net/minecraft/src/C_243582_$C_243413_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.client.texture.SpriteContents$AnimationFrame#index
    static jint get_field_index(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "index", "field_28475", "index", "f_243751_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.texture.SpriteContents$AnimationFrame#index
    static void set_field_index(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "index", "field_28475", "index", "f_243751_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.texture.SpriteContents$AnimationFrame#time
    static jint get_field_time(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "time", "field_28476", "time", "f_244553_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.texture.SpriteContents$AnimationFrame#time
    static void set_field_time(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "time", "field_28476", "time", "f_244553_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_CLIENT_TEXTURE_SPRITECONTENTS$ANIMATIONFRAME_HPP