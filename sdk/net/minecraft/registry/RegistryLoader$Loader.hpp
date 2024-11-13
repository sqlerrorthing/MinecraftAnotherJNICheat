// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_REGISTRY_REGISTRYLOADER$LOADER_HPP
#define NET_MINECRAFT_REGISTRY_REGISTRYLOADER$LOADER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.registry.RegistryLoader$Loader
 * Remapped: akm$a
 */
namespace RegistryLoader$Loader {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("akm$a", "net/minecraft/resources/RegistryDataLoader$Loader", "net/minecraft/class_7655$class_9158", "net/minecraft/registry/RegistryLoader$Loader", "net/minecraft/src/C_243574_$C_243486_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.registry.RegistryLoader$Loader#data
    static jobject get_field_data(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "data", "comp_2245", "data", "f_316451_"), "Lakm$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.registry.RegistryLoader$Loader#data
    static void set_field_data(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "data", "comp_2245", "data", "f_316451_"), "Lakm$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.registry.RegistryLoader$Loader#registry
    static jobject get_field_registry(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "registry", "comp_2246", "registry", "f_314680_"), "Lki;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.registry.RegistryLoader$Loader#registry
    static void set_field_registry(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "registry", "comp_2246", "registry", "f_314680_"), "Lki;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.registry.RegistryLoader$Loader#loadingErrors
    static jobject get_field_loadingErrors(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "loadingErrors", "comp_2247", "loadingErrors", "f_315628_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.registry.RegistryLoader$Loader#loadingErrors
    static void set_field_loadingErrors(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "loadingErrors", "comp_2247", "loadingErrors", "f_315628_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_loadFromResource() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "loadFromResources", "method_56520", "loadFromResource", "m_320768_"), "(Laue;Lakp$c;)V");
    }

    static void loadFromResource(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_loadFromResource();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_loadFromNetwork() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "loadFromNetwork", "method_56521", "loadFromNetwork", "m_323419_"), "(Ljava/util/Map;Lauh;Lakp$c;)V");
    }

    static void loadFromNetwork(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_loadFromNetwork();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__data() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "data", "comp_2245", "data", "f_316451_"), "()Lakm$c;");
    }

    static jobject _data(const jobject& obj) {
                
       const auto methodID = methodID__data();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__registry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "registry", "comp_2246", "registry", "f_314680_"), "()Lki;");
    }

    static jobject _registry(const jobject& obj) {
                
       const auto methodID = methodID__registry();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__loadingErrors() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "loadingErrors", "comp_2247", "loadingErrors", "f_315628_"), "()Ljava/util/Map;");
    }

    static jobject _loadingErrors(const jobject& obj) {
                
       const auto methodID = methodID__loadingErrors();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_REGISTRY_REGISTRYLOADER$LOADER_HPP