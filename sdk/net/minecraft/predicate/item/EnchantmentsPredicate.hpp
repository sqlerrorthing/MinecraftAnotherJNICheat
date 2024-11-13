// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PREDICATE_ITEM_ENCHANTMENTSPREDICATE_HPP
#define NET_MINECRAFT_PREDICATE_ITEM_ENCHANTMENTSPREDICATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.predicate.item.EnchantmentsPredicate
 * Remapped: cn
 */
namespace EnchantmentsPredicate {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cn", "net/minecraft/advancements/critereon/ItemEnchantmentsPredicate", "net/minecraft/class_9356", "net/minecraft/predicate/item/EnchantmentsPredicate", "net/minecraft/src/C_313531_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.predicate.item.EnchantmentsPredicate#enchantments
    static jobject get_field_enchantments(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "enchantments", "field_49799", "enchantments", "f_314663_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.item.EnchantmentsPredicate#enchantments
    static void set_field_enchantments(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "enchantments", "field_49799", "enchantments", "f_314663_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_createCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_58174", "createCodec", "m_325020_"), "(Ljava/util/function/Function;)Lcom/mojang/serialization/Codec;");
    }

    static jobject createCodec(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_createCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getEnchantments() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "enchantments", "method_58175", "getEnchantments", "m_321691_"), "()Ljava/util/List;");
    }

    static jobject getEnchantments(const jobject& obj) {
                
       const auto methodID = methodID_getEnchantments();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "matches", "method_58172", "test", "m_318913_"), "(Lcuq;Ldai;)Z");
    }

    static jboolean test(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__enchantments() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "enchantments", "method_58173", "enchantments", "m_319224_"), "(Ljava/util/List;)Lcn$a;");
    }

    static jobject _enchantments(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__enchantments();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_storedEnchantments() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "storedEnchantments", "method_58176", "storedEnchantments", "m_322731_"), "(Ljava/util/List;)Lcn$b;");
    }

    static jobject storedEnchantments(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_storedEnchantments();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_PREDICATE_ITEM_ENCHANTMENTSPREDICATE_HPP