// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_SCHEMA_SCHEMA1451V3_HPP
#define NET_MINECRAFT_DATAFIXER_SCHEMA_SCHEMA1451V3_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.schema.Schema1451v3
 * Remapped: bip
 */
namespace Schema1451v3 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bip", "net/minecraft/util/datafix/schemas/V1451_3", "net/minecraft/class_1231", "net/minecraft/datafixer/schema/Schema1451v3", "net/minecraft/src/C_382_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_registerEntities() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("registerEntities", "registerEntities", "registerEntities", "registerEntities", "registerEntities"), "(Lcom/mojang/datafixers/schemas/Schema;)Ljava/util/Map;");
    }

    static jobject registerEntities(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_registerEntities();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_SCHEMA_SCHEMA1451V3_HPP