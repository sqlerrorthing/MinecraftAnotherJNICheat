// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_CHUNK_GENERATIONSHAPECONFIG_HPP
#define NET_MINECRAFT_WORLD_GEN_CHUNK_GENERATIONSHAPECONFIG_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.chunk.GenerationShapeConfig
 * Remapped: dzg
 */
namespace GenerationShapeConfig {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dzg", "net/minecraft/world/level/levelgen/NoiseSettings", "net/minecraft/class_5309", "net/minecraft/world/gen/chunk/GenerationShapeConfig", "net/minecraft/src/C_2196_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.gen.chunk.GenerationShapeConfig#minimumY
    static jint get_field_minimumY(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "minY", "comp_173", "minimumY", "f_158688_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.GenerationShapeConfig#minimumY
    static void set_field_minimumY(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "minY", "comp_173", "minimumY", "f_158688_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.chunk.GenerationShapeConfig#height
    static jint get_field_height(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "height", "comp_174", "height", "f_64508_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.GenerationShapeConfig#height
    static void set_field_height(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "height", "comp_174", "height", "f_64508_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.chunk.GenerationShapeConfig#horizontalSize
    static jint get_field_horizontalSize(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "noiseSizeHorizontal", "comp_178", "horizontalSize", "f_64512_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.GenerationShapeConfig#horizontalSize
    static void set_field_horizontalSize(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "noiseSizeHorizontal", "comp_178", "horizontalSize", "f_64512_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.chunk.GenerationShapeConfig#verticalSize
    static jint get_field_verticalSize(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "noiseSizeVertical", "comp_179", "verticalSize", "f_64513_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.GenerationShapeConfig#verticalSize
    static void set_field_verticalSize(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "noiseSizeVertical", "comp_179", "verticalSize", "f_64513_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.chunk.GenerationShapeConfig#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24804", "CODEC", "f_64507_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.chunk.GenerationShapeConfig#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24804", "CODEC", "f_64507_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.world.gen.chunk.GenerationShapeConfig#SURFACE
    [[maybe_unused]] static jobject get_field_SURFACE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "OVERWORLD_NOISE_SETTINGS", "field_38253", "SURFACE", "f_224519_"), "Ldzg;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.world.gen.chunk.GenerationShapeConfig#SURFACE
    [[maybe_unused]] static void set_field_SURFACE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "OVERWORLD_NOISE_SETTINGS", "field_38253", "SURFACE", "f_224519_"), "Ldzg;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.world.gen.chunk.GenerationShapeConfig#NETHER
    [[maybe_unused]] static jobject get_field_NETHER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "NETHER_NOISE_SETTINGS", "field_37138", "NETHER", "f_209630_"), "Ldzg;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.world.gen.chunk.GenerationShapeConfig#NETHER
    [[maybe_unused]] static void set_field_NETHER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "NETHER_NOISE_SETTINGS", "field_37138", "NETHER", "f_209630_"), "Ldzg;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.world.gen.chunk.GenerationShapeConfig#END
    [[maybe_unused]] static jobject get_field_END() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "END_NOISE_SETTINGS", "field_37139", "END", "f_209631_"), "Ldzg;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.world.gen.chunk.GenerationShapeConfig#END
    [[maybe_unused]] static void set_field_END(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "END_NOISE_SETTINGS", "field_37139", "END", "f_209631_"), "Ldzg;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.world.gen.chunk.GenerationShapeConfig#CAVES
    [[maybe_unused]] static jobject get_field_CAVES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CAVES_NOISE_SETTINGS", "field_37140", "CAVES", "f_209632_"), "Ldzg;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.world.gen.chunk.GenerationShapeConfig#CAVES
    [[maybe_unused]] static void set_field_CAVES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CAVES_NOISE_SETTINGS", "field_37140", "CAVES", "f_209632_"), "Ldzg;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.world.gen.chunk.GenerationShapeConfig#FLOATING_ISLANDS
    [[maybe_unused]] static jobject get_field_FLOATING_ISLANDS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "FLOATING_ISLANDS_NOISE_SETTINGS", "field_37141", "FLOATING_ISLANDS", "f_209633_"), "Ldzg;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.world.gen.chunk.GenerationShapeConfig#FLOATING_ISLANDS
    [[maybe_unused]] static void set_field_FLOATING_ISLANDS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "FLOATING_ISLANDS_NOISE_SETTINGS", "field_37141", "FLOATING_ISLANDS", "f_209633_"), "Ldzg;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_checkHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "guardY", "method_32995", "checkHeight", "m_158720_"), "(Ldzg;)Lcom/mojang/serialization/DataResult;");
    }

    static jobject checkHeight(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_checkHeight();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_32994", "create", "m_224525_"), "(IIII)Ldzg;");
    }

    static jobject create(const jint& arg0, const jint& arg1, const jint& arg2, const jint& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_verticalCellBlockCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getCellHeight", "method_39545", "verticalCellBlockCount", "m_189212_"), "()I");
    }

    static jint verticalCellBlockCount(const jobject& obj) {
                
       const auto methodID = methodID_verticalCellBlockCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_horizontalCellBlockCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getCellWidth", "method_39546", "horizontalCellBlockCount", "m_189213_"), "()I");
    }

    static jint horizontalCellBlockCount(const jobject& obj) {
                
       const auto methodID = methodID_horizontalCellBlockCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_trimHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "clampToHeightAccessor", "method_42368", "trimHeight", "m_224530_"), "(Ldcy;)Ldzg;");
    }

    static jobject trimHeight(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_trimHeight();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__minimumY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "minY", "comp_173", "minimumY", "f_158688_"), "()I");
    }

    static jint _minimumY(const jobject& obj) {
                
       const auto methodID = methodID__minimumY();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__height() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "height", "comp_174", "height", "f_64508_"), "()I");
    }

    static jint _height(const jobject& obj) {
                
       const auto methodID = methodID__height();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__horizontalSize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "noiseSizeHorizontal", "comp_178", "horizontalSize", "f_64512_"), "()I");
    }

    static jint _horizontalSize(const jobject& obj) {
                
       const auto methodID = methodID__horizontalSize();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__verticalSize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "noiseSizeVertical", "comp_179", "verticalSize", "f_64513_"), "()I");
    }

    static jint _verticalSize(const jobject& obj) {
                
       const auto methodID = methodID__verticalSize();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_CHUNK_GENERATIONSHAPECONFIG_HPP