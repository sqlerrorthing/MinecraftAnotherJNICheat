// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_LLAMAENTITY$CHASEWOLVESGOAL_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_LLAMAENTITY$CHASEWOLVESGOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.LlamaEntity$ChaseWolvesGoal
 * Remapped: chl$a
 */
namespace LlamaEntity$ChaseWolvesGoal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("chl$a", "net/minecraft/world/entity/animal/horse/Llama$LlamaAttackWolfGoal", "net/minecraft/class_1501$class_1502", "net/minecraft/entity/passive/LlamaEntity$ChaseWolvesGoal", "net/minecraft/src/C_930_$C_932_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getFollowRange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "getFollowDistance", "method_6326", "getFollowRange", "m_7623_"), "()D");
    }

    static jdouble getFollowRange(const jobject& obj) {
                
       const auto methodID = methodID_getFollowRange();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_LLAMAENTITY$CHASEWOLVESGOAL_HPP