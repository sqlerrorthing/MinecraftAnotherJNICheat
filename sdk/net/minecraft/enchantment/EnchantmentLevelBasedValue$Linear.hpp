// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENCHANTMENT_ENCHANTMENTLEVELBASEDVALUE$LINEAR_HPP
#define NET_MINECRAFT_ENCHANTMENT_ENCHANTMENTLEVELBASEDVALUE$LINEAR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.enchantment.EnchantmentLevelBasedValue$Linear
 * Remapped: daj$e
 */
namespace EnchantmentLevelBasedValue$Linear {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("daj$e", "net/minecraft/world/item/enchantment/LevelBasedValue$Linear", "net/minecraft/class_9704$class_9709", "net/minecraft/enchantment/EnchantmentLevelBasedValue$Linear", "net/minecraft/src/C_336443_$C_336440_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.enchantment.EnchantmentLevelBasedValue$Linear#base
    static jfloat get_field_base(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "base", "comp_2698", "base", "f_337076_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.enchantment.EnchantmentLevelBasedValue$Linear#base
    static void set_field_base(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "base", "comp_2698", "base", "f_337076_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.enchantment.EnchantmentLevelBasedValue$Linear#perLevelAboveFirst
    static jfloat get_field_perLevelAboveFirst(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "perLevelAboveFirst", "comp_2699", "perLevelAboveFirst", "f_336969_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.enchantment.EnchantmentLevelBasedValue$Linear#perLevelAboveFirst
    static void set_field_perLevelAboveFirst(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "perLevelAboveFirst", "comp_2699", "perLevelAboveFirst", "f_336969_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.enchantment.EnchantmentLevelBasedValue$Linear#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CODEC", "field_51696", "CODEC", "f_337436_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.enchantment.EnchantmentLevelBasedValue$Linear#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CODEC", "field_51696", "CODEC", "f_337436_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
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
    
    static jmethodID methodID__base() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "base", "comp_2698", "base", "f_337076_"), "()F");
    }

    static jfloat _base(const jobject& obj) {
                
       const auto methodID = methodID__base();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID__perLevelAboveFirst() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "perLevelAboveFirst", "comp_2699", "perLevelAboveFirst", "f_336969_"), "()F");
    }

    static jfloat _perLevelAboveFirst(const jobject& obj) {
                
       const auto methodID = methodID__perLevelAboveFirst();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENCHANTMENT_ENCHANTMENTLEVELBASEDVALUE$LINEAR_HPP