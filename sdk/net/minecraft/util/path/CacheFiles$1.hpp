// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PATH_CACHEFILES$1_HPP
#define NET_MINECRAFT_UTIL_PATH_CACHEFILES$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.path.CacheFiles$1
 * Remapped: ask$1
 */
namespace CacheFiles$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ask$1", "net/minecraft/server/packs/DownloadCacheCleaner$1", "net/minecraft/class_9055$1", "net/minecraft/util/path/CacheFiles$1", "net/minecraft/src/C_301882_$C_301887_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_visitFile() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitFile", "method_55602", "visitFile", "visitFile"), "(Ljava/nio/file/Path;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;");
    }

    static jobject visitFile(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_visitFile();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_UTIL_PATH_CACHEFILES$1_HPP