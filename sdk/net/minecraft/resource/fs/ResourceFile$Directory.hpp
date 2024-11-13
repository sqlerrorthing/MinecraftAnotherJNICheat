// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RESOURCE_FS_RESOURCEFILE$DIRECTORY_HPP
#define NET_MINECRAFT_RESOURCE_FS_RESOURCEFILE$DIRECTORY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.resource.fs.ResourceFile$Directory
 * Remapped: atb$a
 */
namespace ResourceFile$Directory {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("atb$a", "net/minecraft/server/packs/linkfs/PathContents$DirectoryContents", "net/minecraft/class_7673$class_7674", "net/minecraft/resource/fs/ResourceFile$Directory", "net/minecraft/src/C_243562_$C_243473_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.resource.fs.ResourceFile$Directory#children
    static jobject get_field_children(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "children", "comp_997", "children", "f_243989_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.resource.fs.ResourceFile$Directory#children
    static void set_field_children(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "children", "comp_997", "children", "f_243989_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__children() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "children", "comp_997", "children", "f_243989_"), "()Ljava/util/Map;");
    }

    static jobject _children(const jobject& obj) {
                
       const auto methodID = methodID__children();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_RESOURCE_FS_RESOURCEFILE$DIRECTORY_HPP