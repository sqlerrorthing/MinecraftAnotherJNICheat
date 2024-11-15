// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_CONDITION_ENCHANTMENTACTIVECHECKLOOTCONDITION_HPP
#define NET_MINECRAFT_LOOT_CONDITION_ENCHANTMENTACTIVECHECKLOOTCONDITION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.condition.EnchantmentActiveCheckLootCondition
 * Remapped: euw
 */
namespace EnchantmentActiveCheckLootCondition {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("euw", "net/minecraft/world/level/storage/loot/predicates/EnchantmentActiveCheck", "net/minecraft/class_9752", "net/minecraft/loot/condition/EnchantmentActiveCheckLootCondition", "net/minecraft/src/C_336551_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.loot.condition.EnchantmentActiveCheckLootCondition#active
    static jboolean get_field_active(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "active", "comp_2780", "active", "f_336813_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.condition.EnchantmentActiveCheckLootCondition#active
    static void set_field_active(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "active", "comp_2780", "active", "f_336813_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.condition.EnchantmentActiveCheckLootCondition#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_51807", "CODEC", "f_337084_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.condition.EnchantmentActiveCheckLootCondition#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_51807", "CODEC", "f_337084_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "test", "method_60304", "test", "test"), "(Lerr;)Z");
    }

    static jboolean test(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getType", "method_29325", "getType", "m_7940_"), "()Levd;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRequiredParameters() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getReferencedContextParams", "method_293", "getRequiredParameters", "m_6231_"), "()Ljava/util/Set;");
    }

    static jobject getRequiredParameters(const jobject& obj) {
                
       const auto methodID = methodID_getRequiredParameters();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_requireActive() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "enchantmentActiveCheck", "method_60305", "requireActive", "m_340502_"), "()Levc$a;");
    }

    static jobject requireActive() {
       const auto clazz = self();
       const auto methodID = methodID_requireActive();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_requireInactive() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "enchantmentInactiveCheck", "method_60306", "requireInactive", "m_339733_"), "()Levc$a;");
    }

    static jobject requireInactive() {
       const auto clazz = self();
       const auto methodID = methodID_requireInactive();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID__active() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "active", "comp_2780", "active", "f_336813_"), "()Z");
    }

    static jboolean _active(const jobject& obj) {
                
       const auto methodID = methodID__active();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_LOOT_CONDITION_ENCHANTMENTACTIVECHECKLOOTCONDITION_HPP