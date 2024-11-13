// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_OXIDIZABLE$OXIDATIONLEVEL_HPP
#define NET_MINECRAFT_BLOCK_OXIDIZABLE$OXIDATIONLEVEL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.Oxidizable$OxidationLevel
 * Remapped: dpe$a
 */
namespace Oxidizable$OxidationLevel {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dpe$a", "net/minecraft/world/level/block/WeatheringCopper$WeatherState", "net/minecraft/class_5955$class_5811", "net/minecraft/block/Oxidizable$OxidationLevel", "net/minecraft/src/C_141235_$C_141236_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.Oxidizable$OxidationLevel#UNAFFECTED
    [[maybe_unused]] static jobject get_field_UNAFFECTED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "UNAFFECTED", "field_28704", "UNAFFECTED", "UNAFFECTED"), "Ldpe$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.Oxidizable$OxidationLevel#UNAFFECTED
    [[maybe_unused]] static void set_field_UNAFFECTED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "UNAFFECTED", "field_28704", "UNAFFECTED", "UNAFFECTED"), "Ldpe$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.Oxidizable$OxidationLevel#EXPOSED
    [[maybe_unused]] static jobject get_field_EXPOSED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EXPOSED", "field_28705", "EXPOSED", "EXPOSED"), "Ldpe$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.Oxidizable$OxidationLevel#EXPOSED
    [[maybe_unused]] static void set_field_EXPOSED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EXPOSED", "field_28705", "EXPOSED", "EXPOSED"), "Ldpe$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.Oxidizable$OxidationLevel#WEATHERED
    [[maybe_unused]] static jobject get_field_WEATHERED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "WEATHERED", "field_28706", "WEATHERED", "WEATHERED"), "Ldpe$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.Oxidizable$OxidationLevel#WEATHERED
    [[maybe_unused]] static void set_field_WEATHERED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "WEATHERED", "field_28706", "WEATHERED", "WEATHERED"), "Ldpe$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.Oxidizable$OxidationLevel#OXIDIZED
    [[maybe_unused]] static jobject get_field_OXIDIZED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "OXIDIZED", "field_28707", "OXIDIZED", "OXIDIZED"), "Ldpe$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.Oxidizable$OxidationLevel#OXIDIZED
    [[maybe_unused]] static void set_field_OXIDIZED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "OXIDIZED", "field_28707", "OXIDIZED", "OXIDIZED"), "Ldpe$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.Oxidizable$OxidationLevel#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CODEC", "field_46493", "CODEC", "f_302372_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.Oxidizable$OxidationLevel#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CODEC", "field_46493", "CODEC", "f_302372_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.block.Oxidizable$OxidationLevel#id
    static jobject get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "name", "field_46494", "id", "f_303684_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.Oxidizable$OxidationLevel#id
    static void set_field_id(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "name", "field_46494", "id", "f_303684_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Ldpe$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Ldpe$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_asString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getSerializedName", "method_15434", "asString", "m_7912_"), "()Ljava/lang/String;");
    }

    static jobject asString(const jobject& obj) {
                
       const auto methodID = methodID_asString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_OXIDIZABLE$OXIDATIONLEVEL_HPP