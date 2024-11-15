// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_PARTICLE_GUSTEMITTERPARTICLE$FACTORY_HPP
#define NET_MINECRAFT_CLIENT_PARTICLE_GUSTEMITTERPARTICLE$FACTORY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.particle.GustEmitterParticle$Factory
 * Remapped: gcd$a
 */
namespace GustEmitterParticle$Factory {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gcd$a", "net/minecraft/client/particle/GustSeedParticle$Provider", "net/minecraft/class_8979$class_8980", "net/minecraft/client/particle/GustEmitterParticle$Factory", "net/minecraft/src/C_301961_$C_301950_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.particle.GustEmitterParticle$Factory#deviation
    static jdouble get_field_deviation(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "scale", "field_49128", "deviation", "f_315272_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.particle.GustEmitterParticle$Factory#deviation
    static void set_field_deviation(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "scale", "field_49128", "deviation", "f_315272_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.particle.GustEmitterParticle$Factory#maxAge
    static jint get_field_maxAge(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "lifetime", "field_49129", "maxAge", "f_314767_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.particle.GustEmitterParticle$Factory#maxAge
    static void set_field_maxAge(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "lifetime", "field_49129", "maxAge", "f_314767_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.particle.GustEmitterParticle$Factory#interval
    static jint get_field_interval(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "tickDelayInBetween", "field_49130", "interval", "f_316963_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.particle.GustEmitterParticle$Factory#interval
    static void set_field_interval(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "tickDelayInBetween", "field_49130", "interval", "f_316963_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_createParticle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createParticle", "method_55244", "createParticle", "m_6966_"), "(Llq;Lfzf;DDDDDD)Lgcn;");
    }

    static jobject createParticle(const jobject& obj, const jobject& arg0, const jobject& arg1, const jdouble& arg2, const jdouble& arg3, const jdouble& arg4, const jdouble& arg5, const jdouble& arg6, const jdouble& arg7) {
                
       const auto methodID = methodID_createParticle();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_PARTICLE_GUSTEMITTERPARTICLE$FACTORY_HPP