// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_FUNCTION_SETBANNERPATTERNLOOTFUNCTION_HPP
#define NET_MINECRAFT_LOOT_FUNCTION_SETBANNERPATTERNLOOTFUNCTION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.function.SetBannerPatternLootFunction
 * Remapped: etl
 */
namespace SetBannerPatternLootFunction {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("etl", "net/minecraft/world/level/storage/loot/functions/SetBannerPatternFunction", "net/minecraft/class_5592", "net/minecraft/loot/function/SetBannerPatternLootFunction", "net/minecraft/src/C_141467_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.loot.function.SetBannerPatternLootFunction#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_45839", "CODEC", "f_291597_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.function.SetBannerPatternLootFunction#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_45839", "CODEC", "f_291597_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.loot.function.SetBannerPatternLootFunction#patterns
    static jobject get_field_patterns(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "patterns", "field_27343", "patterns", "f_165272_"), "Ldpy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.function.SetBannerPatternLootFunction#patterns
    static void set_field_patterns(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "patterns", "field_27343", "patterns", "f_165272_"), "Ldpy;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.loot.function.SetBannerPatternLootFunction#append
    static jboolean get_field_append(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "append", "field_27344", "append", "f_165273_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.function.SetBannerPatternLootFunction#append
    static void set_field_append(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "append", "field_27344", "append", "f_165273_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_process() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "run", "method_522", "process", "m_7372_"), "(Lcuq;Lerr;)Lcuq;");
    }

    static jobject process(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_process();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getType", "method_29321", "getType", "m_7162_"), "()Letg;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_builder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "setBannerPattern", "method_35531", "builder", "m_165282_"), "(Z)Letl$a;");
    }

    static jobject builder(const jboolean& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_builder();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_LOOT_FUNCTION_SETBANNERPATTERNLOOTFUNCTION_HPP