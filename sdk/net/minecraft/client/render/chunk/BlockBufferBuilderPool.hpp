// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_CHUNK_BLOCKBUFFERBUILDERPOOL_HPP
#define NET_MINECRAFT_CLIENT_RENDER_CHUNK_BLOCKBUFFERBUILDERPOOL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.chunk.BlockBufferBuilderPool
 * Remapped: gfl
 */
namespace BlockBufferBuilderPool {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gfl", "net/minecraft/client/renderer/SectionBufferBuilderPool", "net/minecraft/class_8901", "net/minecraft/client/render/chunk/BlockBufferBuilderPool", "net/minecraft/src/C_302100_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.render.chunk.BlockBufferBuilderPool#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_46904", "LOGGER", "f_303160_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.chunk.BlockBufferBuilderPool#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_46904", "LOGGER", "f_303160_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.chunk.BlockBufferBuilderPool#availableBuilders
    static jobject get_field_availableBuilders(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "freeBuffers", "field_46905", "availableBuilders", "f_302413_"), "Ljava/util/Queue;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.chunk.BlockBufferBuilderPool#availableBuilders
    static void set_field_availableBuilders(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "freeBuffers", "field_46905", "availableBuilders", "f_302413_"), "Ljava/util/Queue;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.chunk.BlockBufferBuilderPool#availableBuilderCount
    static jint get_field_availableBuilderCount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "freeBufferCount", "field_46906", "availableBuilderCount", "f_303717_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.chunk.BlockBufferBuilderPool#availableBuilderCount
    static void set_field_availableBuilderCount(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "freeBufferCount", "field_46906", "availableBuilderCount", "f_303717_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_allocate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "allocate", "method_54643", "allocate", "m_306138_"), "(I)Lgfl;");
    }

    static jobject allocate(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_allocate();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_acquire() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "acquire", "method_54642", "acquire", "m_307873_"), "()Lgfk;");
    }

    static jobject acquire(const jobject& obj) {
                
       const auto methodID = methodID_acquire();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_release() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "release", "method_54644", "release", "m_306477_"), "(Lgfk;)V");
    }

    static void release(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_release();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_hasNoAvailableBuilder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "isEmpty", "method_54645", "hasNoAvailableBuilder", "m_307681_"), "()Z");
    }

    static jboolean hasNoAvailableBuilder(const jobject& obj) {
                
       const auto methodID = methodID_hasNoAvailableBuilder();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getAvailableBuilderCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getFreeBufferCount", "method_54646", "getAvailableBuilderCount", "m_306121_"), "()I");
    }

    static jint getAvailableBuilderCount(const jobject& obj) {
                
       const auto methodID = methodID_getAvailableBuilderCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_CHUNK_BLOCKBUFFERBUILDERPOOL_HPP