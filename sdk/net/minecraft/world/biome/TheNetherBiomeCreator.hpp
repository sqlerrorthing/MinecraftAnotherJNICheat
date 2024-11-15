// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_BIOME_THENETHERBIOMECREATOR_HPP
#define NET_MINECRAFT_WORLD_BIOME_THENETHERBIOMECREATOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.biome.TheNetherBiomeCreator
 * Remapped: rl
 */
namespace TheNetherBiomeCreator {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("rl", "net/minecraft/data/worldgen/biome/NetherBiomes", "net/minecraft/class_6727", "net/minecraft/world/biome/TheNetherBiomeCreator", "net/minecraft/src/C_183083_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_createNetherWastes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "netherWastes", "method_39146", "createNetherWastes", "m_194831_"), "(Ljn;Ljn;)Lddw;");
    }

    static jobject createNetherWastes(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_createNetherWastes();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_createSoulSandValley() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "soulSandValley", "method_39147", "createSoulSandValley", "m_194832_"), "(Ljn;Ljn;)Lddw;");
    }

    static jobject createSoulSandValley(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_createSoulSandValley();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_createBasaltDeltas() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "basaltDeltas", "method_39148", "createBasaltDeltas", "m_194833_"), "(Ljn;Ljn;)Lddw;");
    }

    static jobject createBasaltDeltas(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_createBasaltDeltas();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_createCrimsonForest() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "crimsonForest", "method_39149", "createCrimsonForest", "m_194834_"), "(Ljn;Ljn;)Lddw;");
    }

    static jobject createCrimsonForest(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_createCrimsonForest();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_createWarpedForest() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("e", "warpedForest", "method_39150", "createWarpedForest", "m_194835_"), "(Ljn;Ljn;)Lddw;");
    }

    static jobject createWarpedForest(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_createWarpedForest();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_WORLD_BIOME_THENETHERBIOMECREATOR_HPP