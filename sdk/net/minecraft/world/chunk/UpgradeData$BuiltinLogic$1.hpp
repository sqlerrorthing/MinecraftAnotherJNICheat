// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_CHUNK_UPGRADEDATA$BUILTINLOGIC$1_HPP
#define NET_MINECRAFT_WORLD_CHUNK_UPGRADEDATA$BUILTINLOGIC$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.chunk.UpgradeData$BuiltinLogic$1
 * Remapped: dvv$b$1
 */
namespace UpgradeData$BuiltinLogic$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dvv$b$1", "net/minecraft/world/level/chunk/UpgradeData$BlockFixers$1", "net/minecraft/class_2843$class_2845$1", "net/minecraft/world/chunk/UpgradeData$BuiltinLogic$1", "net/minecraft/src/C_2149_$C_2152_$C_2153_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getUpdatedState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateShape", "method_12358", "getUpdatedState", "m_5731_"), "(Ldtc;Lji;Ldtc;Ldcx;Ljd;Ljd;)Ldtc;");
    }

    static jobject getUpdatedState(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5) {
                
       const auto methodID = methodID_getUpdatedState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
};

#endif // NET_MINECRAFT_WORLD_CHUNK_UPGRADEDATA$BUILTINLOGIC$1_HPP