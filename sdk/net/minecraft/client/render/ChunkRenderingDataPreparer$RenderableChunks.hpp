// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_CHUNKRENDERINGDATAPREPARER$RENDERABLECHUNKS_HPP
#define NET_MINECRAFT_CLIENT_RENDER_CHUNKRENDERINGDATAPREPARER$RENDERABLECHUNKS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.ChunkRenderingDataPreparer$RenderableChunks
 * Remapped: gfm$c
 */
namespace ChunkRenderingDataPreparer$RenderableChunks {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gfm$c", "net/minecraft/client/renderer/SectionOcclusionGraph$GraphStorage", "net/minecraft/class_8679$class_6600", "net/minecraft/client/render/ChunkRenderingDataPreparer$RenderableChunks", "net/minecraft/src/C_290263_$C_290171_"));
        }
        return cachedClass;
    };

    // getter for public field net.minecraft.client.render.ChunkRenderingDataPreparer$RenderableChunks#field_45627
    static jobject get_field_field_45627(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "sectionToNodeMap", "field_45627", "field_45627", "f_291257_"), "Lgfm$e;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.render.ChunkRenderingDataPreparer$RenderableChunks#field_45627
    static void set_field_field_45627(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "sectionToNodeMap", "field_45627", "field_45627", "f_291257_"), "Lgfm$e;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.render.ChunkRenderingDataPreparer$RenderableChunks#chunks
    static jobject get_field_chunks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "renderSections", "field_34819", "chunks", "f_291495_"), "Ljava/util/LinkedHashSet;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.render.ChunkRenderingDataPreparer$RenderableChunks#chunks
    static void set_field_chunks(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "renderSections", "field_34819", "chunks", "f_291495_"), "Ljava/util/LinkedHashSet;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.render.ChunkRenderingDataPreparer$RenderableChunks#field_45628
    static jobject get_field_field_45628(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "chunksWaitingForNeighbors", "field_45628", "field_45628", "f_290746_"), "Lit/unimi/dsi/fastutil/longs/Long2ObjectMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.render.ChunkRenderingDataPreparer$RenderableChunks#field_45628
    static void set_field_field_45628(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "chunksWaitingForNeighbors", "field_45628", "field_45628", "f_290746_"), "Lit/unimi/dsi/fastutil/longs/Long2ObjectMap;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_CLIENT_RENDER_CHUNKRENDERINGDATAPREPARER$RENDERABLECHUNKS_HPP