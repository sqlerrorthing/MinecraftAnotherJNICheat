// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_SPAWNRESTRICTION$SPAWNPREDICATE_HPP
#define NET_MINECRAFT_ENTITY_SPAWNRESTRICTION$SPAWNPREDICATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.SpawnRestriction$SpawnPredicate
 * Remapped: buk$b
 */
namespace SpawnRestriction$SpawnPredicate {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("buk$b", "net/minecraft/world/entity/SpawnPlacements$SpawnPredicate", "net/minecraft/class_1317$class_4306", "net/minecraft/entity/SpawnRestriction$SpawnPredicate", "net/minecraft/src/C_543_$C_545_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("test", "test", "test", "test", "m_217080_"), "(Lbsx;Lddl;Lbtr;Ljd;Layw;)Z");
    }

    static jboolean test(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_SPAWNRESTRICTION$SPAWNPREDICATE_HPP