// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_STATSRENAMEFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_STATSRENAMEFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.StatsRenameFix
 * Remapped: bhg
 */
namespace StatsRenameFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bhg", "net/minecraft/util/datafix/fixes/StatsRenameFix", "net/minecraft/class_1213", "net/minecraft/datafixer/fix/StatsRenameFix", "net/minecraft/src/C_141000_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.datafixer.fix.StatsRenameFix#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "name", "field_33560", "name", "f_145702_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.StatsRenameFix#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "name", "field_33560", "name", "f_145702_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.datafixer.fix.StatsRenameFix#replacements
    static jobject get_field_replacements(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "renames", "field_33561", "replacements", "f_145703_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.StatsRenameFix#replacements
    static void set_field_replacements(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "renames", "field_33561", "replacements", "f_145703_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_makeRule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("makeRule", "makeRule", "", "", "makeRule"), "()Lcom/mojang/datafixers/TypeRewriteRule;");
    }

    static jobject makeRule(const jobject& obj) {
                
       const auto methodID = methodID_makeRule();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_renameObjectives() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createCriteriaRule", "method_37378", "renameObjectives", "m_181042_"), "()Lcom/mojang/datafixers/TypeRewriteRule;");
    }

    static jobject renameObjectives(const jobject& obj) {
                
       const auto methodID = methodID_renameObjectives();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_renameStats() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "createStatRule", "method_37383", "renameStats", "m_181057_"), "()Lcom/mojang/datafixers/TypeRewriteRule;");
    }

    static jobject renameStats(const jobject& obj) {
                
       const auto methodID = methodID_renameStats();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_STATSRENAMEFIX_HPP