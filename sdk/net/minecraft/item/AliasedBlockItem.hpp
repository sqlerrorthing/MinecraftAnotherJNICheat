// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ITEM_ALIASEDBLOCKITEM_HPP
#define NET_MINECRAFT_ITEM_ALIASEDBLOCKITEM_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.item.AliasedBlockItem
 * Remapped: cup
 */
namespace AliasedBlockItem {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cup", "net/minecraft/world/item/ItemNameBlockItem", "net/minecraft/class_1798", "net/minecraft/item/AliasedBlockItem", "net/minecraft/src/C_1390_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getTranslationKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getDescriptionId", "method_7876", "getTranslationKey", "m_5524_"), "()Ljava/lang/String;");
    }

    static jobject getTranslationKey(const jobject& obj) {
                
       const auto methodID = methodID_getTranslationKey();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ITEM_ALIASEDBLOCKITEM_HPP