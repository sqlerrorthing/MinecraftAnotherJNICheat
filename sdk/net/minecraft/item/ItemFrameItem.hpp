// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ITEM_ITEMFRAMEITEM_HPP
#define NET_MINECRAFT_ITEM_ITEMFRAMEITEM_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.item.ItemFrameItem
 * Remapped: cuo
 */
namespace ItemFrameItem {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cuo", "net/minecraft/world/item/ItemFrameItem", "net/minecraft/class_1795", "net/minecraft/item/ItemFrameItem", "net/minecraft/src/C_1387_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_canPlaceOn() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mayPlace", "method_7834", "canPlaceOn", "m_5595_"), "(Lcmx;Lji;Lcuq;Ljd;)Z");
    }

    static jboolean canPlaceOn(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_canPlaceOn();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_ITEM_ITEMFRAMEITEM_HPP