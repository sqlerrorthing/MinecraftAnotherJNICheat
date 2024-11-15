// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_DELTAFEATURE_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_DELTAFEATURE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.DeltaFeature
 * Remapped: ebv
 */
namespace DeltaFeature {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ebv", "net/minecraft/world/level/levelgen/feature/DeltaFeature", "net/minecraft/class_5154", "net/minecraft/world/gen/feature/DeltaFeature", "net/minecraft/src/C_2237_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.world.gen.feature.DeltaFeature#CANNOT_REPLACE_BLOCKS
    [[maybe_unused]] static jobject get_field_CANNOT_REPLACE_BLOCKS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CANNOT_REPLACE", "field_24133", "CANNOT_REPLACE_BLOCKS", "f_65546_"), "Lcom/google/common/collect/ImmutableList;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.DeltaFeature#CANNOT_REPLACE_BLOCKS
    [[maybe_unused]] static void set_field_CANNOT_REPLACE_BLOCKS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CANNOT_REPLACE", "field_24133", "CANNOT_REPLACE_BLOCKS", "f_65546_"), "Lcom/google/common/collect/ImmutableList;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.gen.feature.DeltaFeature#DIRECTIONS
    [[maybe_unused]] static jobject get_field_DIRECTIONS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DIRECTIONS", "field_23883", "DIRECTIONS", "f_65547_"), "[Lji;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.DeltaFeature#DIRECTIONS
    [[maybe_unused]] static void set_field_DIRECTIONS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DIRECTIONS", "field_23883", "DIRECTIONS", "f_65547_"), "[Lji;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.gen.feature.DeltaFeature#field_31501
    [[maybe_unused]] static jdouble get_field_field_31501() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "RIM_SPAWN_CHANCE", "field_31501", "field_31501", "f_159546_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticDoubleField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.DeltaFeature#field_31501
    [[maybe_unused]] static void set_field_field_31501(const jdouble &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "RIM_SPAWN_CHANCE", "field_31501", "field_31501", "f_159546_"), "D");
        return MinecraftSDK::env->SetStaticDoubleField(clazz, fieldID, value);
    };

    static jmethodID methodID_generate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "place", "method_13151", "generate", "m_142674_"), "(Lecg;)Z");
    }

    static jboolean generate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_generate();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_canPlace() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isClear", "method_27103", "canPlace", "m_65551_"), "(Ldcx;Ljd;Leee;)Z");
    }

    static jboolean canPlace(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_canPlace();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_DELTAFEATURE_HPP