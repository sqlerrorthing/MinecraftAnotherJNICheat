// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_SHIPWRECKGENERATOR_HPP
#define NET_MINECRAFT_STRUCTURE_SHIPWRECKGENERATOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.ShipwreckGenerator
 * Remapped: emh
 */
namespace ShipwreckGenerator {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("emh", "net/minecraft/world/level/levelgen/structure/structures/ShipwreckPieces", "net/minecraft/class_3415", "net/minecraft/structure/ShipwreckGenerator", "net/minecraft/src/C_213265_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.structure.ShipwreckGenerator#LARGE_SIZE_LIMIT
    [[maybe_unused]] static jint get_field_LARGE_SIZE_LIMIT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NUMBER_OF_BLOCKS_ALLOWED_IN_WORLD_GEN_REGION", "field_51512", "LARGE_SIZE_LIMIT", "f_316049_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.ShipwreckGenerator#LARGE_SIZE_LIMIT
    [[maybe_unused]] static void set_field_LARGE_SIZE_LIMIT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NUMBER_OF_BLOCKS_ALLOWED_IN_WORLD_GEN_REGION", "field_51512", "LARGE_SIZE_LIMIT", "f_316049_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.structure.ShipwreckGenerator#DEFAULT_POSITION
    [[maybe_unused]] static jobject get_field_DEFAULT_POSITION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PIVOT", "field_14536", "DEFAULT_POSITION", "f_229339_"), "Ljd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.structure.ShipwreckGenerator#DEFAULT_POSITION
    [[maybe_unused]] static void set_field_DEFAULT_POSITION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PIVOT", "field_14536", "DEFAULT_POSITION", "f_229339_"), "Ljd;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.structure.ShipwreckGenerator#BEACHED_TEMPLATES
    [[maybe_unused]] static jobject get_field_BEACHED_TEMPLATES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "STRUCTURE_LOCATION_BEACHED", "field_14534", "BEACHED_TEMPLATES", "f_229340_"), "[Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.ShipwreckGenerator#BEACHED_TEMPLATES
    [[maybe_unused]] static void set_field_BEACHED_TEMPLATES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "STRUCTURE_LOCATION_BEACHED", "field_14534", "BEACHED_TEMPLATES", "f_229340_"), "[Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.structure.ShipwreckGenerator#REGULAR_TEMPLATES
    [[maybe_unused]] static jobject get_field_REGULAR_TEMPLATES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "STRUCTURE_LOCATION_OCEAN", "field_14535", "REGULAR_TEMPLATES", "f_229341_"), "[Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.ShipwreckGenerator#REGULAR_TEMPLATES
    [[maybe_unused]] static void set_field_REGULAR_TEMPLATES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "STRUCTURE_LOCATION_OCEAN", "field_14535", "REGULAR_TEMPLATES", "f_229341_"), "[Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.structure.ShipwreckGenerator#LOOT_TABLES
    [[maybe_unused]] static jobject get_field_LOOT_TABLES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "MARKERS_TO_LOOT", "field_34939", "LOOT_TABLES", "f_229342_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.structure.ShipwreckGenerator#LOOT_TABLES
    [[maybe_unused]] static void set_field_LOOT_TABLES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "MARKERS_TO_LOOT", "field_34939", "LOOT_TABLES", "f_229342_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_addParts() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "addRandomPiece", "method_59864", "addParts", "m_319528_"), "(Lenu;Ljd;Ldmm;Lejw;Layw;Z)Lemh$a;");
    }

    static jobject addParts(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jboolean& arg5) {
       const auto clazz = self();
       const auto methodID = methodID_addParts();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
};

#endif // NET_MINECRAFT_STRUCTURE_SHIPWRECKGENERATOR_HPP