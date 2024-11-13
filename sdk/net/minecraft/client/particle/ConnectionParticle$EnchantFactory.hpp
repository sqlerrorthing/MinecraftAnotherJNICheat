// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_PARTICLE_CONNECTIONPARTICLE$ENCHANTFACTORY_HPP
#define NET_MINECRAFT_CLIENT_PARTICLE_CONNECTIONPARTICLE$ENCHANTFACTORY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.particle.ConnectionParticle$EnchantFactory
 * Remapped: gca$a
 */
namespace ConnectionParticle$EnchantFactory {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gca$a", "net/minecraft/client/particle/FlyTowardsPositionParticle$EnchantProvider", "net/minecraft/class_668$class_670", "net/minecraft/client/particle/ConnectionParticle$EnchantFactory", "net/minecraft/src/C_313463_$C_313776_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.particle.ConnectionParticle$EnchantFactory#spriteProvider
    static jobject get_field_spriteProvider(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "sprite", "field_17803", "spriteProvider", "f_316710_"), "Lgdi;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.particle.ConnectionParticle$EnchantFactory#spriteProvider
    static void set_field_spriteProvider(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "sprite", "field_17803", "spriteProvider", "f_316710_"), "Lgdi;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_createParticle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createParticle", "method_3021", "createParticle", "m_6966_"), "(Llq;Lfzf;DDDDDD)Lgcn;");
    }

    static jobject createParticle(const jobject& obj, const jobject& arg0, const jobject& arg1, const jdouble& arg2, const jdouble& arg3, const jdouble& arg4, const jdouble& arg5, const jdouble& arg6, const jdouble& arg7) {
                
       const auto methodID = methodID_createParticle();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_PARTICLE_CONNECTIONPARTICLE$ENCHANTFACTORY_HPP