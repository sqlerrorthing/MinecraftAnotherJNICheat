// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_CHUNK_CHUNKCACHE_HPP
#define NET_MINECRAFT_WORLD_CHUNK_CHUNKCACHE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.chunk.ChunkCache
 * Remapped: ddj
 */
namespace ChunkCache {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ddj", "net/minecraft/world/level/PathNavigationRegion", "net/minecraft/class_1950", "net/minecraft/world/chunk/ChunkCache", "net/minecraft/src/C_1615_"));
        }
        return cachedClass;
    };

    // getter for protected field net.minecraft.world.chunk.ChunkCache#minX
    static jint get_field_minX(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "centerX", "field_9304", "minX", "f_47158_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.world.chunk.ChunkCache#minX
    static void set_field_minX(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "centerX", "field_9304", "minX", "f_47158_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.world.chunk.ChunkCache#minZ
    static jint get_field_minZ(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "centerZ", "field_9303", "minZ", "f_47159_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.world.chunk.ChunkCache#minZ
    static void set_field_minZ(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "centerZ", "field_9303", "minZ", "f_47159_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.world.chunk.ChunkCache#chunks
    static jobject get_field_chunks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "chunks", "field_9305", "chunks", "f_47160_"), "[[Lduy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.world.chunk.ChunkCache#chunks
    static void set_field_chunks(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "chunks", "field_9305", "chunks", "f_47160_"), "[[Lduy;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.world.chunk.ChunkCache#empty
    static jboolean get_field_empty(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "allEmpty", "field_9302", "empty", "f_47161_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.world.chunk.ChunkCache#empty
    static void set_field_empty(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "allEmpty", "field_9302", "empty", "f_47161_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.world.chunk.ChunkCache#world
    static jobject get_field_world(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "level", "field_9306", "world", "f_47162_"), "Ldcw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.world.chunk.ChunkCache#world
    static void set_field_world(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "level", "field_9306", "world", "f_47162_"), "Ldcw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.chunk.ChunkCache#plainsEntryGetter
    static jobject get_field_plainsEntryGetter(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "plains", "field_36403", "plainsEntryGetter", "f_204180_"), "Ljava/util/function/Supplier;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.chunk.ChunkCache#plainsEntryGetter
    static void set_field_plainsEntryGetter(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "plains", "field_36403", "plainsEntryGetter", "f_204180_"), "Ljava/util/function/Supplier;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getChunk() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getChunk", "method_22354", "getChunk", "m_47185_"), "(Ljd;)Lduy;");
    }

    static jobject getChunk(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getChunk();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__getChunk() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getChunk", "method_22353", "getChunk", "m_47167_"), "(II)Lduy;");
    }

    static jobject _getChunk(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID__getChunk();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getWorldBorder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("C_", "getWorldBorder", "method_8621", "getWorldBorder", "m_6857_"), "()Ldut;");
    }

    static jobject getWorldBorder(const jobject& obj) {
                
       const auto methodID = methodID_getWorldBorder();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getChunkAsView() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getChunkForCollisions", "method_22338", "getChunkAsView", "m_7925_"), "(II)Ldcc;");
    }

    static jobject getChunkAsView(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_getChunkAsView();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getEntityCollisions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getEntityCollisions", "method_20743", "getEntityCollisions", "m_183134_"), "(Lbsr;Lewx;)Ljava/util/List;");
    }

    static jobject getEntityCollisions(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getEntityCollisions();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getBlockEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c_", "getBlockEntity", "method_8321", "getBlockEntity", "m_7702_"), "(Ljd;)Ldqh;");
    }

    static jobject getBlockEntity(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getBlockEntity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getBlockState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a_", "getBlockState", "method_8320", "getBlockState", "m_8055_"), "(Ljd;)Ldtc;");
    }

    static jobject getBlockState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getBlockState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getFluidState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b_", "getFluidState", "method_8316", "getFluidState", "m_6425_"), "(Ljd;)Lepe;");
    }

    static jobject getFluidState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getFluidState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getBottomY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("I_", "getMinBuildHeight", "method_31607", "getBottomY", "m_141937_"), "()I");
    }

    static jint getBottomY(const jobject& obj) {
                
       const auto methodID = methodID_getBottomY();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("J_", "getHeight", "method_31605", "getHeight", "m_141928_"), "()I");
    }

    static jint getHeight(const jobject& obj) {
                
       const auto methodID = methodID_getHeight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getProfiler() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getProfiler", "method_37233", "getProfiler", "m_151625_"), "()Lbnf;");
    }

    static jobject getProfiler(const jobject& obj) {
                
       const auto methodID = methodID_getProfiler();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_CHUNK_CHUNKCACHE_HPP