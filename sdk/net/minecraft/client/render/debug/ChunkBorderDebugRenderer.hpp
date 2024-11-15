// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_DEBUG_CHUNKBORDERDEBUGRENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_DEBUG_CHUNKBORDERDEBUGRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.debug.ChunkBorderDebugRenderer
 * Remapped: gij
 */
namespace ChunkBorderDebugRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gij", "net/minecraft/client/renderer/debug/ChunkBorderRenderer", "net/minecraft/class_862", "net/minecraft/client/render/debug/ChunkBorderDebugRenderer", "net/minecraft/src/C_4282_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.render.debug.ChunkBorderDebugRenderer#client
    static jobject get_field_client(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "minecraft", "field_4516", "client", "f_113354_"), "Lfgo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.debug.ChunkBorderDebugRenderer#client
    static void set_field_client(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "minecraft", "field_4516", "client", "f_113354_"), "Lfgo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.debug.ChunkBorderDebugRenderer#DARK_CYAN
    [[maybe_unused]] static jint get_field_DARK_CYAN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CELL_BORDER", "field_35557", "DARK_CYAN", "f_194450_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.debug.ChunkBorderDebugRenderer#DARK_CYAN
    [[maybe_unused]] static void set_field_DARK_CYAN(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CELL_BORDER", "field_35557", "DARK_CYAN", "f_194450_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.debug.ChunkBorderDebugRenderer#YELLOW
    [[maybe_unused]] static jint get_field_YELLOW() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "YELLOW", "field_35558", "YELLOW", "f_194451_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.debug.ChunkBorderDebugRenderer#YELLOW
    [[maybe_unused]] static void set_field_YELLOW(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "YELLOW", "field_35558", "YELLOW", "f_194451_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_23109", "render", "m_7790_"), "(Lfbi;Lgez;DDD)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jobject& arg1, const jdouble& arg2, const jdouble& arg3, const jdouble& arg4) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_DEBUG_CHUNKBORDERDEBUGRENDERER_HPP