// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_PARTICLE_WHITESMOKEPARTICLE_HPP
#define NET_MINECRAFT_CLIENT_PARTICLE_WHITESMOKEPARTICLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.particle.WhiteSmokeParticle
 * Remapped: gdw
 */
namespace WhiteSmokeParticle {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gdw", "net/minecraft/client/particle/WhiteSmokeParticle", "net/minecraft/class_8899", "net/minecraft/client/particle/WhiteSmokeParticle", "net/minecraft/src/C_301921_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.particle.WhiteSmokeParticle#field_46898
    [[maybe_unused]] static jint get_field_field_46898() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "COLOR_RGB24", "field_46898", "field_46898", "f_303306_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.particle.WhiteSmokeParticle#field_46898
    [[maybe_unused]] static void set_field_field_46898(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "COLOR_RGB24", "field_46898", "field_46898", "f_303306_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

};

#endif // NET_MINECRAFT_CLIENT_PARTICLE_WHITESMOKEPARTICLE_HPP