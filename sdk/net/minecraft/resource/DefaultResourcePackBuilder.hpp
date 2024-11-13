// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RESOURCE_DEFAULTRESOURCEPACKBUILDER_HPP
#define NET_MINECRAFT_RESOURCE_DEFAULTRESOURCEPACKBUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.resource.DefaultResourcePackBuilder
 * Remapped: asv
 */
namespace DefaultResourcePackBuilder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("asv", "net/minecraft/server/packs/VanillaPackResourcesBuilder", "net/minecraft/class_7665", "net/minecraft/resource/DefaultResourcePackBuilder", "net/minecraft/src/C_243597_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.resource.DefaultResourcePackBuilder#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_40005", "LOGGER", "f_244501_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.resource.DefaultResourcePackBuilder#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_40005", "LOGGER", "f_244501_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.resource.DefaultResourcePackBuilder#callback
    [[maybe_unused]] static jobject get_field_callback() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "developmentConfig", "field_40004", "callback", "f_244395_"), "Ljava/util/function/Consumer;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.resource.DefaultResourcePackBuilder#callback
    [[maybe_unused]] static void set_field_callback(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "developmentConfig", "field_40004", "callback", "f_244395_"), "Ljava/util/function/Consumer;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.resource.DefaultResourcePackBuilder#RESOURCE_TYPE_TO_PATH
    [[maybe_unused]] static jobject get_field_RESOURCE_TYPE_TO_PATH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ROOT_DIR_BY_TYPE", "field_40006", "RESOURCE_TYPE_TO_PATH", "f_243987_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.resource.DefaultResourcePackBuilder#RESOURCE_TYPE_TO_PATH
    [[maybe_unused]] static void set_field_RESOURCE_TYPE_TO_PATH(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ROOT_DIR_BY_TYPE", "field_40006", "RESOURCE_TYPE_TO_PATH", "f_243987_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.resource.DefaultResourcePackBuilder#rootPaths
    static jobject get_field_rootPaths(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "rootPaths", "field_40007", "rootPaths", "f_244434_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.resource.DefaultResourcePackBuilder#rootPaths
    static void set_field_rootPaths(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "rootPaths", "field_40007", "rootPaths", "f_244434_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.resource.DefaultResourcePackBuilder#paths
    static jobject get_field_paths(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "pathsForType", "field_40008", "paths", "f_243956_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.resource.DefaultResourcePackBuilder#paths
    static void set_field_paths(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "pathsForType", "field_40008", "paths", "f_243956_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.resource.DefaultResourcePackBuilder#metadataMap
    static jobject get_field_metadataMap(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "metadata", "field_40009", "metadataMap", "f_243924_"), "Lasi;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.resource.DefaultResourcePackBuilder#metadataMap
    static void set_field_metadataMap(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "metadata", "field_40009", "metadataMap", "f_243924_"), "Lasi;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.resource.DefaultResourcePackBuilder#namespaces
    static jobject get_field_namespaces(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "namespaces", "field_40010", "namespaces", "f_244548_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.resource.DefaultResourcePackBuilder#namespaces
    static void set_field_namespaces(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "namespaces", "field_40010", "namespaces", "f_244548_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_toPath() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "safeGetPath", "method_45203", "toPath", "m_246045_"), "(Ljava/net/URI;)Ljava/nio/file/Path;");
    }

    static jobject toPath(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_toPath();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_exists() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "validateDirPath", "method_45209", "exists", "m_247040_"), "(Ljava/nio/file/Path;)Z");
    }

    static jboolean exists(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_exists();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addRootPath() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "pushRootPath", "method_45212", "addRootPath", "m_245487_"), "(Ljava/nio/file/Path;)V");
    }

    static void addRootPath(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addRootPath();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addPath() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "pushPathForType", "method_45208", "addPath", "m_246356_"), "(Lass;Ljava/nio/file/Path;)V");
    }

    static void addPath(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_addPath();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_withDefaultPaths() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "pushJarResources", "method_45197", "withDefaultPaths", "m_246373_"), "()Lasv;");
    }

    static jobject withDefaultPaths(const jobject& obj) {
                
       const auto methodID = methodID_withDefaultPaths();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_withPaths() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "pushClasspathResources", "method_45200", "withPaths", "m_246513_"), "(Lass;Ljava/lang/Class;)Lasv;");
    }

    static jobject withPaths(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_withPaths();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_runCallback() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "applyDevelopmentConfig", "method_45207", "runCallback", "m_246678_"), "()Lasv;");
    }

    static jobject runCallback(const jobject& obj) {
                
       const auto methodID = methodID_runCallback();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_withRoot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "pushUniversalPath", "method_45204", "withRoot", "m_245630_"), "(Ljava/nio/file/Path;)Lasv;");
    }

    static jobject withRoot(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_withRoot();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_withPath() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "pushAssetPath", "method_45201", "withPath", "m_246275_"), "(Lass;Ljava/nio/file/Path;)Lasv;");
    }

    static jobject withPath(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_withPath();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_withMetadataMap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setMetadata", "method_45198", "withMetadataMap", "m_245913_"), "(Lasi;)Lasv;");
    }

    static jobject withMetadataMap(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_withMetadataMap();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_withNamespaces() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "exposeNamespace", "method_45206", "withNamespaces", "m_245371_"), "([Ljava/lang/String;)Lasv;");
    }

    static jobject withNamespaces(const jobject& obj, const jarray& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_withNamespaces();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "build", "method_45210", "build", "m_245772_"), "(Lasp;)Lasu;");
    }

    static jobject build(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_reverse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "copyAndReverse", "method_45205", "reverse", "m_247634_"), "(Ljava/util/Collection;)Ljava/util/List;");
    }

    static jobject reverse(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_reverse();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_RESOURCE_DEFAULTRESOURCEPACKBUILDER_HPP