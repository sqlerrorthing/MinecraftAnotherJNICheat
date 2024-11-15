// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ITEM_LEADITEM_HPP
#define NET_MINECRAFT_ITEM_LEADITEM_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.item.LeadItem
 * Remapped: cuz
 */
namespace LeadItem {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cuz", "net/minecraft/world/item/LeadItem", "net/minecraft/class_1804", "net/minecraft/item/LeadItem", "net/minecraft/src/C_1396_"));
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
    
    static jmethodID methodID_attachHeldMobsToBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "bindPlayerMobs", "method_7994", "attachHeldMobsToBlock", "m_42829_"), "(Lcmx;Ldcw;Ljd;)Lbqr;");
    }

    static jobject attachHeldMobsToBlock(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_attachHeldMobsToBlock();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_collectLeashablesAround() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "leashableInArea", "method_61166", "collectLeashablesAround", "m_340089_"), "(Ldcw;Ljd;Ljava/util/function/Predicate;)Ljava/util/List;");
    }

    static jobject collectLeashablesAround(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_collectLeashablesAround();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_ITEM_LEADITEM_HPP