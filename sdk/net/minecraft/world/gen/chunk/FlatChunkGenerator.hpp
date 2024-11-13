// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_CHUNK_FLATCHUNKGENERATOR_HPP
#define NET_MINECRAFT_WORLD_GEN_CHUNK_FLATCHUNKGENERATOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.chunk.FlatChunkGenerator
 * Remapped: dyt
 */
namespace FlatChunkGenerator {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dyt", "net/minecraft/world/level/levelgen/FlatLevelSource", "net/minecraft/class_2897", "net/minecraft/world/gen/chunk/FlatChunkGenerator", "net/minecraft/src/C_2186_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.chunk.FlatChunkGenerator#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CODEC", "field_24769", "CODEC", "f_64164_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.chunk.FlatChunkGenerator#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CODEC", "field_24769", "CODEC", "f_64164_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.chunk.FlatChunkGenerator#config
    static jobject get_field_config(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "settings", "field_24510", "config", "f_64165_"), "Leht;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.FlatChunkGenerator#config
    static void set_field_config(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "settings", "field_24510", "config", "f_64165_"), "Leht;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_createStructurePlacementCalculator() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createState", "method_46696", "createStructurePlacementCalculator", "m_255169_"), "(Ljo;Ldzm;J)Ldva;");
    }

    static jobject createStructurePlacementCalculator(const jobject& obj, const jobject& arg0, const jobject& arg1, const jlong& arg2) {
                
       const auto methodID = methodID_createStructurePlacementCalculator();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "codec", "method_28506", "getCodec", "m_6909_"), "()Lcom/mojang/serialization/MapCodec;");
    }

    static jobject getCodec(const jobject& obj) {
                
       const auto methodID = methodID_getCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getConfig() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "settings", "method_28545", "getConfig", "m_64191_"), "()Leht;");
    }

    static jobject getConfig(const jobject& obj) {
                
       const auto methodID = methodID_getConfig();
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
    
    static jmethodID methodID_getSpawnHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getSpawnHeight", "method_12100", "getSpawnHeight", "m_142051_"), "(Ldcy;)I");
    }

    static jint getSpawnHeight(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getSpawnHeight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
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

#endif // NET_MINECRAFT_WORLD_GEN_CHUNK_FLATCHUNKGENERATOR_HPP