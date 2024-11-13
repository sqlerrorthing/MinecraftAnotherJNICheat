// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_EFFECT_STATUSEFFECTCATEGORY_HPP
#define NET_MINECRAFT_ENTITY_EFFECT_STATUSEFFECTCATEGORY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.effect.StatusEffectCategory
 * Remapped: bry
 */
namespace StatusEffectCategory {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bry", "net/minecraft/world/effect/MobEffectCategory", "net/minecraft/class_4081", "net/minecraft/entity/effect/StatusEffectCategory", "net/minecraft/src/C_497_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.effect.StatusEffectCategory#BENEFICIAL
    [[maybe_unused]] static jobject get_field_BENEFICIAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BENEFICIAL", "field_18271", "BENEFICIAL", "BENEFICIAL"), "Lbry;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.effect.StatusEffectCategory#BENEFICIAL
    [[maybe_unused]] static void set_field_BENEFICIAL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BENEFICIAL", "field_18271", "BENEFICIAL", "BENEFICIAL"), "Lbry;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.effect.StatusEffectCategory#HARMFUL
    [[maybe_unused]] static jobject get_field_HARMFUL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "HARMFUL", "field_18272", "HARMFUL", "HARMFUL"), "Lbry;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.effect.StatusEffectCategory#HARMFUL
    [[maybe_unused]] static void set_field_HARMFUL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "HARMFUL", "field_18272", "HARMFUL", "HARMFUL"), "Lbry;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.effect.StatusEffectCategory#NEUTRAL
    [[maybe_unused]] static jobject get_field_NEUTRAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "NEUTRAL", "field_18273", "NEUTRAL", "NEUTRAL"), "Lbry;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.effect.StatusEffectCategory#NEUTRAL
    [[maybe_unused]] static void set_field_NEUTRAL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "NEUTRAL", "field_18273", "NEUTRAL", "NEUTRAL"), "Lbry;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.effect.StatusEffectCategory#formatting
    static jobject get_field_formatting(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "tooltipFormatting", "field_18274", "formatting", "f_19490_"), "Ln;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.effect.StatusEffectCategory#formatting
    static void set_field_formatting(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "tooltipFormatting", "field_18274", "formatting", "f_19490_"), "Ln;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lbry;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lbry;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getFormatting() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTooltipFormatting", "method_18793", "getFormatting", "m_19497_"), "()Ln;");
    }

    static jobject getFormatting(const jobject& obj) {
                
       const auto methodID = methodID_getFormatting();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_EFFECT_STATUSEFFECTCATEGORY_HPP