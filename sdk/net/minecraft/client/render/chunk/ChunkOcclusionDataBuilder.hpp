// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_CHUNK_CHUNKOCCLUSIONDATABUILDER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_CHUNK_CHUNKOCCLUSIONDATABUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.chunk.ChunkOcclusionDataBuilder
 * Remapped: gib
 */
namespace ChunkOcclusionDataBuilder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gib", "net/minecraft/client/renderer/chunk/VisGraph", "net/minecraft/class_852", "net/minecraft/client/render/chunk/ChunkOcclusionDataBuilder", "net/minecraft/src/C_4270_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.render.chunk.ChunkOcclusionDataBuilder#field_32833
    [[maybe_unused]] static jint get_field_field_32833() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SIZE_IN_BITS", "field_32833", "field_32833", "f_173723_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.chunk.ChunkOcclusionDataBuilder#field_32833
    [[maybe_unused]] static void set_field_field_32833(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SIZE_IN_BITS", "field_32833", "field_32833", "f_173723_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.chunk.ChunkOcclusionDataBuilder#field_32834
    [[maybe_unused]] static jint get_field_field_32834() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LEN", "field_32834", "field_32834", "f_173724_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.chunk.ChunkOcclusionDataBuilder#field_32834
    [[maybe_unused]] static void set_field_field_32834(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LEN", "field_32834", "field_32834", "f_173724_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.chunk.ChunkOcclusionDataBuilder#field_32835
    [[maybe_unused]] static jint get_field_field_32835() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MASK", "field_32835", "field_32835", "f_173725_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.chunk.ChunkOcclusionDataBuilder#field_32835
    [[maybe_unused]] static void set_field_field_32835(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MASK", "field_32835", "field_32835", "f_173725_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.chunk.ChunkOcclusionDataBuilder#field_32836
    [[maybe_unused]] static jint get_field_field_32836() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SIZE", "field_32836", "field_32836", "f_173726_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.chunk.ChunkOcclusionDataBuilder#field_32836
    [[maybe_unused]] static void set_field_field_32836(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SIZE", "field_32836", "field_32836", "f_173726_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.chunk.ChunkOcclusionDataBuilder#field_32837
    [[maybe_unused]] static jint get_field_field_32837() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "X_SHIFT", "field_32837", "field_32837", "f_173727_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.chunk.ChunkOcclusionDataBuilder#field_32837
    [[maybe_unused]] static void set_field_field_32837(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "X_SHIFT", "field_32837", "field_32837", "f_173727_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.chunk.ChunkOcclusionDataBuilder#field_32838
    [[maybe_unused]] static jint get_field_field_32838() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "Z_SHIFT", "field_32838", "field_32838", "f_173728_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.chunk.ChunkOcclusionDataBuilder#field_32838
    [[maybe_unused]] static void set_field_field_32838(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "Z_SHIFT", "field_32838", "field_32838", "f_173728_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.chunk.ChunkOcclusionDataBuilder#field_32839
    [[maybe_unused]] static jint get_field_field_32839() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "Y_SHIFT", "field_32839", "field_32839", "f_173729_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.chunk.ChunkOcclusionDataBuilder#field_32839
    [[maybe_unused]] static void set_field_field_32839(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "Y_SHIFT", "field_32839", "field_32839", "f_173729_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.chunk.ChunkOcclusionDataBuilder#STEP_X
    [[maybe_unused]] static jint get_field_STEP_X() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "DX", "field_4477", "STEP_X", "f_112949_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.chunk.ChunkOcclusionDataBuilder#STEP_X
    [[maybe_unused]] static void set_field_STEP_X(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "DX", "field_4477", "STEP_X", "f_112949_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.chunk.ChunkOcclusionDataBuilder#STEP_Z
    [[maybe_unused]] static jint get_field_STEP_Z() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "DZ", "field_4476", "STEP_Z", "f_112950_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.chunk.ChunkOcclusionDataBuilder#STEP_Z
    [[maybe_unused]] static void set_field_STEP_Z(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "DZ", "field_4476", "STEP_Z", "f_112950_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.chunk.ChunkOcclusionDataBuilder#STEP_Y
    [[maybe_unused]] static jint get_field_STEP_Y() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "DY", "field_4475", "STEP_Y", "f_112951_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.chunk.ChunkOcclusionDataBuilder#STEP_Y
    [[maybe_unused]] static void set_field_STEP_Y(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "DY", "field_4475", "STEP_Y", "f_112951_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.chunk.ChunkOcclusionDataBuilder#field_32840
    [[maybe_unused]] static jint get_field_field_32840() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "INVALID_INDEX", "field_32840", "field_32840", "f_173730_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.chunk.ChunkOcclusionDataBuilder#field_32840
    [[maybe_unused]] static void set_field_field_32840(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "INVALID_INDEX", "field_32840", "field_32840", "f_173730_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.chunk.ChunkOcclusionDataBuilder#DIRECTIONS
    [[maybe_unused]] static jobject get_field_DIRECTIONS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "DIRECTIONS", "field_4479", "DIRECTIONS", "f_112952_"), "[Lji;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.chunk.ChunkOcclusionDataBuilder#DIRECTIONS
    [[maybe_unused]] static void set_field_DIRECTIONS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "DIRECTIONS", "field_4479", "DIRECTIONS", "f_112952_"), "[Lji;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.chunk.ChunkOcclusionDataBuilder#closed
    static jobject get_field_closed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "bitSet", "field_4478", "closed", "f_112953_"), "Ljava/util/BitSet;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.chunk.ChunkOcclusionDataBuilder#closed
    static void set_field_closed(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "bitSet", "field_4478", "closed", "f_112953_"), "Ljava/util/BitSet;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.chunk.ChunkOcclusionDataBuilder#EDGE_POINTS
    [[maybe_unused]] static jint get_field_EDGE_POINTS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "INDEX_OF_EDGES", "field_4474", "EDGE_POINTS", "f_112954_"), "[I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.chunk.ChunkOcclusionDataBuilder#EDGE_POINTS
    [[maybe_unused]] static void set_field_EDGE_POINTS(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "INDEX_OF_EDGES", "field_4474", "EDGE_POINTS", "f_112954_"), "[I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.chunk.ChunkOcclusionDataBuilder#openCount
    static jint get_field_openCount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "empty", "field_4473", "openCount", "f_112955_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.chunk.ChunkOcclusionDataBuilder#openCount
    static void set_field_openCount(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "empty", "field_4473", "openCount", "f_112955_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_markClosed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setOpaque", "method_3682", "markClosed", "m_112971_"), "(Ljd;)V");
    }

    static void markClosed(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_markClosed();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_pack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getIndex", "method_3683", "pack", "m_112975_"), "(Ljd;)I");
    }

    static jint pack(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_pack();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__pack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getIndex", "method_3681", "pack", "m_112961_"), "(III)I");
    }

    static jint _pack(const jint& arg0, const jint& arg1, const jint& arg2) {
       const auto clazz = self();
       const auto methodID = methodID__pack();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "resolve", "method_3679", "build", "m_112958_"), "()Lgic;");
    }

    static jobject build(const jobject& obj) {
                
       const auto methodID = methodID_build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getOpenFaces() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "floodFill", "method_3687", "getOpenFaces", "m_112959_"), "(I)Ljava/util/Set;");
    }

    static jobject getOpenFaces(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getOpenFaces();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addEdgeFaces() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addEdges", "method_3684", "addEdgeFaces", "m_112968_"), "(ILjava/util/Set;)V");
    }

    static void addEdgeFaces(const jobject& obj, const jint& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_addEdgeFaces();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_offset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getNeighborIndexAtFace", "method_3685", "offset", "m_112965_"), "(ILji;)I");
    }

    static jint offset(const jobject& obj, const jint& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_offset();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_CHUNK_CHUNKOCCLUSIONDATABUILDER_HPP