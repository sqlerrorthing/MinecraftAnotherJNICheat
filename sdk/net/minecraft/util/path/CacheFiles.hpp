// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PATH_CACHEFILES_HPP
#define NET_MINECRAFT_UTIL_PATH_CACHEFILES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.path.CacheFiles
 * Remapped: ask
 */
namespace CacheFiles {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ask", "net/minecraft/server/packs/DownloadCacheCleaner", "net/minecraft/class_9055", "net/minecraft/util/path/CacheFiles", "net/minecraft/src/C_301882_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.util.path.CacheFiles#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_47674", "LOGGER", "f_303196_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.path.CacheFiles#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_47674", "LOGGER", "f_303196_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_clear() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "vacuumCacheDir", "method_55600", "clear", "m_307501_"), "(Ljava/nio/file/Path;I)V");
    }

    static void clear(const jobject& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_clear();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_findCacheFiles() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "listFilesWithModificationTimes", "method_55599", "findCacheFiles", "m_305409_"), "(Ljava/nio/file/Path;)Ljava/util/List;");
    }

    static jobject findCacheFiles(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_findCacheFiles();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_toCacheEntries() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "prioritizeFilesInDirs", "method_55601", "toCacheEntries", "m_305891_"), "(Ljava/util/List;)Ljava/util/List;");
    }

    static jobject toCacheEntries(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_toCacheEntries();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_UTIL_PATH_CACHEFILES_HPP