// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_ZOMBIEVILLAGERXPREBUILDFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_ZOMBIEVILLAGERXPREBUILDFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.ZombieVillagerXpRebuildFix
 * Remapped: bia
 */
namespace ZombieVillagerXpRebuildFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bia", "net/minecraft/util/datafix/fixes/ZombieVillagerRebuildXpFix", "net/minecraft/class_4301", "net/minecraft/datafixer/fix/ZombieVillagerXpRebuildFix", "net/minecraft/src/C_368_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_transform() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fix", "method_5105", "transform", "m_7504_"), "(Lcom/mojang/datafixers/Typed;)Lcom/mojang/datafixers/Typed;");
    }

    static jobject transform(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_transform();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_ZOMBIEVILLAGERXPREBUILDFIX_HPP