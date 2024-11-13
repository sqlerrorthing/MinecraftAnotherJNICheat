// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_CHUNKPALETTEDSTORAGEFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_CHUNKPALETTEDSTORAGEFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.ChunkPalettedStorageFix
 * Remapped: bbt
 */
namespace ChunkPalettedStorageFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bbt", "net/minecraft/util/datafix/fixes/ChunkPalettedStorageFix", "net/minecraft/class_3582", "net/minecraft/datafixer/fix/ChunkPalettedStorageFix", "net/minecraft/src/C_242_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#field_29871
    [[maybe_unused]] static jint get_field_field_29871() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NORTH_WEST_MASK", "field_29871", "field_29871", "f_145212_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#field_29871
    [[maybe_unused]] static void set_field_field_29871(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NORTH_WEST_MASK", "field_29871", "field_29871", "f_145212_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#field_29872
    [[maybe_unused]] static jint get_field_field_29872() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "WEST_MASK", "field_29872", "field_29872", "f_145213_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#field_29872
    [[maybe_unused]] static void set_field_field_29872(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "WEST_MASK", "field_29872", "field_29872", "f_145213_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#field_29873
    [[maybe_unused]] static jint get_field_field_29873() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SOUTH_WEST_MASK", "field_29873", "field_29873", "f_145214_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#field_29873
    [[maybe_unused]] static void set_field_field_29873(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SOUTH_WEST_MASK", "field_29873", "field_29873", "f_145214_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#field_29874
    [[maybe_unused]] static jint get_field_field_29874() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SOUTH_MASK", "field_29874", "field_29874", "f_145215_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#field_29874
    [[maybe_unused]] static void set_field_field_29874(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SOUTH_MASK", "field_29874", "field_29874", "f_145215_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#field_29875
    [[maybe_unused]] static jint get_field_field_29875() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "SOUTH_EAST_MASK", "field_29875", "field_29875", "f_145216_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#field_29875
    [[maybe_unused]] static void set_field_field_29875(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "SOUTH_EAST_MASK", "field_29875", "field_29875", "f_145216_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#field_29876
    [[maybe_unused]] static jint get_field_field_29876() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "EAST_MASK", "field_29876", "field_29876", "f_145217_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#field_29876
    [[maybe_unused]] static void set_field_field_29876(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "EAST_MASK", "field_29876", "field_29876", "f_145217_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#field_29877
    [[maybe_unused]] static jint get_field_field_29877() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "NORTH_EAST_MASK", "field_29877", "field_29877", "f_145218_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#field_29877
    [[maybe_unused]] static void set_field_field_29877(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "NORTH_EAST_MASK", "field_29877", "field_29877", "f_145218_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#field_29878
    [[maybe_unused]] static jint get_field_field_29878() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "NORTH_MASK", "field_29878", "field_29878", "f_145219_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#field_29878
    [[maybe_unused]] static void set_field_field_29878(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "NORTH_MASK", "field_29878", "field_29878", "f_145219_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "LOGGER", "field_15844", "LOGGER", "f_15035_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "LOGGER", "field_15844", "LOGGER", "f_15035_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#BLOCKS_NEEDING_SIDE_UPDATE
    [[maybe_unused]] static jobject get_field_BLOCKS_NEEDING_SIDE_UPDATE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "VIRTUAL", "field_15842", "BLOCKS_NEEDING_SIDE_UPDATE", "f_15036_"), "Ljava/util/BitSet;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#BLOCKS_NEEDING_SIDE_UPDATE
    [[maybe_unused]] static void set_field_BLOCKS_NEEDING_SIDE_UPDATE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "VIRTUAL", "field_15842", "BLOCKS_NEEDING_SIDE_UPDATE", "f_15036_"), "Ljava/util/BitSet;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#BLOCKS_NEEDING_IN_PLACE_UPDATE
    [[maybe_unused]] static jobject get_field_BLOCKS_NEEDING_IN_PLACE_UPDATE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "FIX", "field_15854", "BLOCKS_NEEDING_IN_PLACE_UPDATE", "f_15037_"), "Ljava/util/BitSet;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#BLOCKS_NEEDING_IN_PLACE_UPDATE
    [[maybe_unused]] static void set_field_BLOCKS_NEEDING_IN_PLACE_UPDATE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "FIX", "field_15854", "BLOCKS_NEEDING_IN_PLACE_UPDATE", "f_15037_"), "Ljava/util/BitSet;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#PUMPKIN
    [[maybe_unused]] static jobject get_field_PUMPKIN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "PUMPKIN", "field_15840", "PUMPKIN", "f_15038_"), "Lcom/mojang/serialization/Dynamic;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#PUMPKIN
    [[maybe_unused]] static void set_field_PUMPKIN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "PUMPKIN", "field_15840", "PUMPKIN", "f_15038_"), "Lcom/mojang/serialization/Dynamic;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#PODZOL
    [[maybe_unused]] static jobject get_field_PODZOL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "SNOWY_PODZOL", "field_15852", "PODZOL", "f_15039_"), "Lcom/mojang/serialization/Dynamic;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#PODZOL
    [[maybe_unused]] static void set_field_PODZOL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "SNOWY_PODZOL", "field_15852", "PODZOL", "f_15039_"), "Lcom/mojang/serialization/Dynamic;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#SNOWY_GRASS
    [[maybe_unused]] static jobject get_field_SNOWY_GRASS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "SNOWY_GRASS", "field_15838", "SNOWY_GRASS", "f_15040_"), "Lcom/mojang/serialization/Dynamic;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#SNOWY_GRASS
    [[maybe_unused]] static void set_field_SNOWY_GRASS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "SNOWY_GRASS", "field_15838", "SNOWY_GRASS", "f_15040_"), "Lcom/mojang/serialization/Dynamic;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#SNOWY_MYCELIUM
    [[maybe_unused]] static jobject get_field_SNOWY_MYCELIUM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "SNOWY_MYCELIUM", "field_15850", "SNOWY_MYCELIUM", "f_15041_"), "Lcom/mojang/serialization/Dynamic;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#SNOWY_MYCELIUM
    [[maybe_unused]] static void set_field_SNOWY_MYCELIUM(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "SNOWY_MYCELIUM", "field_15850", "SNOWY_MYCELIUM", "f_15041_"), "Lcom/mojang/serialization/Dynamic;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#SUNFLOWER_UPPER
    [[maybe_unused]] static jobject get_field_SUNFLOWER_UPPER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "UPPER_SUNFLOWER", "field_15839", "SUNFLOWER_UPPER", "f_15042_"), "Lcom/mojang/serialization/Dynamic;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#SUNFLOWER_UPPER
    [[maybe_unused]] static void set_field_SUNFLOWER_UPPER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "UPPER_SUNFLOWER", "field_15839", "SUNFLOWER_UPPER", "f_15042_"), "Lcom/mojang/serialization/Dynamic;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#LILAC_UPPER
    [[maybe_unused]] static jobject get_field_LILAC_UPPER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "UPPER_LILAC", "field_15848", "LILAC_UPPER", "f_15043_"), "Lcom/mojang/serialization/Dynamic;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#LILAC_UPPER
    [[maybe_unused]] static void set_field_LILAC_UPPER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "UPPER_LILAC", "field_15848", "LILAC_UPPER", "f_15043_"), "Lcom/mojang/serialization/Dynamic;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#GRASS_UPPER
    [[maybe_unused]] static jobject get_field_GRASS_UPPER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "UPPER_TALL_GRASS", "field_15834", "GRASS_UPPER", "f_15044_"), "Lcom/mojang/serialization/Dynamic;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#GRASS_UPPER
    [[maybe_unused]] static void set_field_GRASS_UPPER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "UPPER_TALL_GRASS", "field_15834", "GRASS_UPPER", "f_15044_"), "Lcom/mojang/serialization/Dynamic;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#FERN_UPPER
    [[maybe_unused]] static jobject get_field_FERN_UPPER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "UPPER_LARGE_FERN", "field_15845", "FERN_UPPER", "f_15045_"), "Lcom/mojang/serialization/Dynamic;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#FERN_UPPER
    [[maybe_unused]] static void set_field_FERN_UPPER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "UPPER_LARGE_FERN", "field_15845", "FERN_UPPER", "f_15045_"), "Lcom/mojang/serialization/Dynamic;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#ROSE_UPPER
    [[maybe_unused]] static jobject get_field_ROSE_UPPER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("t", "UPPER_ROSE_BUSH", "field_15835", "ROSE_UPPER", "f_15046_"), "Lcom/mojang/serialization/Dynamic;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#ROSE_UPPER
    [[maybe_unused]] static void set_field_ROSE_UPPER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("t", "UPPER_ROSE_BUSH", "field_15835", "ROSE_UPPER", "f_15046_"), "Lcom/mojang/serialization/Dynamic;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#PEONY_UPPER
    [[maybe_unused]] static jobject get_field_PEONY_UPPER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "UPPER_PEONY", "field_15847", "PEONY_UPPER", "f_15047_"), "Lcom/mojang/serialization/Dynamic;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#PEONY_UPPER
    [[maybe_unused]] static void set_field_PEONY_UPPER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "UPPER_PEONY", "field_15847", "PEONY_UPPER", "f_15047_"), "Lcom/mojang/serialization/Dynamic;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#FLOWER_POT
    [[maybe_unused]] static jobject get_field_FLOWER_POT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "FLOWER_POT_MAP", "field_15841", "FLOWER_POT", "f_15048_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#FLOWER_POT
    [[maybe_unused]] static void set_field_FLOWER_POT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "FLOWER_POT_MAP", "field_15841", "FLOWER_POT", "f_15048_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#SKULL
    [[maybe_unused]] static jobject get_field_SKULL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "SKULL_MAP", "field_15853", "SKULL", "f_15049_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#SKULL
    [[maybe_unused]] static void set_field_SKULL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "SKULL_MAP", "field_15853", "SKULL", "f_15049_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#DOOR
    [[maybe_unused]] static jobject get_field_DOOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "DOOR_MAP", "field_15836", "DOOR", "f_15050_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#DOOR
    [[maybe_unused]] static void set_field_DOOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "DOOR_MAP", "field_15836", "DOOR", "f_15050_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#NOTE_BLOCK
    [[maybe_unused]] static jobject get_field_NOTE_BLOCK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "NOTE_BLOCK_MAP", "field_15846", "NOTE_BLOCK", "f_15051_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#NOTE_BLOCK
    [[maybe_unused]] static void set_field_NOTE_BLOCK(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "NOTE_BLOCK_MAP", "field_15846", "NOTE_BLOCK", "f_15051_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#COLORS
    [[maybe_unused]] static jobject get_field_COLORS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("z", "DYE_COLOR_MAP", "field_15837", "COLORS", "f_15052_"), "Lit/unimi/dsi/fastutil/ints/Int2ObjectMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#COLORS
    [[maybe_unused]] static void set_field_COLORS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("z", "DYE_COLOR_MAP", "field_15837", "COLORS", "f_15052_"), "Lit/unimi/dsi/fastutil/ints/Int2ObjectMap;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#BED
    [[maybe_unused]] static jobject get_field_BED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("A", "BED_BLOCK_MAP", "field_15849", "BED", "f_15053_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#BED
    [[maybe_unused]] static void set_field_BED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("A", "BED_BLOCK_MAP", "field_15849", "BED", "f_15053_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#BANNER
    [[maybe_unused]] static jobject get_field_BANNER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("B", "BANNER_BLOCK_MAP", "field_15851", "BANNER", "f_15054_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#BANNER
    [[maybe_unused]] static void set_field_BANNER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("B", "BANNER_BLOCK_MAP", "field_15851", "BANNER", "f_15054_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#AIR
    [[maybe_unused]] static jobject get_field_AIR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("C", "AIR", "field_15843", "AIR", "f_15055_"), "Lcom/mojang/serialization/Dynamic;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#AIR
    [[maybe_unused]] static void set_field_AIR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("C", "AIR", "field_15843", "AIR", "f_15055_"), "Lcom/mojang/serialization/Dynamic;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#field_29870
    [[maybe_unused]] static jint get_field_field_29870() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("D", "SIZE", "field_29870", "field_29870", "f_145211_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ChunkPalettedStorageFix#field_29870
    [[maybe_unused]] static void set_field_field_29870(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("D", "SIZE", "field_29870", "field_29870", "f_145211_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_buildSkull() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "mapSkull", "method_15610", "buildSkull", "m_15077_"), "(Ljava/util/Map;ILjava/lang/String;Ljava/lang/String;)V");
    }

    static void buildSkull(const jobject& arg0, const jint& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_buildSkull();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_buildDoor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "mapDoor", "method_15611", "buildDoor", "m_15082_"), "(Ljava/util/Map;Ljava/lang/String;I)V");
    }

    static void buildDoor(const jobject& arg0, const jobject& arg1, const jint& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_buildDoor();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_buildBed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "addBeds", "method_15636", "buildBed", "m_15073_"), "(Ljava/util/Map;ILjava/lang/String;)V");
    }

    static void buildBed(const jobject& arg0, const jint& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_buildBed();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_buildBanner() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "addBanners", "method_15605", "buildBanner", "m_15096_"), "(Ljava/util/Map;ILjava/lang/String;)V");
    }

    static void buildBanner(const jobject& arg0, const jint& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_buildBanner();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getName", "method_15637", "getName", "m_15064_"), "(Lcom/mojang/serialization/Dynamic;)Ljava/lang/String;");
    }

    static jobject getName(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getName();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getProperty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getProperty", "method_15638", "getProperty", "m_15066_"), "(Lcom/mojang/serialization/Dynamic;Ljava/lang/String;)Ljava/lang/String;");
    }

    static jobject getProperty(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getProperty();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_addTo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "idFor", "method_15616", "addTo", "m_15061_"), "(Laxk;Lcom/mojang/serialization/Dynamic;)I");
    }

    static jint addTo(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_addTo();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_fixChunk() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "fix", "method_15633", "fixChunk", "m_15092_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject fixChunk(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_fixChunk();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_makeRule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("makeRule", "makeRule", "", "", "makeRule"), "()Lcom/mojang/datafixers/TypeRewriteRule;");
    }

    static jobject makeRule(const jobject& obj) {
                
       const auto methodID = methodID_makeRule();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSideToUpgradeFlag() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getSideMask", "method_15615", "getSideToUpgradeFlag", "m_15086_"), "(ZZZZ)I");
    }

    static jint getSideToUpgradeFlag(const jboolean& arg0, const jboolean& arg1, const jboolean& arg2, const jboolean& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_getSideToUpgradeFlag();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_CHUNKPALETTEDSTORAGEFIX_HPP