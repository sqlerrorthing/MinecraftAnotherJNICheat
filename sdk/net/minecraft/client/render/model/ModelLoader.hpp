// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_MODEL_MODELLOADER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_MODEL_MODELLOADER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.model.ModelLoader
 * Remapped: gss
 */
namespace ModelLoader {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gss", "net/minecraft/client/resources/model/ModelBakery", "net/minecraft/class_1088", "net/minecraft/client/render/model/ModelLoader", "net/minecraft/src/C_4532_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.render.model.ModelLoader#FIRE_0
    [[maybe_unused]] static jobject get_field_FIRE_0() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "FIRE_0", "field_5397", "FIRE_0", "f_119219_"), "Lgsq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.ModelLoader#FIRE_0
    [[maybe_unused]] static void set_field_FIRE_0(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "FIRE_0", "field_5397", "FIRE_0", "f_119219_"), "Lgsq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.model.ModelLoader#FIRE_1
    [[maybe_unused]] static jobject get_field_FIRE_1() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "FIRE_1", "field_5370", "FIRE_1", "f_119220_"), "Lgsq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.ModelLoader#FIRE_1
    [[maybe_unused]] static void set_field_FIRE_1(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "FIRE_1", "field_5370", "FIRE_1", "f_119220_"), "Lgsq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.model.ModelLoader#LAVA_FLOW
    [[maybe_unused]] static jobject get_field_LAVA_FLOW() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LAVA_FLOW", "field_5381", "LAVA_FLOW", "f_119221_"), "Lgsq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.ModelLoader#LAVA_FLOW
    [[maybe_unused]] static void set_field_LAVA_FLOW(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LAVA_FLOW", "field_5381", "LAVA_FLOW", "f_119221_"), "Lgsq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.model.ModelLoader#WATER_FLOW
    [[maybe_unused]] static jobject get_field_WATER_FLOW() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "WATER_FLOW", "field_5391", "WATER_FLOW", "f_119222_"), "Lgsq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.ModelLoader#WATER_FLOW
    [[maybe_unused]] static void set_field_WATER_FLOW(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "WATER_FLOW", "field_5391", "WATER_FLOW", "f_119222_"), "Lgsq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.model.ModelLoader#WATER_OVERLAY
    [[maybe_unused]] static jobject get_field_WATER_OVERLAY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "WATER_OVERLAY", "field_5388", "WATER_OVERLAY", "f_119223_"), "Lgsq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.ModelLoader#WATER_OVERLAY
    [[maybe_unused]] static void set_field_WATER_OVERLAY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "WATER_OVERLAY", "field_5388", "WATER_OVERLAY", "f_119223_"), "Lgsq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.model.ModelLoader#BANNER_BASE
    [[maybe_unused]] static jobject get_field_BANNER_BASE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "BANNER_BASE", "field_20847", "BANNER_BASE", "f_119224_"), "Lgsq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.ModelLoader#BANNER_BASE
    [[maybe_unused]] static void set_field_BANNER_BASE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "BANNER_BASE", "field_20847", "BANNER_BASE", "f_119224_"), "Lgsq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.model.ModelLoader#SHIELD_BASE
    [[maybe_unused]] static jobject get_field_SHIELD_BASE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "SHIELD_BASE", "field_21557", "SHIELD_BASE", "f_119225_"), "Lgsq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.ModelLoader#SHIELD_BASE
    [[maybe_unused]] static void set_field_SHIELD_BASE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "SHIELD_BASE", "field_21557", "SHIELD_BASE", "f_119225_"), "Lgsq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.model.ModelLoader#SHIELD_BASE_NO_PATTERN
    [[maybe_unused]] static jobject get_field_SHIELD_BASE_NO_PATTERN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "NO_PATTERN_SHIELD", "field_21558", "SHIELD_BASE_NO_PATTERN", "f_119226_"), "Lgsq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.ModelLoader#SHIELD_BASE_NO_PATTERN
    [[maybe_unused]] static void set_field_SHIELD_BASE_NO_PATTERN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "NO_PATTERN_SHIELD", "field_21558", "SHIELD_BASE_NO_PATTERN", "f_119226_"), "Lgsq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.model.ModelLoader#field_32983
    [[maybe_unused]] static jint get_field_field_32983() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "DESTROY_STAGE_COUNT", "field_32983", "field_32983", "f_174875_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.ModelLoader#field_32983
    [[maybe_unused]] static void set_field_field_32983(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "DESTROY_STAGE_COUNT", "field_32983", "field_32983", "f_174875_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.model.ModelLoader#BLOCK_DESTRUCTION_STAGES
    [[maybe_unused]] static jobject get_field_BLOCK_DESTRUCTION_STAGES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "DESTROY_STAGES", "field_20848", "BLOCK_DESTRUCTION_STAGES", "f_119227_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.ModelLoader#BLOCK_DESTRUCTION_STAGES
    [[maybe_unused]] static void set_field_BLOCK_DESTRUCTION_STAGES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "DESTROY_STAGES", "field_20848", "BLOCK_DESTRUCTION_STAGES", "f_119227_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.model.ModelLoader#BLOCK_DESTRUCTION_STAGE_TEXTURES
    [[maybe_unused]] static jobject get_field_BLOCK_DESTRUCTION_STAGE_TEXTURES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "BREAKING_LOCATIONS", "field_21020", "BLOCK_DESTRUCTION_STAGE_TEXTURES", "f_119228_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.ModelLoader#BLOCK_DESTRUCTION_STAGE_TEXTURES
    [[maybe_unused]] static void set_field_BLOCK_DESTRUCTION_STAGE_TEXTURES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "BREAKING_LOCATIONS", "field_21020", "BLOCK_DESTRUCTION_STAGE_TEXTURES", "f_119228_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.model.ModelLoader#BLOCK_DESTRUCTION_RENDER_LAYERS
    [[maybe_unused]] static jobject get_field_BLOCK_DESTRUCTION_RENDER_LAYERS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "DESTROY_TYPES", "field_21772", "BLOCK_DESTRUCTION_RENDER_LAYERS", "f_119229_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.ModelLoader#BLOCK_DESTRUCTION_RENDER_LAYERS
    [[maybe_unused]] static void set_field_BLOCK_DESTRUCTION_RENDER_LAYERS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "DESTROY_TYPES", "field_21772", "BLOCK_DESTRUCTION_RENDER_LAYERS", "f_119229_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.model.ModelLoader#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "LOGGER", "field_5380", "LOGGER", "f_119235_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.model.ModelLoader#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "LOGGER", "field_5380", "LOGGER", "f_119235_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.model.ModelLoader#BUILTIN
    [[maybe_unused]] static jobject get_field_BUILTIN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("t", "BUILTIN_SLASH", "field_32986", "BUILTIN", "f_174878_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.model.ModelLoader#BUILTIN
    [[maybe_unused]] static void set_field_BUILTIN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("t", "BUILTIN_SLASH", "field_32986", "BUILTIN", "f_174878_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.model.ModelLoader#BUILTIN_GENERATED
    [[maybe_unused]] static jobject get_field_BUILTIN_GENERATED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "BUILTIN_SLASH_GENERATED", "field_32987", "BUILTIN_GENERATED", "f_174879_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.model.ModelLoader#BUILTIN_GENERATED
    [[maybe_unused]] static void set_field_BUILTIN_GENERATED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "BUILTIN_SLASH_GENERATED", "field_32987", "BUILTIN_GENERATED", "f_174879_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.model.ModelLoader#BUILTIN_ENTITY
    [[maybe_unused]] static jobject get_field_BUILTIN_ENTITY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "BUILTIN_BLOCK_ENTITY", "field_32988", "BUILTIN_ENTITY", "f_174880_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.model.ModelLoader#BUILTIN_ENTITY
    [[maybe_unused]] static void set_field_BUILTIN_ENTITY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "BUILTIN_BLOCK_ENTITY", "field_32988", "BUILTIN_ENTITY", "f_174880_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.model.ModelLoader#MISSING
    [[maybe_unused]] static jobject get_field_MISSING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "MISSING_MODEL_NAME", "field_32989", "MISSING", "f_174881_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.model.ModelLoader#MISSING
    [[maybe_unused]] static void set_field_MISSING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "MISSING_MODEL_NAME", "field_32989", "MISSING", "f_174881_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.model.ModelLoader#MISSING_ID
    [[maybe_unused]] static jobject get_field_MISSING_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "MISSING_MODEL_LOCATION", "field_5374", "MISSING_ID", "f_119230_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.ModelLoader#MISSING_ID
    [[maybe_unused]] static void set_field_MISSING_ID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "MISSING_MODEL_LOCATION", "field_5374", "MISSING_ID", "f_119230_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.model.ModelLoader#MISSING_MODEL_ID
    [[maybe_unused]] static jobject get_field_MISSING_MODEL_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "MISSING_MODEL_VARIANT", "field_52276", "MISSING_MODEL_ID", "f_336634_"), "Lgsu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.ModelLoader#MISSING_MODEL_ID
    [[maybe_unused]] static void set_field_MISSING_MODEL_ID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "MISSING_MODEL_VARIANT", "field_52276", "MISSING_MODEL_ID", "f_336634_"), "Lgsu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.model.ModelLoader#MODELS_FINDER
    [[maybe_unused]] static jobject get_field_MODELS_FINDER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "MODEL_LISTER", "field_40570", "MODELS_FINDER", "f_244378_"), "Lakk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.ModelLoader#MODELS_FINDER
    [[maybe_unused]] static void set_field_MODELS_FINDER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "MODEL_LISTER", "field_40570", "MODELS_FINDER", "f_244378_"), "Lakk;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.model.ModelLoader#MISSING_DEFINITION
    [[maybe_unused]] static jobject get_field_MISSING_DEFINITION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "MISSING_MODEL_MESH", "field_5371", "MISSING_DEFINITION", "f_119231_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.ModelLoader#MISSING_DEFINITION
    [[maybe_unused]] static void set_field_MISSING_DEFINITION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "MISSING_MODEL_MESH", "field_5371", "MISSING_DEFINITION", "f_119231_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.model.ModelLoader#BUILTIN_MODEL_DEFINITIONS
    [[maybe_unused]] static jobject get_field_BUILTIN_MODEL_DEFINITIONS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "BUILTIN_MODELS", "field_5396", "BUILTIN_MODEL_DEFINITIONS", "f_119237_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.model.ModelLoader#BUILTIN_MODEL_DEFINITIONS
    [[maybe_unused]] static void set_field_BUILTIN_MODEL_DEFINITIONS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "BUILTIN_MODELS", "field_5396", "BUILTIN_MODEL_DEFINITIONS", "f_119237_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.model.ModelLoader#GENERATION_MARKER
    [[maybe_unused]] static jobject get_field_GENERATION_MARKER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "GENERATION_MARKER", "field_5400", "GENERATION_MARKER", "f_119232_"), "Lggb;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.ModelLoader#GENERATION_MARKER
    [[maybe_unused]] static void set_field_GENERATION_MARKER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "GENERATION_MARKER", "field_5400", "GENERATION_MARKER", "f_119232_"), "Lggb;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.model.ModelLoader#BLOCK_ENTITY_MARKER
    [[maybe_unused]] static jobject get_field_BLOCK_ENTITY_MARKER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "BLOCK_ENTITY_MARKER", "field_5389", "BLOCK_ENTITY_MARKER", "f_119233_"), "Lggb;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.ModelLoader#BLOCK_ENTITY_MARKER
    [[maybe_unused]] static void set_field_BLOCK_ENTITY_MARKER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "BLOCK_ENTITY_MARKER", "field_5389", "BLOCK_ENTITY_MARKER", "f_119233_"), "Lggb;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.render.model.ModelLoader#ITEM_MODEL_GENERATOR
    [[maybe_unused]] static jobject get_field_ITEM_MODEL_GENERATOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "ITEM_MODEL_GENERATOR", "field_5384", "ITEM_MODEL_GENERATOR", "f_119241_"), "Lgge;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.render.model.ModelLoader#ITEM_MODEL_GENERATOR
    [[maybe_unused]] static void set_field_ITEM_MODEL_GENERATOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "ITEM_MODEL_GENERATOR", "field_5384", "ITEM_MODEL_GENERATOR", "f_119241_"), "Lgge;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.model.ModelLoader#jsonUnbakedModels
    static jobject get_field_jsonUnbakedModels(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("z", "modelResources", "field_40567", "jsonUnbakedModels", "f_244132_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.model.ModelLoader#jsonUnbakedModels
    static void set_field_jsonUnbakedModels(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("z", "modelResources", "field_40567", "jsonUnbakedModels", "f_244132_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.model.ModelLoader#modelsToLoad
    static jobject get_field_modelsToLoad(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("A", "loadingStack", "field_5390", "modelsToLoad", "f_119210_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.model.ModelLoader#modelsToLoad
    static void set_field_modelsToLoad(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("A", "loadingStack", "field_5390", "modelsToLoad", "f_119210_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.model.ModelLoader#unbakedModels
    static jobject get_field_unbakedModels(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("B", "unbakedCache", "field_5376", "unbakedModels", "f_119212_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.model.ModelLoader#unbakedModels
    static void set_field_unbakedModels(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("B", "unbakedCache", "field_5376", "unbakedModels", "f_119212_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.render.model.ModelLoader#bakedModelCache
    static jobject get_field_bakedModelCache(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("C", "bakedCache", "field_5398", "bakedModelCache", "f_119213_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.render.model.ModelLoader#bakedModelCache
    static void set_field_bakedModelCache(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("C", "bakedCache", "field_5398", "bakedModelCache", "f_119213_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.model.ModelLoader#modelsToBake
    static jobject get_field_modelsToBake(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("D", "topLevelModels", "field_5394", "modelsToBake", "f_119214_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.model.ModelLoader#modelsToBake
    static void set_field_modelsToBake(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("D", "topLevelModels", "field_5394", "modelsToBake", "f_119214_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.model.ModelLoader#bakedModels
    static jobject get_field_bakedModels(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("E", "bakedTopLevelModels", "field_5387", "bakedModels", "f_119215_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.model.ModelLoader#bakedModels
    static void set_field_bakedModels(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("E", "bakedTopLevelModels", "field_5387", "bakedModels", "f_119215_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.model.ModelLoader#missingModel
    static jobject get_field_missingModel(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("F", "missingModel", "field_52275", "missingModel", "f_336931_"), "Lgsy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.model.ModelLoader#missingModel
    static void set_field_missingModel(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("F", "missingModel", "field_52275", "missingModel", "f_336931_"), "Lgsy;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.model.ModelLoader#stateLookup
    static jobject get_field_stateLookup(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("G", "modelGroups", "field_20274", "stateLookup", "f_119218_"), "Lit/unimi/dsi/fastutil/objects/Object2IntMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.model.ModelLoader#stateLookup
    static void set_field_stateLookup(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("G", "modelGroups", "field_20274", "stateLookup", "f_119218_"), "Lit/unimi/dsi/fastutil/objects/Object2IntMap;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_bake() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "bakeModels", "method_45876", "bake", "m_245909_"), "(Lgss$c;)V");
    }

    static void bake(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_bake();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getOrLoadModel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getModel", "method_4726", "getOrLoadModel", "m_119341_"), "(Lakr;)Lgsy;");
    }

    static jobject getOrLoadModel(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getOrLoadModel();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_loadInventoryVariantItemModel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "loadItemModelAndDependencies", "method_61075", "loadInventoryVariantItemModel", "m_339007_"), "(Lakr;)V");
    }

    static void loadInventoryVariantItemModel(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_loadInventoryVariantItemModel();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_loadItemModel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "loadSpecialItemModelAndDependencies", "method_61073", "loadItemModel", "m_338793_"), "(Lgsu;)V");
    }

    static void loadItemModel(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_loadItemModel();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "registerModelAndLoadDependencies", "method_61074", "add", "m_340411_"), "(Lgsu;Lgsy;)V");
    }

    static void add(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_add();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_addModelToBake() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "registerModel", "method_61076", "addModelToBake", "m_338699_"), "(Lgsu;Lgsy;)V");
    }

    static void addModelToBake(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_addModelToBake();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_loadModelFromJson() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "loadBlockModel", "method_4718", "loadModelFromJson", "m_119364_"), "(Lakr;)Lggb;");
    }

    static jobject loadModelFromJson(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_loadModelFromJson();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getBakedModelMap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBakedTopLevelModels", "method_4734", "getBakedModelMap", "m_119251_"), "()Ljava/util/Map;");
    }

    static jobject getBakedModelMap(const jobject& obj) {
                
       const auto methodID = methodID_getBakedModelMap();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getStateLookup() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getModelGroups", "method_21605", "getStateLookup", "m_119355_"), "()Lit/unimi/dsi/fastutil/objects/Object2IntMap;");
    }

    static jobject getStateLookup(const jobject& obj) {
                
       const auto methodID = methodID_getStateLookup();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_MODEL_MODELLOADER_HPP