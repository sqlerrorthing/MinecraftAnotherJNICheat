// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENCHANTMENT_PROVIDER_ENCHANTMENTPROVIDER_HPP
#define NET_MINECRAFT_ENCHANTMENT_PROVIDER_ENCHANTMENTPROVIDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.enchantment.provider.EnchantmentProvider
 * Remapped: dbj
 */
namespace EnchantmentProvider {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dbj", "net/minecraft/world/item/enchantment/providers/EnchantmentProvider", "net/minecraft/class_9741", "net/minecraft/enchantment/provider/EnchantmentProvider", "net/minecraft/src/C_336442_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.enchantment.provider.EnchantmentProvider#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DIRECT_CODEC", "field_51731", "CODEC", "f_337232_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.enchantment.provider.EnchantmentProvider#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DIRECT_CODEC", "field_51731", "CODEC", "f_337232_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_provideEnchantments() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "enchant", "method_60266", "provideEnchantments", "m_338356_"), "(Lcuq;Ldai$a;Layw;Lbqp;)V");
    }

    static void provideEnchantments(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_provideEnchantments();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_60265", "getCodec", "m_339126_"), "()Lcom/mojang/serialization/MapCodec;");
    }

    static jobject getCodec(const jobject& obj) {
                
       const auto methodID = methodID_getCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENCHANTMENT_PROVIDER_ENCHANTMENTPROVIDER_HPP