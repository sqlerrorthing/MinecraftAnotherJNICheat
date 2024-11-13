// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_FUNCTION_APPLYBONUSLOOTFUNCTION_HPP
#define NET_MINECRAFT_LOOT_FUNCTION_APPLYBONUSLOOTFUNCTION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.function.ApplyBonusLootFunction
 * Remapped: eso
 */
namespace ApplyBonusLootFunction {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eso", "net/minecraft/world/level/storage/loot/functions/ApplyBonusCount", "net/minecraft/class_94", "net/minecraft/loot/function/ApplyBonusLootFunction", "net/minecraft/src/C_2874_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.loot.function.ApplyBonusLootFunction#FACTORIES
    [[maybe_unused]] static jobject get_field_FACTORIES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "FORMULAS", "field_1010", "FACTORIES", "f_79898_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.loot.function.ApplyBonusLootFunction#FACTORIES
    [[maybe_unused]] static void set_field_FACTORIES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "FORMULAS", "field_1010", "FACTORIES", "f_79898_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.loot.function.ApplyBonusLootFunction#TYPE_CODEC
    [[maybe_unused]] static jobject get_field_TYPE_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "FORMULA_TYPE_CODEC", "field_45807", "TYPE_CODEC", "f_291576_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.loot.function.ApplyBonusLootFunction#TYPE_CODEC
    [[maybe_unused]] static void set_field_TYPE_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "FORMULA_TYPE_CODEC", "field_45807", "TYPE_CODEC", "f_291576_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.loot.function.ApplyBonusLootFunction#FORMULA_CODEC
    [[maybe_unused]] static jobject get_field_FORMULA_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "FORMULA_CODEC", "field_45808", "FORMULA_CODEC", "f_290648_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.loot.function.ApplyBonusLootFunction#FORMULA_CODEC
    [[maybe_unused]] static void set_field_FORMULA_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "FORMULA_CODEC", "field_45808", "FORMULA_CODEC", "f_290648_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.function.ApplyBonusLootFunction#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_45806", "CODEC", "f_291250_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.function.ApplyBonusLootFunction#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_45806", "CODEC", "f_291250_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.loot.function.ApplyBonusLootFunction#enchantment
    static jobject get_field_enchantment(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "enchantment", "field_1011", "enchantment", "f_79899_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.function.ApplyBonusLootFunction#enchantment
    static void set_field_enchantment(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "enchantment", "field_1011", "enchantment", "f_79899_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.loot.function.ApplyBonusLootFunction#formula
    static jobject get_field_formula(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "formula", "field_1009", "formula", "f_79900_"), "Leso$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.function.ApplyBonusLootFunction#formula
    static void set_field_formula(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "formula", "field_1009", "formula", "f_79900_"), "Leso$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getType", "method_29321", "getType", "m_7162_"), "()Letg;");
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
    
    static jmethodID methodID_process() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "run", "method_522", "process", "m_7372_"), "(Lcuq;Lerr;)Lcuq;");
    }

    static jobject process(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_process();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_binomialWithBonusCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "addBonusBinomialDistributionCount", "method_463", "binomialWithBonusCount", "m_79917_"), "(Ljm;FI)Lete$a;");
    }

    static jobject binomialWithBonusCount(const jobject& arg0, const jfloat& arg1, const jint& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_binomialWithBonusCount();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_oreDrops() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "addOreBonusCount", "method_455", "oreDrops", "m_79915_"), "(Ljm;)Lete$a;");
    }

    static jobject oreDrops(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_oreDrops();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_uniformBonusCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "addUniformBonusCount", "method_456", "uniformBonusCount", "m_79939_"), "(Ljm;)Lete$a;");
    }

    static jobject uniformBonusCount(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_uniformBonusCount();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__uniformBonusCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "addUniformBonusCount", "method_461", "uniformBonusCount", "m_79921_"), "(Ljm;I)Lete$a;");
    }

    static jobject _uniformBonusCount(const jobject& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__uniformBonusCount();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_LOOT_FUNCTION_APPLYBONUSLOOTFUNCTION_HPP