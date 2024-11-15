// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_PROCESSOR_STRUCTUREPROCESSORTYPE_HPP
#define NET_MINECRAFT_STRUCTURE_PROCESSOR_STRUCTUREPROCESSORTYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.processor.StructureProcessorType
 * Remapped: ens
 */
namespace StructureProcessorType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ens", "net/minecraft/world/level/levelgen/structure/templatesystem/StructureProcessorType", "net/minecraft/class_3828", "net/minecraft/structure/processor/StructureProcessorType", "net/minecraft/src/C_2633_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.structure.processor.StructureProcessorType#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SINGLE_CODEC", "field_25013", "CODEC", "f_74465_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.structure.processor.StructureProcessorType#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SINGLE_CODEC", "field_25013", "CODEC", "f_74465_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.structure.processor.StructureProcessorType#LIST_CODEC
    [[maybe_unused]] static jobject get_field_LIST_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LIST_OBJECT_CODEC", "field_26663", "LIST_CODEC", "f_74466_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.structure.processor.StructureProcessorType#LIST_CODEC
    [[maybe_unused]] static void set_field_LIST_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LIST_OBJECT_CODEC", "field_26663", "LIST_CODEC", "f_74466_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.structure.processor.StructureProcessorType#PROCESSORS_CODEC
    [[maybe_unused]] static jobject get_field_PROCESSORS_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DIRECT_CODEC", "field_25876", "PROCESSORS_CODEC", "f_74467_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.structure.processor.StructureProcessorType#PROCESSORS_CODEC
    [[maybe_unused]] static void set_field_PROCESSORS_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DIRECT_CODEC", "field_25876", "PROCESSORS_CODEC", "f_74467_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.structure.processor.StructureProcessorType#REGISTRY_CODEC
    [[maybe_unused]] static jobject get_field_REGISTRY_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "LIST_CODEC", "field_25877", "REGISTRY_CODEC", "f_74468_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.structure.processor.StructureProcessorType#REGISTRY_CODEC
    [[maybe_unused]] static void set_field_REGISTRY_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "LIST_CODEC", "field_25877", "REGISTRY_CODEC", "f_74468_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.structure.processor.StructureProcessorType#BLOCK_IGNORE
    [[maybe_unused]] static jobject get_field_BLOCK_IGNORE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "BLOCK_IGNORE", "field_16986", "BLOCK_IGNORE", "f_74456_"), "Lens;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.structure.processor.StructureProcessorType#BLOCK_IGNORE
    [[maybe_unused]] static void set_field_BLOCK_IGNORE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "BLOCK_IGNORE", "field_16986", "BLOCK_IGNORE", "f_74456_"), "Lens;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.structure.processor.StructureProcessorType#BLOCK_ROT
    [[maybe_unused]] static jobject get_field_BLOCK_ROT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "BLOCK_ROT", "field_16988", "BLOCK_ROT", "f_74457_"), "Lens;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.structure.processor.StructureProcessorType#BLOCK_ROT
    [[maybe_unused]] static void set_field_BLOCK_ROT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "BLOCK_ROT", "field_16988", "BLOCK_ROT", "f_74457_"), "Lens;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.structure.processor.StructureProcessorType#GRAVITY
    [[maybe_unused]] static jobject get_field_GRAVITY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "GRAVITY", "field_16989", "GRAVITY", "f_74458_"), "Lens;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.structure.processor.StructureProcessorType#GRAVITY
    [[maybe_unused]] static void set_field_GRAVITY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "GRAVITY", "field_16989", "GRAVITY", "f_74458_"), "Lens;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.structure.processor.StructureProcessorType#JIGSAW_REPLACEMENT
    [[maybe_unused]] static jobject get_field_JIGSAW_REPLACEMENT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "JIGSAW_REPLACEMENT", "field_16991", "JIGSAW_REPLACEMENT", "f_74459_"), "Lens;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.structure.processor.StructureProcessorType#JIGSAW_REPLACEMENT
    [[maybe_unused]] static void set_field_JIGSAW_REPLACEMENT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "JIGSAW_REPLACEMENT", "field_16991", "JIGSAW_REPLACEMENT", "f_74459_"), "Lens;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.structure.processor.StructureProcessorType#RULE
    [[maybe_unused]] static jobject get_field_RULE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "RULE", "field_16990", "RULE", "f_74460_"), "Lens;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.structure.processor.StructureProcessorType#RULE
    [[maybe_unused]] static void set_field_RULE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "RULE", "field_16990", "RULE", "f_74460_"), "Lens;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.structure.processor.StructureProcessorType#NOP
    [[maybe_unused]] static jobject get_field_NOP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "NOP", "field_16987", "NOP", "f_74461_"), "Lens;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.structure.processor.StructureProcessorType#NOP
    [[maybe_unused]] static void set_field_NOP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "NOP", "field_16987", "NOP", "f_74461_"), "Lens;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.structure.processor.StructureProcessorType#BLOCK_AGE
    [[maybe_unused]] static jobject get_field_BLOCK_AGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "BLOCK_AGE", "field_24044", "BLOCK_AGE", "f_74462_"), "Lens;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.structure.processor.StructureProcessorType#BLOCK_AGE
    [[maybe_unused]] static void set_field_BLOCK_AGE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "BLOCK_AGE", "field_24044", "BLOCK_AGE", "f_74462_"), "Lens;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.structure.processor.StructureProcessorType#BLACKSTONE_REPLACE
    [[maybe_unused]] static jobject get_field_BLACKSTONE_REPLACE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "BLACKSTONE_REPLACE", "field_24045", "BLACKSTONE_REPLACE", "f_74463_"), "Lens;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.structure.processor.StructureProcessorType#BLACKSTONE_REPLACE
    [[maybe_unused]] static void set_field_BLACKSTONE_REPLACE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "BLACKSTONE_REPLACE", "field_24045", "BLACKSTONE_REPLACE", "f_74463_"), "Lens;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.structure.processor.StructureProcessorType#LAVA_SUBMERGED_BLOCK
    [[maybe_unused]] static jobject get_field_LAVA_SUBMERGED_BLOCK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "LAVA_SUBMERGED_BLOCK", "field_25620", "LAVA_SUBMERGED_BLOCK", "f_74464_"), "Lens;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.structure.processor.StructureProcessorType#LAVA_SUBMERGED_BLOCK
    [[maybe_unused]] static void set_field_LAVA_SUBMERGED_BLOCK(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "LAVA_SUBMERGED_BLOCK", "field_25620", "LAVA_SUBMERGED_BLOCK", "f_74464_"), "Lens;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.structure.processor.StructureProcessorType#PROTECTED_BLOCKS
    [[maybe_unused]] static jobject get_field_PROTECTED_BLOCKS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "PROTECTED_BLOCKS", "field_33773", "PROTECTED_BLOCKS", "f_163784_"), "Lens;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.structure.processor.StructureProcessorType#PROTECTED_BLOCKS
    [[maybe_unused]] static void set_field_PROTECTED_BLOCKS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "PROTECTED_BLOCKS", "field_33773", "PROTECTED_BLOCKS", "f_163784_"), "Lens;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.structure.processor.StructureProcessorType#CAPPED
    [[maybe_unused]] static jobject get_field_CAPPED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "CAPPED", "field_43335", "CAPPED", "f_276421_"), "Lens;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.structure.processor.StructureProcessorType#CAPPED
    [[maybe_unused]] static void set_field_CAPPED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "CAPPED", "field_43335", "CAPPED", "f_276421_"), "Lens;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_codec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("codec", "codec", "", "", "m_74481_"), "()Lcom/mojang/serialization/MapCodec;");
    }

    static jobject codec(const jobject& obj) {
                
       const auto methodID = methodID_codec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_16822", "register", "m_74476_"), "(Ljava/lang/String;Lcom/mojang/serialization/MapCodec;)Lens;");
    }

    static jobject register(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_STRUCTURE_PROCESSOR_STRUCTUREPROCESSORTYPE_HPP