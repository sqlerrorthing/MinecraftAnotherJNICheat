// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RESOURCE_METADATA_RESOURCEMETADATASERIALIZER_HPP
#define NET_MINECRAFT_RESOURCE_METADATA_RESOURCEMETADATASERIALIZER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.resource.metadata.ResourceMetadataSerializer
 * Remapped: ate
 */
namespace ResourceMetadataSerializer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ate", "net/minecraft/server/packs/metadata/MetadataSectionType", "net/minecraft/class_7677", "net/minecraft/resource/metadata/ResourceMetadataSerializer", "net/minecraft/src/C_243536_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_toJson() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "toJson", "method_45251", "toJson", "m_245162_"), "(Ljava/lang/Object;)Lcom/google/gson/JsonObject;");
    }

    static jobject toJson(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_toJson();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_fromCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fromCodec", "method_45252", "fromCodec", "m_245060_"), "(Ljava/lang/String;Lcom/mojang/serialization/Codec;)Late;");
    }

    static jobject fromCodec(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_fromCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_RESOURCE_METADATA_RESOURCEMETADATASERIALIZER_HPP