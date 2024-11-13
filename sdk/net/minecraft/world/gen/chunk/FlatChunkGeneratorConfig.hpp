// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_CHUNK_FLATCHUNKGENERATORCONFIG_HPP
#define NET_MINECRAFT_WORLD_GEN_CHUNK_FLATCHUNKGENERATORCONFIG_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.chunk.FlatChunkGeneratorConfig
 * Remapped: eht
 */
namespace FlatChunkGeneratorConfig {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eht", "net/minecraft/world/level/levelgen/flat/FlatLevelGeneratorSettings", "net/minecraft/class_3232", "net/minecraft/world/gen/chunk/FlatChunkGeneratorConfig", "net/minecraft/src/C_2431_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.world.gen.chunk.FlatChunkGeneratorConfig#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_14064", "LOGGER", "f_70348_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.FlatChunkGeneratorConfig#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_14064", "LOGGER", "f_70348_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.chunk.FlatChunkGeneratorConfig#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24975", "CODEC", "f_70347_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.chunk.FlatChunkGeneratorConfig#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24975", "CODEC", "f_70347_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.chunk.FlatChunkGeneratorConfig#structureOverrides
    static jobject get_field_structureOverrides(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "structureOverrides", "field_37145", "structureOverrides", "f_209788_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.FlatChunkGeneratorConfig#structureOverrides
    static void set_field_structureOverrides(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "structureOverrides", "field_37145", "structureOverrides", "f_209788_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.chunk.FlatChunkGeneratorConfig#layers
    static jobject get_field_layers(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "layersInfo", "field_14072", "layers", "f_70352_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.FlatChunkGeneratorConfig#layers
    static void set_field_layers(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "layersInfo", "field_14072", "layers", "f_70352_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.chunk.FlatChunkGeneratorConfig#biome
    static jobject get_field_biome(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "biome", "field_14081", "biome", "f_70353_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.FlatChunkGeneratorConfig#biome
    static void set_field_biome(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "biome", "field_14081", "biome", "f_70353_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.chunk.FlatChunkGeneratorConfig#layerBlocks
    static jobject get_field_layerBlocks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "layers", "field_14082", "layerBlocks", "f_70354_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.FlatChunkGeneratorConfig#layerBlocks
    static void set_field_layerBlocks(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "layers", "field_14082", "layerBlocks", "f_70354_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.chunk.FlatChunkGeneratorConfig#hasNoTerrain
    static jboolean get_field_hasNoTerrain(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "voidGen", "field_14077", "hasNoTerrain", "f_70355_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.FlatChunkGeneratorConfig#hasNoTerrain
    static void set_field_hasNoTerrain(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "voidGen", "field_14077", "hasNoTerrain", "f_70355_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.chunk.FlatChunkGeneratorConfig#hasFeatures
    static jboolean get_field_hasFeatures(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "decoration", "field_24976", "hasFeatures", "f_70356_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.FlatChunkGeneratorConfig#hasFeatures
    static void set_field_hasFeatures(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "decoration", "field_24976", "hasFeatures", "f_70356_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.chunk.FlatChunkGeneratorConfig#hasLakes
    static jboolean get_field_hasLakes(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "addLakes", "field_24977", "hasLakes", "f_70357_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.FlatChunkGeneratorConfig#hasLakes
    static void set_field_hasLakes(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "addLakes", "field_24977", "hasLakes", "f_70357_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.chunk.FlatChunkGeneratorConfig#features
    static jobject get_field_features(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "lakes", "field_40918", "features", "f_254642_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.FlatChunkGeneratorConfig#features
    static void set_field_features(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "lakes", "field_40918", "features", "f_254642_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_checkHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "validateHeight", "method_33067", "checkHeight", "m_161905_"), "(Leht;)Lcom/mojang/serialization/DataResult;");
    }

    static jobject checkHeight(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_checkHeight();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getBiome() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getBiome", "method_46728", "getBiome", "m_255287_"), "(Ljava/util/Optional;Ljm;)Ljm;");
    }

    static jobject getBiome(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getBiome();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_with() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "withBiomeAndLayers", "method_46727", "with", "m_254853_"), "(Ljava/util/List;Ljava/util/Optional;Ljm;)Leht;");
    }

    static jobject with(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_with();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_enableFeatures() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setDecoration", "method_28911", "enableFeatures", "m_70369_"), "()V");
    }

    static void enableFeatures(const jobject& obj) {
                
       const auto methodID = methodID_enableFeatures();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_enableLakes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setAddLakes", "method_28916", "enableLakes", "m_70385_"), "()V");
    }

    static void enableLakes(const jobject& obj) {
                
       const auto methodID = methodID_enableLakes();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_createGenerationSettings() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "adjustGenerationSettings", "method_44225", "createGenerationSettings", "m_226294_"), "(Ljm;)Lddx;");
    }

    static jobject createGenerationSettings(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createGenerationSettings();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getStructureOverrides() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "structureOverrides", "method_41139", "getStructureOverrides", "m_209810_"), "()Ljava/util/Optional;");
    }

    static jobject getStructureOverrides(const jobject& obj) {
                
       const auto methodID = methodID_getStructureOverrides();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__getBiome() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getBiome", "method_14326", "getBiome", "m_204921_"), "()Ljm;");
    }

    static jobject _getBiome(const jobject& obj) {
                
       const auto methodID = methodID__getBiome();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getLayers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getLayersInfo", "method_14327", "getLayers", "m_70401_"), "()Ljava/util/List;");
    }

    static jobject getLayers(const jobject& obj) {
                
       const auto methodID = methodID_getLayers();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getLayerBlocks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getLayers", "method_14312", "getLayerBlocks", "m_161917_"), "()Ljava/util/List;");
    }

    static jobject getLayerBlocks(const jobject& obj) {
                
       const auto methodID = methodID_getLayerBlocks();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_updateLayerBlocks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "updateLayers", "method_14330", "updateLayerBlocks", "m_70403_"), "()V");
    }

    static void updateLayerBlocks(const jobject& obj) {
                
       const auto methodID = methodID_updateLayerBlocks();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDefaultConfig() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getDefault", "method_14309", "getDefaultConfig", "m_254980_"), "(Ljn;Ljn;Ljn;)Leht;");
    }

    static jobject getDefaultConfig(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_getDefaultConfig();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getPlains() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getDefaultBiome", "method_46726", "getPlains", "m_255268_"), "(Ljn;)Ljm;");
    }

    static jobject getPlains(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getPlains();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getLavaLakes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "createLakesList", "method_46729", "getLavaLakes", "m_255047_"), "(Ljn;)Ljava/util/List;");
    }

    static jobject getLavaLakes(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getLavaLakes();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_CHUNK_FLATCHUNKGENERATORCONFIG_HPP