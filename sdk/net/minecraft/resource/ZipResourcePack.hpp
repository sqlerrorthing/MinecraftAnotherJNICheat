// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RESOURCE_ZIPRESOURCEPACK_HPP
#define NET_MINECRAFT_RESOURCE_ZIPRESOURCEPACK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.resource.ZipResourcePack
 * Remapped: asn
 */
namespace ZipResourcePack {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("asn", "net/minecraft/server/packs/FilePackResources", "net/minecraft/class_3258", "net/minecraft/resource/ZipResourcePack", "net/minecraft/src/C_48_"));
        }
        return cachedClass;
    };

    // getter for static default field net.minecraft.resource.ZipResourcePack#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LOGGER", "field_39096", "LOGGER", "f_215322_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.resource.ZipResourcePack#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LOGGER", "field_39096", "LOGGER", "f_215322_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.resource.ZipResourcePack#zipFile
    static jobject get_field_zipFile(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "zipFileAccess", "field_45038", "zipFile", "f_291183_"), "Lasn$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.resource.ZipResourcePack#zipFile
    static void set_field_zipFile(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "zipFileAccess", "field_45038", "zipFile", "f_291183_"), "Lasn$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.resource.ZipResourcePack#overlay
    static jobject get_field_overlay(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "prefix", "field_45039", "overlay", "f_291427_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.resource.ZipResourcePack#overlay
    static void set_field_overlay(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "prefix", "field_45039", "overlay", "f_291427_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_toPath() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getPathFromLocation", "method_45177", "toPath", "m_245721_"), "(Lass;Lakr;)Ljava/lang/String;");
    }

    static jobject toPath(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_toPath();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_openRoot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getRootResource", "method_14410", "openRoot", "m_8017_"), "([Ljava/lang/String;)Latw;");
    }

    static jobject openRoot(const jobject& obj, const jarray& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_openRoot();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_open() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getResource", "method_14405", "open", "m_214146_"), "(Lass;Lakr;)Latw;");
    }

    static jobject open(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_open();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_appendOverlayPrefix() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addPrefix", "method_52422", "appendOverlayPrefix", "m_292954_"), "(Ljava/lang/String;)Ljava/lang/String;");
    }

    static jobject appendOverlayPrefix(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_appendOverlayPrefix();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_openFile() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getResource", "method_14391", "openFile", "m_247280_"), "(Ljava/lang/String;)Latw;");
    }

    static jobject openFile(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_openFile();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getNamespaces() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getNamespaces", "method_14406", "getNamespaces", "m_5698_"), "(Lass;)Ljava/util/Set;");
    }

    static jobject getNamespaces(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getNamespaces();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getNamespace() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "extractNamespace", "method_52423", "getNamespace", "m_293189_"), "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    }

    static jobject getNamespace(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getNamespace();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("close", "close", "", "", "close"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_findResources() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "listResources", "method_14408", "findResources", "m_8031_"), "(Lass;Ljava/lang/String;Ljava/lang/String;Lasq$a;)V");
    }

    static void findResources(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_findResources();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_RESOURCE_ZIPRESOURCEPACK_HPP