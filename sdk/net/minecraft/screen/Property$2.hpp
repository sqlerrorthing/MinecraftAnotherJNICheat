// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCREEN_PROPERTY$2_HPP
#define NET_MINECRAFT_SCREEN_PROPERTY$2_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.screen.Property$2
 * Remapped: cqn$2
 */
namespace Property$2 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cqn$2", "net/minecraft/world/inventory/DataSlot$2", "net/minecraft/class_3915$2", "net/minecraft/screen/Property$2", "net/minecraft/src/C_1253_$C_1255_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "get", "method_17407", "get", "m_6501_"), "()I");
    }

    static jint get(const jobject& obj) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_set() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "set", "method_17404", "set", "m_6422_"), "(I)V");
    }

    static void set(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_set();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SCREEN_PROPERTY$2_HPP