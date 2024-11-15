// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_MOBSPAWNERENTITYIDENTIFIERSFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_MOBSPAWNERENTITYIDENTIFIERSFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.MobSpawnerEntityIdentifiersFix
 * Remapped: bfm
 */
namespace MobSpawnerEntityIdentifiersFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bfm", "net/minecraft/util/datafix/fixes/MobSpawnerEntityIdentifiersFix", "net/minecraft/class_1198", "net/minecraft/datafixer/fix/MobSpawnerEntityIdentifiersFix", "net/minecraft/src/C_322_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_fixSpawner() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fix", "method_5106", "fixSpawner", "m_16456_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject fixSpawner(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_fixSpawner();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_makeRule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("makeRule", "makeRule", "", "", "makeRule"), "()Lcom/mojang/datafixers/TypeRewriteRule;");
    }

    static jobject makeRule(const jobject& obj) {
                
       const auto methodID = methodID_makeRule();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_MOBSPAWNERENTITYIDENTIFIERSFIX_HPP