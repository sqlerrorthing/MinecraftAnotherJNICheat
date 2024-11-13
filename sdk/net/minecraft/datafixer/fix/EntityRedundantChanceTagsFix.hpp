// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_ENTITYREDUNDANTCHANCETAGSFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_ENTITYREDUNDANTCHANCETAGSFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.EntityRedundantChanceTagsFix
 * Remapped: bdd
 */
namespace EntityRedundantChanceTagsFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bdd", "net/minecraft/util/datafix/fixes/EntityRedundantChanceTagsFix", "net/minecraft/class_1165", "net/minecraft/datafixer/fix/EntityRedundantChanceTagsFix", "net/minecraft/src/C_275_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.datafixer.fix.EntityRedundantChanceTagsFix#FLOAT_LIST_CODEC
    [[maybe_unused]] static jobject get_field_FLOAT_LIST_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "FLOAT_LIST_CODEC", "field_25695", "FLOAT_LIST_CODEC", "f_15598_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.EntityRedundantChanceTagsFix#FLOAT_LIST_CODEC
    [[maybe_unused]] static void set_field_FLOAT_LIST_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "FLOAT_LIST_CODEC", "field_25695", "FLOAT_LIST_CODEC", "f_15598_"), "Lcom/mojang/serialization/Codec;");
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
    
    static jmethodID methodID_hasZeroDropChance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isZeroList", "method_30073", "hasZeroDropChance", "m_15610_"), "(Lcom/mojang/serialization/OptionalDynamic;I)Z");
    }

    static jboolean hasZeroDropChance(const jobject& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_hasZeroDropChance();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_ENTITYREDUNDANTCHANCETAGSFIX_HPP