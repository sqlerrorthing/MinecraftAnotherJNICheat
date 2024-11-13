// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_CHUNK_NOISECHUNKGENERATOR_HPP
#define NET_MINECRAFT_WORLD_GEN_CHUNK_NOISECHUNKGENERATOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.chunk.NoiseChunkGenerator
 * Remapped: dzb
 */
namespace NoiseChunkGenerator {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dzb", "net/minecraft/world/level/levelgen/NoiseBasedChunkGenerator", "net/minecraft/class_3754", "net/minecraft/world/gen/chunk/NoiseChunkGenerator", "net/minecraft/src/C_2193_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.chunk.NoiseChunkGenerator#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CODEC", "field_24773", "CODEC", "f_64314_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.chunk.NoiseChunkGenerator#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CODEC", "field_24773", "CODEC", "f_64314_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.gen.chunk.NoiseChunkGenerator#AIR
    [[maybe_unused]] static jobject get_field_AIR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "AIR", "field_16648", "AIR", "f_64321_"), "Ldtc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.NoiseChunkGenerator#AIR
    [[maybe_unused]] static void set_field_AIR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "AIR", "field_16648", "AIR", "f_64321_"), "Ldtc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.chunk.NoiseChunkGenerator#settings
    static jobject get_field_settings(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "settings", "field_24774", "settings", "f_64318_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.NoiseChunkGenerator#settings
    static void set_field_settings(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "settings", "field_24774", "settings", "f_64318_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.chunk.NoiseChunkGenerator#fluidLevelSampler
    static jobject get_field_fluidLevelSampler(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "globalFluidPicker", "field_34591", "fluidLevelSampler", "f_188607_"), "Ljava/util/function/Supplier;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.NoiseChunkGenerator#fluidLevelSampler
    static void set_field_fluidLevelSampler(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "globalFluidPicker", "field_34591", "fluidLevelSampler", "f_188607_"), "Ljava/util/function/Supplier;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_createFluidLevelSampler() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createFluidPicker", "method_45510", "createFluidLevelSampler", "m_247703_"), "(Ldzd;)Ldyk$a;");
    }

    static jobject createFluidLevelSampler(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_createFluidLevelSampler();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_populateBiomes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createBiomes", "method_38275", "populateBiomes", "m_213908_"), "(Ldzm;Leaa;Lddq;Lduy;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject populateBiomes(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_populateBiomes();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID__populateBiomes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "doCreateBiomes", "method_38327", "populateBiomes", "m_224291_"), "(Leaa;Ldzm;Lddq;Lduy;)V");
    }

    static void _populateBiomes(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID__populateBiomes();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_createChunkNoiseSampler() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createNoiseChunk", "method_41537", "createChunkNoiseSampler", "m_224256_"), "(Lduy;Lddq;Leaa;Ldzm;)Ldzc;");
    }

    static jobject createChunkNoiseSampler(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_createChunkNoiseSampler();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "codec", "method_28506", "getCodec", "m_6909_"), "()Lcom/mojang/serialization/MapCodec;");
    }

    static jobject getCodec(const jobject& obj) {
                
       const auto methodID = methodID_getCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSettings() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "generatorSettings", "method_41541", "getSettings", "m_224341_"), "()Ljm;");
    }

    static jobject getSettings(const jobject& obj) {
                
       const auto methodID = methodID_getSettings();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_matchesSettings() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "stable", "method_28548", "matchesSettings", "m_224221_"), "(Lakq;)Z");
    }

    static jboolean matchesSettings(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_matchesSettings();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBaseHeight", "method_16397", "getHeight", "m_214096_"), "(IILdyy$a;Ldcy;Ldzm;)I");
    }

    static jint getHeight(const jobject& obj, const jint& arg0, const jint& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_getHeight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_getColumnSample() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBaseColumn", "method_26261", "getColumnSample", "m_214184_"), "(IILdcy;Ldzm;)Lddi;");
    }

    static jobject getColumnSample(const jobject& obj, const jint& arg0, const jint& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_getColumnSample();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getDebugHudText() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addDebugScreenInfo", "method_40450", "getDebugHudText", "m_213600_"), "(Ljava/util/List;Ldzm;Ljd;)V");
    }

    static void getDebugHudText(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getDebugHudText();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_sampleHeightmap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "iterateNoiseColumn", "method_26263", "sampleHeightmap", "m_224239_"), "(Ldcy;Ldzm;IILorg/apache/commons/lang3/mutable/MutableObject;Ljava/util/function/Predicate;)Ljava/util/OptionalInt;");
    }

    static jobject sampleHeightmap(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2, const jint& arg3, const jobject& arg4, const jobject& arg5) {
                
       const auto methodID = methodID_sampleHeightmap();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_buildSurface() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "buildSurface", "method_12110", "buildSurface", "m_214194_"), "(Larb;Lddq;Ldzm;Lduy;)V");
    }

    static void buildSurface(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_buildSurface();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID__buildSurface() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "buildSurface", "method_41538", "buildSurface", "m_224261_"), "(Lduy;Ldzv;Ldzm;Lddq;Lddy;Ljz;Leaa;)V");
    }

    static void _buildSurface(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6) {
                
       const auto methodID = methodID__buildSurface();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID_carve() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "applyCarvers", "method_12108", "carve", "m_213679_"), "(Larb;JLdzm;Lddy;Lddq;Lduy;Ldyu$a;)V");
    }

    static void carve(const jobject& obj, const jobject& arg0, const jlong& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6) {
                
       const auto methodID = methodID_carve();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID_populateNoise() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fillFromNoise", "method_12088", "populateNoise", "m_213974_"), "(Leaa;Ldzm;Lddq;Lduy;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject populateNoise(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_populateNoise();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID__populateNoise() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "doFill", "method_33754", "populateNoise", "m_224284_"), "(Leaa;Lddq;Ldzm;Lduy;II)Lduy;");
    }

    static jobject _populateNoise(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jint& arg4, const jint& arg5) {
                
       const auto methodID = methodID__populateNoise();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_getBlockState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "debugPreliminarySurfaceLevel", "method_38323", "getBlockState", "m_198231_"), "(Ldzc;IIILdtc;)Ldtc;");
    }

    static jobject getBlockState(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_getBlockState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_getWorldHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getGenDepth", "method_12104", "getWorldHeight", "m_6331_"), "()I");
    }

    static jint getWorldHeight(const jobject& obj) {
                
       const auto methodID = methodID_getWorldHeight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSeaLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getSeaLevel", "method_16398", "getSeaLevel", "m_6337_"), "()I");
    }

    static jint getSeaLevel(const jobject& obj) {
                
       const auto methodID = methodID_getSeaLevel();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMinimumY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getMinY", "method_33730", "getMinimumY", "m_142062_"), "()I");
    }

    static jint getMinimumY(const jobject& obj) {
                
       const auto methodID = methodID_getMinimumY();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_populateEntities() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "spawnOriginalMobs", "method_12107", "populateEntities", "m_6929_"), "(Larb;)V");
    }

    static void populateEntities(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_populateEntities();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_CHUNK_NOISECHUNKGENERATOR_HPP