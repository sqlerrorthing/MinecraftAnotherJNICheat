// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_SCHEMA_SCHEMA1451V6$1_HPP
#define NET_MINECRAFT_DATAFIXER_SCHEMA_SCHEMA1451V6$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.schema.Schema1451v6$1
 * Remapped: bis$1
 */
namespace Schema1451v6$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bis$1", "net/minecraft/util/datafix/schemas/V1451_6$1", "net/minecraft/class_1236$1", "net/minecraft/datafixer/schema/Schema1451v6$1", "net/minecraft/src/C_387_$C_180530_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("apply", "apply", "apply", "apply", "apply"), "(Lcom/mojang/serialization/DynamicOps;Ljava/lang/Object;)Ljava/lang/Object;");
    }

    static jobject apply(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_apply();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_SCHEMA_SCHEMA1451V6$1_HPP