// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PREDICATE_ITEM_ENCHANTMENTSPREDICATE$ENCHANTMENTS_HPP
#define NET_MINECRAFT_PREDICATE_ITEM_ENCHANTMENTSPREDICATE$ENCHANTMENTS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.predicate.item.EnchantmentsPredicate$Enchantments
 * Remapped: cn$a
 */
namespace EnchantmentsPredicate$Enchantments {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cn$a", "net/minecraft/advancements/critereon/ItemEnchantmentsPredicate$Enchantments", "net/minecraft/class_9356$class_9357", "net/minecraft/predicate/item/EnchantmentsPredicate$Enchantments", "net/minecraft/src/C_313531_$C_313768_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.predicate.item.EnchantmentsPredicate$Enchantments#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_49800", "CODEC", "f_316379_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.predicate.item.EnchantmentsPredicate$Enchantments#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_49800", "CODEC", "f_316379_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getComponentType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "componentType", "method_58163", "getComponentType", "m_318698_"), "()Lkp;");
    }

    static jobject getComponentType(const jobject& obj) {
                
       const auto methodID = methodID_getComponentType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_PREDICATE_ITEM_ENCHANTMENTSPREDICATE$ENCHANTMENTS_HPP