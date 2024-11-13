// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FOLIAGE_FOLIAGEPLACERTYPE_HPP
#define NET_MINECRAFT_WORLD_GEN_FOLIAGE_FOLIAGEPLACERTYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.foliage.FoliagePlacerType
 * Remapped: efv
 */
namespace FoliagePlacerType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("efv", "net/minecraft/world/level/levelgen/feature/foliageplacers/FoliagePlacerType", "net/minecraft/class_4648", "net/minecraft/world/gen/foliage/FoliagePlacerType", "net/minecraft/src/C_2381_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.foliage.FoliagePlacerType#BLOB_FOLIAGE_PLACER
    [[maybe_unused]] static jobject get_field_BLOB_FOLIAGE_PLACER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BLOB_FOLIAGE_PLACER", "field_21299", "BLOB_FOLIAGE_PLACER", "f_68591_"), "Lefv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.foliage.FoliagePlacerType#BLOB_FOLIAGE_PLACER
    [[maybe_unused]] static void set_field_BLOB_FOLIAGE_PLACER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BLOB_FOLIAGE_PLACER", "field_21299", "BLOB_FOLIAGE_PLACER", "f_68591_"), "Lefv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.foliage.FoliagePlacerType#SPRUCE_FOLIAGE_PLACER
    [[maybe_unused]] static jobject get_field_SPRUCE_FOLIAGE_PLACER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SPRUCE_FOLIAGE_PLACER", "field_21300", "SPRUCE_FOLIAGE_PLACER", "f_68592_"), "Lefv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.foliage.FoliagePlacerType#SPRUCE_FOLIAGE_PLACER
    [[maybe_unused]] static void set_field_SPRUCE_FOLIAGE_PLACER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SPRUCE_FOLIAGE_PLACER", "field_21300", "SPRUCE_FOLIAGE_PLACER", "f_68592_"), "Lefv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.foliage.FoliagePlacerType#PINE_FOLIAGE_PLACER
    [[maybe_unused]] static jobject get_field_PINE_FOLIAGE_PLACER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PINE_FOLIAGE_PLACER", "field_21301", "PINE_FOLIAGE_PLACER", "f_68593_"), "Lefv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.foliage.FoliagePlacerType#PINE_FOLIAGE_PLACER
    [[maybe_unused]] static void set_field_PINE_FOLIAGE_PLACER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PINE_FOLIAGE_PLACER", "field_21301", "PINE_FOLIAGE_PLACER", "f_68593_"), "Lefv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.foliage.FoliagePlacerType#ACACIA_FOLIAGE_PLACER
    [[maybe_unused]] static jobject get_field_ACACIA_FOLIAGE_PLACER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ACACIA_FOLIAGE_PLACER", "field_21302", "ACACIA_FOLIAGE_PLACER", "f_68594_"), "Lefv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.foliage.FoliagePlacerType#ACACIA_FOLIAGE_PLACER
    [[maybe_unused]] static void set_field_ACACIA_FOLIAGE_PLACER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ACACIA_FOLIAGE_PLACER", "field_21302", "ACACIA_FOLIAGE_PLACER", "f_68594_"), "Lefv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.foliage.FoliagePlacerType#BUSH_FOLIAGE_PLACER
    [[maybe_unused]] static jobject get_field_BUSH_FOLIAGE_PLACER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "BUSH_FOLIAGE_PLACER", "field_24161", "BUSH_FOLIAGE_PLACER", "f_68595_"), "Lefv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.foliage.FoliagePlacerType#BUSH_FOLIAGE_PLACER
    [[maybe_unused]] static void set_field_BUSH_FOLIAGE_PLACER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "BUSH_FOLIAGE_PLACER", "field_24161", "BUSH_FOLIAGE_PLACER", "f_68595_"), "Lefv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.foliage.FoliagePlacerType#FANCY_FOLIAGE_PLACER
    [[maybe_unused]] static jobject get_field_FANCY_FOLIAGE_PLACER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "FANCY_FOLIAGE_PLACER", "field_24162", "FANCY_FOLIAGE_PLACER", "f_68596_"), "Lefv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.foliage.FoliagePlacerType#FANCY_FOLIAGE_PLACER
    [[maybe_unused]] static void set_field_FANCY_FOLIAGE_PLACER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "FANCY_FOLIAGE_PLACER", "field_24162", "FANCY_FOLIAGE_PLACER", "f_68596_"), "Lefv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.foliage.FoliagePlacerType#JUNGLE_FOLIAGE_PLACER
    [[maybe_unused]] static jobject get_field_JUNGLE_FOLIAGE_PLACER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "MEGA_JUNGLE_FOLIAGE_PLACER", "field_24163", "JUNGLE_FOLIAGE_PLACER", "f_68597_"), "Lefv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.foliage.FoliagePlacerType#JUNGLE_FOLIAGE_PLACER
    [[maybe_unused]] static void set_field_JUNGLE_FOLIAGE_PLACER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "MEGA_JUNGLE_FOLIAGE_PLACER", "field_24163", "JUNGLE_FOLIAGE_PLACER", "f_68597_"), "Lefv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.foliage.FoliagePlacerType#MEGA_PINE_FOLIAGE_PLACER
    [[maybe_unused]] static jobject get_field_MEGA_PINE_FOLIAGE_PLACER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "MEGA_PINE_FOLIAGE_PLACER", "field_24164", "MEGA_PINE_FOLIAGE_PLACER", "f_68598_"), "Lefv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.foliage.FoliagePlacerType#MEGA_PINE_FOLIAGE_PLACER
    [[maybe_unused]] static void set_field_MEGA_PINE_FOLIAGE_PLACER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "MEGA_PINE_FOLIAGE_PLACER", "field_24164", "MEGA_PINE_FOLIAGE_PLACER", "f_68598_"), "Lefv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.foliage.FoliagePlacerType#DARK_OAK_FOLIAGE_PLACER
    [[maybe_unused]] static jobject get_field_DARK_OAK_FOLIAGE_PLACER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "DARK_OAK_FOLIAGE_PLACER", "field_24165", "DARK_OAK_FOLIAGE_PLACER", "f_68599_"), "Lefv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.foliage.FoliagePlacerType#DARK_OAK_FOLIAGE_PLACER
    [[maybe_unused]] static void set_field_DARK_OAK_FOLIAGE_PLACER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "DARK_OAK_FOLIAGE_PLACER", "field_24165", "DARK_OAK_FOLIAGE_PLACER", "f_68599_"), "Lefv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.foliage.FoliagePlacerType#RANDOM_SPREAD_FOLIAGE_PLACER
    [[maybe_unused]] static jobject get_field_RANDOM_SPREAD_FOLIAGE_PLACER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "RANDOM_SPREAD_FOLIAGE_PLACER", "field_29296", "RANDOM_SPREAD_FOLIAGE_PLACER", "f_161452_"), "Lefv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.foliage.FoliagePlacerType#RANDOM_SPREAD_FOLIAGE_PLACER
    [[maybe_unused]] static void set_field_RANDOM_SPREAD_FOLIAGE_PLACER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "RANDOM_SPREAD_FOLIAGE_PLACER", "field_29296", "RANDOM_SPREAD_FOLIAGE_PLACER", "f_161452_"), "Lefv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.foliage.FoliagePlacerType#CHERRY_FOLIAGE_PLACER
    [[maybe_unused]] static jobject get_field_CHERRY_FOLIAGE_PLACER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "CHERRY_FOLIAGE_PLACER", "field_42847", "CHERRY_FOLIAGE_PLACER", "f_271376_"), "Lefv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.foliage.FoliagePlacerType#CHERRY_FOLIAGE_PLACER
    [[maybe_unused]] static void set_field_CHERRY_FOLIAGE_PLACER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "CHERRY_FOLIAGE_PLACER", "field_42847", "CHERRY_FOLIAGE_PLACER", "f_271376_"), "Lefv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.foliage.FoliagePlacerType#codec
    static jobject get_field_codec(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "codec", "field_24932", "codec", "f_68600_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.foliage.FoliagePlacerType#codec
    static void set_field_codec(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "codec", "field_24932", "codec", "f_68600_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_28850", "register", "m_68605_"), "(Ljava/lang/String;Lcom/mojang/serialization/MapCodec;)Lefv;");
    }

    static jobject register(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_28849", "getCodec", "m_68604_"), "()Lcom/mojang/serialization/MapCodec;");
    }

    static jobject getCodec(const jobject& obj) {
                
       const auto methodID = methodID_getCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FOLIAGE_FOLIAGEPLACERTYPE_HPP