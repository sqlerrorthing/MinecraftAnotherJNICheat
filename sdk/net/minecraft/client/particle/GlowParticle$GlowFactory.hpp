// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_PARTICLE_GLOWPARTICLE$GLOWFACTORY_HPP
#define NET_MINECRAFT_CLIENT_PARTICLE_GLOWPARTICLE$GLOWFACTORY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.particle.GlowParticle$GlowFactory
 * Remapped: gcb$b
 */
namespace GlowParticle$GlowFactory {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gcb$b", "net/minecraft/client/particle/GlowParticle$GlowSquidProvider", "net/minecraft/class_5786$class_5957", "net/minecraft/client/particle/GlowParticle$GlowFactory", "net/minecraft/src/C_141694_$C_141696_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.particle.GlowParticle$GlowFactory#spriteProvider
    static jobject get_field_spriteProvider(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "sprite", "field_29572", "spriteProvider", "f_172170_"), "Lgdi;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.particle.GlowParticle$GlowFactory#spriteProvider
    static void set_field_spriteProvider(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "sprite", "field_29572", "spriteProvider", "f_172170_"), "Lgdi;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_createParticle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createParticle", "method_34749", "createParticle", "m_6966_"), "(Llq;Lfzf;DDDDDD)Lgcn;");
    }

    static jobject createParticle(const jobject& obj, const jobject& arg0, const jobject& arg1, const jdouble& arg2, const jdouble& arg3, const jdouble& arg4, const jdouble& arg5, const jdouble& arg6, const jdouble& arg7) {
                
       const auto methodID = methodID_createParticle();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_PARTICLE_GLOWPARTICLE$GLOWFACTORY_HPP