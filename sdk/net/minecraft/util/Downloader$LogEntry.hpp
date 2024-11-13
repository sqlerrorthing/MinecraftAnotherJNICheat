// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_DOWNLOADER$LOGENTRY_HPP
#define NET_MINECRAFT_UTIL_DOWNLOADER$LOGENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.Downloader$LogEntry
 * Remapped: asl$e
 */
namespace Downloader$LogEntry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("asl$e", "net/minecraft/server/packs/DownloadQueue$LogEntry", "net/minecraft/class_9028$class_9033", "net/minecraft/util/Downloader$LogEntry", "net/minecraft/src/C_302050_$C_302125_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.util.Downloader$LogEntry#id
    static jobject get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "id", "comp_2149", "id", "f_303431_"), "Ljava/util/UUID;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.Downloader$LogEntry#id
    static void set_field_id(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "id", "comp_2149", "id", "f_303431_"), "Ljava/util/UUID;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.Downloader$LogEntry#url
    static jobject get_field_url(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "url", "comp_2150", "url", "f_302712_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.Downloader$LogEntry#url
    static void set_field_url(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "url", "comp_2150", "url", "f_302712_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.Downloader$LogEntry#time
    static jobject get_field_time(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "time", "comp_2151", "time", "f_303846_"), "Ljava/time/Instant;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.Downloader$LogEntry#time
    static void set_field_time(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "time", "comp_2151", "time", "f_303846_"), "Ljava/time/Instant;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.Downloader$LogEntry#hash
    static jobject get_field_hash(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "hash", "comp_2152", "hash", "f_302640_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.Downloader$LogEntry#hash
    static void set_field_hash(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "hash", "comp_2152", "hash", "f_302640_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.Downloader$LogEntry#errorOrFileInfo
    static jobject get_field_errorOrFileInfo(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "errorOrFileInfo", "comp_2153", "errorOrFileInfo", "f_302525_"), "Lcom/mojang/datafixers/util/Either;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.Downloader$LogEntry#errorOrFileInfo
    static void set_field_errorOrFileInfo(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "errorOrFileInfo", "comp_2153", "errorOrFileInfo", "f_302525_"), "Lcom/mojang/datafixers/util/Either;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Downloader$LogEntry#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_47577", "CODEC", "f_302665_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Downloader$LogEntry#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_47577", "CODEC", "f_302665_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID__id() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "id", "comp_2149", "id", "f_303431_"), "()Ljava/util/UUID;");
    }

    static jobject _id(const jobject& obj) {
                
       const auto methodID = methodID__id();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__url() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "url", "comp_2150", "url", "f_302712_"), "()Ljava/lang/String;");
    }

    static jobject _url(const jobject& obj) {
                
       const auto methodID = methodID__url();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__time() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "time", "comp_2151", "time", "f_303846_"), "()Ljava/time/Instant;");
    }

    static jobject _time(const jobject& obj) {
                
       const auto methodID = methodID__time();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__hash() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "hash", "comp_2152", "hash", "f_302640_"), "()Ljava/util/Optional;");
    }

    static jobject _hash(const jobject& obj) {
                
       const auto methodID = methodID__hash();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__errorOrFileInfo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "errorOrFileInfo", "comp_2153", "errorOrFileInfo", "f_302525_"), "()Lcom/mojang/datafixers/util/Either;");
    }

    static jobject _errorOrFileInfo(const jobject& obj) {
                
       const auto methodID = methodID__errorOrFileInfo();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_DOWNLOADER$LOGENTRY_HPP