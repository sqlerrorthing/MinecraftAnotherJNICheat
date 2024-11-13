// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_POOL_STRUCTUREPOOLBASEDGENERATOR$STRUCTUREPOOLGENERATOR_HPP
#define NET_MINECRAFT_STRUCTURE_POOL_STRUCTUREPOOLBASEDGENERATOR$STRUCTUREPOOLGENERATOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.pool.StructurePoolBasedGenerator$StructurePoolGenerator
 * Remapped: ekv$b
 */
namespace StructurePoolBasedGenerator$StructurePoolGenerator {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ekv$b", "net/minecraft/world/level/levelgen/structure/pools/JigsawPlacement$Placer", "net/minecraft/class_3778$class_4182", "net/minecraft/structure/pool/StructurePoolBasedGenerator$StructurePoolGenerator", "net/minecraft/src/C_207033_$C_207036_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.structure.pool.StructurePoolBasedGenerator$StructurePoolGenerator#registry
    static jobject get_field_registry(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "pools", "field_25852", "registry", "f_210314_"), "Ljz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.structure.pool.StructurePoolBasedGenerator$StructurePoolGenerator#registry
    static void set_field_registry(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "pools", "field_25852", "registry", "f_210314_"), "Ljz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.structure.pool.StructurePoolBasedGenerator$StructurePoolGenerator#maxSize
    static jint get_field_maxSize(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "maxDepth", "field_18700", "maxSize", "f_210315_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.structure.pool.StructurePoolBasedGenerator$StructurePoolGenerator#maxSize
    static void set_field_maxSize(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "maxDepth", "field_18700", "maxSize", "f_210315_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.structure.pool.StructurePoolBasedGenerator$StructurePoolGenerator#chunkGenerator
    static jobject get_field_chunkGenerator(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "chunkGenerator", "field_18702", "chunkGenerator", "f_210317_"), "Lduz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.structure.pool.StructurePoolBasedGenerator$StructurePoolGenerator#chunkGenerator
    static void set_field_chunkGenerator(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "chunkGenerator", "field_18702", "chunkGenerator", "f_210317_"), "Lduz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.structure.pool.StructurePoolBasedGenerator$StructurePoolGenerator#structureTemplateManager
    static jobject get_field_structureTemplateManager(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "structureTemplateManager", "field_18703", "structureTemplateManager", "f_227256_"), "Lenu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.structure.pool.StructurePoolBasedGenerator$StructurePoolGenerator#structureTemplateManager
    static void set_field_structureTemplateManager(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "structureTemplateManager", "field_18703", "structureTemplateManager", "f_227256_"), "Lenu;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.structure.pool.StructurePoolBasedGenerator$StructurePoolGenerator#children
    static jobject get_field_children(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "pieces", "field_18704", "children", "f_210319_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.structure.pool.StructurePoolBasedGenerator$StructurePoolGenerator#children
    static void set_field_children(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "pieces", "field_18704", "children", "f_210319_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.structure.pool.StructurePoolBasedGenerator$StructurePoolGenerator#random
    static jobject get_field_random(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "random", "field_18705", "random", "f_210320_"), "Layw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.structure.pool.StructurePoolBasedGenerator$StructurePoolGenerator#random
    static void set_field_random(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "random", "field_18705", "random", "f_210320_"), "Layw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.structure.pool.StructurePoolBasedGenerator$StructurePoolGenerator#structurePieces
    static jobject get_field_structurePieces(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "placing", "field_18706", "structurePieces", "f_210321_"), "Layz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.structure.pool.StructurePoolBasedGenerator$StructurePoolGenerator#structurePieces
    static void set_field_structurePieces(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "placing", "field_18706", "structurePieces", "f_210321_"), "Layz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_generatePiece() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tryPlacingChildren", "method_19306", "generatePiece", "m_227264_"), "(Lejn;Lorg/apache/commons/lang3/mutable/MutableObject;IZLdcy;Ldzm;Lelf;Lend;)V");
    }

    static void generatePiece(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2, const jboolean& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6, const jobject& arg7) {
                
       const auto methodID = methodID_generatePiece();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    };
    
    static jmethodID methodID_lookupPool() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "readPoolKey", "method_54498", "lookupPool", "m_306140_"), "(Lent$c;Lelf;)Lakq;");
    }

    static jobject lookupPool(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_lookupPool();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_STRUCTURE_POOL_STRUCTUREPOOLBASEDGENERATOR$STRUCTUREPOOLGENERATOR_HPP