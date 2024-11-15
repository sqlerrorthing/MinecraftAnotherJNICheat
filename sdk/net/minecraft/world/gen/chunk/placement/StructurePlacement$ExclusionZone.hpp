// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_CHUNK_PLACEMENT_STRUCTUREPLACEMENT$EXCLUSIONZONE_HPP
#define NET_MINECRAFT_WORLD_GEN_CHUNK_PLACEMENT_STRUCTUREPLACEMENT$EXCLUSIONZONE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.chunk.placement.StructurePlacement$ExclusionZone
 * Remapped: eko$a
 */
namespace StructurePlacement$ExclusionZone {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eko$a", "net/minecraft/world/level/levelgen/structure/placement/StructurePlacement$ExclusionZone", "net/minecraft/class_6874$class_7152", "net/minecraft/world/gen/chunk/placement/StructurePlacement$ExclusionZone", "net/minecraft/src/C_203222_$C_213170_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.gen.chunk.placement.StructurePlacement$ExclusionZone#otherSet
    static jobject get_field_otherSet(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "otherSet", "comp_574", "otherSet", "f_227078_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.placement.StructurePlacement$ExclusionZone#otherSet
    static void set_field_otherSet(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "otherSet", "comp_574", "otherSet", "f_227078_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.chunk.placement.StructurePlacement$ExclusionZone#chunkCount
    static jint get_field_chunkCount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "chunkCount", "comp_575", "chunkCount", "f_227079_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.placement.StructurePlacement$ExclusionZone#chunkCount
    static void set_field_chunkCount(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "chunkCount", "comp_575", "chunkCount", "f_227079_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.chunk.placement.StructurePlacement$ExclusionZone#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_37781", "CODEC", "f_227077_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.chunk.placement.StructurePlacement$ExclusionZone#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_37781", "CODEC", "f_227077_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_shouldExclude() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isPlacementForbidden", "method_41648", "shouldExclude", "m_254908_"), "(Ldva;II)Z");
    }

    static jboolean shouldExclude(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_shouldExclude();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__otherSet() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "otherSet", "comp_574", "otherSet", "f_227078_"), "()Ljm;");
    }

    static jobject _otherSet(const jobject& obj) {
                
       const auto methodID = methodID__otherSet();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__chunkCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "chunkCount", "comp_575", "chunkCount", "f_227079_"), "()I");
    }

    static jint _chunkCount(const jobject& obj) {
                
       const auto methodID = methodID__chunkCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_CHUNK_PLACEMENT_STRUCTUREPLACEMENT$EXCLUSIONZONE_HPP