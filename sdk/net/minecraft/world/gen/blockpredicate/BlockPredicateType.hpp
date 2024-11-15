// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_BLOCKPREDICATE_BLOCKPREDICATETYPE_HPP
#define NET_MINECRAFT_WORLD_GEN_BLOCKPREDICATE_BLOCKPREDICATETYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.blockpredicate.BlockPredicateType
 * Remapped: eag
 */
namespace BlockPredicateType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eag", "net/minecraft/world/level/levelgen/blockpredicates/BlockPredicateType", "net/minecraft/class_6647", "net/minecraft/world/gen/blockpredicate/BlockPredicateType", "net/minecraft/src/C_182967_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.blockpredicate.BlockPredicateType#MATCHING_BLOCKS
    [[maybe_unused]] static jobject get_field_MATCHING_BLOCKS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MATCHING_BLOCKS", "field_35055", "MATCHING_BLOCKS", "f_190436_"), "Leag;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.blockpredicate.BlockPredicateType#MATCHING_BLOCKS
    [[maybe_unused]] static void set_field_MATCHING_BLOCKS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MATCHING_BLOCKS", "field_35055", "MATCHING_BLOCKS", "f_190436_"), "Leag;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.blockpredicate.BlockPredicateType#MATCHING_BLOCK_TAG
    [[maybe_unused]] static jobject get_field_MATCHING_BLOCK_TAG() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MATCHING_BLOCK_TAG", "field_36282", "MATCHING_BLOCK_TAG", "f_198313_"), "Leag;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.blockpredicate.BlockPredicateType#MATCHING_BLOCK_TAG
    [[maybe_unused]] static void set_field_MATCHING_BLOCK_TAG(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MATCHING_BLOCK_TAG", "field_36282", "MATCHING_BLOCK_TAG", "f_198313_"), "Leag;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.blockpredicate.BlockPredicateType#MATCHING_FLUIDS
    [[maybe_unused]] static jobject get_field_MATCHING_FLUIDS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MATCHING_FLUIDS", "field_35056", "MATCHING_FLUIDS", "f_190437_"), "Leag;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.blockpredicate.BlockPredicateType#MATCHING_FLUIDS
    [[maybe_unused]] static void set_field_MATCHING_FLUIDS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MATCHING_FLUIDS", "field_35056", "MATCHING_FLUIDS", "f_190437_"), "Leag;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.blockpredicate.BlockPredicateType#HAS_STURDY_FACE
    [[maybe_unused]] static jobject get_field_HAS_STURDY_FACE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "HAS_STURDY_FACE", "field_36283", "HAS_STURDY_FACE", "f_198314_"), "Leag;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.blockpredicate.BlockPredicateType#HAS_STURDY_FACE
    [[maybe_unused]] static void set_field_HAS_STURDY_FACE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "HAS_STURDY_FACE", "field_36283", "HAS_STURDY_FACE", "f_198314_"), "Leag;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.blockpredicate.BlockPredicateType#SOLID
    [[maybe_unused]] static jobject get_field_SOLID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "SOLID", "field_35698", "SOLID", "f_190438_"), "Leag;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.blockpredicate.BlockPredicateType#SOLID
    [[maybe_unused]] static void set_field_SOLID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "SOLID", "field_35698", "SOLID", "f_190438_"), "Leag;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.blockpredicate.BlockPredicateType#REPLACEABLE
    [[maybe_unused]] static jobject get_field_REPLACEABLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "REPLACEABLE", "field_35057", "REPLACEABLE", "f_190439_"), "Leag;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.blockpredicate.BlockPredicateType#REPLACEABLE
    [[maybe_unused]] static void set_field_REPLACEABLE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "REPLACEABLE", "field_35057", "REPLACEABLE", "f_190439_"), "Leag;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.blockpredicate.BlockPredicateType#WOULD_SURVIVE
    [[maybe_unused]] static jobject get_field_WOULD_SURVIVE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "WOULD_SURVIVE", "field_35155", "WOULD_SURVIVE", "f_190440_"), "Leag;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.blockpredicate.BlockPredicateType#WOULD_SURVIVE
    [[maybe_unused]] static void set_field_WOULD_SURVIVE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "WOULD_SURVIVE", "field_35155", "WOULD_SURVIVE", "f_190440_"), "Leag;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.blockpredicate.BlockPredicateType#INSIDE_WORLD_BOUNDS
    [[maybe_unused]] static jobject get_field_INSIDE_WORLD_BOUNDS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "INSIDE_WORLD_BOUNDS", "field_35699", "INSIDE_WORLD_BOUNDS", "f_190441_"), "Leag;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.blockpredicate.BlockPredicateType#INSIDE_WORLD_BOUNDS
    [[maybe_unused]] static void set_field_INSIDE_WORLD_BOUNDS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "INSIDE_WORLD_BOUNDS", "field_35699", "INSIDE_WORLD_BOUNDS", "f_190441_"), "Leag;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.blockpredicate.BlockPredicateType#ANY_OF
    [[maybe_unused]] static jobject get_field_ANY_OF() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "ANY_OF", "field_35058", "ANY_OF", "f_190442_"), "Leag;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.blockpredicate.BlockPredicateType#ANY_OF
    [[maybe_unused]] static void set_field_ANY_OF(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "ANY_OF", "field_35058", "ANY_OF", "f_190442_"), "Leag;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.blockpredicate.BlockPredicateType#ALL_OF
    [[maybe_unused]] static jobject get_field_ALL_OF() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "ALL_OF", "field_35059", "ALL_OF", "f_190443_"), "Leag;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.blockpredicate.BlockPredicateType#ALL_OF
    [[maybe_unused]] static void set_field_ALL_OF(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "ALL_OF", "field_35059", "ALL_OF", "f_190443_"), "Leag;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.blockpredicate.BlockPredicateType#NOT
    [[maybe_unused]] static jobject get_field_NOT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "NOT", "field_35060", "NOT", "f_190444_"), "Leag;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.blockpredicate.BlockPredicateType#NOT
    [[maybe_unused]] static void set_field_NOT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "NOT", "field_35060", "NOT", "f_190444_"), "Leag;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.blockpredicate.BlockPredicateType#TRUE
    [[maybe_unused]] static jobject get_field_TRUE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "TRUE", "field_35156", "TRUE", "f_190445_"), "Leag;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.blockpredicate.BlockPredicateType#TRUE
    [[maybe_unused]] static void set_field_TRUE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "TRUE", "field_35156", "TRUE", "f_190445_"), "Leag;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.blockpredicate.BlockPredicateType#UNOBSTRUCTED
    [[maybe_unused]] static jobject get_field_UNOBSTRUCTED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "UNOBSTRUCTED", "field_51788", "UNOBSTRUCTED", "f_337691_"), "Leag;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.blockpredicate.BlockPredicateType#UNOBSTRUCTED
    [[maybe_unused]] static void set_field_UNOBSTRUCTED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "UNOBSTRUCTED", "field_51788", "UNOBSTRUCTED", "f_337691_"), "Leag;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_codec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("codec", "codec", "", "", "m_190452_"), "()Lcom/mojang/serialization/MapCodec;");
    }

    static jobject codec(const jobject& obj) {
                
       const auto methodID = methodID_codec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_38889", "register", "m_190449_"), "(Ljava/lang/String;Lcom/mojang/serialization/MapCodec;)Leag;");
    }

    static jobject register(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_BLOCKPREDICATE_BLOCKPREDICATETYPE_HPP