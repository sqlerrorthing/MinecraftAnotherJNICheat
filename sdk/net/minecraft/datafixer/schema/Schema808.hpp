// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_SCHEMA_SCHEMA808_HPP
#define NET_MINECRAFT_DATAFIXER_SCHEMA_SCHEMA808_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.schema.Schema808
 * Remapped: blm
 */
namespace Schema808 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("blm", "net/minecraft/util/datafix/schemas/V808", "net/minecraft/class_1252", "net/minecraft/datafixer/schema/Schema808", "net/minecraft/src/C_425_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_targetItems() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "registerInventory", "method_5309", "targetItems", "m_18174_"), "(Lcom/mojang/datafixers/schemas/Schema;Ljava/util/Map;Ljava/lang/String;)V");
    }

    static void targetItems(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_targetItems();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
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

#endif // NET_MINECRAFT_DATAFIXER_SCHEMA_SCHEMA808_HPP