// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_ENTITY_ENTITYHANDLER_HPP
#define NET_MINECRAFT_WORLD_ENTITY_ENTITYHANDLER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.entity.EntityHandler
 * Remapped: dxo
 */
namespace EntityHandler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dxo", "net/minecraft/world/level/entity/LevelCallback", "net/minecraft/class_5576", "net/minecraft/world/entity/EntityHandler", "net/minecraft/src/C_141289_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "onCreated", "method_31802", "create", "m_141989_"), "(Ljava/lang/Object;)V");
    }

    static void create(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_create();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_destroy() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "onDestroyed", "method_31801", "destroy", "m_141986_"), "(Ljava/lang/Object;)V");
    }

    static void destroy(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_destroy();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_startTicking() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "onTickingStart", "method_31800", "startTicking", "m_141987_"), "(Ljava/lang/Object;)V");
    }

    static void startTicking(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_startTicking();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_stopTicking() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "onTickingEnd", "method_31799", "stopTicking", "m_141983_"), "(Ljava/lang/Object;)V");
    }

    static void stopTicking(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_stopTicking();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_startTracking() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "onTrackingStart", "method_31798", "startTracking", "m_141985_"), "(Ljava/lang/Object;)V");
    }

    static void startTracking(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_startTracking();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_stopTracking() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "onTrackingEnd", "method_31797", "stopTracking", "m_141981_"), "(Ljava/lang/Object;)V");
    }

    static void stopTracking(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_stopTracking();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_updateLoadStatus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onSectionChange", "method_43029", "updateLoadStatus", "m_214006_"), "(Ljava/lang/Object;)V");
    }

    static void updateLoadStatus(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_updateLoadStatus();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_ENTITY_ENTITYHANDLER_HPP