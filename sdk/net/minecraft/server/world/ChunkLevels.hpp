// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_WORLD_CHUNKLEVELS_HPP
#define NET_MINECRAFT_SERVER_WORLD_CHUNKLEVELS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.world.ChunkLevels
 * Remapped: aqa
 */
namespace ChunkLevels {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aqa", "net/minecraft/server/level/ChunkLevel", "net/minecraft/class_8563", "net/minecraft/server/world/ChunkLevels", "net/minecraft/src/C_286930_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.server.world.ChunkLevels#FULL
    [[maybe_unused]] static jint get_field_FULL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "FULL_CHUNK_LEVEL", "field_44850", "FULL", "f_287007_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.world.ChunkLevels#FULL
    [[maybe_unused]] static void set_field_FULL(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "FULL_CHUNK_LEVEL", "field_44850", "FULL", "f_287007_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.world.ChunkLevels#BLOCK_TICKING
    [[maybe_unused]] static jint get_field_BLOCK_TICKING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "BLOCK_TICKING_LEVEL", "field_44851", "BLOCK_TICKING", "f_286976_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.world.ChunkLevels#BLOCK_TICKING
    [[maybe_unused]] static void set_field_BLOCK_TICKING(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "BLOCK_TICKING_LEVEL", "field_44851", "BLOCK_TICKING", "f_286976_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.world.ChunkLevels#ENTITY_TICKING
    [[maybe_unused]] static jint get_field_ENTITY_TICKING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "ENTITY_TICKING_LEVEL", "field_44852", "ENTITY_TICKING", "f_286937_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.world.ChunkLevels#ENTITY_TICKING
    [[maybe_unused]] static void set_field_ENTITY_TICKING(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "ENTITY_TICKING_LEVEL", "field_44852", "ENTITY_TICKING", "f_286937_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.world.ChunkLevels#FULL_GENERATION_STEP
    [[maybe_unused]] static jobject get_field_FULL_GENERATION_STEP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "FULL_CHUNK_STEP", "field_51860", "FULL_GENERATION_STEP", "f_337362_"), "Ldwc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.world.ChunkLevels#FULL_GENERATION_STEP
    [[maybe_unused]] static void set_field_FULL_GENERATION_STEP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "FULL_CHUNK_STEP", "field_51860", "FULL_GENERATION_STEP", "f_337362_"), "Ldwc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.server.world.ChunkLevels#FULL_GENERATION_REQUIRED_LEVEL
    [[maybe_unused]] static jint get_field_FULL_GENERATION_REQUIRED_LEVEL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RADIUS_AROUND_FULL_CHUNK", "field_51859", "FULL_GENERATION_REQUIRED_LEVEL", "f_337478_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.server.world.ChunkLevels#FULL_GENERATION_REQUIRED_LEVEL
    [[maybe_unused]] static void set_field_FULL_GENERATION_REQUIRED_LEVEL(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RADIUS_AROUND_FULL_CHUNK", "field_51859", "FULL_GENERATION_REQUIRED_LEVEL", "f_337478_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.server.world.ChunkLevels#INACCESSIBLE
    [[maybe_unused]] static jint get_field_INACCESSIBLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_LEVEL", "field_44849", "INACCESSIBLE", "f_286967_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.server.world.ChunkLevels#INACCESSIBLE
    [[maybe_unused]] static void set_field_INACCESSIBLE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_LEVEL", "field_44849", "INACCESSIBLE", "f_286967_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_getStatus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "generationStatus", "method_51827", "getStatus", "m_287158_"), "(I)Ldvz;");
    }

    static jobject getStatus(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getStatus();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getStatusForAdditionalLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getStatusAroundFullChunk", "method_60437", "getStatusForAdditionalLevel", "m_339814_"), "(ILdvz;)Ldvz;");
    }

    static jobject getStatusForAdditionalLevel(const jint& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getStatusForAdditionalLevel();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__getStatusForAdditionalLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getStatusAroundFullChunk", "method_60438", "getStatusForAdditionalLevel", "m_339977_"), "(I)Ldvz;");
    }

    static jobject _getStatusForAdditionalLevel(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__getStatusForAdditionalLevel();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getLevelFromStatus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "byStatus", "method_51829", "getLevelFromStatus", "m_287141_"), "(Ldvz;)I");
    }

    static jint getLevelFromStatus(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getLevelFromStatus();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "fullStatus", "method_51830", "getType", "m_287264_"), "(I)Laql;");
    }

    static jobject getType(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getLevelFromType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "byStatus", "method_51828", "getLevelFromType", "m_287154_"), "(Laql;)I");
    }

    static jint getLevelFromType(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getLevelFromType();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_shouldTickEntities() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "isEntityTicking", "method_51831", "shouldTickEntities", "m_287155_"), "(I)Z");
    }

    static jboolean shouldTickEntities(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_shouldTickEntities();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_shouldTickBlocks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("e", "isBlockTicking", "method_51832", "shouldTickBlocks", "m_287283_"), "(I)Z");
    }

    static jboolean shouldTickBlocks(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_shouldTickBlocks();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_isAccessible() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("f", "isLoaded", "method_51833", "isAccessible", "m_287217_"), "(I)Z");
    }

    static jboolean isAccessible(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_isAccessible();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SERVER_WORLD_CHUNKLEVELS_HPP