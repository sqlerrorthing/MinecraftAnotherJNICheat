// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_REGISTRY_ENTRY_REGISTRYENTRYLIST$1_HPP
#define NET_MINECRAFT_REGISTRY_ENTRY_REGISTRYENTRYLIST$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.registry.entry.RegistryEntryList$1
 * Remapped: jq$1
 */
namespace RegistryEntryList$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("jq$1", "net/minecraft/core/HolderSet$1", "net/minecraft/class_6885$1", "net/minecraft/registry/entry/RegistryEntryList$1", "net/minecraft/src/C_203233_$C_313749_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getEntries() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "contents", "method_40249", "getEntries", "m_203661_"), "()Ljava/util/List;");
    }

    static jobject getEntries(const jobject& obj) {
                
       const auto methodID = methodID_getEntries();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_REGISTRY_ENTRY_REGISTRYENTRYLIST$1_HPP