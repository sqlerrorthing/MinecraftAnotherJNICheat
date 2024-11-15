// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_ANIMATION_BATANIMATIONS_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_ANIMATION_BATANIMATIONS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.animation.BatAnimations
 * Remapped: fhh
 */
namespace BatAnimations {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fhh", "net/minecraft/client/animation/definitions/BatAnimation", "net/minecraft/class_8928", "net/minecraft/client/render/entity/animation/BatAnimations", "net/minecraft/src/C_302052_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.render.entity.animation.BatAnimations#ROOSTING
    [[maybe_unused]] static jobject get_field_ROOSTING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BAT_RESTING", "field_47103", "ROOSTING", "f_302981_"), "Lfhd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.entity.animation.BatAnimations#ROOSTING
    [[maybe_unused]] static void set_field_ROOSTING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BAT_RESTING", "field_47103", "ROOSTING", "f_302981_"), "Lfhd;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.entity.animation.BatAnimations#FLYING
    [[maybe_unused]] static jobject get_field_FLYING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BAT_FLYING", "field_47104", "FLYING", "f_302773_"), "Lfhd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.entity.animation.BatAnimations#FLYING
    [[maybe_unused]] static void set_field_FLYING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BAT_FLYING", "field_47104", "FLYING", "f_302773_"), "Lfhd;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_ANIMATION_BATANIMATIONS_HPP