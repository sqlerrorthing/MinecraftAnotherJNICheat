// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_TEXTURE_SPRITEATLASHOLDER_HPP
#define NET_MINECRAFT_CLIENT_TEXTURE_SPRITEATLASHOLDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.texture.SpriteAtlasHolder
 * Remapped: gro
 */
namespace SpriteAtlasHolder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gro", "net/minecraft/client/resources/TextureAtlasHolder", "net/minecraft/class_4075", "net/minecraft/client/texture/SpriteAtlasHolder", "net/minecraft/src/C_4510_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.texture.SpriteAtlasHolder#atlas
    static jobject get_field_atlas(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "textureAtlas", "field_18230", "atlas", "f_118884_"), "Lgqk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.SpriteAtlasHolder#atlas
    static void set_field_atlas(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "textureAtlas", "field_18230", "atlas", "f_118884_"), "Lgqk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.SpriteAtlasHolder#sourcePath
    static jobject get_field_sourcePath(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "atlasInfoLocation", "field_41425", "sourcePath", "f_260648_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.SpriteAtlasHolder#sourcePath
    static void set_field_sourcePath(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "atlasInfoLocation", "field_41425", "sourcePath", "f_260648_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.SpriteAtlasHolder#metadataReaders
    static jobject get_field_metadataReaders(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "metadataSections", "field_45644", "metadataReaders", "f_291391_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.SpriteAtlasHolder#metadataReaders
    static void set_field_metadataReaders(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "metadataSections", "field_45644", "metadataReaders", "f_291391_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getSprite() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getSprite", "method_18667", "getSprite", "m_118901_"), "(Lakr;)Lgql;");
    }

    static jobject getSprite(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getSprite();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_reload() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "reload", "method_25931", "reload", "m_5540_"), "(Laty$a;Laue;Lbnf;Lbnf;Ljava/util/concurrent/Executor;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject reload(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5) {
                
       const auto methodID = methodID_reload();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_afterReload() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "apply", "method_18666", "afterReload", "m_245256_"), "(Lgqg$a;Lbnf;)V");
    }

    static void afterReload(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_afterReload();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("close", "close", "", "", "close"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_TEXTURE_SPRITEATLASHOLDER_HPP