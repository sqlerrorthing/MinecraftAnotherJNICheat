// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_TEXTURE_ATLAS_ATLASSOURCEMANAGER_HPP
#define NET_MINECRAFT_CLIENT_TEXTURE_ATLAS_ATLASSOURCEMANAGER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.texture.atlas.AtlasSourceManager
 * Remapped: gqs
 */
namespace AtlasSourceManager {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gqs", "net/minecraft/client/renderer/texture/atlas/SpriteSources", "net/minecraft/class_7952", "net/minecraft/client/texture/atlas/AtlasSourceManager", "net/minecraft/src/C_260366_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.texture.atlas.AtlasSourceManager#SOURCE_TYPE_BY_ID
    [[maybe_unused]] static jobject get_field_SOURCE_TYPE_BY_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "TYPES", "field_41398", "SOURCE_TYPE_BY_ID", "f_260548_"), "Lcom/google/common/collect/BiMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.atlas.AtlasSourceManager#SOURCE_TYPE_BY_ID
    [[maybe_unused]] static void set_field_SOURCE_TYPE_BY_ID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "TYPES", "field_41398", "SOURCE_TYPE_BY_ID", "f_260548_"), "Lcom/google/common/collect/BiMap;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.texture.atlas.AtlasSourceManager#SINGLE
    [[maybe_unused]] static jobject get_field_SINGLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SINGLE_FILE", "field_41391", "SINGLE", "f_260457_"), "Lgqr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.texture.atlas.AtlasSourceManager#SINGLE
    [[maybe_unused]] static void set_field_SINGLE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SINGLE_FILE", "field_41391", "SINGLE", "f_260457_"), "Lgqr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.texture.atlas.AtlasSourceManager#DIRECTORY
    [[maybe_unused]] static jobject get_field_DIRECTORY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DIRECTORY", "field_41392", "DIRECTORY", "f_260490_"), "Lgqr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.texture.atlas.AtlasSourceManager#DIRECTORY
    [[maybe_unused]] static void set_field_DIRECTORY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DIRECTORY", "field_41392", "DIRECTORY", "f_260490_"), "Lgqr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.texture.atlas.AtlasSourceManager#FILTER
    [[maybe_unused]] static jobject get_field_FILTER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "FILTER", "field_41393", "FILTER", "f_260627_"), "Lgqr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.texture.atlas.AtlasSourceManager#FILTER
    [[maybe_unused]] static void set_field_FILTER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "FILTER", "field_41393", "FILTER", "f_260627_"), "Lgqr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.texture.atlas.AtlasSourceManager#UNSTITCH
    [[maybe_unused]] static jobject get_field_UNSTITCH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "UNSTITCHER", "field_41394", "UNSTITCH", "f_260546_"), "Lgqr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.texture.atlas.AtlasSourceManager#UNSTITCH
    [[maybe_unused]] static void set_field_UNSTITCH(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "UNSTITCHER", "field_41394", "UNSTITCH", "f_260546_"), "Lgqr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.texture.atlas.AtlasSourceManager#PALETTED_PERMUTATIONS
    [[maybe_unused]] static jobject get_field_PALETTED_PERMUTATIONS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "PALETTED_PERMUTATIONS", "field_42076", "PALETTED_PERMUTATIONS", "f_266099_"), "Lgqr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.texture.atlas.AtlasSourceManager#PALETTED_PERMUTATIONS
    [[maybe_unused]] static void set_field_PALETTED_PERMUTATIONS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "PALETTED_PERMUTATIONS", "field_42076", "PALETTED_PERMUTATIONS", "f_266099_"), "Lgqr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.texture.atlas.AtlasSourceManager#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "TYPE_CODEC", "field_41395", "CODEC", "f_260540_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.texture.atlas.AtlasSourceManager#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "TYPE_CODEC", "field_41395", "CODEC", "f_260540_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.texture.atlas.AtlasSourceManager#TYPE_CODEC
    [[maybe_unused]] static jobject get_field_TYPE_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "CODEC", "field_41396", "TYPE_CODEC", "f_260500_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.texture.atlas.AtlasSourceManager#TYPE_CODEC
    [[maybe_unused]] static void set_field_TYPE_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "CODEC", "field_41396", "TYPE_CODEC", "f_260500_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.texture.atlas.AtlasSourceManager#LIST_CODEC
    [[maybe_unused]] static jobject get_field_LIST_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "FILE_CODEC", "field_41397", "LIST_CODEC", "f_260551_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.texture.atlas.AtlasSourceManager#LIST_CODEC
    [[maybe_unused]] static void set_field_LIST_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "FILE_CODEC", "field_41397", "LIST_CODEC", "f_260551_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_47680", "register", "m_260887_"), "(Ljava/lang/String;Lcom/mojang/serialization/MapCodec;)Lgqr;");
    }

    static jobject register(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_TEXTURE_ATLAS_ATLASSOURCEMANAGER_HPP