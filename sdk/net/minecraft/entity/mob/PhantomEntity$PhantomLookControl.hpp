// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_MOB_PHANTOMENTITY$PHANTOMLOOKCONTROL_HPP
#define NET_MINECRAFT_ENTITY_MOB_PHANTOMENTITY$PHANTOMLOOKCONTROL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.mob.PhantomEntity$PhantomLookControl
 * Remapped: ckf$f
 */
namespace PhantomEntity$PhantomLookControl {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ckf$f", "net/minecraft/world/entity/monster/Phantom$PhantomLookControl", "net/minecraft/class_1593$class_1599", "net/minecraft/entity/mob/PhantomEntity$PhantomLookControl", "net/minecraft/src/C_1030_$C_1037_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_6231", "tick", "m_8128_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_MOB_PHANTOMENTITY$PHANTOMLOOKCONTROL_HPP