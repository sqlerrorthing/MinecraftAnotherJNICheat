// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENCHANTMENT_PROVIDER_ENCHANTMENTPROVIDERTYPE_HPP
#define NET_MINECRAFT_ENCHANTMENT_PROVIDER_ENCHANTMENTPROVIDERTYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.enchantment.provider.EnchantmentProviderType
 * Remapped: dbk
 */
namespace EnchantmentProviderType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dbk", "net/minecraft/world/item/enchantment/providers/EnchantmentProviderTypes", "net/minecraft/class_9742", "net/minecraft/enchantment/provider/EnchantmentProviderType", "net/minecraft/src/C_336433_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_registerAndGetDefault() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "bootstrap", "method_60267", "registerAndGetDefault", "m_339016_"), "(Ljz;)Lcom/mojang/serialization/MapCodec;");
    }

    static jobject registerAndGetDefault(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_registerAndGetDefault();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENCHANTMENT_PROVIDER_ENCHANTMENTPROVIDERTYPE_HPP