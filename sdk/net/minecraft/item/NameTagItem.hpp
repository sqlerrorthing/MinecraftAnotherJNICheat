// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ITEM_NAMETAGITEM_HPP
#define NET_MINECRAFT_ITEM_NAMETAGITEM_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.item.NameTagItem
 * Remapped: cvg
 */
namespace NameTagItem {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cvg", "net/minecraft/world/item/NameTagItem", "net/minecraft/class_1807", "net/minecraft/item/NameTagItem", "net/minecraft/src/C_1402_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_useOnEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "interactLivingEntity", "method_7847", "useOnEntity", "m_6880_"), "(Lcuq;Lcmx;Lbtn;Lbqq;)Lbqr;");
    }

    static jobject useOnEntity(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_useOnEntity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_ITEM_NAMETAGITEM_HPP