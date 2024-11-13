// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_VILLAGERXPREBUILDFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_VILLAGERXPREBUILDFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.VillagerXpRebuildFix
 * Remapped: bhs
 */
namespace VillagerXpRebuildFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bhs", "net/minecraft/util/datafix/fixes/VillagerRebuildLevelAndXpFix", "net/minecraft/class_4300", "net/minecraft/datafixer/fix/VillagerXpRebuildFix", "net/minecraft/src/C_362_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.datafixer.fix.VillagerXpRebuildFix#TRADES_PER_LEVEL
    [[maybe_unused]] static jint get_field_TRADES_PER_LEVEL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TRADES_PER_LEVEL", "field_29914", "TRADES_PER_LEVEL", "f_145761_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.VillagerXpRebuildFix#TRADES_PER_LEVEL
    [[maybe_unused]] static void set_field_TRADES_PER_LEVEL(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TRADES_PER_LEVEL", "field_29914", "TRADES_PER_LEVEL", "f_145761_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.VillagerXpRebuildFix#LEVEL_TO_XP
    [[maybe_unused]] static jint get_field_LEVEL_TO_XP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LEVEL_XP_THRESHOLDS", "field_19285", "LEVEL_TO_XP", "f_17074_"), "[I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.VillagerXpRebuildFix#LEVEL_TO_XP
    [[maybe_unused]] static void set_field_LEVEL_TO_XP(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LEVEL_XP_THRESHOLDS", "field_19285", "LEVEL_TO_XP", "f_17074_"), "[I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_levelToXp() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getMinXpPerLevel", "method_20482", "levelToXp", "m_17079_"), "(I)I");
    }

    static jint levelToXp(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_levelToXp();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_makeRule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("makeRule", "makeRule", "", "", "makeRule"), "()Lcom/mojang/datafixers/TypeRewriteRule;");
    }

    static jobject makeRule(const jobject& obj) {
                
       const auto methodID = methodID_makeRule();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_fixLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "addLevel", "method_20487", "fixLevel", "m_17099_"), "(Lcom/mojang/datafixers/Typed;I)Lcom/mojang/datafixers/Typed;");
    }

    static jobject fixLevel(const jobject& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_fixLevel();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_fixXp() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "addXpFromLevel", "method_20490", "fixXp", "m_17108_"), "(Lcom/mojang/datafixers/Typed;I)Lcom/mojang/datafixers/Typed;");
    }

    static jobject fixXp(const jobject& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_fixXp();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_VILLAGERXPREBUILDFIX_HPP