// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_FOXENTITY$FOXMOVECONTROL_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_FOXENTITY$FOXMOVECONTROL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.FoxEntity$FoxMoveControl
 * Remapped: cfo$m
 */
namespace FoxEntity$FoxMoveControl {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cfo$m", "net/minecraft/world/entity/animal/Fox$FoxMoveControl", "net/minecraft/class_4019$class_4030", "net/minecraft/entity/passive/FoxEntity$FoxMoveControl", "net/minecraft/src/C_833_$C_847_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_6240", "tick", "m_8126_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_FOXENTITY$FOXMOVECONTROL_HPP