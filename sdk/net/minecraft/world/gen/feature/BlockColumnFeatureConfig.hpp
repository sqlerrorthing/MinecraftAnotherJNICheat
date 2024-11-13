// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_BLOCKCOLUMNFEATURECONFIG_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_BLOCKCOLUMNFEATURECONFIG_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.BlockColumnFeatureConfig
 * Remapped: edz
 */
namespace BlockColumnFeatureConfig {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("edz", "net/minecraft/world/level/levelgen/feature/configurations/BlockColumnConfiguration", "net/minecraft/class_6655", "net/minecraft/world/gen/feature/BlockColumnFeatureConfig", "net/minecraft/src/C_182989_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.gen.feature.BlockColumnFeatureConfig#layers
    static jobject get_field_layers(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "layers", "comp_143", "layers", "f_191207_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.BlockColumnFeatureConfig#layers
    static void set_field_layers(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "layers", "comp_143", "layers", "f_191207_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.feature.BlockColumnFeatureConfig#direction
    static jobject get_field_direction(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "direction", "comp_144", "direction", "f_191208_"), "Lji;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.BlockColumnFeatureConfig#direction
    static void set_field_direction(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "direction", "comp_144", "direction", "f_191208_"), "Lji;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.feature.BlockColumnFeatureConfig#allowedPlacement
    static jobject get_field_allowedPlacement(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "allowedPlacement", "comp_168", "allowedPlacement", "f_191209_"), "Leaf;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.BlockColumnFeatureConfig#allowedPlacement
    static void set_field_allowedPlacement(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "allowedPlacement", "comp_168", "allowedPlacement", "f_191209_"), "Leaf;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.feature.BlockColumnFeatureConfig#prioritizeTip
    static jboolean get_field_prioritizeTip(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "prioritizeTip", "comp_146", "prioritizeTip", "f_191210_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.BlockColumnFeatureConfig#prioritizeTip
    static void set_field_prioritizeTip(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "prioritizeTip", "comp_146", "prioritizeTip", "f_191210_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.BlockColumnFeatureConfig#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_35073", "CODEC", "f_191206_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.BlockColumnFeatureConfig#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_35073", "CODEC", "f_191206_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_createLayer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "layer", "method_38908", "createLayer", "m_191218_"), "(Lbpw;Legj;)Ledz$a;");
    }

    static jobject createLayer(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_createLayer();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "simple", "method_38910", "create", "m_191224_"), "(Lbpw;Legj;)Ledz;");
    }

    static jobject create(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__layers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "layers", "comp_143", "layers", "f_191207_"), "()Ljava/util/List;");
    }

    static jobject _layers(const jobject& obj) {
                
       const auto methodID = methodID__layers();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__direction() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "direction", "comp_144", "direction", "f_191208_"), "()Lji;");
    }

    static jobject _direction(const jobject& obj) {
                
       const auto methodID = methodID__direction();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__allowedPlacement() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "allowedPlacement", "comp_168", "allowedPlacement", "f_191209_"), "()Leaf;");
    }

    static jobject _allowedPlacement(const jobject& obj) {
                
       const auto methodID = methodID__allowedPlacement();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__prioritizeTip() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "prioritizeTip", "comp_146", "prioritizeTip", "f_191210_"), "()Z");
    }

    static jboolean _prioritizeTip(const jobject& obj) {
                
       const auto methodID = methodID__prioritizeTip();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_BLOCKCOLUMNFEATURECONFIG_HPP