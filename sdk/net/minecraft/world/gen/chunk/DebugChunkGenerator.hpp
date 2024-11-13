// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_CHUNK_DEBUGCHUNKGENERATOR_HPP
#define NET_MINECRAFT_WORLD_GEN_CHUNK_DEBUGCHUNKGENERATOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.chunk.DebugChunkGenerator
 * Remapped: dyp
 */
namespace DebugChunkGenerator {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dyp", "net/minecraft/world/level/levelgen/DebugLevelSource", "net/minecraft/class_2891", "net/minecraft/world/gen/chunk/DebugChunkGenerator", "net/minecraft/src/C_2184_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.chunk.DebugChunkGenerator#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CODEC", "field_24768", "CODEC", "f_64111_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.chunk.DebugChunkGenerator#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CODEC", "field_24768", "CODEC", "f_64111_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.gen.chunk.DebugChunkGenerator#field_31467
    [[maybe_unused]] static jint get_field_field_31467() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "BLOCK_MARGIN", "field_31467", "field_31467", "f_158227_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.DebugChunkGenerator#field_31467
    [[maybe_unused]] static void set_field_field_31467(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "BLOCK_MARGIN", "field_31467", "field_31467", "f_158227_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.gen.chunk.DebugChunkGenerator#BLOCK_STATES
    [[maybe_unused]] static jobject get_field_BLOCK_STATES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "ALL_BLOCKS", "field_13163", "BLOCK_STATES", "f_64114_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.DebugChunkGenerator#BLOCK_STATES
    [[maybe_unused]] static void set_field_BLOCK_STATES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "ALL_BLOCKS", "field_13163", "BLOCK_STATES", "f_64114_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.gen.chunk.DebugChunkGenerator#X_SIDE_LENGTH
    [[maybe_unused]] static jint get_field_X_SIDE_LENGTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "GRID_WIDTH", "field_13161", "X_SIDE_LENGTH", "f_64115_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.DebugChunkGenerator#X_SIDE_LENGTH
    [[maybe_unused]] static void set_field_X_SIDE_LENGTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "GRID_WIDTH", "field_13161", "X_SIDE_LENGTH", "f_64115_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.gen.chunk.DebugChunkGenerator#Z_SIDE_LENGTH
    [[maybe_unused]] static jint get_field_Z_SIDE_LENGTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "GRID_HEIGHT", "field_13160", "Z_SIDE_LENGTH", "f_64116_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.DebugChunkGenerator#Z_SIDE_LENGTH
    [[maybe_unused]] static void set_field_Z_SIDE_LENGTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "GRID_HEIGHT", "field_13160", "Z_SIDE_LENGTH", "f_64116_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.world.gen.chunk.DebugChunkGenerator#AIR
    [[maybe_unused]] static jobject get_field_AIR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "AIR", "field_13162", "AIR", "f_64112_"), "Ldtc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.world.gen.chunk.DebugChunkGenerator#AIR
    [[maybe_unused]] static void set_field_AIR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "AIR", "field_13162", "AIR", "f_64112_"), "Ldtc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.world.gen.chunk.DebugChunkGenerator#BARRIER
    [[maybe_unused]] static jobject get_field_BARRIER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "BARRIER", "field_13164", "BARRIER", "f_64113_"), "Ldtc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.world.gen.chunk.DebugChunkGenerator#BARRIER
    [[maybe_unused]] static void set_field_BARRIER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "BARRIER", "field_13164", "BARRIER", "f_64113_"), "Ldtc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.chunk.DebugChunkGenerator#field_31465
    [[maybe_unused]] static jint get_field_field_31465() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "HEIGHT", "field_31465", "field_31465", "f_158225_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.chunk.DebugChunkGenerator#field_31465
    [[maybe_unused]] static void set_field_field_31465(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "HEIGHT", "field_31465", "field_31465", "f_158225_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.chunk.DebugChunkGenerator#field_31466
    [[maybe_unused]] static jint get_field_field_31466() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "BARRIER_HEIGHT", "field_31466", "field_31466", "f_158226_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.chunk.DebugChunkGenerator#field_31466
    [[maybe_unused]] static void set_field_field_31466(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "BARRIER_HEIGHT", "field_31466", "field_31466", "f_158226_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_getCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "codec", "method_28506", "getCodec", "m_6909_"), "()Lcom/mojang/serialization/MapCodec;");
    }

    static jobject getCodec(const jobject& obj) {
                
       const auto methodID = methodID_getCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_buildSurface() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "buildSurface", "method_12110", "buildSurface", "m_214194_"), "(Larb;Lddq;Ldzm;Lduy;)V");
    }

    static void buildSurface(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_buildSurface();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_generateFeatures() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "applyBiomeDecoration", "method_12102", "generateFeatures", "m_213609_"), "(Ldds;Lduy;Lddq;)V");
    }

    static void generateFeatures(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_generateFeatures();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_populateNoise() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fillFromNoise", "method_12088", "populateNoise", "m_213974_"), "(Leaa;Ldzm;Lddq;Lduy;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject populateNoise(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_populateNoise();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
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
    
    static jmethodID methodID_getBlockState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getBlockStateFor", "method_12578", "getBlockState", "m_64148_"), "(II)Ldtc;");
    }

    static jobject getBlockState(const jint& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getBlockState();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_carve() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "applyCarvers", "method_12108", "carve", "m_213679_"), "(Larb;JLdzm;Lddy;Lddq;Lduy;Ldyu$a;)V");
    }

    static void carve(const jobject& obj, const jobject& arg0, const jlong& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6) {
                
       const auto methodID = methodID_carve();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID_populateEntities() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "spawnOriginalMobs", "method_12107", "populateEntities", "m_6929_"), "(Larb;)V");
    }

    static void populateEntities(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_populateEntities();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getMinimumY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getMinY", "method_33730", "getMinimumY", "m_142062_"), "()I");
    }

    static jint getMinimumY(const jobject& obj) {
                
       const auto methodID = methodID_getMinimumY();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
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
    
};

#endif // NET_MINECRAFT_WORLD_GEN_CHUNK_DEBUGCHUNKGENERATOR_HPP