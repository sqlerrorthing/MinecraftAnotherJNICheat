// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_REGISTRY_TAG_TAGPACKETSERIALIZER_HPP
#define NET_MINECRAFT_REGISTRY_TAG_TAGPACKETSERIALIZER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.registry.tag.TagPacketSerializer
 * Remapped: awx
 */
namespace TagPacketSerializer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("awx", "net/minecraft/tags/TagNetworkSerialization", "net/minecraft/class_6864", "net/minecraft/registry/tag/TagPacketSerializer", "net/minecraft/src/C_203210_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_serializeTags() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "serializeTagsToNetwork", "method_40105", "serializeTags", "m_245799_"), "(Ljt;)Ljava/util/Map;");
    }

    static jobject serializeTags(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_serializeTags();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__serializeTags() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "serializeToNetwork", "method_40102", "serializeTags", "m_203942_"), "(Ljz;)Lawx$a;");
    }

    static jobject _serializeTags(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__serializeTags();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_loadTags() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "deserializeTagsFromNetwork", "method_40106", "loadTags", "m_203952_"), "(Lakq;Ljz;Lawx$a;Lawx$b;)V");
    }

    static void loadTags(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_loadTags();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_REGISTRY_TAG_TAGPACKETSERIALIZER_HPP