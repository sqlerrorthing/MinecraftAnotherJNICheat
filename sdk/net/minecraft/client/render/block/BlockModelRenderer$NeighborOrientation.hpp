// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_BLOCK_BLOCKMODELRENDERER$NEIGHBORORIENTATION_HPP
#define NET_MINECRAFT_CLIENT_RENDER_BLOCK_BLOCKMODELRENDERER$NEIGHBORORIENTATION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.block.BlockModelRenderer$NeighborOrientation
 * Remapped: gfv$e
 */
namespace BlockModelRenderer$NeighborOrientation {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gfv$e", "net/minecraft/client/renderer/block/ModelBlockRenderer$SizeInfo", "net/minecraft/class_778$class_782", "net/minecraft/client/render/block/BlockModelRenderer$NeighborOrientation", "net/minecraft/src/C_4186_$C_4194_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.render.block.BlockModelRenderer$NeighborOrientation#DOWN
    [[maybe_unused]] static jobject get_field_DOWN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DOWN", "field_4210", "DOWN", "DOWN"), "Lgfv$e;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.block.BlockModelRenderer$NeighborOrientation#DOWN
    [[maybe_unused]] static void set_field_DOWN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DOWN", "field_4210", "DOWN", "DOWN"), "Lgfv$e;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.block.BlockModelRenderer$NeighborOrientation#UP
    [[maybe_unused]] static jobject get_field_UP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "UP", "field_4212", "UP", "UP"), "Lgfv$e;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.block.BlockModelRenderer$NeighborOrientation#UP
    [[maybe_unused]] static void set_field_UP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "UP", "field_4212", "UP", "UP"), "Lgfv$e;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.block.BlockModelRenderer$NeighborOrientation#NORTH
    [[maybe_unused]] static jobject get_field_NORTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "NORTH", "field_4211", "NORTH", "NORTH"), "Lgfv$e;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.block.BlockModelRenderer$NeighborOrientation#NORTH
    [[maybe_unused]] static void set_field_NORTH(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "NORTH", "field_4211", "NORTH", "NORTH"), "Lgfv$e;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.block.BlockModelRenderer$NeighborOrientation#SOUTH
    [[maybe_unused]] static jobject get_field_SOUTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SOUTH", "field_4213", "SOUTH", "SOUTH"), "Lgfv$e;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.block.BlockModelRenderer$NeighborOrientation#SOUTH
    [[maybe_unused]] static void set_field_SOUTH(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SOUTH", "field_4213", "SOUTH", "SOUTH"), "Lgfv$e;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.block.BlockModelRenderer$NeighborOrientation#WEST
    [[maybe_unused]] static jobject get_field_WEST() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "WEST", "field_4215", "WEST", "WEST"), "Lgfv$e;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.block.BlockModelRenderer$NeighborOrientation#WEST
    [[maybe_unused]] static void set_field_WEST(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "WEST", "field_4215", "WEST", "WEST"), "Lgfv$e;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.block.BlockModelRenderer$NeighborOrientation#EAST
    [[maybe_unused]] static jobject get_field_EAST() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "EAST", "field_4219", "EAST", "EAST"), "Lgfv$e;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.block.BlockModelRenderer$NeighborOrientation#EAST
    [[maybe_unused]] static void set_field_EAST(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "EAST", "field_4219", "EAST", "EAST"), "Lgfv$e;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.block.BlockModelRenderer$NeighborOrientation#FLIP_DOWN
    [[maybe_unused]] static jobject get_field_FLIP_DOWN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "FLIP_DOWN", "field_4220", "FLIP_DOWN", "FLIP_DOWN"), "Lgfv$e;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.block.BlockModelRenderer$NeighborOrientation#FLIP_DOWN
    [[maybe_unused]] static void set_field_FLIP_DOWN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "FLIP_DOWN", "field_4220", "FLIP_DOWN", "FLIP_DOWN"), "Lgfv$e;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.block.BlockModelRenderer$NeighborOrientation#FLIP_UP
    [[maybe_unused]] static jobject get_field_FLIP_UP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "FLIP_UP", "field_4217", "FLIP_UP", "FLIP_UP"), "Lgfv$e;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.block.BlockModelRenderer$NeighborOrientation#FLIP_UP
    [[maybe_unused]] static void set_field_FLIP_UP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "FLIP_UP", "field_4217", "FLIP_UP", "FLIP_UP"), "Lgfv$e;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.block.BlockModelRenderer$NeighborOrientation#FLIP_NORTH
    [[maybe_unused]] static jobject get_field_FLIP_NORTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "FLIP_NORTH", "field_4218", "FLIP_NORTH", "FLIP_NORTH"), "Lgfv$e;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.block.BlockModelRenderer$NeighborOrientation#FLIP_NORTH
    [[maybe_unused]] static void set_field_FLIP_NORTH(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "FLIP_NORTH", "field_4218", "FLIP_NORTH", "FLIP_NORTH"), "Lgfv$e;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.block.BlockModelRenderer$NeighborOrientation#FLIP_SOUTH
    [[maybe_unused]] static jobject get_field_FLIP_SOUTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "FLIP_SOUTH", "field_4221", "FLIP_SOUTH", "FLIP_SOUTH"), "Lgfv$e;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.block.BlockModelRenderer$NeighborOrientation#FLIP_SOUTH
    [[maybe_unused]] static void set_field_FLIP_SOUTH(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "FLIP_SOUTH", "field_4221", "FLIP_SOUTH", "FLIP_SOUTH"), "Lgfv$e;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.block.BlockModelRenderer$NeighborOrientation#FLIP_WEST
    [[maybe_unused]] static jobject get_field_FLIP_WEST() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "FLIP_WEST", "field_4216", "FLIP_WEST", "FLIP_WEST"), "Lgfv$e;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.block.BlockModelRenderer$NeighborOrientation#FLIP_WEST
    [[maybe_unused]] static void set_field_FLIP_WEST(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "FLIP_WEST", "field_4216", "FLIP_WEST", "FLIP_WEST"), "Lgfv$e;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.block.BlockModelRenderer$NeighborOrientation#FLIP_EAST
    [[maybe_unused]] static jobject get_field_FLIP_EAST() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "FLIP_EAST", "field_4214", "FLIP_EAST", "FLIP_EAST"), "Lgfv$e;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.block.BlockModelRenderer$NeighborOrientation#FLIP_EAST
    [[maybe_unused]] static void set_field_FLIP_EAST(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "FLIP_EAST", "field_4214", "FLIP_EAST", "FLIP_EAST"), "Lgfv$e;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for default field net.minecraft.client.render.block.BlockModelRenderer$NeighborOrientation#shape
    static jint get_field_shape(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "shape", "field_4222", "shape", "f_111258_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.render.block.BlockModelRenderer$NeighborOrientation#shape
    static void set_field_shape(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "shape", "field_4222", "shape", "f_111258_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lgfv$e;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lgfv$e;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_BLOCK_BLOCKMODELRENDERER$NEIGHBORORIENTATION_HPP