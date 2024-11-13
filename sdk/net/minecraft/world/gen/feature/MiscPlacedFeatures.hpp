// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_MISCPLACEDFEATURES_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_MISCPLACEDFEATURES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.MiscPlacedFeatures
 * Remapped: sd
 */
namespace MiscPlacedFeatures {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("sd", "net/minecraft/data/worldgen/placement/MiscOverworldPlacements", "net/minecraft/class_6814", "net/minecraft/world/gen/feature/MiscPlacedFeatures", "net/minecraft/src/C_183100_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#ICE_SPIKE
    [[maybe_unused]] static jobject get_field_ICE_SPIKE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ICE_SPIKE", "field_36001", "ICE_SPIKE", "f_195260_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#ICE_SPIKE
    [[maybe_unused]] static void set_field_ICE_SPIKE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ICE_SPIKE", "field_36001", "ICE_SPIKE", "f_195260_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#ICE_PATCH
    [[maybe_unused]] static jobject get_field_ICE_PATCH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ICE_PATCH", "field_36002", "ICE_PATCH", "f_195261_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#ICE_PATCH
    [[maybe_unused]] static void set_field_ICE_PATCH(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ICE_PATCH", "field_36002", "ICE_PATCH", "f_195261_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#FOREST_ROCK
    [[maybe_unused]] static jobject get_field_FOREST_ROCK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "FOREST_ROCK", "field_36003", "FOREST_ROCK", "f_195262_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#FOREST_ROCK
    [[maybe_unused]] static void set_field_FOREST_ROCK(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "FOREST_ROCK", "field_36003", "FOREST_ROCK", "f_195262_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#ICEBERG_PACKED
    [[maybe_unused]] static jobject get_field_ICEBERG_PACKED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ICEBERG_PACKED", "field_36004", "ICEBERG_PACKED", "f_195263_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#ICEBERG_PACKED
    [[maybe_unused]] static void set_field_ICEBERG_PACKED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ICEBERG_PACKED", "field_36004", "ICEBERG_PACKED", "f_195263_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#ICEBERG_BLUE
    [[maybe_unused]] static jobject get_field_ICEBERG_BLUE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "ICEBERG_BLUE", "field_36005", "ICEBERG_BLUE", "f_195264_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#ICEBERG_BLUE
    [[maybe_unused]] static void set_field_ICEBERG_BLUE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "ICEBERG_BLUE", "field_36005", "ICEBERG_BLUE", "f_195264_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#BLUE_ICE
    [[maybe_unused]] static jobject get_field_BLUE_ICE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "BLUE_ICE", "field_36006", "BLUE_ICE", "f_195265_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#BLUE_ICE
    [[maybe_unused]] static void set_field_BLUE_ICE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "BLUE_ICE", "field_36006", "BLUE_ICE", "f_195265_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#LAKE_LAVA_UNDERGROUND
    [[maybe_unused]] static jobject get_field_LAKE_LAVA_UNDERGROUND() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "LAKE_LAVA_UNDERGROUND", "field_36007", "LAKE_LAVA_UNDERGROUND", "f_195266_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#LAKE_LAVA_UNDERGROUND
    [[maybe_unused]] static void set_field_LAKE_LAVA_UNDERGROUND(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "LAKE_LAVA_UNDERGROUND", "field_36007", "LAKE_LAVA_UNDERGROUND", "f_195266_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#LAKE_LAVA_SURFACE
    [[maybe_unused]] static jobject get_field_LAKE_LAVA_SURFACE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "LAKE_LAVA_SURFACE", "field_36008", "LAKE_LAVA_SURFACE", "f_195267_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#LAKE_LAVA_SURFACE
    [[maybe_unused]] static void set_field_LAKE_LAVA_SURFACE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "LAKE_LAVA_SURFACE", "field_36008", "LAKE_LAVA_SURFACE", "f_195267_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#DISK_CLAY
    [[maybe_unused]] static jobject get_field_DISK_CLAY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "DISK_CLAY", "field_36009", "DISK_CLAY", "f_195268_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#DISK_CLAY
    [[maybe_unused]] static void set_field_DISK_CLAY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "DISK_CLAY", "field_36009", "DISK_CLAY", "f_195268_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#DISK_GRAVEL
    [[maybe_unused]] static jobject get_field_DISK_GRAVEL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "DISK_GRAVEL", "field_36010", "DISK_GRAVEL", "f_195269_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#DISK_GRAVEL
    [[maybe_unused]] static void set_field_DISK_GRAVEL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "DISK_GRAVEL", "field_36010", "DISK_GRAVEL", "f_195269_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#DISK_SAND
    [[maybe_unused]] static jobject get_field_DISK_SAND() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "DISK_SAND", "field_36011", "DISK_SAND", "f_195270_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#DISK_SAND
    [[maybe_unused]] static void set_field_DISK_SAND(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "DISK_SAND", "field_36011", "DISK_SAND", "f_195270_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#DISK_GRASS
    [[maybe_unused]] static jobject get_field_DISK_GRASS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "DISK_GRASS", "field_38813", "DISK_GRASS", "f_236768_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#DISK_GRASS
    [[maybe_unused]] static void set_field_DISK_GRASS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "DISK_GRASS", "field_38813", "DISK_GRASS", "f_236768_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#FREEZE_TOP_LAYER
    [[maybe_unused]] static jobject get_field_FREEZE_TOP_LAYER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "FREEZE_TOP_LAYER", "field_36012", "FREEZE_TOP_LAYER", "f_195271_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#FREEZE_TOP_LAYER
    [[maybe_unused]] static void set_field_FREEZE_TOP_LAYER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "FREEZE_TOP_LAYER", "field_36012", "FREEZE_TOP_LAYER", "f_195271_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#VOID_START_PLATFORM
    [[maybe_unused]] static jobject get_field_VOID_START_PLATFORM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "VOID_START_PLATFORM", "field_36013", "VOID_START_PLATFORM", "f_195272_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#VOID_START_PLATFORM
    [[maybe_unused]] static void set_field_VOID_START_PLATFORM(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "VOID_START_PLATFORM", "field_36013", "VOID_START_PLATFORM", "f_195272_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#DESERT_WELL
    [[maybe_unused]] static jobject get_field_DESERT_WELL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "DESERT_WELL", "field_36014", "DESERT_WELL", "f_195273_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#DESERT_WELL
    [[maybe_unused]] static void set_field_DESERT_WELL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "DESERT_WELL", "field_36014", "DESERT_WELL", "f_195273_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#SPRING_LAVA
    [[maybe_unused]] static jobject get_field_SPRING_LAVA() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "SPRING_LAVA", "field_36015", "SPRING_LAVA", "f_195274_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#SPRING_LAVA
    [[maybe_unused]] static void set_field_SPRING_LAVA(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "SPRING_LAVA", "field_36015", "SPRING_LAVA", "f_195274_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#SPRING_LAVA_FROZEN
    [[maybe_unused]] static jobject get_field_SPRING_LAVA_FROZEN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "SPRING_LAVA_FROZEN", "field_36016", "SPRING_LAVA_FROZEN", "f_195275_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#SPRING_LAVA_FROZEN
    [[maybe_unused]] static void set_field_SPRING_LAVA_FROZEN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "SPRING_LAVA_FROZEN", "field_36016", "SPRING_LAVA_FROZEN", "f_195275_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#SPRING_WATER
    [[maybe_unused]] static jobject get_field_SPRING_WATER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "SPRING_WATER", "field_36017", "SPRING_WATER", "f_195276_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.MiscPlacedFeatures#SPRING_WATER
    [[maybe_unused]] static void set_field_SPRING_WATER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "SPRING_WATER", "field_36017", "SPRING_WATER", "f_195276_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_bootstrap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "bootstrap", "method_46862", "bootstrap", "m_255422_"), "(Lqq;)V");
    }

    static void bootstrap(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_bootstrap();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_MISCPLACEDFEATURES_HPP