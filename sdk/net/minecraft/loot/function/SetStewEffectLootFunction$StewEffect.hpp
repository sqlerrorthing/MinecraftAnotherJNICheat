// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_FUNCTION_SETSTEWEFFECTLOOTFUNCTION$STEWEFFECT_HPP
#define NET_MINECRAFT_LOOT_FUNCTION_SETSTEWEFFECTLOOTFUNCTION$STEWEFFECT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.function.SetStewEffectLootFunction$StewEffect
 * Remapped: eud$b
 */
namespace SetStewEffectLootFunction$StewEffect {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eud$b", "net/minecraft/world/level/storage/loot/functions/SetStewEffectFunction$EffectEntry", "net/minecraft/class_152$class_8754", "net/minecraft/loot/function/SetStewEffectLootFunction$StewEffect", "net/minecraft/src/C_2961_$C_290095_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.loot.function.SetStewEffectLootFunction$StewEffect#effect
    static jobject get_field_effect(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "effect", "comp_1865", "effect", "f_291245_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.function.SetStewEffectLootFunction$StewEffect#effect
    static void set_field_effect(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "effect", "comp_1865", "effect", "f_291245_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.loot.function.SetStewEffectLootFunction$StewEffect#duration
    static jobject get_field_duration(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "duration", "comp_1866", "duration", "f_290866_"), "Levy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.function.SetStewEffectLootFunction$StewEffect#duration
    static void set_field_duration(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "duration", "comp_1866", "duration", "f_290866_"), "Levy;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.function.SetStewEffectLootFunction$StewEffect#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_45854", "CODEC", "f_291135_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.function.SetStewEffectLootFunction$StewEffect#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_45854", "CODEC", "f_291135_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID__effect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "effect", "comp_1865", "effect", "f_291245_"), "()Ljm;");
    }

    static jobject _effect(const jobject& obj) {
                
       const auto methodID = methodID__effect();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__duration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "duration", "comp_1866", "duration", "f_290866_"), "()Levy;");
    }

    static jobject _duration(const jobject& obj) {
                
       const auto methodID = methodID__duration();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_LOOT_FUNCTION_SETSTEWEFFECTLOOTFUNCTION$STEWEFFECT_HPP