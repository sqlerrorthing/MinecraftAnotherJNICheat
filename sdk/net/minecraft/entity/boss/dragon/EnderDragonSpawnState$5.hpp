// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_BOSS_DRAGON_ENDERDRAGONSPAWNSTATE$5_HPP
#define NET_MINECRAFT_ENTITY_BOSS_DRAGON_ENDERDRAGONSPAWNSTATE$5_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.boss.dragon.EnderDragonSpawnState$5
 * Remapped: dxa$5
 */
namespace EnderDragonSpawnState$5 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dxa$5", "net/minecraft/world/level/dimension/end/DragonRespawnAnimation$5", "net/minecraft/class_2876$5", "net/minecraft/entity/boss/dragon/EnderDragonSpawnState$5", "net/minecraft/src/C_2177_$C_2182_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_run() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_12507", "run", "m_6363_"), "(Laqu;Ldxb;Ljava/util/List;ILjd;)V");
    }

    static void run(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jint& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_run();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_BOSS_DRAGON_ENDERDRAGONSPAWNSTATE$5_HPP