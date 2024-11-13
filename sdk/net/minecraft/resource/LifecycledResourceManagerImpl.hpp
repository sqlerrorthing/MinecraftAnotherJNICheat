// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RESOURCE_LIFECYCLEDRESOURCEMANAGERIMPL_HPP
#define NET_MINECRAFT_RESOURCE_LIFECYCLEDRESOURCEMANAGERIMPL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.resource.LifecycledResourceManagerImpl
 * Remapped: atx
 */
namespace LifecycledResourceManagerImpl {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("atx", "net/minecraft/server/packs/resources/MultiPackResourceManager", "net/minecraft/class_6861", "net/minecraft/resource/LifecycledResourceManagerImpl", "net/minecraft/src/C_203207_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.resource.LifecycledResourceManagerImpl#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_37288", "LOGGER", "f_215463_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.resource.LifecycledResourceManagerImpl#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_37288", "LOGGER", "f_215463_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.resource.LifecycledResourceManagerImpl#subManagers
    static jobject get_field_subManagers(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "namespacedManagers", "field_36389", "subManagers", "f_203794_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.resource.LifecycledResourceManagerImpl#subManagers
    static void set_field_subManagers(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "namespacedManagers", "field_36389", "subManagers", "f_203794_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.resource.LifecycledResourceManagerImpl#packs
    static jobject get_field_packs(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "packs", "field_36390", "packs", "f_203795_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.resource.LifecycledResourceManagerImpl#packs
    static void set_field_packs(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "packs", "field_36390", "packs", "f_203795_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_parseResourceFilter() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getPackFilterSection", "method_41274", "parseResourceFilter", "m_215467_"), "(Lasq;)Laud;");
    }

    static jobject parseResourceFilter(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_parseResourceFilter();
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
    
    static jmethodID methodID_getResource() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("getResource", "getResource", "method_14486", "getResource", "m_213713_"), "(Lakr;)Ljava/util/Optional;");
    }

    static jobject getResource(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getResource();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
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
    
    static jmethodID methodID_validateStartingPath() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "checkTrailingDirectoryPath", "method_45303", "validateStartingPath", "m_247202_"), "(Ljava/lang/String;)V");
    }

    static void validateStartingPath(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_validateStartingPath();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_streamResourcePacks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "listPacks", "method_29213", "streamResourcePacks", "m_7536_"), "()Ljava/util/stream/Stream;");
    }

    static jobject streamResourcePacks(const jobject& obj) {
                
       const auto methodID = methodID_streamResourcePacks();
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

#endif // NET_MINECRAFT_RESOURCE_LIFECYCLEDRESOURCEMANAGERIMPL_HPP