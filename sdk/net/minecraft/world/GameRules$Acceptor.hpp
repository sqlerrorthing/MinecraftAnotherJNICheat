// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GAMERULES$ACCEPTOR_HPP
#define NET_MINECRAFT_WORLD_GAMERULES$ACCEPTOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.GameRules$Acceptor
 * Remapped: dcs$h
 */
namespace GameRules$Acceptor {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dcs$h", "net/minecraft/world/level/GameRules$VisitorCaller", "net/minecraft/class_1928$class_5199", "net/minecraft/world/GameRules$Acceptor", "net/minecraft/src/C_1583_$C_1592_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_call() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("call", "call", "call", "call", "m_46374_"), "(Ldcs$c;Ldcs$e;Ldcs$f;)V");
    }

    static void call(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_call();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GAMERULES$ACCEPTOR_HPP