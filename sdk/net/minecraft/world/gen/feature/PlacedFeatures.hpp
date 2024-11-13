// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_PLACEDFEATURES_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_PLACEDFEATURES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.PlacedFeatures
 * Remapped: sg
 */
namespace PlacedFeatures {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("sg", "net/minecraft/data/worldgen/placement/PlacementUtils", "net/minecraft/class_6817", "net/minecraft/world/gen/feature/PlacedFeatures", "net/minecraft/src/C_183103_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.feature.PlacedFeatures#MOTION_BLOCKING_HEIGHTMAP
    [[maybe_unused]] static jobject get_field_MOTION_BLOCKING_HEIGHTMAP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "HEIGHTMAP", "field_36078", "MOTION_BLOCKING_HEIGHTMAP", "f_195352_"), "Leiy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.PlacedFeatures#MOTION_BLOCKING_HEIGHTMAP
    [[maybe_unused]] static void set_field_MOTION_BLOCKING_HEIGHTMAP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "HEIGHTMAP", "field_36078", "MOTION_BLOCKING_HEIGHTMAP", "f_195352_"), "Leiy;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.PlacedFeatures#OCEAN_FLOOR_WG_HEIGHTMAP
    [[maybe_unused]] static jobject get_field_OCEAN_FLOOR_WG_HEIGHTMAP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "HEIGHTMAP_TOP_SOLID", "field_36079", "OCEAN_FLOOR_WG_HEIGHTMAP", "f_195353_"), "Leiy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.PlacedFeatures#OCEAN_FLOOR_WG_HEIGHTMAP
    [[maybe_unused]] static void set_field_OCEAN_FLOOR_WG_HEIGHTMAP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "HEIGHTMAP_TOP_SOLID", "field_36079", "OCEAN_FLOOR_WG_HEIGHTMAP", "f_195353_"), "Leiy;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.PlacedFeatures#WORLD_SURFACE_WG_HEIGHTMAP
    [[maybe_unused]] static jobject get_field_WORLD_SURFACE_WG_HEIGHTMAP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "HEIGHTMAP_WORLD_SURFACE", "field_36080", "WORLD_SURFACE_WG_HEIGHTMAP", "f_195354_"), "Leiy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.PlacedFeatures#WORLD_SURFACE_WG_HEIGHTMAP
    [[maybe_unused]] static void set_field_WORLD_SURFACE_WG_HEIGHTMAP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "HEIGHTMAP_WORLD_SURFACE", "field_36080", "WORLD_SURFACE_WG_HEIGHTMAP", "f_195354_"), "Leiy;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.PlacedFeatures#OCEAN_FLOOR_HEIGHTMAP
    [[maybe_unused]] static jobject get_field_OCEAN_FLOOR_HEIGHTMAP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "HEIGHTMAP_OCEAN_FLOOR", "field_36081", "OCEAN_FLOOR_HEIGHTMAP", "f_195355_"), "Leiy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.PlacedFeatures#OCEAN_FLOOR_HEIGHTMAP
    [[maybe_unused]] static void set_field_OCEAN_FLOOR_HEIGHTMAP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "HEIGHTMAP_OCEAN_FLOOR", "field_36081", "OCEAN_FLOOR_HEIGHTMAP", "f_195355_"), "Leiy;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.PlacedFeatures#BOTTOM_TO_TOP_RANGE
    [[maybe_unused]] static jobject get_field_BOTTOM_TO_TOP_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "FULL_RANGE", "field_36082", "BOTTOM_TO_TOP_RANGE", "f_195356_"), "Leiy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.PlacedFeatures#BOTTOM_TO_TOP_RANGE
    [[maybe_unused]] static void set_field_BOTTOM_TO_TOP_RANGE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "FULL_RANGE", "field_36082", "BOTTOM_TO_TOP_RANGE", "f_195356_"), "Leiy;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.PlacedFeatures#TEN_ABOVE_AND_BELOW_RANGE
    [[maybe_unused]] static jobject get_field_TEN_ABOVE_AND_BELOW_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "RANGE_10_10", "field_36083", "TEN_ABOVE_AND_BELOW_RANGE", "f_195357_"), "Leiy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.PlacedFeatures#TEN_ABOVE_AND_BELOW_RANGE
    [[maybe_unused]] static void set_field_TEN_ABOVE_AND_BELOW_RANGE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "RANGE_10_10", "field_36083", "TEN_ABOVE_AND_BELOW_RANGE", "f_195357_"), "Leiy;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.PlacedFeatures#EIGHT_ABOVE_AND_BELOW_RANGE
    [[maybe_unused]] static jobject get_field_EIGHT_ABOVE_AND_BELOW_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "RANGE_8_8", "field_36084", "EIGHT_ABOVE_AND_BELOW_RANGE", "f_195358_"), "Leiy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.PlacedFeatures#EIGHT_ABOVE_AND_BELOW_RANGE
    [[maybe_unused]] static void set_field_EIGHT_ABOVE_AND_BELOW_RANGE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "RANGE_8_8", "field_36084", "EIGHT_ABOVE_AND_BELOW_RANGE", "f_195358_"), "Leiy;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.PlacedFeatures#FOUR_ABOVE_AND_BELOW_RANGE
    [[maybe_unused]] static jobject get_field_FOUR_ABOVE_AND_BELOW_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "RANGE_4_4", "field_36085", "FOUR_ABOVE_AND_BELOW_RANGE", "f_195359_"), "Leiy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.PlacedFeatures#FOUR_ABOVE_AND_BELOW_RANGE
    [[maybe_unused]] static void set_field_FOUR_ABOVE_AND_BELOW_RANGE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "RANGE_4_4", "field_36085", "FOUR_ABOVE_AND_BELOW_RANGE", "f_195359_"), "Leiy;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.PlacedFeatures#BOTTOM_TO_120_RANGE
    [[maybe_unused]] static jobject get_field_BOTTOM_TO_120_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "RANGE_BOTTOM_TO_MAX_TERRAIN_HEIGHT", "field_36086", "BOTTOM_TO_120_RANGE", "f_195360_"), "Leiy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.PlacedFeatures#BOTTOM_TO_120_RANGE
    [[maybe_unused]] static void set_field_BOTTOM_TO_120_RANGE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "RANGE_BOTTOM_TO_MAX_TERRAIN_HEIGHT", "field_36086", "BOTTOM_TO_120_RANGE", "f_195360_"), "Leiy;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_bootstrap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "bootstrap", "method_39735", "bootstrap", "m_255199_"), "(Lqq;)V");
    }

    static void bootstrap(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_bootstrap();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createKey", "method_46865", "of", "m_255070_"), "(Ljava/lang/String;)Lakq;");
    }

    static jobject of(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_39737", "register", "m_254943_"), "(Lqq;Lakq;Ljm;Ljava/util/List;)V");
    }

    static void register(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID__register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_40370", "register", "m_255206_"), "(Lqq;Lakq;Ljm;[Leiy;)V");
    }

    static void _register(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jarray& arg3, const jobject& arg4) {
       const auto clazz = self();
       const auto methodID = methodID__register();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_createCountExtraModifier() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "countExtra", "method_39736", "createCountExtraModifier", "m_195364_"), "(IFI)Leiy;");
    }

    static jobject createCountExtraModifier(const jint& arg0, const jfloat& arg1, const jint& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_createCountExtraModifier();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_isAir() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isEmpty", "method_40371", "isAir", "m_206517_"), "()Leix;");
    }

    static jobject isAir() {
       const auto clazz = self();
       const auto methodID = methodID_isAir();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_wouldSurvive() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "filteredByBlockSurvival", "method_40365", "wouldSurvive", "m_206493_"), "(Ldfy;)Leij;");
    }

    static jobject wouldSurvive(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_wouldSurvive();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_createEntry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "inlinePlaced", "method_40369", "createEntry", "m_206506_"), "(Ljm;[Leiy;)Ljm;");
    }

    static jobject createEntry(const jobject& arg0, const jarray& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_createEntry();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__createEntry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "inlinePlaced", "method_40368", "createEntry", "m_206502_"), "(Lece;Leei;[Leiy;)Ljm;");
    }

    static jobject _createEntry(const jobject& arg0, const jobject& arg1, const jarray& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID__createEntry();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID___createEntry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "onlyWhenEmpty", "method_40366", "createEntry", "m_206495_"), "(Lece;Leei;)Ljm;");
    }

    static jobject __createEntry(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID___createEntry();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID____createEntry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "filtered", "method_40367", "createEntry", "m_206498_"), "(Lece;Leei;Leaf;)Ljm;");
    }

    static jobject ___createEntry(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID____createEntry();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_PLACEDFEATURES_HPP