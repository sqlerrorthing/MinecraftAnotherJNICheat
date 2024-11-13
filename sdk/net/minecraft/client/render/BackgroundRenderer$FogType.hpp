// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_BACKGROUNDRENDERER$FOGTYPE_HPP
#define NET_MINECRAFT_CLIENT_RENDER_BACKGROUNDRENDERER$FOGTYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.BackgroundRenderer$FogType
 * Remapped: ger$d
 */
namespace BackgroundRenderer$FogType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ger$d", "net/minecraft/client/renderer/FogRenderer$FogMode", "net/minecraft/class_758$class_4596", "net/minecraft/client/render/BackgroundRenderer$FogType", "net/minecraft/src/C_4122_$C_4123_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.render.BackgroundRenderer$FogType#FOG_SKY
    [[maybe_unused]] static jobject get_field_FOG_SKY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "FOG_SKY", "field_20945", "FOG_SKY", "FOG_SKY"), "Lger$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.BackgroundRenderer$FogType#FOG_SKY
    [[maybe_unused]] static void set_field_FOG_SKY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "FOG_SKY", "field_20945", "FOG_SKY", "FOG_SKY"), "Lger$d;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.BackgroundRenderer$FogType#FOG_TERRAIN
    [[maybe_unused]] static jobject get_field_FOG_TERRAIN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "FOG_TERRAIN", "field_20946", "FOG_TERRAIN", "FOG_TERRAIN"), "Lger$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.BackgroundRenderer$FogType#FOG_TERRAIN
    [[maybe_unused]] static void set_field_FOG_TERRAIN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "FOG_TERRAIN", "field_20946", "FOG_TERRAIN", "FOG_TERRAIN"), "Lger$d;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lger$d;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lger$d;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_BACKGROUNDRENDERER$FOGTYPE_HPP