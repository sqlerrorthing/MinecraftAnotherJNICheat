// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENCHANTMENT_ENCHANTMENTLEVELBASEDVALUE_HPP
#define NET_MINECRAFT_ENCHANTMENT_ENCHANTMENTLEVELBASEDVALUE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.enchantment.EnchantmentLevelBasedValue
 * Remapped: daj
 */
namespace EnchantmentLevelBasedValue {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("daj", "net/minecraft/world/item/enchantment/LevelBasedValue", "net/minecraft/class_9704", "net/minecraft/enchantment/EnchantmentLevelBasedValue", "net/minecraft/src/C_336443_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.enchantment.EnchantmentLevelBasedValue#BASE_CODEC
    [[maybe_unused]] static jobject get_field_BASE_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DISPATCH_CODEC", "field_51689", "BASE_CODEC", "f_337553_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.enchantment.EnchantmentLevelBasedValue#BASE_CODEC
    [[maybe_unused]] static void set_field_BASE_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DISPATCH_CODEC", "field_51689", "BASE_CODEC", "f_337553_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.enchantment.EnchantmentLevelBasedValue#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_51690", "CODEC", "f_337468_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.enchantment.EnchantmentLevelBasedValue#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_51690", "CODEC", "f_337468_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_registerAndGetDefault() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "bootstrap", "method_60193", "registerAndGetDefault", "m_338459_"), "(Ljz;)Lcom/mojang/serialization/MapCodec;");
    }

    static jobject registerAndGetDefault(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_registerAndGetDefault();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_constant() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "constant", "method_60186", "constant", "m_338537_"), "(F)Ldaj$b;");
    }

    static jobject constant(const jfloat& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_constant();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_linear() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "perLevel", "method_60187", "linear", "m_340370_"), "(FF)Ldaj$e;");
    }

    static jobject linear(const jfloat& arg0, const jfloat& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_linear();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__linear() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "perLevel", "method_60194", "linear", "m_338510_"), "(F)Ldaj$e;");
    }

    static jobject _linear(const jfloat& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__linear();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_lookup() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "lookup", "method_60987", "lookup", "m_338781_"), "(Ljava/util/List;Ldaj;)Ldaj$f;");
    }

    static jobject lookup(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_lookup();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "calculate", "method_60188", "getValue", "m_338646_"), "(I)F");
    }

    static jfloat getValue(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getValue();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_60185", "getCodec", "m_338690_"), "()Lcom/mojang/serialization/MapCodec;");
    }

    static jobject getCodec(const jobject& obj) {
                
       const auto methodID = methodID_getCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENCHANTMENT_ENCHANTMENTLEVELBASEDVALUE_HPP