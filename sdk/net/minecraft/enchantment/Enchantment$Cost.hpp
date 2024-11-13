// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENCHANTMENT_ENCHANTMENT$COST_HPP
#define NET_MINECRAFT_ENCHANTMENT_ENCHANTMENT$COST_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.enchantment.Enchantment$Cost
 * Remapped: dac$b
 */
namespace Enchantment$Cost {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dac$b", "net/minecraft/world/item/enchantment/Enchantment$Cost", "net/minecraft/class_1887$class_9426", "net/minecraft/enchantment/Enchantment$Cost", "net/minecraft/src/C_1505_$C_313532_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.enchantment.Enchantment$Cost#base
    static jint get_field_base(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "base", "comp_2504", "base", "f_314969_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.enchantment.Enchantment$Cost#base
    static void set_field_base(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "base", "comp_2504", "base", "f_314969_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.enchantment.Enchantment$Cost#perLevelAboveFirst
    static jint get_field_perLevelAboveFirst(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "perLevelAboveFirst", "comp_2690", "perLevelAboveFirst", "f_337028_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.enchantment.Enchantment$Cost#perLevelAboveFirst
    static void set_field_perLevelAboveFirst(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "perLevelAboveFirst", "comp_2690", "perLevelAboveFirst", "f_337028_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.enchantment.Enchantment$Cost#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_51649", "CODEC", "f_337085_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.enchantment.Enchantment$Cost#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_51649", "CODEC", "f_337085_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_forLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "calculate", "method_58447", "forLevel", "m_321581_"), "(I)I");
    }

    static jint forLevel(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_forLevel();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__base() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "base", "comp_2504", "base", "f_314969_"), "()I");
    }

    static jint _base(const jobject& obj) {
                
       const auto methodID = methodID__base();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__perLevelAboveFirst() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "perLevelAboveFirst", "comp_2690", "perLevelAboveFirst", "f_337028_"), "()I");
    }

    static jint _perLevelAboveFirst(const jobject& obj) {
                
       const auto methodID = methodID__perLevelAboveFirst();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENCHANTMENT_ENCHANTMENT$COST_HPP