// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_BLOCKCOLUMNFEATURECONFIG$LAYER_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_BLOCKCOLUMNFEATURECONFIG$LAYER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.BlockColumnFeatureConfig$Layer
 * Remapped: edz$a
 */
namespace BlockColumnFeatureConfig$Layer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("edz$a", "net/minecraft/world/level/levelgen/feature/configurations/BlockColumnConfiguration$Layer", "net/minecraft/class_6655$class_6656", "net/minecraft/world/gen/feature/BlockColumnFeatureConfig$Layer", "net/minecraft/src/C_182989_$C_182990_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.gen.feature.BlockColumnFeatureConfig$Layer#height
    static jobject get_field_height(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "height", "comp_147", "height", "f_191234_"), "Lbpw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.BlockColumnFeatureConfig$Layer#height
    static void set_field_height(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "height", "comp_147", "height", "f_191234_"), "Lbpw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.feature.BlockColumnFeatureConfig$Layer#state
    static jobject get_field_state(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "state", "comp_148", "state", "f_191235_"), "Legj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.BlockColumnFeatureConfig$Layer#state
    static void set_field_state(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "state", "comp_148", "state", "f_191235_"), "Legj;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.BlockColumnFeatureConfig$Layer#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_35074", "CODEC", "f_191233_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.BlockColumnFeatureConfig$Layer#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_35074", "CODEC", "f_191233_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID__height() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "height", "comp_147", "height", "f_191234_"), "()Lbpw;");
    }

    static jobject _height(const jobject& obj) {
                
       const auto methodID = methodID__height();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__state() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "state", "comp_148", "state", "f_191235_"), "()Legj;");
    }

    static jobject _state(const jobject& obj) {
                
       const auto methodID = methodID__state();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_BLOCKCOLUMNFEATURECONFIG$LAYER_HPP