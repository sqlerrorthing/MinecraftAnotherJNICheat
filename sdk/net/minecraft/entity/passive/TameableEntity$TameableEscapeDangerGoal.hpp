// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_TAMEABLEENTITY$TAMEABLEESCAPEDANGERGOAL_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_TAMEABLEENTITY$TAMEABLEESCAPEDANGERGOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.TameableEntity$TameableEscapeDangerGoal
 * Remapped: bul$a
 */
namespace TameableEntity$TameableEscapeDangerGoal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bul$a", "net/minecraft/world/entity/TamableAnimal$TamableAnimalPanicGoal", "net/minecraft/class_1321$class_9788", "net/minecraft/entity/passive/TameableEntity$TameableEscapeDangerGoal", "net/minecraft/src/C_547_$C_336534_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_6268", "tick", "m_8037_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_TAMEABLEENTITY$TAMEABLEESCAPEDANGERGOAL_HPP