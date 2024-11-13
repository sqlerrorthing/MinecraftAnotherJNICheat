// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_FUNCTION_SETSTEWEFFECTLOOTFUNCTION_HPP
#define NET_MINECRAFT_LOOT_FUNCTION_SETSTEWEFFECTLOOTFUNCTION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.function.SetStewEffectLootFunction
 * Remapped: eud
 */
namespace SetStewEffectLootFunction {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eud", "net/minecraft/world/level/storage/loot/functions/SetStewEffectFunction", "net/minecraft/class_152", "net/minecraft/loot/function/SetStewEffectLootFunction", "net/minecraft/src/C_2961_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.loot.function.SetStewEffectLootFunction#STEW_EFFECT_LIST_CODEC
    [[maybe_unused]] static jobject get_field_STEW_EFFECT_LIST_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EFFECTS_LIST", "field_45852", "STEW_EFFECT_LIST_CODEC", "f_291304_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.loot.function.SetStewEffectLootFunction#STEW_EFFECT_LIST_CODEC
    [[maybe_unused]] static void set_field_STEW_EFFECT_LIST_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EFFECTS_LIST", "field_45852", "STEW_EFFECT_LIST_CODEC", "f_291304_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.function.SetStewEffectLootFunction#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_45851", "CODEC", "f_291232_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.function.SetStewEffectLootFunction#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_45851", "CODEC", "f_291232_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.loot.function.SetStewEffectLootFunction#stewEffects
    static jobject get_field_stewEffects(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "effects", "field_45853", "stewEffects", "f_290649_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.function.SetStewEffectLootFunction#stewEffects
    static void set_field_stewEffects(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "effects", "field_45853", "stewEffects", "f_290649_"), "Ljava/util/List;");
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
    
    static jmethodID methodID_builder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "stewEffect", "method_637", "builder", "m_81228_"), "()Leud$a;");
    }

    static jobject builder() {
       const auto clazz = self();
       const auto methodID = methodID_builder();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
};

#endif // NET_MINECRAFT_LOOT_FUNCTION_SETSTEWEFFECTLOOTFUNCTION_HPP