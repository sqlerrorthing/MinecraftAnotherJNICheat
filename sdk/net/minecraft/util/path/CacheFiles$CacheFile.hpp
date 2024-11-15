// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PATH_CACHEFILES$CACHEFILE_HPP
#define NET_MINECRAFT_UTIL_PATH_CACHEFILES$CACHEFILE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.path.CacheFiles$CacheFile
 * Remapped: ask$b
 */
namespace CacheFiles$CacheFile {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ask$b", "net/minecraft/server/packs/DownloadCacheCleaner$PathAndTime", "net/minecraft/class_9055$class_9057", "net/minecraft/util/path/CacheFiles$CacheFile", "net/minecraft/src/C_301882_$C_302128_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.util.path.CacheFiles$CacheFile#path
    static jobject get_field_path(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "path", "comp_2170", "path", "f_303548_"), "Ljava/nio/file/Path;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.util.path.CacheFiles$CacheFile#path
    static void set_field_path(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "path", "comp_2170", "path", "f_303548_"), "Ljava/nio/file/Path;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.path.CacheFiles$CacheFile#modifiedTime
    static jobject get_field_modifiedTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "modifiedTime", "comp_2171", "modifiedTime", "f_303326_"), "Ljava/nio/file/attribute/FileTime;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.path.CacheFiles$CacheFile#modifiedTime
    static void set_field_modifiedTime(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "modifiedTime", "comp_2171", "modifiedTime", "f_303326_"), "Ljava/nio/file/attribute/FileTime;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.util.path.CacheFiles$CacheFile#COMPARATOR
    [[maybe_unused]] static jobject get_field_COMPARATOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NEWEST_FIRST", "field_47678", "COMPARATOR", "f_302218_"), "Ljava/util/Comparator;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.path.CacheFiles$CacheFile#COMPARATOR
    [[maybe_unused]] static void set_field_COMPARATOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NEWEST_FIRST", "field_47678", "COMPARATOR", "f_302218_"), "Ljava/util/Comparator;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID__path() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "path", "comp_2170", "path", "f_303548_"), "()Ljava/nio/file/Path;");
    }

    static jobject _path(const jobject& obj) {
                
       const auto methodID = methodID__path();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__modifiedTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "modifiedTime", "comp_2171", "modifiedTime", "f_303326_"), "()Ljava/nio/file/attribute/FileTime;");
    }

    static jobject _modifiedTime(const jobject& obj) {
                
       const auto methodID = methodID__modifiedTime();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_PATH_CACHEFILES$CACHEFILE_HPP