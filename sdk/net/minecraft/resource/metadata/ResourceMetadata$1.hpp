// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RESOURCE_METADATA_RESOURCEMETADATA$1_HPP
#define NET_MINECRAFT_RESOURCE_METADATA_RESOURCEMETADATA$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.resource.metadata.ResourceMetadata$1
 * Remapped: aug$1
 */
namespace ResourceMetadata$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aug$1", "net/minecraft/server/packs/resources/ResourceMetadata$1", "net/minecraft/class_7368$1", "net/minecraft/resource/metadata/ResourceMetadata$1", "net/minecraft/src/C_212950_$C_212951_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_decode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getSection", "method_43041", "decode", "m_214059_"), "(Latd;)Ljava/util/Optional;");
    }

    static jobject decode(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_decode();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_RESOURCE_METADATA_RESOURCEMETADATA$1_HPP