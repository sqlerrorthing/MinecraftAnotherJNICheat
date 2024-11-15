// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_LEVELLEGACYWORLDGENSETTINGSFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_LEVELLEGACYWORLDGENSETTINGSFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.LevelLegacyWorldGenSettingsFix
 * Remapped: bfe
 */
namespace LevelLegacyWorldGenSettingsFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bfe", "net/minecraft/util/datafix/fixes/LevelLegacyWorldGenSettingsFix", "net/minecraft/class_8876", "net/minecraft/datafixer/fix/LevelLegacyWorldGenSettingsFix", "net/minecraft/src/C_301958_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.datafixer.fix.LevelLegacyWorldGenSettingsFix#WORLD_GEN_SETTINGS_KEY
    [[maybe_unused]] static jobject get_field_WORLD_GEN_SETTINGS_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "WORLD_GEN_SETTINGS", "field_46771", "WORLD_GEN_SETTINGS_KEY", "f_303075_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.LevelLegacyWorldGenSettingsFix#WORLD_GEN_SETTINGS_KEY
    [[maybe_unused]] static void set_field_WORLD_GEN_SETTINGS_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "WORLD_GEN_SETTINGS", "field_46771", "WORLD_GEN_SETTINGS_KEY", "f_303075_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.LevelLegacyWorldGenSettingsFix#SETTINGS_TO_FIX
    [[maybe_unused]] static jobject get_field_SETTINGS_TO_FIX() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "OLD_SETTINGS_KEYS", "field_46772", "SETTINGS_TO_FIX", "f_302282_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.LevelLegacyWorldGenSettingsFix#SETTINGS_TO_FIX
    [[maybe_unused]] static void set_field_SETTINGS_TO_FIX(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "OLD_SETTINGS_KEYS", "field_46772", "SETTINGS_TO_FIX", "f_302282_"), "Ljava/util/List;");
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
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_LEVELLEGACYWORLDGENSETTINGSFIX_HPP