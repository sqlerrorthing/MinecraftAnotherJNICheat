// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_FUNCTION_SETFIREWORKSLOOTFUNCTION_HPP
#define NET_MINECRAFT_LOOT_FUNCTION_SETFIREWORKSLOOTFUNCTION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.function.SetFireworksLootFunction
 * Remapped: etu
 */
namespace SetFireworksLootFunction {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("etu", "net/minecraft/world/level/storage/loot/functions/SetFireworksFunction", "net/minecraft/class_9376", "net/minecraft/loot/function/SetFireworksLootFunction", "net/minecraft/src/C_313567_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.loot.function.SetFireworksLootFunction#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_49881", "CODEC", "f_316516_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.function.SetFireworksLootFunction#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_49881", "CODEC", "f_316516_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.function.SetFireworksLootFunction#DEFAULT_FIREWORKS
    [[maybe_unused]] static jobject get_field_DEFAULT_FIREWORKS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DEFAULT_VALUE", "field_49882", "DEFAULT_FIREWORKS", "f_314460_"), "Lcxm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.function.SetFireworksLootFunction#DEFAULT_FIREWORKS
    [[maybe_unused]] static void set_field_DEFAULT_FIREWORKS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DEFAULT_VALUE", "field_49882", "DEFAULT_FIREWORKS", "f_314460_"), "Lcxm;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.loot.function.SetFireworksLootFunction#explosions
    static jobject get_field_explosions(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "explosions", "field_49883", "explosions", "f_316748_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.function.SetFireworksLootFunction#explosions
    static void set_field_explosions(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "explosions", "field_49883", "explosions", "f_316748_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.loot.function.SetFireworksLootFunction#flightDuration
    static jobject get_field_flightDuration(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "flightDuration", "field_49885", "flightDuration", "f_315337_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.function.SetFireworksLootFunction#flightDuration
    static void set_field_flightDuration(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "flightDuration", "field_49885", "flightDuration", "f_315337_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_process() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "run", "method_522", "process", "m_7372_"), "(Lcuq;Lerr;)Lcuq;");
    }

    static jobject process(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_process();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "apply", "method_58212", "apply", "m_324619_"), "(Lcxm;)Lcxm;");
    }

    static jobject apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_apply();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getType", "method_29321", "getType", "m_7162_"), "()Letg;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_LOOT_FUNCTION_SETFIREWORKSLOOTFUNCTION_HPP