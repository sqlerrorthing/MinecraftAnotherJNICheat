// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_EFFECT_OOZINGSTATUSEFFECT$SLIMECOUNTER_HPP
#define NET_MINECRAFT_ENTITY_EFFECT_OOZINGSTATUSEFFECT$SLIMECOUNTER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.effect.OozingStatusEffect$SlimeCounter
 * Remapped: bsc$a
 */
namespace OozingStatusEffect$SlimeCounter {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bsc$a", "net/minecraft/world/effect/OozingMobEffect$NearbySlimes", "net/minecraft/class_9456$class_9775", "net/minecraft/entity/effect/OozingStatusEffect$SlimeCounter", "net/minecraft/src/C_313344_$C_336458_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_count() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("count", "count", "count", "count", "m_338927_"), "(I)I");
    }

    static jint count(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_count();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_around() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "closeTo", "method_60604", "around", "m_338868_"), "(Lbtn;)Lbsc$a;");
    }

    static jobject around(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_around();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_EFFECT_OOZINGSTATUSEFFECT$SLIMECOUNTER_HPP