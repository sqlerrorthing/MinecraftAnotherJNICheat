// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RESOURCE_FS_RESOURCEFILEATTRIBUTES_HPP
#define NET_MINECRAFT_RESOURCE_FS_RESOURCEFILEATTRIBUTES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.resource.fs.ResourceFileAttributes
 * Remapped: asw
 */
namespace ResourceFileAttributes {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("asw", "net/minecraft/server/packs/linkfs/DummyFileAttributes", "net/minecraft/class_7666", "net/minecraft/resource/fs/ResourceFileAttributes", "net/minecraft/src/C_243592_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.resource.fs.ResourceFileAttributes#EPOCH
    [[maybe_unused]] static jobject get_field_EPOCH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EPOCH", "field_40011", "EPOCH", "f_244405_"), "Ljava/nio/file/attribute/FileTime;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.resource.fs.ResourceFileAttributes#EPOCH
    [[maybe_unused]] static void set_field_EPOCH(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EPOCH", "field_40011", "EPOCH", "f_244405_"), "Ljava/nio/file/attribute/FileTime;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_lastModifiedTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("lastModifiedTime", "lastModifiedTime", "", "", "lastModifiedTime"), "()Ljava/nio/file/attribute/FileTime;");
    }

    static jobject lastModifiedTime(const jobject& obj) {
                
       const auto methodID = methodID_lastModifiedTime();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_lastAccessTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("lastAccessTime", "lastAccessTime", "", "", "lastAccessTime"), "()Ljava/nio/file/attribute/FileTime;");
    }

    static jobject lastAccessTime(const jobject& obj) {
                
       const auto methodID = methodID_lastAccessTime();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_creationTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("creationTime", "creationTime", "", "", "creationTime"), "()Ljava/nio/file/attribute/FileTime;");
    }

    static jobject creationTime(const jobject& obj) {
                
       const auto methodID = methodID_creationTime();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_isSymbolicLink() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("isSymbolicLink", "isSymbolicLink", "", "", "isSymbolicLink"), "()Z");
    }

    static jboolean isSymbolicLink(const jobject& obj) {
                
       const auto methodID = methodID_isSymbolicLink();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_isOther() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("isOther", "isOther", "", "", "isOther"), "()Z");
    }

    static jboolean isOther(const jobject& obj) {
                
       const auto methodID = methodID_isOther();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_size() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("size", "size", "", "", "size"), "()J");
    }

    static jlong size(const jobject& obj) {
                
       const auto methodID = methodID_size();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID_fileKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("fileKey", "fileKey", "", "", "fileKey"), "()Ljava/lang/Object;");
    }

    static jobject fileKey(const jobject& obj) {
                
       const auto methodID = methodID_fileKey();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_RESOURCE_FS_RESOURCEFILEATTRIBUTES_HPP