// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_ANIMATION_TRANSFORMATION$TARGETS_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_ANIMATION_TRANSFORMATION$TARGETS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.animation.Transformation$Targets
 * Remapped: fhc$d
 */
namespace Transformation$Targets {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fhc$d", "net/minecraft/client/animation/AnimationChannel$Targets", "net/minecraft/class_7179$class_7183", "net/minecraft/client/render/entity/animation/Transformation$Targets", "net/minecraft/src/C_213355_$C_213359_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.render.entity.animation.Transformation$Targets#TRANSLATE
    [[maybe_unused]] static jobject get_field_TRANSLATE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "POSITION", "field_37886", "TRANSLATE", "f_232250_"), "Lfhc$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.entity.animation.Transformation$Targets#TRANSLATE
    [[maybe_unused]] static void set_field_TRANSLATE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "POSITION", "field_37886", "TRANSLATE", "f_232250_"), "Lfhc$c;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.entity.animation.Transformation$Targets#ROTATE
    [[maybe_unused]] static jobject get_field_ROTATE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ROTATION", "field_37887", "ROTATE", "f_232251_"), "Lfhc$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.entity.animation.Transformation$Targets#ROTATE
    [[maybe_unused]] static void set_field_ROTATE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ROTATION", "field_37887", "ROTATE", "f_232251_"), "Lfhc$c;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.entity.animation.Transformation$Targets#SCALE
    [[maybe_unused]] static jobject get_field_SCALE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SCALE", "field_37888", "SCALE", "f_232252_"), "Lfhc$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.entity.animation.Transformation$Targets#SCALE
    [[maybe_unused]] static void set_field_SCALE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SCALE", "field_37888", "SCALE", "f_232252_"), "Lfhc$c;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_ANIMATION_TRANSFORMATION$TARGETS_HPP