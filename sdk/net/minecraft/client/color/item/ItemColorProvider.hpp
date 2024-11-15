// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_COLOR_ITEM_ITEMCOLORPROVIDER_HPP
#define NET_MINECRAFT_CLIENT_COLOR_ITEM_ITEMCOLORPROVIDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.color.item.ItemColorProvider
 * Remapped: fht
 */
namespace ItemColorProvider {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fht", "net/minecraft/client/color/item/ItemColor", "net/minecraft/class_326", "net/minecraft/client/color/item/ItemColorProvider", "net/minecraft/src/C_3427_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("getColor", "getColor", "getColor", "getColor", "m_92671_"), "(Lcuq;I)I");
    }

    static jint getColor(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_getColor();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_COLOR_ITEM_ITEMCOLORPROVIDER_HPP