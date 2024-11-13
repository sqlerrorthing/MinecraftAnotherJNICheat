// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_REGISTRY_RELOADABLEREGISTRIES$LOOKUP_HPP
#define NET_MINECRAFT_REGISTRY_RELOADABLEREGISTRIES$LOOKUP_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.registry.ReloadableRegistries$Lookup
 * Remapped: alb$b
 */
namespace ReloadableRegistries$Lookup {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("alb$b", "net/minecraft/server/ReloadableServerRegistries$Holder", "net/minecraft/class_9383$class_9385", "net/minecraft/registry/ReloadableRegistries$Lookup", "net/minecraft/src/C_313572_$C_313686_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.registry.ReloadableRegistries$Lookup#registryManager
    static jobject get_field_registryManager(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "registries", "field_49920", "registryManager", "f_315915_"), "Lka$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.registry.ReloadableRegistries$Lookup#registryManager
    static void set_field_registryManager(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "registries", "field_49920", "registryManager", "f_315915_"), "Lka$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getRegistryManager() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_58289", "getRegistryManager", "m_323327_"), "()Lka$b;");
    }

    static jobject getRegistryManager(const jobject& obj) {
                
       const auto methodID = methodID_getRegistryManager();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_createRegistryLookup() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "lookup", "method_58294", "createRegistryLookup", "m_319537_"), "()Ljn$a;");
    }

    static jobject createRegistryLookup(const jobject& obj) {
                
       const auto methodID = methodID_createRegistryLookup();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getIds() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getKeys", "method_58290", "getIds", "m_323805_"), "(Lakq;)Ljava/util/Collection;");
    }

    static jobject getIds(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getIds();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getLootTable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getLootTable", "method_58295", "getLootTable", "m_321428_"), "(Lakq;)Lerw;");
    }

    static jobject getLootTable(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getLootTable();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_REGISTRY_RELOADABLEREGISTRIES$LOOKUP_HPP