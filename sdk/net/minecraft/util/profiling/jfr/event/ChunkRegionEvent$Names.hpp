// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PROFILING_JFR_EVENT_CHUNKREGIONEVENT$NAMES_HPP
#define NET_MINECRAFT_UTIL_PROFILING_JFR_EVENT_CHUNKREGIONEVENT$NAMES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.profiling.jfr.event.ChunkRegionEvent$Names
 * Remapped: bnq$a
 */
namespace ChunkRegionEvent$Names {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bnq$a", "net/minecraft/util/profiling/jfr/event/ChunkRegionIoEvent$Fields", "net/minecraft/class_9232$class_9233", "net/minecraft/util/profiling/jfr/event/ChunkRegionEvent$Names", "net/minecraft/src/C_313609_$C_313499_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.util.profiling.jfr.event.ChunkRegionEvent$Names#REGION_POS_X
    [[maybe_unused]] static jobject get_field_REGION_POS_X() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "REGION_POS_X", "field_49059", "REGION_POS_X", "f_316393_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiling.jfr.event.ChunkRegionEvent$Names#REGION_POS_X
    [[maybe_unused]] static void set_field_REGION_POS_X(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "REGION_POS_X", "field_49059", "REGION_POS_X", "f_316393_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.profiling.jfr.event.ChunkRegionEvent$Names#REGION_POS_Z
    [[maybe_unused]] static jobject get_field_REGION_POS_Z() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "REGION_POS_Z", "field_49060", "REGION_POS_Z", "f_314673_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiling.jfr.event.ChunkRegionEvent$Names#REGION_POS_Z
    [[maybe_unused]] static void set_field_REGION_POS_Z(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "REGION_POS_Z", "field_49060", "REGION_POS_Z", "f_314673_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.profiling.jfr.event.ChunkRegionEvent$Names#LOCAL_POS_X
    [[maybe_unused]] static jobject get_field_LOCAL_POS_X() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LOCAL_POS_X", "field_49061", "LOCAL_POS_X", "f_315950_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiling.jfr.event.ChunkRegionEvent$Names#LOCAL_POS_X
    [[maybe_unused]] static void set_field_LOCAL_POS_X(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LOCAL_POS_X", "field_49061", "LOCAL_POS_X", "f_315950_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.profiling.jfr.event.ChunkRegionEvent$Names#LOCAL_POS_Z
    [[maybe_unused]] static jobject get_field_LOCAL_POS_Z() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "LOCAL_POS_Z", "field_49062", "LOCAL_POS_Z", "f_314565_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiling.jfr.event.ChunkRegionEvent$Names#LOCAL_POS_Z
    [[maybe_unused]] static void set_field_LOCAL_POS_Z(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "LOCAL_POS_Z", "field_49062", "LOCAL_POS_Z", "f_314565_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.profiling.jfr.event.ChunkRegionEvent$Names#CHUNK_POS_X
    [[maybe_unused]] static jobject get_field_CHUNK_POS_X() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CHUNK_POS_X", "field_49063", "CHUNK_POS_X", "f_315748_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiling.jfr.event.ChunkRegionEvent$Names#CHUNK_POS_X
    [[maybe_unused]] static void set_field_CHUNK_POS_X(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CHUNK_POS_X", "field_49063", "CHUNK_POS_X", "f_315748_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.profiling.jfr.event.ChunkRegionEvent$Names#CHUNK_POS_Z
    [[maybe_unused]] static jobject get_field_CHUNK_POS_Z() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "CHUNK_POS_Z", "field_49064", "CHUNK_POS_Z", "f_315397_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiling.jfr.event.ChunkRegionEvent$Names#CHUNK_POS_Z
    [[maybe_unused]] static void set_field_CHUNK_POS_Z(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "CHUNK_POS_Z", "field_49064", "CHUNK_POS_Z", "f_315397_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.profiling.jfr.event.ChunkRegionEvent$Names#LEVEL
    [[maybe_unused]] static jobject get_field_LEVEL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "LEVEL", "field_49065", "LEVEL", "f_315298_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiling.jfr.event.ChunkRegionEvent$Names#LEVEL
    [[maybe_unused]] static void set_field_LEVEL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "LEVEL", "field_49065", "LEVEL", "f_315298_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.profiling.jfr.event.ChunkRegionEvent$Names#DIMENSION
    [[maybe_unused]] static jobject get_field_DIMENSION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "DIMENSION", "field_49066", "DIMENSION", "f_314394_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiling.jfr.event.ChunkRegionEvent$Names#DIMENSION
    [[maybe_unused]] static void set_field_DIMENSION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "DIMENSION", "field_49066", "DIMENSION", "f_314394_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.profiling.jfr.event.ChunkRegionEvent$Names#TYPE
    [[maybe_unused]] static jobject get_field_TYPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "TYPE", "field_49067", "TYPE", "f_315703_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiling.jfr.event.ChunkRegionEvent$Names#TYPE
    [[maybe_unused]] static void set_field_TYPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "TYPE", "field_49067", "TYPE", "f_315703_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.profiling.jfr.event.ChunkRegionEvent$Names#COMPRESSION
    [[maybe_unused]] static jobject get_field_COMPRESSION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "COMPRESSION", "field_49068", "COMPRESSION", "f_317073_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiling.jfr.event.ChunkRegionEvent$Names#COMPRESSION
    [[maybe_unused]] static void set_field_COMPRESSION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "COMPRESSION", "field_49068", "COMPRESSION", "f_317073_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.profiling.jfr.event.ChunkRegionEvent$Names#BYTES
    [[maybe_unused]] static jobject get_field_BYTES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "BYTES", "field_49069", "BYTES", "f_316556_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiling.jfr.event.ChunkRegionEvent$Names#BYTES
    [[maybe_unused]] static void set_field_BYTES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "BYTES", "field_49069", "BYTES", "f_316556_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

};

#endif // NET_MINECRAFT_UTIL_PROFILING_JFR_EVENT_CHUNKREGIONEVENT$NAMES_HPP