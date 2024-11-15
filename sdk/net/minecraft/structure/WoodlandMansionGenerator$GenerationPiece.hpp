// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_WOODLANDMANSIONGENERATOR$GENERATIONPIECE_HPP
#define NET_MINECRAFT_STRUCTURE_WOODLANDMANSIONGENERATOR$GENERATIONPIECE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.WoodlandMansionGenerator$GenerationPiece
 * Remapped: emn$e
 */
namespace WoodlandMansionGenerator$GenerationPiece {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("emn$e", "net/minecraft/world/level/levelgen/structure/structures/WoodlandMansionPieces$PlacementData", "net/minecraft/class_3471$class_3476", "net/minecraft/structure/WoodlandMansionGenerator$GenerationPiece", "net/minecraft/src/C_213293_$C_213298_"));
        }
        return cachedClass;
    };

    // getter for public field net.minecraft.structure.WoodlandMansionGenerator$GenerationPiece#rotation
    static jobject get_field_rotation(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "rotation", "field_15450", "rotation", "f_230138_"), "Ldmm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.structure.WoodlandMansionGenerator$GenerationPiece#rotation
    static void set_field_rotation(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "rotation", "field_15450", "rotation", "f_230138_"), "Ldmm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.structure.WoodlandMansionGenerator$GenerationPiece#position
    static jobject get_field_position(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "position", "field_15449", "position", "f_230139_"), "Ljd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.structure.WoodlandMansionGenerator$GenerationPiece#position
    static void set_field_position(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "position", "field_15449", "position", "f_230139_"), "Ljd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.structure.WoodlandMansionGenerator$GenerationPiece#template
    static jobject get_field_template(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "wallType", "field_15448", "template", "f_230140_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.structure.WoodlandMansionGenerator$GenerationPiece#template
    static void set_field_template(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "wallType", "field_15448", "template", "f_230140_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_STRUCTURE_WOODLANDMANSIONGENERATOR$GENERATIONPIECE_HPP