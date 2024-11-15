// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SELECTABLE_HPP
#define NET_MINECRAFT_CLIENT_GUI_SELECTABLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.Selectable
 * Remapped: fmg
 */
namespace Selectable {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fmg", "net/minecraft/client/gui/narration/NarratableEntry", "net/minecraft/class_6379", "net/minecraft/client/gui/Selectable", "net/minecraft/src/C_141605_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("u", "narrationPriority", "method_37018", "getType", "m_142684_"), "()Lfmg$a;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_isNarratable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("C", "isActive", "method_37303", "isNarratable", "m_142518_"), "()Z");
    }

    static jboolean isNarratable(const jobject& obj) {
                
       const auto methodID = methodID_isNarratable();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SELECTABLE_HPP