// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ITEM_LINGERINGPOTIONITEM_HPP
#define NET_MINECRAFT_ITEM_LINGERINGPOTIONITEM_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.item.LingeringPotionItem
 * Remapped: cva
 */
namespace LingeringPotionItem {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cva", "net/minecraft/world/item/LingeringPotionItem", "net/minecraft/class_1803", "net/minecraft/item/LingeringPotionItem", "net/minecraft/src/C_1397_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_appendTooltip() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "appendHoverText", "method_7851", "appendTooltip", "m_7373_"), "(Lcuq;Lcul$b;Ljava/util/List;Lcwm;)V");
    }

    static void appendTooltip(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_appendTooltip();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_use() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "use", "method_7836", "use", "m_7203_"), "(Ldcw;Lcmx;Lbqq;)Lbqs;");
    }

    static jobject use(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_use();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_ITEM_LINGERINGPOTIONITEM_HPP