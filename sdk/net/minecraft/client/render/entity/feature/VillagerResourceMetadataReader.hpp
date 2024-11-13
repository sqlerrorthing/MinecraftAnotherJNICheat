// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_VILLAGERRESOURCEMETADATAREADER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_VILLAGERRESOURCEMETADATAREADER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.feature.VillagerResourceMetadataReader
 * Remapped: gsa
 */
namespace VillagerResourceMetadataReader {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gsa", "net/minecraft/client/resources/metadata/animation/VillagerMetadataSectionSerializer", "net/minecraft/class_3890", "net/minecraft/client/render/entity/feature/VillagerResourceMetadataReader", "net/minecraft/src/C_4523_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_fromJson() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "fromJson", "method_17171", "fromJson", "m_6322_"), "(Lcom/google/gson/JsonObject;)Lgrz;");
    }

    static jobject fromJson(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_fromJson();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getMetadataSectionName", "method_14420", "getKey", "m_7991_"), "()Ljava/lang/String;");
    }

    static jobject getKey(const jobject& obj) {
                
       const auto methodID = methodID_getKey();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_VILLAGERRESOURCEMETADATAREADER_HPP