// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_CONTAINERCOMPONENTMODIFIER_HPP
#define NET_MINECRAFT_LOOT_CONTAINERCOMPONENTMODIFIER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.ContainerComponentModifier
 * Remapped: ero
 */
namespace ContainerComponentModifier {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ero", "net/minecraft/world/level/storage/loot/ContainerComponentManipulator", "net/minecraft/class_9666", "net/minecraft/loot/ContainerComponentModifier", "net/minecraft/src/C_313775_"));
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
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "empty", "method_59726", "getDefault", "m_320702_"), "()Ljava/lang/Object;");
    }

    static jobject getDefault(const jobject& obj) {
                
       const auto methodID = methodID_getDefault();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setContents", "method_59724", "create", "m_318985_"), "(Ljava/lang/Object;Ljava/util/stream/Stream;)Ljava/lang/Object;");
    }

    static jobject create(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_stream() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getContents", "method_59723", "stream", "m_321528_"), "(Ljava/lang/Object;)Ljava/util/stream/Stream;");
    }

    static jobject stream(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_stream();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setContents", "method_59720", "apply", "m_321977_"), "(Lcuq;Ljava/lang/Object;Ljava/util/stream/Stream;)V");
    }

    static void apply(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_apply();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setContents", "method_59722", "apply", "m_321924_"), "(Lcuq;Ljava/util/stream/Stream;)V");
    }

    static void _apply(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__apply();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID___apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "modifyItems", "method_59721", "apply", "m_319566_"), "(Lcuq;Ljava/util/function/UnaryOperator;)V");
    }

    static void __apply(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID___apply();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_LOOT_CONTAINERCOMPONENTMODIFIER_HPP