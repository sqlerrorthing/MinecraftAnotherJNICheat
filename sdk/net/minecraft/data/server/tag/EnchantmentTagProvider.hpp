// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATA_SERVER_TAG_ENCHANTMENTTAGPROVIDER_HPP
#define NET_MINECRAFT_DATA_SERVER_TAG_ENCHANTMENTTAGPROVIDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.data.server.tag.EnchantmentTagProvider
 * Remapped: po
 */
namespace EnchantmentTagProvider {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("po", "net/minecraft/data/tags/EnchantmentTagsProvider", "net/minecraft/class_9674", "net/minecraft/data/server/tag/EnchantmentTagProvider", "net/minecraft/src/C_313847_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_createTooltipOrderTag() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tooltipOrder", "method_59781", "createTooltipOrderTag", "m_321058_"), "(Ljo$a;[Lakq;)V");
    }

    static void createTooltipOrderTag(const jobject& obj, const jobject& arg0, const jarray& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_createTooltipOrderTag();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_DATA_SERVER_TAG_ENCHANTMENTTAGPROVIDER_HPP