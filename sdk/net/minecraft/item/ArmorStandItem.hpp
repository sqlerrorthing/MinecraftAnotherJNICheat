// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ITEM_ARMORSTANDITEM_HPP
#define NET_MINECRAFT_ITEM_ARMORSTANDITEM_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.item.ArmorStandItem
 * Remapped: csi
 */
namespace ArmorStandItem {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("csi", "net/minecraft/world/item/ArmorStandItem", "net/minecraft/class_1742", "net/minecraft/item/ArmorStandItem", "net/minecraft/src/C_1319_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_useOnBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "useOn", "method_7884", "useOnBlock", "m_6225_"), "(Lcyf;)Lbqr;");
    }

    static jobject useOnBlock(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_useOnBlock();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ITEM_ARMORSTANDITEM_HPP