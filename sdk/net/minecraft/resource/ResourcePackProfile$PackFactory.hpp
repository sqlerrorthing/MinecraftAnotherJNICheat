// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RESOURCE_RESOURCEPACKPROFILE$PACKFACTORY_HPP
#define NET_MINECRAFT_RESOURCE_RESOURCEPACKPROFILE$PACKFACTORY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.resource.ResourcePackProfile$PackFactory
 * Remapped: atm$c
 */
namespace ResourcePackProfile$PackFactory {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("atm$c", "net/minecraft/server/packs/repository/Pack$ResourcesSupplier", "net/minecraft/class_3288$class_7680", "net/minecraft/resource/ResourcePackProfile$PackFactory", "net/minecraft/src/C_58_$C_243513_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_open() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "openPrimary", "method_52424", "open", "m_293078_"), "(Lasp;)Lasq;");
    }

    static jobject open(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_open();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_openWithOverlays() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "openFull", "method_52425", "openWithOverlays", "m_247679_"), "(Lasp;Latm$a;)Lasq;");
    }

    static jobject openWithOverlays(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_openWithOverlays();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_RESOURCE_RESOURCEPACKPROFILE$PACKFACTORY_HPP