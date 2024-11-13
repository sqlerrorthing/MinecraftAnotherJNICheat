// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_CHOICETYPESFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_CHOICETYPESFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.ChoiceTypesFix
 * Remapped: baf
 */
namespace ChoiceTypesFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("baf", "net/minecraft/util/datafix/fixes/AddNewChoices", "net/minecraft/class_3553", "net/minecraft/datafixer/fix/ChoiceTypesFix", "net/minecraft/src/C_214_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.datafixer.fix.ChoiceTypesFix#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "name", "field_15779", "name", "f_14625_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ChoiceTypesFix#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "name", "field_15779", "name", "f_14625_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.datafixer.fix.ChoiceTypesFix#types
    static jobject get_field_types(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "type", "field_15780", "types", "f_14626_"), "Lcom/mojang/datafixers/DSL$TypeReference;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ChoiceTypesFix#types
    static void set_field_types(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "type", "field_15780", "types", "f_14626_"), "Lcom/mojang/datafixers/DSL$TypeReference;");
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
    
    static jmethodID methodID_fixChoiceTypes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "cap", "method_15476", "fixChoiceTypes", "m_14637_"), "(Lcom/mojang/datafixers/types/templates/TaggedChoice$TaggedChoiceType;Lcom/mojang/datafixers/types/templates/TaggedChoice$TaggedChoiceType;)Lcom/mojang/datafixers/TypeRewriteRule;");
    }

    static jobject fixChoiceTypes(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_fixChoiceTypes();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_CHOICETYPESFIX_HPP