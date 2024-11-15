// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_CHUNK_READABLECONTAINER_HPP
#define NET_MINECRAFT_WORLD_CHUNK_READABLECONTAINER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.chunk.ReadableContainer
 * Remapped: dvr
 */
namespace ReadableContainer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dvr", "net/minecraft/world/level/chunk/PalettedContainerRO", "net/minecraft/class_7522", "net/minecraft/world/chunk/ReadableContainer", "net/minecraft/src/C_238161_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_12321", "get", "m_63087_"), "(III)Ljava/lang/Object;");
    }

    static jobject get(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_forEachValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getAll", "method_39793", "forEachValue", "m_196879_"), "(Ljava/util/function/Consumer;)V");
    }

    static void forEachValue(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_forEachValue();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_writePacket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "write", "method_12325", "writePacket", "m_63135_"), "(Lvw;)V");
    }

    static void writePacket(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_writePacket();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getPacketSize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getSerializedSize", "method_12327", "getPacketSize", "m_63137_"), "()I");
    }

    static jint getPacketSize(const jobject& obj) {
                
       const auto methodID = methodID_getPacketSize();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_hasAny() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "maybeHas", "method_19526", "hasAny", "m_63109_"), "(Ljava/util/function/Predicate;)Z");
    }

    static jboolean hasAny(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_hasAny();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_count() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "count", "method_21732", "count", "m_63099_"), "(Ldvq$b;)V");
    }

    static void count(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_count();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_slice() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "recreate", "method_44350", "slice", "m_238334_"), "()Ldvq;");
    }

    static jobject slice(const jobject& obj) {
                
       const auto methodID = methodID_slice();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_serialize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "pack", "method_44345", "serialize", "m_188064_"), "(Ljr;Ldvq$d;)Ldvr$a;");
    }

    static jobject serialize(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_serialize();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_WORLD_CHUNK_READABLECONTAINER_HPP