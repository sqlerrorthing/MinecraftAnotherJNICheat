// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_SCHEMA_SCHEMA1481_HPP
#define NET_MINECRAFT_DATAFIXER_SCHEMA_SCHEMA1481_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.schema.Schema1481
 * Remapped: biw
 */
namespace Schema1481 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("biw", "net/minecraft/util/datafix/schemas/V1481", "net/minecraft/class_1239", "net/minecraft/datafixer/schema/Schema1481", "net/minecraft/src/C_392_"));
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

#endif // NET_MINECRAFT_DATAFIXER_SCHEMA_SCHEMA1481_HPP