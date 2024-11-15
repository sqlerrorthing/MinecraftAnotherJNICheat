// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RESOURCE_RELOADABLERESOURCEMANAGERIMPL_HPP
#define NET_MINECRAFT_RESOURCE_RELOADABLERESOURCEMANAGERIMPL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.resource.ReloadableResourceManagerImpl
 * Remapped: aub
 */
namespace ReloadableResourceManagerImpl {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aub", "net/minecraft/server/packs/resources/ReloadableResourceManager", "net/minecraft/class_3304", "net/minecraft/resource/ReloadableResourceManagerImpl", "net/minecraft/src/C_75_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.resource.ReloadableResourceManagerImpl#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_14295", "LOGGER", "f_203814_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.resource.ReloadableResourceManagerImpl#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_14295", "LOGGER", "f_203814_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.resource.ReloadableResourceManagerImpl#activeManager
    static jobject get_field_activeManager(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "resources", "field_36391", "activeManager", "f_203815_"), "Latu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.resource.ReloadableResourceManagerImpl#activeManager
    static void set_field_activeManager(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "resources", "field_36391", "activeManager", "f_203815_"), "Latu;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.resource.ReloadableResourceManagerImpl#reloaders
    static jobject get_field_reloaders(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "listeners", "field_17935", "reloaders", "f_203816_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.resource.ReloadableResourceManagerImpl#reloaders
    static void set_field_reloaders(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "listeners", "field_17935", "reloaders", "f_203816_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.resource.ReloadableResourceManagerImpl#type
    static jobject get_field_type(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "type", "field_14294", "type", "f_203817_"), "Lass;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.resource.ReloadableResourceManagerImpl#type
    static void set_field_type(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "type", "field_14294", "type", "f_203817_"), "Lass;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("close", "close", "", "", "close"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_registerReloader() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "registerReloadListener", "method_14477", "registerReloader", "m_7217_"), "(Laty;)V");
    }

    static void registerReloader(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_registerReloader();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_reload() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createReload", "method_18232", "reload", "m_142463_"), "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture;Ljava/util/List;)Laua;");
    }

    static jobject reload(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_reload();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getResource() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("getResource", "getResource", "method_14486", "getResource", "m_213713_"), "(Lakr;)Ljava/util/Optional;");
    }

    static jobject getResource(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getResource();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getAllNamespaces() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getNamespaces", "method_14487", "getAllNamespaces", "m_7187_"), "()Ljava/util/Set;");
    }

    static jobject getAllNamespaces(const jobject& obj) {
                
       const auto methodID = methodID_getAllNamespaces();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getAllResources() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getResourceStack", "method_14489", "getAllResources", "m_213829_"), "(Lakr;)Ljava/util/List;");
    }

    static jobject getAllResources(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getAllResources();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_findResources() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "listResources", "method_14488", "findResources", "m_214159_"), "(Ljava/lang/String;Ljava/util/function/Predicate;)Ljava/util/Map;");
    }

    static jobject findResources(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_findResources();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_findAllResources() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "listResourceStacks", "method_41265", "findAllResources", "m_214160_"), "(Ljava/lang/String;Ljava/util/function/Predicate;)Ljava/util/Map;");
    }

    static jobject findAllResources(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_findAllResources();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_streamResourcePacks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "listPacks", "method_29213", "streamResourcePacks", "m_7536_"), "()Ljava/util/stream/Stream;");
    }

    static jobject streamResourcePacks(const jobject& obj) {
                
       const auto methodID = methodID_streamResourcePacks();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_RESOURCE_RELOADABLERESOURCEMANAGERIMPL_HPP