// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_TREEDECORATOR_ATTACHEDTOLEAVESTREEDECORATOR_HPP
#define NET_MINECRAFT_WORLD_GEN_TREEDECORATOR_ATTACHEDTOLEAVESTREEDECORATOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.treedecorator.AttachedToLeavesTreeDecorator
 * Remapped: egw
 */
namespace AttachedToLeavesTreeDecorator {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("egw", "net/minecraft/world/level/levelgen/feature/treedecorators/AttachedToLeavesDecorator", "net/minecraft/class_7389", "net/minecraft/world/gen/treedecorator/AttachedToLeavesTreeDecorator", "net/minecraft/src/C_213153_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.treedecorator.AttachedToLeavesTreeDecorator#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_38783", "CODEC", "f_225979_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.treedecorator.AttachedToLeavesTreeDecorator#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_38783", "CODEC", "f_225979_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for protected field net.minecraft.world.gen.treedecorator.AttachedToLeavesTreeDecorator#probability
    static jfloat get_field_probability(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "probability", "field_38784", "probability", "f_225980_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.world.gen.treedecorator.AttachedToLeavesTreeDecorator#probability
    static void set_field_probability(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "probability", "field_38784", "probability", "f_225980_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.world.gen.treedecorator.AttachedToLeavesTreeDecorator#exclusionRadiusXZ
    static jint get_field_exclusionRadiusXZ(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "exclusionRadiusXZ", "field_38785", "exclusionRadiusXZ", "f_225981_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.world.gen.treedecorator.AttachedToLeavesTreeDecorator#exclusionRadiusXZ
    static void set_field_exclusionRadiusXZ(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "exclusionRadiusXZ", "field_38785", "exclusionRadiusXZ", "f_225981_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.world.gen.treedecorator.AttachedToLeavesTreeDecorator#exclusionRadiusY
    static jint get_field_exclusionRadiusY(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "exclusionRadiusY", "field_38786", "exclusionRadiusY", "f_225982_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.world.gen.treedecorator.AttachedToLeavesTreeDecorator#exclusionRadiusY
    static void set_field_exclusionRadiusY(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "exclusionRadiusY", "field_38786", "exclusionRadiusY", "f_225982_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.world.gen.treedecorator.AttachedToLeavesTreeDecorator#blockProvider
    static jobject get_field_blockProvider(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "blockProvider", "field_38787", "blockProvider", "f_225983_"), "Legj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.world.gen.treedecorator.AttachedToLeavesTreeDecorator#blockProvider
    static void set_field_blockProvider(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "blockProvider", "field_38787", "blockProvider", "f_225983_"), "Legj;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.world.gen.treedecorator.AttachedToLeavesTreeDecorator#requiredEmptyBlocks
    static jint get_field_requiredEmptyBlocks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "requiredEmptyBlocks", "field_38788", "requiredEmptyBlocks", "f_225984_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.world.gen.treedecorator.AttachedToLeavesTreeDecorator#requiredEmptyBlocks
    static void set_field_requiredEmptyBlocks(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "requiredEmptyBlocks", "field_38788", "requiredEmptyBlocks", "f_225984_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.world.gen.treedecorator.AttachedToLeavesTreeDecorator#directions
    static jobject get_field_directions(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "directions", "field_38789", "directions", "f_225985_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.world.gen.treedecorator.AttachedToLeavesTreeDecorator#directions
    static void set_field_directions(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "directions", "field_38789", "directions", "f_225985_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_generate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "place", "method_23469", "generate", "m_214187_"), "(Leha$a;)V");
    }

    static void generate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_generate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_meetsRequiredEmptyBlocks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hasRequiredEmptyBlocks", "method_43187", "meetsRequiredEmptyBlocks", "m_226001_"), "(Leha$a;Ljd;Lji;)Z");
    }

    static jboolean meetsRequiredEmptyBlocks(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_meetsRequiredEmptyBlocks();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "method_28893", "getType", "m_6663_"), "()Lehb;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_TREEDECORATOR_ATTACHEDTOLEAVESTREEDECORATOR_HPP