// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NBT_NBTOPS$1_HPP
#define NET_MINECRAFT_NBT_NBTOPS$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.nbt.NbtOps$1
 * Remapped: up$1
 */
namespace NbtOps$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("up$1", "net/minecraft/nbt/NbtOps$1", "net/minecraft/class_2509$1", "net/minecraft/nbt/NbtOps$1", "net/minecraft/src/C_4940_$C_4941_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_29167", "get", "get"), "(Luy;)Luy;");
    }

    static jobject get(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_29165", "get", "get"), "(Ljava/lang/String;)Luy;");
    }

    static jobject _get(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_entries() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("entries", "entries", "", "", "entries"), "()Ljava/util/stream/Stream;");
    }

    static jobject entries(const jobject& obj) {
                
       const auto methodID = methodID_entries();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NBT_NBTOPS$1_HPP