// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_CHUNK_BLOCKENTITYTICKINVOKER_HPP
#define NET_MINECRAFT_WORLD_CHUNK_BLOCKENTITYTICKINVOKER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.chunk.BlockEntityTickInvoker
 * Remapped: dsa
 */
namespace BlockEntityTickInvoker {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dsa", "net/minecraft/world/level/block/entity/TickingBlockEntity", "net/minecraft/class_5562", "net/minecraft/world/chunk/BlockEntityTickInvoker", "net/minecraft/src/C_141251_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_31703", "tick", "m_142224_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_isRemoved() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "isRemoved", "method_31704", "isRemoved", "m_142220_"), "()Z");
    }

    static jboolean isRemoved(const jobject& obj) {
                
       const auto methodID = methodID_isRemoved();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getPos", "method_31705", "getPos", "m_142689_"), "()Ljd;");
    }

    static jobject getPos(const jobject& obj) {
                
       const auto methodID = methodID_getPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getType", "method_31706", "getName", "m_142280_"), "()Ljava/lang/String;");
    }

    static jobject getName(const jobject& obj) {
                
       const auto methodID = methodID_getName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_CHUNK_BLOCKENTITYTICKINVOKER_HPP