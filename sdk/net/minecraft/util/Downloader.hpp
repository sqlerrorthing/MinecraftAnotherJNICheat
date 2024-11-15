// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_DOWNLOADER_HPP
#define NET_MINECRAFT_UTIL_DOWNLOADER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.Downloader
 * Remapped: asl
 */
namespace Downloader {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("asl", "net/minecraft/server/packs/DownloadQueue", "net/minecraft/class_9028", "net/minecraft/util/Downloader", "net/minecraft/src/C_302050_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.util.Downloader#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_47572", "LOGGER", "f_303188_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.Downloader#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_47572", "LOGGER", "f_303188_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.util.Downloader#MAX_RETAINED_CACHE_FILES
    [[maybe_unused]] static jint get_field_MAX_RETAINED_CACHE_FILES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_KEPT_PACKS", "field_47679", "MAX_RETAINED_CACHE_FILES", "f_303802_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.Downloader#MAX_RETAINED_CACHE_FILES
    [[maybe_unused]] static void set_field_MAX_RETAINED_CACHE_FILES(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_KEPT_PACKS", "field_47679", "MAX_RETAINED_CACHE_FILES", "f_303802_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.util.Downloader#directory
    static jobject get_field_directory(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "cacheDir", "field_47573", "directory", "f_303578_"), "Ljava/nio/file/Path;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.Downloader#directory
    static void set_field_directory(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "cacheDir", "field_47573", "directory", "f_303578_"), "Ljava/nio/file/Path;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.Downloader#logWriter
    static jobject get_field_logWriter(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "eventLog", "field_47574", "logWriter", "f_303172_"), "Lbly;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.Downloader#logWriter
    static void set_field_logWriter(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "eventLog", "field_47574", "logWriter", "f_303172_"), "Lbly;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.Downloader#executor
    static jobject get_field_executor(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "tasks", "field_47575", "executor", "f_302641_"), "Lbpk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.Downloader#executor
    static void set_field_executor(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "tasks", "field_47575", "executor", "f_302641_"), "Lbpk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_download() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "runDownload", "method_55488", "download", "m_306535_"), "(Lasl$a;Ljava/util/Map;)Lasl$b;");
    }

    static jobject download(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_download();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getFileInfo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getFileInfo", "method_55487", "getFileInfo", "m_306845_"), "(Ljava/nio/file/Path;)Lcom/mojang/datafixers/util/Either;");
    }

    static jobject getFileInfo(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getFileInfo();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_downloadAsync() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "downloadBatch", "method_55486", "downloadAsync", "m_304862_"), "(Lasl$a;Ljava/util/Map;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject downloadAsync(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_downloadAsync();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
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

#endif // NET_MINECRAFT_UTIL_DOWNLOADER_HPP