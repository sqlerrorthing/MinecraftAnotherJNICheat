// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_SPAWNHELPER$CHECKER_HPP
#define NET_MINECRAFT_WORLD_SPAWNHELPER$CHECKER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.SpawnHelper$Checker
 * Remapped: ddh$c
 */
namespace SpawnHelper$Checker {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ddh$c", "net/minecraft/world/level/NaturalSpawner$SpawnPredicate", "net/minecraft/class_1948$class_5261", "net/minecraft/world/SpawnHelper$Checker", "net/minecraft/src/C_1608_$C_1612_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("test", "test", "test", "test", "m_47106_"), "(Lbsx;Ljd;Lduy;)Z");
    }

    static jboolean test(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_WORLD_SPAWNHELPER$CHECKER_HPP