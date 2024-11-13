// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_CHOICEFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_CHOICEFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.ChoiceFix
 * Remapped: bfn
 */
namespace ChoiceFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bfn", "net/minecraft/util/datafix/fixes/NamedEntityFix", "net/minecraft/class_1197", "net/minecraft/datafixer/fix/ChoiceFix", "net/minecraft/src/C_323_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.datafixer.fix.ChoiceFix#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "name", "field_5703", "name", "f_16461_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ChoiceFix#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "name", "field_5703", "name", "f_16461_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.datafixer.fix.ChoiceFix#choiceName
    static jobject get_field_choiceName(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "entityName", "field_5705", "choiceName", "f_16462_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ChoiceFix#choiceName
    static void set_field_choiceName(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "entityName", "field_5705", "choiceName", "f_16462_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.datafixer.fix.ChoiceFix#type
    static jobject get_field_type(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "type", "field_5704", "type", "f_16463_"), "Lcom/mojang/datafixers/DSL$TypeReference;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ChoiceFix#type
    static void set_field_type(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "type", "field_5704", "type", "f_16463_"), "Lcom/mojang/datafixers/DSL$TypeReference;");
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
    
    static jmethodID methodID_transform() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fix", "method_5105", "transform", "m_7504_"), "(Lcom/mojang/datafixers/Typed;)Lcom/mojang/datafixers/Typed;");
    }

    static jobject transform(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_transform();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_CHOICEFIX_HPP