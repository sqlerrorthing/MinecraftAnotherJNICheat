// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RESOURCE_RESOURCEFINDER_HPP
#define NET_MINECRAFT_RESOURCE_RESOURCEFINDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.resource.ResourceFinder
 * Remapped: akk
 */
namespace ResourceFinder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("akk", "net/minecraft/resources/FileToIdConverter", "net/minecraft/class_7654", "net/minecraft/resource/ResourceFinder", "net/minecraft/src/C_243621_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.resource.ResourceFinder#directoryName
    static jobject get_field_directoryName(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "prefix", "field_39966", "directoryName", "f_244233_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.resource.ResourceFinder#directoryName
    static void set_field_directoryName(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "prefix", "field_39966", "directoryName", "f_244233_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.resource.ResourceFinder#fileExtension
    static jobject get_field_fileExtension(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "extension", "field_39967", "fileExtension", "f_244199_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.resource.ResourceFinder#fileExtension
    static void set_field_fileExtension(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "extension", "field_39967", "fileExtension", "f_244199_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_json() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "json", "method_45114", "json", "m_246568_"), "(Ljava/lang/String;)Lakk;");
    }

    static jobject json(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_json();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_toResourcePath() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "idToFile", "method_45112", "toResourcePath", "m_245698_"), "(Lakr;)Lakr;");
    }

    static jobject toResourcePath(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_toResourcePath();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_toResourceId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "fileToId", "method_45115", "toResourceId", "m_245273_"), "(Lakr;)Lakr;");
    }

    static jobject toResourceId(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_toResourceId();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_findResources() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "listMatchingResources", "method_45113", "findResources", "m_247457_"), "(Laue;)Ljava/util/Map;");
    }

    static jobject findResources(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_findResources();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_findAllResources() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "listMatchingResourceStacks", "method_45116", "findAllResources", "m_246760_"), "(Laue;)Ljava/util/Map;");
    }

    static jobject findAllResources(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_findAllResources();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_RESOURCE_RESOURCEFINDER_HPP