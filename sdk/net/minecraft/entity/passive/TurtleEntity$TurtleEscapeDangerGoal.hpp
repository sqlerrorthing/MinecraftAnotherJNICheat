// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_TURTLEENTITY$TURTLEESCAPEDANGERGOAL_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_TURTLEENTITY$TURTLEESCAPEDANGERGOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.TurtleEntity$TurtleEscapeDangerGoal
 * Remapped: cgf$f
 */
namespace TurtleEntity$TurtleEscapeDangerGoal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cgf$f", "net/minecraft/world/entity/animal/Turtle$TurtlePanicGoal", "net/minecraft/class_1481$class_1487", "net/minecraft/entity/passive/TurtleEntity$TurtleEscapeDangerGoal", "net/minecraft/src/C_909_$C_916_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_canStart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "canUse", "method_6264", "canStart", "m_8036_"), "()Z");
    }

    static jboolean canStart(const jobject& obj) {
                
       const auto methodID = methodID_canStart();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_TURTLEENTITY$TURTLEESCAPEDANGERGOAL_HPP