// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_NETHERPLACEDFEATURES_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_NETHERPLACEDFEATURES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.NetherPlacedFeatures
 * Remapped: se
 */
namespace NetherPlacedFeatures {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("se", "net/minecraft/data/worldgen/placement/NetherPlacements", "net/minecraft/class_6815", "net/minecraft/world/gen/feature/NetherPlacedFeatures", "net/minecraft/src/C_183101_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#DELTA
    [[maybe_unused]] static jobject get_field_DELTA() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DELTA", "field_36018", "DELTA", "f_195279_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#DELTA
    [[maybe_unused]] static void set_field_DELTA(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DELTA", "field_36018", "DELTA", "f_195279_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#SMALL_BASALT_COLUMNS
    [[maybe_unused]] static jobject get_field_SMALL_BASALT_COLUMNS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SMALL_BASALT_COLUMNS", "field_36019", "SMALL_BASALT_COLUMNS", "f_195280_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#SMALL_BASALT_COLUMNS
    [[maybe_unused]] static void set_field_SMALL_BASALT_COLUMNS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SMALL_BASALT_COLUMNS", "field_36019", "SMALL_BASALT_COLUMNS", "f_195280_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#LARGE_BASALT_COLUMNS
    [[maybe_unused]] static jobject get_field_LARGE_BASALT_COLUMNS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LARGE_BASALT_COLUMNS", "field_36020", "LARGE_BASALT_COLUMNS", "f_195281_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#LARGE_BASALT_COLUMNS
    [[maybe_unused]] static void set_field_LARGE_BASALT_COLUMNS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LARGE_BASALT_COLUMNS", "field_36020", "LARGE_BASALT_COLUMNS", "f_195281_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#BASALT_BLOBS
    [[maybe_unused]] static jobject get_field_BASALT_BLOBS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "BASALT_BLOBS", "field_36021", "BASALT_BLOBS", "f_195282_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#BASALT_BLOBS
    [[maybe_unused]] static void set_field_BASALT_BLOBS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "BASALT_BLOBS", "field_36021", "BASALT_BLOBS", "f_195282_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#BLACKSTONE_BLOBS
    [[maybe_unused]] static jobject get_field_BLACKSTONE_BLOBS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "BLACKSTONE_BLOBS", "field_36022", "BLACKSTONE_BLOBS", "f_195283_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#BLACKSTONE_BLOBS
    [[maybe_unused]] static void set_field_BLACKSTONE_BLOBS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "BLACKSTONE_BLOBS", "field_36022", "BLACKSTONE_BLOBS", "f_195283_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#GLOWSTONE_EXTRA
    [[maybe_unused]] static jobject get_field_GLOWSTONE_EXTRA() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "GLOWSTONE_EXTRA", "field_36023", "GLOWSTONE_EXTRA", "f_195284_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#GLOWSTONE_EXTRA
    [[maybe_unused]] static void set_field_GLOWSTONE_EXTRA(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "GLOWSTONE_EXTRA", "field_36023", "GLOWSTONE_EXTRA", "f_195284_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#GLOWSTONE
    [[maybe_unused]] static jobject get_field_GLOWSTONE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "GLOWSTONE", "field_36024", "GLOWSTONE", "f_195285_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#GLOWSTONE
    [[maybe_unused]] static void set_field_GLOWSTONE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "GLOWSTONE", "field_36024", "GLOWSTONE", "f_195285_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#CRIMSON_FOREST_VEGETATION
    [[maybe_unused]] static jobject get_field_CRIMSON_FOREST_VEGETATION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "CRIMSON_FOREST_VEGETATION", "field_36025", "CRIMSON_FOREST_VEGETATION", "f_195286_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#CRIMSON_FOREST_VEGETATION
    [[maybe_unused]] static void set_field_CRIMSON_FOREST_VEGETATION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "CRIMSON_FOREST_VEGETATION", "field_36025", "CRIMSON_FOREST_VEGETATION", "f_195286_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#WARPED_FOREST_VEGETATION
    [[maybe_unused]] static jobject get_field_WARPED_FOREST_VEGETATION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "WARPED_FOREST_VEGETATION", "field_36026", "WARPED_FOREST_VEGETATION", "f_195287_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#WARPED_FOREST_VEGETATION
    [[maybe_unused]] static void set_field_WARPED_FOREST_VEGETATION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "WARPED_FOREST_VEGETATION", "field_36026", "WARPED_FOREST_VEGETATION", "f_195287_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#NETHER_SPROUTS
    [[maybe_unused]] static jobject get_field_NETHER_SPROUTS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "NETHER_SPROUTS", "field_36027", "NETHER_SPROUTS", "f_195288_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#NETHER_SPROUTS
    [[maybe_unused]] static void set_field_NETHER_SPROUTS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "NETHER_SPROUTS", "field_36027", "NETHER_SPROUTS", "f_195288_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#TWISTING_VINES
    [[maybe_unused]] static jobject get_field_TWISTING_VINES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "TWISTING_VINES", "field_36028", "TWISTING_VINES", "f_195289_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#TWISTING_VINES
    [[maybe_unused]] static void set_field_TWISTING_VINES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "TWISTING_VINES", "field_36028", "TWISTING_VINES", "f_195289_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#WEEPING_VINES
    [[maybe_unused]] static jobject get_field_WEEPING_VINES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "WEEPING_VINES", "field_36029", "WEEPING_VINES", "f_195290_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#WEEPING_VINES
    [[maybe_unused]] static void set_field_WEEPING_VINES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "WEEPING_VINES", "field_36029", "WEEPING_VINES", "f_195290_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#PATCH_CRIMSON_ROOTS
    [[maybe_unused]] static jobject get_field_PATCH_CRIMSON_ROOTS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "PATCH_CRIMSON_ROOTS", "field_36030", "PATCH_CRIMSON_ROOTS", "f_195291_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#PATCH_CRIMSON_ROOTS
    [[maybe_unused]] static void set_field_PATCH_CRIMSON_ROOTS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "PATCH_CRIMSON_ROOTS", "field_36030", "PATCH_CRIMSON_ROOTS", "f_195291_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#BASALT_PILLAR
    [[maybe_unused]] static jobject get_field_BASALT_PILLAR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "BASALT_PILLAR", "field_36031", "BASALT_PILLAR", "f_195292_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#BASALT_PILLAR
    [[maybe_unused]] static void set_field_BASALT_PILLAR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "BASALT_PILLAR", "field_36031", "BASALT_PILLAR", "f_195292_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#SPRING_DELTA
    [[maybe_unused]] static jobject get_field_SPRING_DELTA() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "SPRING_DELTA", "field_36032", "SPRING_DELTA", "f_195293_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#SPRING_DELTA
    [[maybe_unused]] static void set_field_SPRING_DELTA(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "SPRING_DELTA", "field_36032", "SPRING_DELTA", "f_195293_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#SPRING_CLOSED
    [[maybe_unused]] static jobject get_field_SPRING_CLOSED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "SPRING_CLOSED", "field_36033", "SPRING_CLOSED", "f_195294_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#SPRING_CLOSED
    [[maybe_unused]] static void set_field_SPRING_CLOSED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "SPRING_CLOSED", "field_36033", "SPRING_CLOSED", "f_195294_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#SPRING_CLOSED_DOUBLE
    [[maybe_unused]] static jobject get_field_SPRING_CLOSED_DOUBLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "SPRING_CLOSED_DOUBLE", "field_36034", "SPRING_CLOSED_DOUBLE", "f_195295_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#SPRING_CLOSED_DOUBLE
    [[maybe_unused]] static void set_field_SPRING_CLOSED_DOUBLE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "SPRING_CLOSED_DOUBLE", "field_36034", "SPRING_CLOSED_DOUBLE", "f_195295_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#SPRING_OPEN
    [[maybe_unused]] static jobject get_field_SPRING_OPEN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "SPRING_OPEN", "field_36035", "SPRING_OPEN", "f_195296_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#SPRING_OPEN
    [[maybe_unused]] static void set_field_SPRING_OPEN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "SPRING_OPEN", "field_36035", "SPRING_OPEN", "f_195296_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#PATCH_SOUL_FIRE
    [[maybe_unused]] static jobject get_field_PATCH_SOUL_FIRE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "PATCH_SOUL_FIRE", "field_36037", "PATCH_SOUL_FIRE", "f_195298_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#PATCH_SOUL_FIRE
    [[maybe_unused]] static void set_field_PATCH_SOUL_FIRE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "PATCH_SOUL_FIRE", "field_36037", "PATCH_SOUL_FIRE", "f_195298_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#PATCH_FIRE
    [[maybe_unused]] static jobject get_field_PATCH_FIRE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("t", "PATCH_FIRE", "field_36038", "PATCH_FIRE", "f_195299_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.NetherPlacedFeatures#PATCH_FIRE
    [[maybe_unused]] static void set_field_PATCH_FIRE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("t", "PATCH_FIRE", "field_36038", "PATCH_FIRE", "f_195299_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_bootstrap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "bootstrap", "method_46863", "bootstrap", "m_255430_"), "(Lqq;)V");
    }

    static void bootstrap(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_bootstrap();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_NETHERPLACEDFEATURES_HPP