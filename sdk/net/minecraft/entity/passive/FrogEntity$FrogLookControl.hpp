// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_FROGENTITY$FROGLOOKCONTROL_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_FROGENTITY$FROGLOOKCONTROL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.FrogEntity$FrogLookControl
 * Remapped: cgy$a
 */
namespace FrogEntity$FrogLookControl {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cgy$a", "net/minecraft/world/entity/animal/frog/Frog$FrogLookControl", "net/minecraft/class_7102$class_7103", "net/minecraft/entity/passive/FrogEntity$FrogLookControl", "net/minecraft/src/C_213038_$C_213039_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_shouldStayHorizontal() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "resetXRotOnTick", "method_20433", "shouldStayHorizontal", "m_8106_"), "()Z");
    }

    static jboolean shouldStayHorizontal(const jobject& obj) {
                
       const auto methodID = methodID_shouldStayHorizontal();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_FROGENTITY$FROGLOOKCONTROL_HPP