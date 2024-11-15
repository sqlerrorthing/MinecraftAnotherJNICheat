// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_REGISTRY_COMBINEDDYNAMICREGISTRIES_HPP
#define NET_MINECRAFT_REGISTRY_COMBINEDDYNAMICREGISTRIES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.registry.CombinedDynamicRegistries
 * Remapped: jt
 */
namespace CombinedDynamicRegistries {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("jt", "net/minecraft/core/LayeredRegistryAccess", "net/minecraft/class_7780", "net/minecraft/registry/CombinedDynamicRegistries", "net/minecraft/src/C_243514_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.registry.CombinedDynamicRegistries#types
    static jobject get_field_types(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "keys", "field_40581", "types", "f_244209_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.registry.CombinedDynamicRegistries#types
    static void set_field_types(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "keys", "field_40581", "types", "f_244209_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.registry.CombinedDynamicRegistries#registryManagers
    static jobject get_field_registryManagers(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "values", "field_40582", "registryManagers", "f_244050_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.registry.CombinedDynamicRegistries#registryManagers
    static void set_field_registryManagers(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "values", "field_40582", "registryManagers", "f_244050_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.registry.CombinedDynamicRegistries#combinedRegistryManager
    static jobject get_field_combinedRegistryManager(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "composite", "field_40583", "combinedRegistryManager", "f_244063_"), "Lka$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.registry.CombinedDynamicRegistries#combinedRegistryManager
    static void set_field_combinedRegistryManager(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "composite", "field_40583", "combinedRegistryManager", "f_244063_"), "Lka$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getLayerIndexOrThrow", "method_45937", "getIndex", "m_247084_"), "(Ljava/lang/Object;)I");
    }

    static jint getIndex(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getIndex();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getLayer", "method_45928", "get", "m_245283_"), "(Ljava/lang/Object;)Lka$b;");
    }

    static jobject get(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getPrecedingRegistryManagers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getAccessForLoading", "method_45935", "getPrecedingRegistryManagers", "m_246035_"), "(Ljava/lang/Object;)Lka$b;");
    }

    static jobject getPrecedingRegistryManagers(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getPrecedingRegistryManagers();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getSucceedingRegistryManagers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getAccessFrom", "method_45936", "getSucceedingRegistryManagers", "m_245317_"), "(Ljava/lang/Object;)Lka$b;");
    }

    static jobject getSucceedingRegistryManagers(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getSucceedingRegistryManagers();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_subset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getCompositeAccessForLayers", "method_45927", "subset", "m_247441_"), "(II)Lka$b;");
    }

    static jobject subset(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_subset();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_with() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "replaceFrom", "method_45930", "with", "m_247705_"), "(Ljava/lang/Object;[Lka$b;)Ljt;");
    }

    static jobject with(const jobject& obj, const jobject& arg0, const jarray& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_with();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__with() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "replaceFrom", "method_45929", "with", "m_245589_"), "(Ljava/lang/Object;Ljava/util/List;)Ljt;");
    }

    static jobject _with(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__with();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getCombinedRegistryManager() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "compositeAccess", "method_45926", "getCombinedRegistryManager", "m_247579_"), "()Lka$b;");
    }

    static jobject getCombinedRegistryManager(const jobject& obj) {
                
       const auto methodID = methodID_getCombinedRegistryManager();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_toRegistryMap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "collectRegistries", "method_45934", "toRegistryMap", "m_246119_"), "(Ljava/util/stream/Stream;)Ljava/util/Map;");
    }

    static jobject toRegistryMap(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_toRegistryMap();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_REGISTRY_COMBINEDDYNAMICREGISTRIES_HPP