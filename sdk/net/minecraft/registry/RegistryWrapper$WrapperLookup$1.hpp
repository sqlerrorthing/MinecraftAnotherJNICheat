// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_REGISTRY_REGISTRYWRAPPER$WRAPPERLOOKUP$1_HPP
#define NET_MINECRAFT_REGISTRY_REGISTRYWRAPPER$WRAPPERLOOKUP$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.registry.RegistryWrapper$WrapperLookup$1
 * Remapped: jo$a$1
 */
namespace RegistryWrapper$WrapperLookup$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("jo$a$1", "net/minecraft/core/HolderLookup$Provider$1", "net/minecraft/class_7225$class_7874$1", "net/minecraft/registry/RegistryWrapper$WrapperLookup$1", "net/minecraft/src/C_213466_$C_254607_$C_254584_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getOptional() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "lookup", "method_46750", "getOptional", "m_255095_"), "(Lakq;)Ljava/util/Optional;");
    }

    static jobject getOptional(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getOptional();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_REGISTRY_REGISTRYWRAPPER$WRAPPERLOOKUP$1_HPP