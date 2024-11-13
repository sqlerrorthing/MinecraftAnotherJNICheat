// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RESOURCE_FS_RESOURCEFILESYSTEM_HPP
#define NET_MINECRAFT_RESOURCE_FS_RESOURCEFILESYSTEM_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.resource.fs.ResourceFileSystem
 * Remapped: ata
 */
namespace ResourceFileSystem {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ata", "net/minecraft/server/packs/linkfs/LinkFileSystem", "net/minecraft/class_7670", "net/minecraft/resource/fs/ResourceFileSystem", "net/minecraft/src/C_243624_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.resource.fs.ResourceFileSystem#SUPPORTED_FILE_ATTRIBUTE_VIEWS
    [[maybe_unused]] static jobject get_field_SUPPORTED_FILE_ATTRIBUTE_VIEWS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "VIEWS", "field_40029", "SUPPORTED_FILE_ATTRIBUTE_VIEWS", "f_243804_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.resource.fs.ResourceFileSystem#SUPPORTED_FILE_ATTRIBUTE_VIEWS
    [[maybe_unused]] static void set_field_SUPPORTED_FILE_ATTRIBUTE_VIEWS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "VIEWS", "field_40029", "SUPPORTED_FILE_ATTRIBUTE_VIEWS", "f_243804_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.resource.fs.ResourceFileSystem#SEPARATOR
    [[maybe_unused]] static jobject get_field_SEPARATOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "PATH_SEPARATOR", "field_40028", "SEPARATOR", "f_243682_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.resource.fs.ResourceFileSystem#SEPARATOR
    [[maybe_unused]] static void set_field_SEPARATOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "PATH_SEPARATOR", "field_40028", "SEPARATOR", "f_243682_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.resource.fs.ResourceFileSystem#SEPARATOR_SPLITTER
    [[maybe_unused]] static jobject get_field_SEPARATOR_SPLITTER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PATH_SPLITTER", "field_40030", "SEPARATOR_SPLITTER", "f_244484_"), "Lcom/google/common/base/Splitter;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.resource.fs.ResourceFileSystem#SEPARATOR_SPLITTER
    [[maybe_unused]] static void set_field_SEPARATOR_SPLITTER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PATH_SPLITTER", "field_40030", "SEPARATOR_SPLITTER", "f_244484_"), "Lcom/google/common/base/Splitter;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.resource.fs.ResourceFileSystem#store
    static jobject get_field_store(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "store", "field_40031", "store", "f_243742_"), "Ljava/nio/file/FileStore;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.resource.fs.ResourceFileSystem#store
    static void set_field_store(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "store", "field_40031", "store", "f_243742_"), "Ljava/nio/file/FileStore;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.resource.fs.ResourceFileSystem#fileSystemProvider
    static jobject get_field_fileSystemProvider(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "provider", "field_40032", "fileSystemProvider", "f_244566_"), "Ljava/nio/file/spi/FileSystemProvider;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.resource.fs.ResourceFileSystem#fileSystemProvider
    static void set_field_fileSystemProvider(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "provider", "field_40032", "fileSystemProvider", "f_244566_"), "Ljava/nio/file/spi/FileSystemProvider;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.resource.fs.ResourceFileSystem#root
    static jobject get_field_root(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "root", "field_40033", "root", "f_244599_"), "Lasy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.resource.fs.ResourceFileSystem#root
    static void set_field_root(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "root", "field_40033", "root", "f_244599_"), "Lasy;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_toResourcePath() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "buildPath", "method_45242", "toResourcePath", "m_246062_"), "(Lata$b;Lata;Ljava/lang/String;Lasy;)Lasy;");
    }

    static jobject toResourcePath(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_toResourcePath();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_provider() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("provider", "provider", "", "", "provider"), "()Ljava/nio/file/spi/FileSystemProvider;");
    }

    static jobject provider(const jobject& obj) {
                
       const auto methodID = methodID_provider();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("close", "close", "", "", "close"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_isOpen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("isOpen", "isOpen", "", "", "isOpen"), "()Z");
    }

    static jboolean isOpen(const jobject& obj) {
                
       const auto methodID = methodID_isOpen();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_isReadOnly() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("isReadOnly", "isReadOnly", "", "", "isReadOnly"), "()Z");
    }

    static jboolean isReadOnly(const jobject& obj) {
                
       const auto methodID = methodID_isReadOnly();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSeparator() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("getSeparator", "getSeparator", "", "", "getSeparator"), "()Ljava/lang/String;");
    }

    static jobject getSeparator(const jobject& obj) {
                
       const auto methodID = methodID_getSeparator();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRootDirectories() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("getRootDirectories", "getRootDirectories", "", "", "getRootDirectories"), "()Ljava/lang/Iterable;");
    }

    static jobject getRootDirectories(const jobject& obj) {
                
       const auto methodID = methodID_getRootDirectories();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getFileStores() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("getFileStores", "getFileStores", "", "", "getFileStores"), "()Ljava/lang/Iterable;");
    }

    static jobject getFileStores(const jobject& obj) {
                
       const auto methodID = methodID_getFileStores();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_supportedFileAttributeViews() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("supportedFileAttributeViews", "supportedFileAttributeViews", "", "", "supportedFileAttributeViews"), "()Ljava/util/Set;");
    }

    static jobject supportedFileAttributeViews(const jobject& obj) {
                
       const auto methodID = methodID_supportedFileAttributeViews();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPath() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("getPath", "getPath", "getPath", "getPath", "getPath"), "(Ljava/lang/String;[Ljava/lang/String;)Ljava/nio/file/Path;");
    }

    static jobject getPath(const jobject& obj, const jobject& arg0, const jarray& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getPath();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getPathMatcher() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("getPathMatcher", "getPathMatcher", "getPathMatcher", "getPathMatcher", "getPathMatcher"), "(Ljava/lang/String;)Ljava/nio/file/PathMatcher;");
    }

    static jobject getPathMatcher(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getPathMatcher();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getUserPrincipalLookupService() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("getUserPrincipalLookupService", "getUserPrincipalLookupService", "", "", "getUserPrincipalLookupService"), "()Ljava/nio/file/attribute/UserPrincipalLookupService;");
    }

    static jobject getUserPrincipalLookupService(const jobject& obj) {
                
       const auto methodID = methodID_getUserPrincipalLookupService();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_newWatchService() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("newWatchService", "newWatchService", "", "", "newWatchService"), "()Ljava/nio/file/WatchService;");
    }

    static jobject newWatchService(const jobject& obj) {
                
       const auto methodID = methodID_newWatchService();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getStore() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "store", "method_45241", "getStore", "m_246857_"), "()Ljava/nio/file/FileStore;");
    }

    static jobject getStore(const jobject& obj) {
                
       const auto methodID = methodID_getStore();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRoot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "rootPath", "method_45245", "getRoot", "m_247062_"), "()Lasy;");
    }

    static jobject getRoot(const jobject& obj) {
                
       const auto methodID = methodID_getRoot();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_builder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "builder", "method_45246", "builder", "m_245209_"), "()Lata$a;");
    }

    static jobject builder() {
       const auto clazz = self();
       const auto methodID = methodID_builder();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
};

#endif // NET_MINECRAFT_RESOURCE_FS_RESOURCEFILESYSTEM_HPP