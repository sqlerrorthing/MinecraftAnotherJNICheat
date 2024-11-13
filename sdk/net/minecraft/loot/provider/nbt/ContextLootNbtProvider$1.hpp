// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_PROVIDER_NBT_CONTEXTLOOTNBTPROVIDER$1_HPP
#define NET_MINECRAFT_LOOT_PROVIDER_NBT_CONTEXTLOOTNBTPROVIDER$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.provider.nbt.ContextLootNbtProvider$1
 * Remapped: evo$1
 */
namespace ContextLootNbtProvider$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("evo$1", "net/minecraft/world/level/storage/loot/providers/nbt/ContextNbtProvider$1", "net/minecraft/class_5646$1", "net/minecraft/loot/provider/nbt/ContextLootNbtProvider$1", "net/minecraft/src/C_141483_$C_141484_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_32435", "getNbt", "m_142135_"), "(Lerr;)Luy;");
    }

    static jobject getNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getNbt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getId", "method_32434", "getName", "m_142016_"), "()Ljava/lang/String;");
    }

    static jobject getName(const jobject& obj) {
                
       const auto methodID = methodID_getName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRequiredParameters() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getReferencedContextParams", "method_32436", "getRequiredParameters", "m_142524_"), "()Ljava/util/Set;");
    }

    static jobject getRequiredParameters(const jobject& obj) {
                
       const auto methodID = methodID_getRequiredParameters();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_LOOT_PROVIDER_NBT_CONTEXTLOOTNBTPROVIDER$1_HPP