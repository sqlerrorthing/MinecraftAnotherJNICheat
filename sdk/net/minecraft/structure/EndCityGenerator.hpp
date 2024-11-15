// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_ENDCITYGENERATOR_HPP
#define NET_MINECRAFT_STRUCTURE_ENDCITYGENERATOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.EndCityGenerator
 * Remapped: elo
 */
namespace EndCityGenerator {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("elo", "net/minecraft/world/level/levelgen/structure/structures/EndCityPieces", "net/minecraft/class_3342", "net/minecraft/structure/EndCityGenerator", "net/minecraft/src/C_213182_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.structure.EndCityGenerator#MAX_DEPTH
    [[maybe_unused]] static jint get_field_MAX_DEPTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAX_GEN_DEPTH", "field_31549", "MAX_DEPTH", "f_227420_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.EndCityGenerator#MAX_DEPTH
    [[maybe_unused]] static void set_field_MAX_DEPTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAX_GEN_DEPTH", "field_31549", "MAX_DEPTH", "f_227420_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.structure.EndCityGenerator#BUILDING
    [[maybe_unused]] static jobject get_field_BUILDING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "HOUSE_TOWER_GENERATOR", "field_14390", "BUILDING", "f_227421_"), "Lelo$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.structure.EndCityGenerator#BUILDING
    [[maybe_unused]] static void set_field_BUILDING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "HOUSE_TOWER_GENERATOR", "field_14390", "BUILDING", "f_227421_"), "Lelo$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.structure.EndCityGenerator#SMALL_TOWER_BRIDGE_ATTACHMENTS
    [[maybe_unused]] static jobject get_field_SMALL_TOWER_BRIDGE_ATTACHMENTS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "TOWER_BRIDGES", "field_14385", "SMALL_TOWER_BRIDGE_ATTACHMENTS", "f_227422_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.structure.EndCityGenerator#SMALL_TOWER_BRIDGE_ATTACHMENTS
    [[maybe_unused]] static void set_field_SMALL_TOWER_BRIDGE_ATTACHMENTS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "TOWER_BRIDGES", "field_14385", "SMALL_TOWER_BRIDGE_ATTACHMENTS", "f_227422_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.structure.EndCityGenerator#SMALL_TOWER
    [[maybe_unused]] static jobject get_field_SMALL_TOWER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "TOWER_GENERATOR", "field_14386", "SMALL_TOWER", "f_227423_"), "Lelo$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.structure.EndCityGenerator#SMALL_TOWER
    [[maybe_unused]] static void set_field_SMALL_TOWER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "TOWER_GENERATOR", "field_14386", "SMALL_TOWER", "f_227423_"), "Lelo$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.structure.EndCityGenerator#BRIDGE_PIECE
    [[maybe_unused]] static jobject get_field_BRIDGE_PIECE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "TOWER_BRIDGE_GENERATOR", "field_14387", "BRIDGE_PIECE", "f_227424_"), "Lelo$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.structure.EndCityGenerator#BRIDGE_PIECE
    [[maybe_unused]] static void set_field_BRIDGE_PIECE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "TOWER_BRIDGE_GENERATOR", "field_14387", "BRIDGE_PIECE", "f_227424_"), "Lelo$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.structure.EndCityGenerator#FAT_TOWER_BRIDGE_ATTACHMENTS
    [[maybe_unused]] static jobject get_field_FAT_TOWER_BRIDGE_ATTACHMENTS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "FAT_TOWER_BRIDGES", "field_14388", "FAT_TOWER_BRIDGE_ATTACHMENTS", "f_227425_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.structure.EndCityGenerator#FAT_TOWER_BRIDGE_ATTACHMENTS
    [[maybe_unused]] static void set_field_FAT_TOWER_BRIDGE_ATTACHMENTS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "FAT_TOWER_BRIDGES", "field_14388", "FAT_TOWER_BRIDGE_ATTACHMENTS", "f_227425_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.structure.EndCityGenerator#FAT_TOWER
    [[maybe_unused]] static jobject get_field_FAT_TOWER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "FAT_TOWER_GENERATOR", "field_14384", "FAT_TOWER", "f_227426_"), "Lelo$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.structure.EndCityGenerator#FAT_TOWER
    [[maybe_unused]] static void set_field_FAT_TOWER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "FAT_TOWER_GENERATOR", "field_14384", "FAT_TOWER", "f_227426_"), "Lelo$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_createPiece() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "addPiece", "method_14684", "createPiece", "m_227429_"), "(Lenu;Lelo$a;Ljd;Ljava/lang/String;Ldmm;Z)Lelo$a;");
    }

    static jobject createPiece(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jboolean& arg5) {
       const auto clazz = self();
       const auto methodID = methodID_createPiece();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_addPieces() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "startHouseTower", "method_14679", "addPieces", "m_227444_"), "(Lenu;Ljd;Ldmm;Ljava/util/List;Layw;)V");
    }

    static void addPieces(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_addPieces();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_addPiece() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "addHelper", "method_14681", "addPiece", "m_227450_"), "(Ljava/util/List;Lelo$a;)Lelo$a;");
    }

    static jobject addPiece(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_addPiece();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_createPart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "recursiveChildren", "method_14673", "createPart", "m_227436_"), "(Lenu;Lelo$b;ILelo$a;Ljd;Ljava/util/List;Layw;)Z");
    }

    static jboolean createPart(const jobject& arg0, const jobject& arg1, const jint& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6) {
       const auto clazz = self();
       const auto methodID = methodID_createPart();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
};

#endif // NET_MINECRAFT_STRUCTURE_ENDCITYGENERATOR_HPP