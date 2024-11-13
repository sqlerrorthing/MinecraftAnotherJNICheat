// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_CHUNK_CHUNKRENDERERREGION_HPP
#define NET_MINECRAFT_CLIENT_RENDER_CHUNK_CHUNKRENDERERREGION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.chunk.ChunkRendererRegion
 * Remapped: ghx
 */
namespace ChunkRendererRegion {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ghx", "net/minecraft/client/renderer/chunk/RenderChunkRegion", "net/minecraft/class_853", "net/minecraft/client/render/chunk/ChunkRendererRegion", "net/minecraft/src/C_4269_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.render.chunk.ChunkRendererRegion#field_52160
    [[maybe_unused]] static jint get_field_field_52160() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RADIUS", "field_52160", "field_52160", "f_337396_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.chunk.ChunkRendererRegion#field_52160
    [[maybe_unused]] static void set_field_field_52160(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RADIUS", "field_52160", "field_52160", "f_337396_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.chunk.ChunkRendererRegion#field_52161
    [[maybe_unused]] static jint get_field_field_52161() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SIZE", "field_52161", "field_52161", "f_337092_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.chunk.ChunkRendererRegion#field_52161
    [[maybe_unused]] static void set_field_field_52161(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SIZE", "field_52161", "field_52161", "f_337092_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.chunk.ChunkRendererRegion#chunkXOffset
    static jint get_field_chunkXOffset(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "minChunkX", "field_52162", "chunkXOffset", "f_336971_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.chunk.ChunkRendererRegion#chunkXOffset
    static void set_field_chunkXOffset(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "minChunkX", "field_52162", "chunkXOffset", "f_336971_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.chunk.ChunkRendererRegion#chunkZOffset
    static jint get_field_chunkZOffset(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "minChunkZ", "field_52163", "chunkZOffset", "f_336993_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.chunk.ChunkRendererRegion#chunkZOffset
    static void set_field_chunkZOffset(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "minChunkZ", "field_52163", "chunkZOffset", "f_336993_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.client.render.chunk.ChunkRendererRegion#chunks
    static jobject get_field_chunks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "chunks", "field_4483", "chunks", "f_112905_"), "[Lghw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.client.render.chunk.ChunkRendererRegion#chunks
    static void set_field_chunks(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "chunks", "field_4483", "chunks", "f_112905_"), "[Lghw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.client.render.chunk.ChunkRendererRegion#world
    static jobject get_field_world(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "level", "field_4490", "world", "f_112908_"), "Ldcw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.client.render.chunk.ChunkRendererRegion#world
    static void set_field_world(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "level", "field_4490", "world", "f_112908_"), "Ldcw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
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
    
    static jmethodID methodID_getBrightness() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getShade", "method_24852", "getBrightness", "m_7717_"), "(Lji;Z)F");
    }

    static jfloat getBrightness(const jobject& obj, const jobject& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_getBrightness();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getLightingProvider() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("y_", "getLightEngine", "method_22336", "getLightingProvider", "m_5518_"), "()Leot;");
    }

    static jobject getLightingProvider(const jobject& obj) {
                
       const auto methodID = methodID_getLightingProvider();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBlockEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c_", "getBlockEntity", "method_8321", "getBlockEntity", "m_7702_"), "(Ljd;)Ldqh;");
    }

    static jobject getBlockEntity(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getBlockEntity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getRenderedChunk() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getChunk", "method_60898", "getRenderedChunk", "m_340417_"), "(II)Lghw;");
    }

    static jobject getRenderedChunk(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_getRenderedChunk();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBlockTint", "method_23752", "getColor", "m_6171_"), "(Ljd;Ldch;)I");
    }

    static jint getColor(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getColor();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
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
    
    static jmethodID methodID_getIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "index", "method_60899", "getIndex", "m_339116_"), "(IIII)I");
    }

    static jint getIndex(const jint& arg0, const jint& arg1, const jint& arg2, const jint& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_getIndex();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_CHUNK_CHUNKRENDERERREGION_HPP