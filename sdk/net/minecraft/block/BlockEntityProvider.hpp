// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_BLOCKENTITYPROVIDER_HPP
#define NET_MINECRAFT_BLOCK_BLOCKENTITYPROVIDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.BlockEntityProvider
 * Remapped: diq
 */
namespace BlockEntityProvider {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("diq", "net/minecraft/world/level/block/EntityBlock", "net/minecraft/class_2343", "net/minecraft/block/BlockEntityProvider", "net/minecraft/src/C_1782_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_createBlockEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "newBlockEntity", "method_10123", "createBlockEntity", "m_142194_"), "(Ljd;Ldtc;)Ldqh;");
    }

    static jobject createBlockEntity(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_createBlockEntity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getTicker() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTicker", "method_31645", "getTicker", "m_142354_"), "(Ldcw;Ldtc;Ldqj;)Ldqi;");
    }

    static jobject getTicker(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getTicker();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getGameEventListener() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getListener", "method_32896", "getGameEventListener", "m_214009_"), "(Laqu;Ldqh;)Ldyb;");
    }

    static jobject getGameEventListener(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getGameEventListener();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_BLOCKENTITYPROVIDER_HPP