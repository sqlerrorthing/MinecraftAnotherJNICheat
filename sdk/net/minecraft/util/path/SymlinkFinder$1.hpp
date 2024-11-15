// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PATH_SYMLINKFINDER$1_HPP
#define NET_MINECRAFT_UTIL_PATH_SYMLINKFINDER$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.path.SymlinkFinder$1
 * Remapped: ews$1
 */
namespace SymlinkFinder$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ews$1", "net/minecraft/world/level/validation/DirectoryValidator$1", "net/minecraft/class_8580$1", "net/minecraft/util/path/SymlinkFinder$1", "net/minecraft/src/C_289814_$C_289807_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_validate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "validateSymlink", "method_52246", "validate", "m_289903_"), "(Ljava/nio/file/Path;Ljava/nio/file/attribute/BasicFileAttributes;)V");
    }

    static void validate(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_validate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_preVisitDirectory() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "preVisitDirectory", "method_52244", "preVisitDirectory", "preVisitDirectory"), "(Ljava/nio/file/Path;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;");
    }

    static jobject preVisitDirectory(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_preVisitDirectory();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_visitFile() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "visitFile", "method_52245", "visitFile", "visitFile"), "(Ljava/nio/file/Path;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;");
    }

    static jobject visitFile(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_visitFile();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_UTIL_PATH_SYMLINKFINDER$1_HPP