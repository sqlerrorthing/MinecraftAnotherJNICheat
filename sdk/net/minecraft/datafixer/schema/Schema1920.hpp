// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_SCHEMA_SCHEMA1920_HPP
#define NET_MINECRAFT_DATAFIXER_SCHEMA_SCHEMA1920_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.schema.Schema1920
 * Remapped: bjf
 */
namespace Schema1920 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bjf", "net/minecraft/util/datafix/schemas/V1920", "net/minecraft/class_3905", "net/minecraft/datafixer/schema/Schema1920", "net/minecraft/src/C_401_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_method_17343() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "registerInventory", "method_17343", "method_17343", "m_17791_"), "(Lcom/mojang/datafixers/schemas/Schema;Ljava/util/Map;Ljava/lang/String;)V");
    }

    static void method_17343(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_method_17343();
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

#endif // NET_MINECRAFT_DATAFIXER_SCHEMA_SCHEMA1920_HPP