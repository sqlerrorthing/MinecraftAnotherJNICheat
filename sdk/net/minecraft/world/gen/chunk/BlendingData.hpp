// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_CHUNK_BLENDINGDATA_HPP
#define NET_MINECRAFT_WORLD_GEN_CHUNK_BLENDINGDATA_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.chunk.BlendingData
 * Remapped: eab
 */
namespace BlendingData {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eab", "net/minecraft/world/level/levelgen/blending/BlendingData", "net/minecraft/class_6749", "net/minecraft/world/gen/chunk/BlendingData", "net/minecraft/src/C_182959_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.world.gen.chunk.BlendingData#field_35514
    [[maybe_unused]] static jdouble get_field_field_35514() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "BLENDING_DENSITY_FACTOR", "field_35514", "field_35514", "f_190255_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticDoubleField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.BlendingData#field_35514
    [[maybe_unused]] static void set_field_field_35514(const jdouble &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "BLENDING_DENSITY_FACTOR", "field_35514", "field_35514", "f_190255_"), "D");
        return MinecraftSDK::env->SetStaticDoubleField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.world.gen.chunk.BlendingData#field_36280
    [[maybe_unused]] static jint get_field_field_36280() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CELL_WIDTH", "field_36280", "field_36280", "f_198290_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.world.gen.chunk.BlendingData#field_36280
    [[maybe_unused]] static void set_field_field_36280(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CELL_WIDTH", "field_36280", "field_36280", "f_198290_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.world.gen.chunk.BlendingData#field_35511
    [[maybe_unused]] static jint get_field_field_35511() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CELL_HEIGHT", "field_35511", "field_35511", "f_190252_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.world.gen.chunk.BlendingData#field_35511
    [[maybe_unused]] static void set_field_field_35511(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CELL_HEIGHT", "field_35511", "field_35511", "f_190252_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.world.gen.chunk.BlendingData#field_36281
    [[maybe_unused]] static jint get_field_field_36281() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CELL_RATIO", "field_36281", "field_36281", "f_198291_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.world.gen.chunk.BlendingData#field_36281
    [[maybe_unused]] static void set_field_field_36281(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CELL_RATIO", "field_36281", "field_36281", "f_198291_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.gen.chunk.BlendingData#field_37704
    [[maybe_unused]] static jdouble get_field_field_37704() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "SOLID_DENSITY", "field_37704", "field_37704", "f_224736_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticDoubleField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.BlendingData#field_37704
    [[maybe_unused]] static void set_field_field_37704(const jdouble &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "SOLID_DENSITY", "field_37704", "field_37704", "f_224736_"), "D");
        return MinecraftSDK::env->SetStaticDoubleField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.gen.chunk.BlendingData#field_37705
    [[maybe_unused]] static jdouble get_field_field_37705() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "AIR_DENSITY", "field_37705", "field_37705", "f_224737_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticDoubleField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.BlendingData#field_37705
    [[maybe_unused]] static void set_field_field_37705(const jdouble &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "AIR_DENSITY", "field_37705", "field_37705", "f_224737_"), "D");
        return MinecraftSDK::env->SetStaticDoubleField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.gen.chunk.BlendingData#field_35516
    [[maybe_unused]] static jint get_field_field_35516() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "CELLS_PER_SECTION_Y", "field_35516", "field_35516", "f_190257_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.BlendingData#field_35516
    [[maybe_unused]] static void set_field_field_35516(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "CELLS_PER_SECTION_Y", "field_35516", "field_35516", "f_190257_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.gen.chunk.BlendingData#BIOMES_PER_CHUNK
    [[maybe_unused]] static jint get_field_BIOMES_PER_CHUNK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "QUARTS_PER_SECTION", "field_35683", "BIOMES_PER_CHUNK", "f_190258_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.BlendingData#BIOMES_PER_CHUNK
    [[maybe_unused]] static void set_field_BIOMES_PER_CHUNK(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "QUARTS_PER_SECTION", "field_35683", "BIOMES_PER_CHUNK", "f_190258_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.gen.chunk.BlendingData#LAST_CHUNK_BIOME_INDEX
    [[maybe_unused]] static jint get_field_LAST_CHUNK_BIOME_INDEX() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "CELL_HORIZONTAL_MAX_INDEX_INSIDE", "field_35684", "LAST_CHUNK_BIOME_INDEX", "f_190259_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.BlendingData#LAST_CHUNK_BIOME_INDEX
    [[maybe_unused]] static void set_field_LAST_CHUNK_BIOME_INDEX(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "CELL_HORIZONTAL_MAX_INDEX_INSIDE", "field_35684", "LAST_CHUNK_BIOME_INDEX", "f_190259_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.gen.chunk.BlendingData#CHUNK_BIOME_END_INDEX
    [[maybe_unused]] static jint get_field_CHUNK_BIOME_END_INDEX() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "CELL_HORIZONTAL_MAX_INDEX_OUTSIDE", "field_35685", "CHUNK_BIOME_END_INDEX", "f_190260_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.BlendingData#CHUNK_BIOME_END_INDEX
    [[maybe_unused]] static void set_field_CHUNK_BIOME_END_INDEX(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "CELL_HORIZONTAL_MAX_INDEX_OUTSIDE", "field_35685", "CHUNK_BIOME_END_INDEX", "f_190260_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.gen.chunk.BlendingData#NORTH_WEST_END_INDEX
    [[maybe_unused]] static jint get_field_NORTH_WEST_END_INDEX() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "CELL_COLUMN_INSIDE_COUNT", "field_35686", "NORTH_WEST_END_INDEX", "f_190261_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.BlendingData#NORTH_WEST_END_INDEX
    [[maybe_unused]] static void set_field_NORTH_WEST_END_INDEX(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "CELL_COLUMN_INSIDE_COUNT", "field_35686", "NORTH_WEST_END_INDEX", "f_190261_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.gen.chunk.BlendingData#SOUTH_EAST_END_INDEX_PART
    [[maybe_unused]] static jint get_field_SOUTH_EAST_END_INDEX_PART() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "CELL_COLUMN_OUTSIDE_COUNT", "field_35687", "SOUTH_EAST_END_INDEX_PART", "f_190262_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.BlendingData#SOUTH_EAST_END_INDEX_PART
    [[maybe_unused]] static void set_field_SOUTH_EAST_END_INDEX_PART(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "CELL_COLUMN_OUTSIDE_COUNT", "field_35687", "SOUTH_EAST_END_INDEX_PART", "f_190262_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.gen.chunk.BlendingData#HORIZONTAL_BIOME_COUNT
    [[maybe_unused]] static jint get_field_HORIZONTAL_BIOME_COUNT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "CELL_COLUMN_COUNT", "field_35518", "HORIZONTAL_BIOME_COUNT", "f_190263_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.BlendingData#HORIZONTAL_BIOME_COUNT
    [[maybe_unused]] static void set_field_HORIZONTAL_BIOME_COUNT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "CELL_COLUMN_COUNT", "field_35518", "HORIZONTAL_BIOME_COUNT", "f_190263_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.chunk.BlendingData#oldHeightLimit
    static jobject get_field_oldHeightLimit(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "areaWithOldGeneration", "field_35515", "oldHeightLimit", "f_224738_"), "Ldcy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.BlendingData#oldHeightLimit
    static void set_field_oldHeightLimit(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "areaWithOldGeneration", "field_35515", "oldHeightLimit", "f_224738_"), "Ldcy;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.world.gen.chunk.BlendingData#SURFACE_BLOCKS
    [[maybe_unused]] static jobject get_field_SURFACE_BLOCKS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "SURFACE_BLOCKS", "field_35519", "SURFACE_BLOCKS", "f_190265_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.BlendingData#SURFACE_BLOCKS
    [[maybe_unused]] static void set_field_SURFACE_BLOCKS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "SURFACE_BLOCKS", "field_35519", "SURFACE_BLOCKS", "f_190265_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.world.gen.chunk.BlendingData#field_35513
    [[maybe_unused]] static jdouble get_field_field_35513() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "NO_VALUE", "field_35513", "field_35513", "f_190253_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticDoubleField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.world.gen.chunk.BlendingData#field_35513
    [[maybe_unused]] static void set_field_field_35513(const jdouble &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "NO_VALUE", "field_35513", "field_35513", "f_190253_"), "D");
        return MinecraftSDK::env->SetStaticDoubleField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.chunk.BlendingData#initializedBlendingData
    static jboolean get_field_initializedBlendingData(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "hasCalculatedData", "field_35690", "initializedBlendingData", "f_190267_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.BlendingData#initializedBlendingData
    static void set_field_initializedBlendingData(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "hasCalculatedData", "field_35690", "initializedBlendingData", "f_190267_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.chunk.BlendingData#surfaceHeights
    static jdouble get_field_surfaceHeights(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "heights", "field_35692", "surfaceHeights", "f_190269_"), "[D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.BlendingData#surfaceHeights
    static void set_field_surfaceHeights(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "heights", "field_35692", "surfaceHeights", "f_190269_"), "[D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.chunk.BlendingData#biomes
    static jobject get_field_biomes(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("t", "biomes", "field_36345", "biomes", "f_202276_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.BlendingData#biomes
    static void set_field_biomes(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("t", "biomes", "field_36345", "biomes", "f_202276_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.chunk.BlendingData#collidableBlockDensities
    static jdouble get_field_collidableBlockDensities(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "densities", "field_35693", "collidableBlockDensities", "f_190270_"), "[[D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.BlendingData#collidableBlockDensities
    static void set_field_collidableBlockDensities(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "densities", "field_35693", "collidableBlockDensities", "f_190270_"), "[[D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.world.gen.chunk.BlendingData#DOUBLE_ARRAY_CODEC
    [[maybe_unused]] static jobject get_field_DOUBLE_ARRAY_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "DOUBLE_ARRAY_CODEC", "field_35695", "DOUBLE_ARRAY_CODEC", "f_190272_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.BlendingData#DOUBLE_ARRAY_CODEC
    [[maybe_unused]] static void set_field_DOUBLE_ARRAY_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "DOUBLE_ARRAY_CODEC", "field_35695", "DOUBLE_ARRAY_CODEC", "f_190272_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.chunk.BlendingData#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CODEC", "field_35682", "CODEC", "f_190254_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.chunk.BlendingData#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CODEC", "field_35682", "CODEC", "f_190254_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_validate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "validateArraySize", "method_39573", "validate", "m_190320_"), "(Leab;)Lcom/mojang/serialization/DataResult;");
    }

    static jobject validate(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_validate();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getBlendingData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getOrUpdateBlendingData", "method_39570", "getBlendingData", "m_190304_"), "(Larb;II)Leab;");
    }

    static jobject getBlendingData(const jobject& arg0, const jint& arg1, const jint& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_getBlendingData();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getAdjacentChunksWithNoise() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "sideByGenerationAge", "method_39579", "getAdjacentChunksWithNoise", "m_197065_"), "(Ldds;IIZ)Ljava/util/Set;");
    }

    static jobject getAdjacentChunksWithNoise(const jobject& arg0, const jint& arg1, const jint& arg2, const jboolean& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_getAdjacentChunksWithNoise();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_initChunkBlendingData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "calculateData", "method_39572", "initChunkBlendingData", "m_190317_"), "(Lduy;Ljava/util/Set;)V");
    }

    static void initChunkBlendingData(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_initChunkBlendingData();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_initBlockColumn() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addValuesForColumn", "method_39347", "initBlockColumn", "m_190299_"), "(ILduy;II)V");
    }

    static void initBlockColumn(const jobject& obj, const jint& arg0, const jobject& arg1, const jint& arg2, const jint& arg3) {
                
       const auto methodID = methodID_initBlockColumn();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getSurfaceBlockY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getHeightAtXZ", "method_39349", "getSurfaceBlockY", "m_190310_"), "(Lduy;II)I");
    }

    static jint getSurfaceBlockY(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_getSurfaceBlockY();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getAboveCollidableBlockValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "read1", "method_39905", "getAboveCollidableBlockValue", "m_198297_"), "(Lduy;Ljd$a;)D");
    }

    static jdouble getAboveCollidableBlockValue(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getAboveCollidableBlockValue();
       return MinecraftSDK::env->CallStaticDoubleMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getCollidableBlockDensityBelow() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "read7", "method_39906", "getCollidableBlockDensityBelow", "m_198300_"), "(Lduy;Ljd$a;)D");
    }

    static jdouble getCollidableBlockDensityBelow(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getCollidableBlockDensityBelow();
       return MinecraftSDK::env->CallStaticDoubleMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_calculateCollidableBlockDensityColumn() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getDensityColumn", "method_39354", "calculateCollidableBlockDensityColumn", "m_198292_"), "(Lduy;III)[D");
    }

    static jdouble calculateCollidableBlockDensityColumn(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3) {
                
       const auto methodID = methodID_calculateCollidableBlockDensityColumn();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getVerticalBiomeSections() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getBiomeColumn", "method_41566", "getVerticalBiomeSections", "m_224757_"), "(Lduy;II)Ljava/util/List;");
    }

    static jobject getVerticalBiomeSections(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_getVerticalBiomeSections();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_isCollidableAndNotTreeAt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isGround", "method_39350", "isCollidableAndNotTreeAt", "m_190314_"), "(Lduy;Ljd;)Z");
    }

    static jboolean isCollidableAndNotTreeAt(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_isCollidableAndNotTreeAt();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getHeight", "method_39344", "getHeight", "m_190285_"), "(III)D");
    }

    static jdouble getHeight(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_getHeight();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getCollidableBlockDensity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getDensity", "method_39575", "getCollidableBlockDensity", "m_190324_"), "([DI)D");
    }

    static jdouble getCollidableBlockDensity(const jobject& obj, const jarray& arg0, const jdouble& arg1, const jint& arg2) {
                
       const auto methodID = methodID_getCollidableBlockDensity();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__getCollidableBlockDensity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getDensity", "method_39345", "getCollidableBlockDensity", "m_190333_"), "(III)D");
    }

    static jdouble _getCollidableBlockDensity(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID__getCollidableBlockDensity();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_acceptBiomes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "iterateBiomes", "method_40028", "acceptBiomes", "m_224748_"), "(IIILeab$a;)V");
    }

    static void acceptBiomes(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_acceptBiomes();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_acceptHeights() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "iterateHeights", "method_39351", "acceptHeights", "m_190295_"), "(IILeab$c;)V");
    }

    static void acceptHeights(const jobject& obj, const jint& arg0, const jint& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_acceptHeights();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_acceptCollidableBlockDensities() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "iterateDensities", "method_39346", "acceptCollidableBlockDensities", "m_190289_"), "(IIIILeab$b;)V");
    }

    static void acceptCollidableBlockDensities(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_acceptCollidableBlockDensities();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_getVerticalHalfSectionCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "cellCountPerColumn", "method_39576", "getVerticalHalfSectionCount", "m_190327_"), "()I");
    }

    static jint getVerticalHalfSectionCount(const jobject& obj) {
                
       const auto methodID = methodID_getVerticalHalfSectionCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getVerticalBiomeCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "quartCountPerColumn", "method_41567", "getVerticalBiomeCount", "m_224763_"), "()I");
    }

    static jint getVerticalBiomeCount(const jobject& obj) {
                
       const auto methodID = methodID_getVerticalBiomeCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getOneAboveBottomHalfSectionY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getColumnMinY", "method_39581", "getOneAboveBottomHalfSectionY", "m_190347_"), "()I");
    }

    static jint getOneAboveBottomHalfSectionY(const jobject& obj) {
                
       const auto methodID = methodID_getOneAboveBottomHalfSectionY();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBottomHalfSectionY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getMinY", "method_39583", "getBottomHalfSectionY", "m_190353_"), "()I");
    }

    static jint getBottomHalfSectionY(const jobject& obj) {
                
       const auto methodID = methodID_getBottomHalfSectionY();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getHalfSectionHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getCellYIndex", "method_41565", "getHalfSectionHeight", "m_224746_"), "(I)I");
    }

    static jint getHalfSectionHeight(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getHalfSectionHeight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getNorthWestIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getInsideIndex", "method_39578", "getNorthWestIndex", "m_190330_"), "(II)I");
    }

    static jint getNorthWestIndex(const jint& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getNorthWestIndex();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getSouthEastIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getOutsideIndex", "method_39582", "getSouthEastIndex", "m_190350_"), "(II)I");
    }

    static jint getSouthEastIndex(const jint& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getSouthEastIndex();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getX", "method_39343", "getX", "m_190348_"), "(I)I");
    }

    static jint getX(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getX();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getZ() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "getZ", "method_39352", "getZ", "m_190354_"), "(I)I");
    }

    static jint getZ(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getZ();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_method_39355() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "zeroIfNegative", "method_39355", "method_39355", "m_190356_"), "(I)I");
    }

    static jint method_39355(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_method_39355();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getOldHeightLimit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getAreaWithOldGeneration", "method_41564", "getOldHeightLimit", "m_224743_"), "()Ldcy;");
    }

    static jobject getOldHeightLimit(const jobject& obj) {
                
       const auto methodID = methodID_getOldHeightLimit();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_CHUNK_BLENDINGDATA_HPP