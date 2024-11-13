// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_DATA_TRACKEDDATAHANDLER_HPP
#define NET_MINECRAFT_ENTITY_DATA_TRACKEDDATAHANDLER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.data.TrackedDataHandler
 * Remapped: ajx
 */
namespace TrackedDataHandler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ajx", "net/minecraft/network/syncher/EntityDataSerializer", "net/minecraft/class_2941", "net/minecraft/entity/data/TrackedDataHandler", "net/minecraft/src/C_5226_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_codec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("codec", "codec", "", "", "m_321181_"), "()Lyx;");
    }

    static jobject codec(const jobject& obj) {
                
       const auto methodID = methodID_codec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createAccessor", "method_12717", "create", "m_135021_"), "(I)Lajw;");
    }

    static jobject create(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_copy() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("copy", "copy", "method_12714", "copy", "m_7020_"), "(Ljava/lang/Object;)Ljava/lang/Object;");
    }

    static jobject copy(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_copy();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "forValueType", "method_56031", "create", "m_322970_"), "(Lyx;)Lajx;");
    }

    static jobject _create(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_DATA_TRACKEDDATAHANDLER_HPP