// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_SCHEMA_SCHEMA3818_5_HPP
#define NET_MINECRAFT_DATAFIXER_SCHEMA_SCHEMA3818_5_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.schema.Schema3818_5
 * Remapped: blc
 */
namespace Schema3818_5 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("blc", "net/minecraft/util/datafix/schemas/V3818_5", "net/minecraft/class_9651", "net/minecraft/datafixer/schema/Schema3818_5", "net/minecraft/src/C_313370_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_registerTypes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("registerTypes", "registerTypes", "", "", "registerTypes"), "(Lcom/mojang/datafixers/schemas/Schema;Ljava/util/Map;Ljava/util/Map;)V");
    }

    static void registerTypes(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_registerTypes();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_SCHEMA_SCHEMA3818_5_HPP