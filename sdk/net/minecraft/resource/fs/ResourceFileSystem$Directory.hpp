// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RESOURCE_FS_RESOURCEFILESYSTEM$DIRECTORY_HPP
#define NET_MINECRAFT_RESOURCE_FS_RESOURCEFILESYSTEM$DIRECTORY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.resource.fs.ResourceFileSystem$Directory
 * Remapped: ata$b
 */
namespace ResourceFileSystem$Directory {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ata$b", "net/minecraft/server/packs/linkfs/LinkFileSystem$DirectoryEntry", "net/minecraft/class_7670$class_7672", "net/minecraft/resource/fs/ResourceFileSystem$Directory", "net/minecraft/src/C_243624_$C_243605_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.resource.fs.ResourceFileSystem$Directory#children
    static jobject get_field_children(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "children", "comp_995", "children", "f_244268_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.resource.fs.ResourceFileSystem$Directory#children
    static void set_field_children(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "children", "comp_995", "children", "f_244268_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.resource.fs.ResourceFileSystem$Directory#files
    static jobject get_field_files(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "files", "comp_996", "files", "f_244526_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.resource.fs.ResourceFileSystem$Directory#files
    static void set_field_files(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "files", "comp_996", "files", "f_244526_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__children() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "children", "comp_995", "children", "f_244268_"), "()Ljava/util/Map;");
    }

    static jobject _children(const jobject& obj) {
                
       const auto methodID = methodID__children();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__files() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "files", "comp_996", "files", "f_244526_"), "()Ljava/util/Map;");
    }

    static jobject _files(const jobject& obj) {
                
       const auto methodID = methodID__files();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_RESOURCE_FS_RESOURCEFILESYSTEM$DIRECTORY_HPP