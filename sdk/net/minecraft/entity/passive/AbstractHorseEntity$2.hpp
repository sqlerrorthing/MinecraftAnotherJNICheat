// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_ABSTRACTHORSEENTITY$2_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_ABSTRACTHORSEENTITY$2_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.AbstractHorseEntity$2
 * Remapped: chi$2
 */
namespace AbstractHorseEntity$2 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("chi$2", "net/minecraft/world/entity/animal/horse/AbstractHorse$2", "net/minecraft/class_1496$2", "net/minecraft/entity/passive/AbstractHorseEntity$2", "net/minecraft/src/C_926_$C_313537_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_32327", "get", "m_142196_"), "()Lcuq;");
    }

    static jobject get(const jobject& obj) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_set() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "set", "method_32332", "set", "m_142104_"), "(Lcuq;)Z");
    }

    static jboolean set(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_set();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_ABSTRACTHORSEENTITY$2_HPP