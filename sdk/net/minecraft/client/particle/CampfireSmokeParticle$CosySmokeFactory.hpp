// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_PARTICLE_CAMPFIRESMOKEPARTICLE$COSYSMOKEFACTORY_HPP
#define NET_MINECRAFT_CLIENT_PARTICLE_CAMPFIRESMOKEPARTICLE$COSYSMOKEFACTORY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.particle.CampfireSmokeParticle$CosySmokeFactory
 * Remapped: gbl$a
 */
namespace CampfireSmokeParticle$CosySmokeFactory {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gbl$a", "net/minecraft/client/particle/CampfireSmokeParticle$CosyProvider", "net/minecraft/class_3937$class_3938", "net/minecraft/client/particle/CampfireSmokeParticle$CosySmokeFactory", "net/minecraft/src/C_3941_$C_3943_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.particle.CampfireSmokeParticle$CosySmokeFactory#spriteProvider
    static jobject get_field_spriteProvider(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "sprites", "field_18290", "spriteProvider", "f_105876_"), "Lgdi;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.particle.CampfireSmokeParticle$CosySmokeFactory#spriteProvider
    static void set_field_spriteProvider(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "sprites", "field_18290", "spriteProvider", "f_105876_"), "Lgdi;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_createParticle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createParticle", "method_17579", "createParticle", "m_6966_"), "(Llq;Lfzf;DDDDDD)Lgcn;");
    }

    static jobject createParticle(const jobject& obj, const jobject& arg0, const jobject& arg1, const jdouble& arg2, const jdouble& arg3, const jdouble& arg4, const jdouble& arg5, const jdouble& arg6, const jdouble& arg7) {
                
       const auto methodID = methodID_createParticle();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_PARTICLE_CAMPFIRESMOKEPARTICLE$COSYSMOKEFACTORY_HPP