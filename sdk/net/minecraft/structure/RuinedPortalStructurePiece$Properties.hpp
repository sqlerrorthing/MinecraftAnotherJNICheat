// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_RUINEDPORTALSTRUCTUREPIECE$PROPERTIES_HPP
#define NET_MINECRAFT_STRUCTURE_RUINEDPORTALSTRUCTUREPIECE$PROPERTIES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.RuinedPortalStructurePiece$Properties
 * Remapped: emf$a
 */
namespace RuinedPortalStructurePiece$Properties {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("emf$a", "net/minecraft/world/level/levelgen/structure/structures/RuinedPortalPiece$Properties", "net/minecraft/class_5189$class_5190", "net/minecraft/structure/RuinedPortalStructurePiece$Properties", "net/minecraft/src/C_213260_$C_213261_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.structure.RuinedPortalStructurePiece$Properties#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24993", "CODEC", "f_229197_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.structure.RuinedPortalStructurePiece$Properties#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24993", "CODEC", "f_229197_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for public field net.minecraft.structure.RuinedPortalStructurePiece$Properties#cold
    static jboolean get_field_cold(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "cold", "field_24023", "cold", "f_229198_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static public field net.minecraft.structure.RuinedPortalStructurePiece$Properties#cold
    static void set_field_cold(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "cold", "field_24023", "cold", "f_229198_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.structure.RuinedPortalStructurePiece$Properties#mossiness
    static jfloat get_field_mossiness(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "mossiness", "field_24024", "mossiness", "f_229199_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static public field net.minecraft.structure.RuinedPortalStructurePiece$Properties#mossiness
    static void set_field_mossiness(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "mossiness", "field_24024", "mossiness", "f_229199_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.structure.RuinedPortalStructurePiece$Properties#airPocket
    static jboolean get_field_airPocket(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "airPocket", "field_24025", "airPocket", "f_229200_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static public field net.minecraft.structure.RuinedPortalStructurePiece$Properties#airPocket
    static void set_field_airPocket(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "airPocket", "field_24025", "airPocket", "f_229200_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.structure.RuinedPortalStructurePiece$Properties#overgrown
    static jboolean get_field_overgrown(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "overgrown", "field_24026", "overgrown", "f_229201_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static public field net.minecraft.structure.RuinedPortalStructurePiece$Properties#overgrown
    static void set_field_overgrown(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "overgrown", "field_24026", "overgrown", "f_229201_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.structure.RuinedPortalStructurePiece$Properties#vines
    static jboolean get_field_vines(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "vines", "field_24027", "vines", "f_229202_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static public field net.minecraft.structure.RuinedPortalStructurePiece$Properties#vines
    static void set_field_vines(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "vines", "field_24027", "vines", "f_229202_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.structure.RuinedPortalStructurePiece$Properties#replaceWithBlackstone
    static jboolean get_field_replaceWithBlackstone(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "replaceWithBlackstone", "field_24028", "replaceWithBlackstone", "f_229203_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static public field net.minecraft.structure.RuinedPortalStructurePiece$Properties#replaceWithBlackstone
    static void set_field_replaceWithBlackstone(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "replaceWithBlackstone", "field_24028", "replaceWithBlackstone", "f_229203_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_STRUCTURE_RUINEDPORTALSTRUCTUREPIECE$PROPERTIES_HPP