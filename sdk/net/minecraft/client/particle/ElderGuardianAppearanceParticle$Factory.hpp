// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_PARTICLE_ELDERGUARDIANAPPEARANCEPARTICLE$FACTORY_HPP
#define NET_MINECRAFT_CLIENT_PARTICLE_ELDERGUARDIANAPPEARANCEPARTICLE$FACTORY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.particle.ElderGuardianAppearanceParticle$Factory
 * Remapped: gck$a
 */
namespace ElderGuardianAppearanceParticle$Factory {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gck$a", "net/minecraft/client/particle/MobAppearanceParticle$Provider", "net/minecraft/class_700$class_701", "net/minecraft/client/particle/ElderGuardianAppearanceParticle$Factory", "net/minecraft/src/C_4015_$C_4017_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_createParticle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createParticle", "method_3042", "createParticle", "m_6966_"), "(Llq;Lfzf;DDDDDD)Lgcn;");
    }

    static jobject createParticle(const jobject& obj, const jobject& arg0, const jobject& arg1, const jdouble& arg2, const jdouble& arg3, const jdouble& arg4, const jdouble& arg5, const jdouble& arg6, const jdouble& arg7) {
                
       const auto methodID = methodID_createParticle();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_PARTICLE_ELDERGUARDIANAPPEARANCEPARTICLE$FACTORY_HPP