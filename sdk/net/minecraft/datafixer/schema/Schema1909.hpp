// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_SCHEMA_SCHEMA1909_HPP
#define NET_MINECRAFT_DATAFIXER_SCHEMA_SCHEMA1909_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.schema.Schema1909
 * Remapped: bje
 */
namespace Schema1909 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bje", "net/minecraft/util/datafix/schemas/V1909", "net/minecraft/class_3743", "net/minecraft/datafixer/schema/Schema1909", "net/minecraft/src/C_400_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_registerBlockEntities() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("registerBlockEntities", "registerBlockEntities", "registerBlockEntities", "registerBlockEntities", "registerBlockEntities"), "(Lcom/mojang/datafixers/schemas/Schema;)Ljava/util/Map;");
    }

    static jobject registerBlockEntities(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_registerBlockEntities();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_SCHEMA_SCHEMA1909_HPP