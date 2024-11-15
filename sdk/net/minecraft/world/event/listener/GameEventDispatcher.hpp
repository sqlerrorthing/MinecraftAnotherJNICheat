// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_EVENT_LISTENER_GAMEEVENTDISPATCHER_HPP
#define NET_MINECRAFT_WORLD_EVENT_LISTENER_GAMEEVENTDISPATCHER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.event.listener.GameEventDispatcher
 * Remapped: dyc
 */
namespace GameEventDispatcher {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dyc", "net/minecraft/world/level/gameevent/GameEventListenerRegistry", "net/minecraft/class_5713", "net/minecraft/world/event/listener/GameEventDispatcher", "net/minecraft/src/C_243462_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.event.listener.GameEventDispatcher#EMPTY
    [[maybe_unused]] static jobject get_field_EMPTY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NOOP", "field_28181", "EMPTY", "f_244154_"), "Ldyc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.event.listener.GameEventDispatcher#EMPTY
    [[maybe_unused]] static void set_field_EMPTY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NOOP", "field_28181", "EMPTY", "f_244154_"), "Ldyc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_isEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isEmpty", "method_32942", "isEmpty", "m_245428_"), "()Z");
    }

    static jboolean isEmpty(const jobject& obj) {
                
       const auto methodID = methodID_isEmpty();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_addListener() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_32944", "addListener", "m_245531_"), "(Ldyb;)V");
    }

    static void addListener(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addListener();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_removeListener() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "unregister", "method_32945", "removeListener", "m_246052_"), "(Ldyb;)V");
    }

    static void removeListener(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_removeListener();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_dispatch() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitInRangeListeners", "method_32943", "dispatch", "m_245521_"), "(Ljm;Lexc;Ldxz$a;Ldyc$a;)Z");
    }

    static jboolean dispatch(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_dispatch();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_WORLD_EVENT_LISTENER_GAMEEVENTDISPATCHER_HPP