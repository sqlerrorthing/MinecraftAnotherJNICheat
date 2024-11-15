// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_CONTAINERCOMPONENTMODIFIERS$2_HPP
#define NET_MINECRAFT_LOOT_CONTAINERCOMPONENTMODIFIERS$2_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.ContainerComponentModifiers$2
 * Remapped: erp$2
 */
namespace ContainerComponentModifiers$2 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("erp$2", "net/minecraft/world/level/storage/loot/ContainerComponentManipulators$2", "net/minecraft/class_9667$2", "net/minecraft/loot/ContainerComponentModifiers$2", "net/minecraft/src/C_313300_$C_313802_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getComponentType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "method_59719", "getComponentType", "m_319799_"), "()Lkp;");
    }

    static jobject getComponentType(const jobject& obj) {
                
       const auto methodID = methodID_getComponentType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDefault() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "empty", "method_59735", "getDefault", "m_320702_"), "()Lcxf;");
    }

    static jobject getDefault(const jobject& obj) {
                
       const auto methodID = methodID_getDefault();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_stream() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getContents", "method_59733", "stream", "m_321528_"), "(Lcxf;)Ljava/util/stream/Stream;");
    }

    static jobject stream(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_stream();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setContents", "method_59734", "create", "m_318985_"), "(Lcxf;Ljava/util/stream/Stream;)Lcxf;");
    }

    static jobject create(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_LOOT_CONTAINERCOMPONENTMODIFIERS$2_HPP