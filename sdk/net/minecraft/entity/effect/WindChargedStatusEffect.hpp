// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_EFFECT_WINDCHARGEDSTATUSEFFECT_HPP
#define NET_MINECRAFT_ENTITY_EFFECT_WINDCHARGEDSTATUSEFFECT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.effect.WindChargedStatusEffect
 * Remapped: bsi
 */
namespace WindChargedStatusEffect {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bsi", "net/minecraft/world/effect/WindChargedMobEffect", "net/minecraft/class_9459", "net/minecraft/entity/effect/WindChargedStatusEffect", "net/minecraft/src/C_313488_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_onEntityRemoval() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onMobRemoved", "method_58617", "onEntityRemoval", "m_319157_"), "(Lbtn;ILbsr$c;)V");
    }

    static void onEntityRemoval(const jobject& obj, const jobject& arg0, const jint& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_onEntityRemoval();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_EFFECT_WINDCHARGEDSTATUSEFFECT_HPP