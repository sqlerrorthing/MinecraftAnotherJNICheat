// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_SKINOVERLAYOWNER_HPP
#define NET_MINECRAFT_ENTITY_SKINOVERLAYOWNER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.SkinOverlayOwner
 * Remapped: bub
 */
namespace SkinOverlayOwner {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bub", "net/minecraft/world/entity/PowerableMob", "net/minecraft/class_4582", "net/minecraft/entity/SkinOverlayOwner", "net/minecraft/src/C_536_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_shouldRenderOverlay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isPowered", "method_6872", "shouldRenderOverlay", "m_7090_"), "()Z");
    }

    static jboolean shouldRenderOverlay(const jobject& obj) {
                
       const auto methodID = methodID_shouldRenderOverlay();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_SKINOVERLAYOWNER_HPP