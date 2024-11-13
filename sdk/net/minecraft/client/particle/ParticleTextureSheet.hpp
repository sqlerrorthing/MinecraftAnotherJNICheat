// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_PARTICLE_PARTICLETEXTURESHEET_HPP
#define NET_MINECRAFT_CLIENT_PARTICLE_PARTICLETEXTURESHEET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.particle.ParticleTextureSheet
 * Remapped: gcr
 */
namespace ParticleTextureSheet {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gcr", "net/minecraft/client/particle/ParticleRenderType", "net/minecraft/class_3999", "net/minecraft/client/particle/ParticleTextureSheet", "net/minecraft/src/C_4029_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.particle.ParticleTextureSheet#TERRAIN_SHEET
    [[maybe_unused]] static jobject get_field_TERRAIN_SHEET() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TERRAIN_SHEET", "field_17827", "TERRAIN_SHEET", "f_107429_"), "Lgcr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.particle.ParticleTextureSheet#TERRAIN_SHEET
    [[maybe_unused]] static void set_field_TERRAIN_SHEET(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TERRAIN_SHEET", "field_17827", "TERRAIN_SHEET", "f_107429_"), "Lgcr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.particle.ParticleTextureSheet#PARTICLE_SHEET_OPAQUE
    [[maybe_unused]] static jobject get_field_PARTICLE_SHEET_OPAQUE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PARTICLE_SHEET_OPAQUE", "field_17828", "PARTICLE_SHEET_OPAQUE", "f_107430_"), "Lgcr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.particle.ParticleTextureSheet#PARTICLE_SHEET_OPAQUE
    [[maybe_unused]] static void set_field_PARTICLE_SHEET_OPAQUE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PARTICLE_SHEET_OPAQUE", "field_17828", "PARTICLE_SHEET_OPAQUE", "f_107430_"), "Lgcr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.particle.ParticleTextureSheet#PARTICLE_SHEET_TRANSLUCENT
    [[maybe_unused]] static jobject get_field_PARTICLE_SHEET_TRANSLUCENT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PARTICLE_SHEET_TRANSLUCENT", "field_17829", "PARTICLE_SHEET_TRANSLUCENT", "f_107431_"), "Lgcr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.particle.ParticleTextureSheet#PARTICLE_SHEET_TRANSLUCENT
    [[maybe_unused]] static void set_field_PARTICLE_SHEET_TRANSLUCENT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PARTICLE_SHEET_TRANSLUCENT", "field_17829", "PARTICLE_SHEET_TRANSLUCENT", "f_107431_"), "Lgcr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.particle.ParticleTextureSheet#PARTICLE_SHEET_LIT
    [[maybe_unused]] static jobject get_field_PARTICLE_SHEET_LIT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "PARTICLE_SHEET_LIT", "field_17830", "PARTICLE_SHEET_LIT", "f_107432_"), "Lgcr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.particle.ParticleTextureSheet#PARTICLE_SHEET_LIT
    [[maybe_unused]] static void set_field_PARTICLE_SHEET_LIT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "PARTICLE_SHEET_LIT", "field_17830", "PARTICLE_SHEET_LIT", "f_107432_"), "Lgcr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.particle.ParticleTextureSheet#CUSTOM
    [[maybe_unused]] static jobject get_field_CUSTOM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CUSTOM", "field_17831", "CUSTOM", "f_107433_"), "Lgcr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.particle.ParticleTextureSheet#CUSTOM
    [[maybe_unused]] static void set_field_CUSTOM(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CUSTOM", "field_17831", "CUSTOM", "f_107433_"), "Lgcr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.particle.ParticleTextureSheet#NO_RENDER
    [[maybe_unused]] static jobject get_field_NO_RENDER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "NO_RENDER", "field_17832", "NO_RENDER", "f_107434_"), "Lgcr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.particle.ParticleTextureSheet#NO_RENDER
    [[maybe_unused]] static void set_field_NO_RENDER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "NO_RENDER", "field_17832", "NO_RENDER", "f_107434_"), "Lgcr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_begin() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "begin", "method_18130", "begin", "m_6505_"), "(Lfbk;Lgqm;)Lfbd;");
    }

    static jobject begin(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_begin();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_PARTICLE_PARTICLETEXTURESHEET_HPP