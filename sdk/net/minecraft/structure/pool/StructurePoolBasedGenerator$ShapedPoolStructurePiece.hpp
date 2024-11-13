// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_POOL_STRUCTUREPOOLBASEDGENERATOR$SHAPEDPOOLSTRUCTUREPIECE_HPP
#define NET_MINECRAFT_STRUCTURE_POOL_STRUCTUREPOOLBASEDGENERATOR$SHAPEDPOOLSTRUCTUREPIECE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.pool.StructurePoolBasedGenerator$ShapedPoolStructurePiece
 * Remapped: ekv$a
 */
namespace StructurePoolBasedGenerator$ShapedPoolStructurePiece {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ekv$a", "net/minecraft/world/level/levelgen/structure/pools/JigsawPlacement$PieceState", "net/minecraft/class_3778$class_4181", "net/minecraft/structure/pool/StructurePoolBasedGenerator$ShapedPoolStructurePiece", "net/minecraft/src/C_207033_$C_207035_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.structure.pool.StructurePoolBasedGenerator$ShapedPoolStructurePiece#piece
    static jobject get_field_piece(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "piece", "comp_2017", "piece", "f_210307_"), "Lejn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.structure.pool.StructurePoolBasedGenerator$ShapedPoolStructurePiece#piece
    static void set_field_piece(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "piece", "comp_2017", "piece", "f_210307_"), "Lejn;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.structure.pool.StructurePoolBasedGenerator$ShapedPoolStructurePiece#pieceShape
    static jobject get_field_pieceShape(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "free", "comp_2018", "pieceShape", "f_210308_"), "Lorg/apache/commons/lang3/mutable/MutableObject;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.structure.pool.StructurePoolBasedGenerator$ShapedPoolStructurePiece#pieceShape
    static void set_field_pieceShape(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "free", "comp_2018", "pieceShape", "f_210308_"), "Lorg/apache/commons/lang3/mutable/MutableObject;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.structure.pool.StructurePoolBasedGenerator$ShapedPoolStructurePiece#currentSize
    static jint get_field_currentSize(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "depth", "comp_2019", "currentSize", "f_210309_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.structure.pool.StructurePoolBasedGenerator$ShapedPoolStructurePiece#currentSize
    static void set_field_currentSize(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "depth", "comp_2019", "currentSize", "f_210309_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID__piece() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "piece", "comp_2017", "piece", "f_210307_"), "()Lejn;");
    }

    static jobject _piece(const jobject& obj) {
                
       const auto methodID = methodID__piece();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__pieceShape() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "free", "comp_2018", "pieceShape", "f_210308_"), "()Lorg/apache/commons/lang3/mutable/MutableObject;");
    }

    static jobject _pieceShape(const jobject& obj) {
                
       const auto methodID = methodID__pieceShape();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__currentSize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "depth", "comp_2019", "currentSize", "f_210309_"), "()I");
    }

    static jint _currentSize(const jobject& obj) {
                
       const auto methodID = methodID__currentSize();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_STRUCTURE_POOL_STRUCTUREPOOLBASEDGENERATOR$SHAPEDPOOLSTRUCTUREPIECE_HPP