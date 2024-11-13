// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_ADDTRAPPEDCHESTFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_ADDTRAPPEDCHESTFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.AddTrappedChestFix
 * Remapped: bhn
 */
namespace AddTrappedChestFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bhn", "net/minecraft/util/datafix/fixes/TrappedChestBlockEntityFix", "net/minecraft/class_1215", "net/minecraft/datafixer/fix/AddTrappedChestFix", "net/minecraft/src/C_358_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.datafixer.fix.AddTrappedChestFix#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_5740", "LOGGER", "f_17015_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.AddTrappedChestFix#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_5740", "LOGGER", "f_17015_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.AddTrappedChestFix#field_29910
    [[maybe_unused]] static jint get_field_field_29910() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SIZE", "field_29910", "field_29910", "f_145734_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.AddTrappedChestFix#field_29910
    [[maybe_unused]] static void set_field_field_29910(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SIZE", "field_29910", "field_29910", "f_145734_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.AddTrappedChestFix#field_29911
    [[maybe_unused]] static jshort get_field_field_29911() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SIZE_BITS", "field_29911", "field_29911", "f_145735_"), "S");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticShortField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.AddTrappedChestFix#field_29911
    [[maybe_unused]] static void set_field_field_29911(const jshort &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SIZE_BITS", "field_29911", "field_29911", "f_145735_"), "S");
        return MinecraftSDK::env->SetStaticShortField(clazz, fieldID, value);
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

#endif // NET_MINECRAFT_DATAFIXER_FIX_ADDTRAPPEDCHESTFIX_HPP