// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_STATUSEFFECTDURATIONFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_STATUSEFFECTDURATIONFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.StatusEffectDurationFix
 * Remapped: bcf
 */
namespace StatusEffectDurationFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bcf", "net/minecraft/util/datafix/fixes/EffectDurationFix", "net/minecraft/class_8079", "net/minecraft/datafixer/fix/StatusEffectDurationFix", "net/minecraft/src/C_267330_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.datafixer.fix.StatusEffectDurationFix#POTION_ITEM_IDS
    [[maybe_unused]] static jobject get_field_POTION_ITEM_IDS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ITEM_TYPES", "field_42105", "POTION_ITEM_IDS", "f_267441_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.StatusEffectDurationFix#POTION_ITEM_IDS
    [[maybe_unused]] static void set_field_POTION_ITEM_IDS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ITEM_TYPES", "field_42105", "POTION_ITEM_IDS", "f_267441_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_makeRule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("makeRule", "makeRule", "", "", "makeRule"), "()Lcom/mojang/datafixers/TypeRewriteRule;");
    }

    static jobject makeRule(const jobject& obj) {
                
       const auto methodID = methodID_makeRule();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_fixPotionEffect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fixEffect", "method_48551", "fixPotionEffect", "m_267829_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject fixPotionEffect(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_fixPotionEffect();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_fixPotionEffects() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "fix", "method_48554", "fixPotionEffects", "m_267663_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject fixPotionEffects(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_fixPotionEffects();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_fixEntityStatusEffects() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "updateEntity", "method_48555", "fixEntityStatusEffects", "m_267632_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject fixEntityStatusEffects(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_fixEntityStatusEffects();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_STATUSEFFECTDURATIONFIX_HPP