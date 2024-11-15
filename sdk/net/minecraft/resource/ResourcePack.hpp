// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RESOURCE_RESOURCEPACK_HPP
#define NET_MINECRAFT_RESOURCE_RESOURCEPACK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.resource.ResourcePack
 * Remapped: asq
 */
namespace ResourcePack {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("asq", "net/minecraft/server/packs/PackResources", "net/minecraft/class_3262", "net/minecraft/resource/ResourcePack", "net/minecraft/src/C_50_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.resource.ResourcePack#METADATA_PATH_SUFFIX
    [[maybe_unused]] static jobject get_field_METADATA_PATH_SUFFIX() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "METADATA_EXTENSION", "field_29780", "METADATA_PATH_SUFFIX", "f_143748_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.resource.ResourcePack#METADATA_PATH_SUFFIX
    [[maybe_unused]] static void set_field_METADATA_PATH_SUFFIX(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "METADATA_EXTENSION", "field_29780", "METADATA_PATH_SUFFIX", "f_143748_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.resource.ResourcePack#PACK_METADATA_NAME
    [[maybe_unused]] static jobject get_field_PACK_METADATA_NAME() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PACK_META", "field_29781", "PACK_METADATA_NAME", "f_143749_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.resource.ResourcePack#PACK_METADATA_NAME
    [[maybe_unused]] static void set_field_PACK_METADATA_NAME(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PACK_META", "field_29781", "PACK_METADATA_NAME", "f_143749_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
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
    
    static jmethodID methodID_findResources() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "listResources", "method_14408", "findResources", "m_8031_"), "(Lass;Ljava/lang/String;Ljava/lang/String;Lasq$a;)V");
    }

    static void findResources(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_findResources();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getNamespaces() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getNamespaces", "method_14406", "getNamespaces", "m_5698_"), "(Lass;)Ljava/util/Set;");
    }

    static jobject getNamespaces(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getNamespaces();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_parseMetadata() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getMetadataSection", "method_14407", "parseMetadata", "m_5550_"), "(Latd;)Ljava/lang/Object;");
    }

    static jobject parseMetadata(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_parseMetadata();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getInfo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "location", "method_56926", "getInfo", "m_318586_"), "()Lasp;");
    }

    static jobject getInfo(const jobject& obj) {
                
       const auto methodID = methodID_getInfo();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "packId", "method_14409", "getId", "m_5542_"), "()Ljava/lang/String;");
    }

    static jobject getId(const jobject& obj) {
                
       const auto methodID = methodID_getId();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getKnownPackInfo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "knownPackInfo", "method_56929", "getKnownPackInfo", "m_323505_"), "()Ljava/util/Optional;");
    }

    static jobject getKnownPackInfo(const jobject& obj) {
                
       const auto methodID = methodID_getKnownPackInfo();
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
    
};

#endif // NET_MINECRAFT_RESOURCE_RESOURCEPACK_HPP