// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_ITEMLORETOTEXTFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_ITEMLORETOTEXTFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.ItemLoreToTextFix
 * Remapped: beg
 */
namespace ItemLoreToTextFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("beg", "net/minecraft/util/datafix/fixes/ItemLoreFix", "net/minecraft/class_1180", "net/minecraft/datafixer/fix/ItemLoreToTextFix", "net/minecraft/src/C_297_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_makeRule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("makeRule", "makeRule", "", "", "makeRule"), "()Lcom/mojang/datafixers/TypeRewriteRule;");
    }

    static jobject makeRule(const jobject& obj) {
                
       const auto methodID = methodID_makeRule();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_fixLoreNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fixLoreList", "method_5005", "fixLoreNbt", "m_15969_"), "(Ljava/util/stream/Stream;)Ljava/util/stream/Stream;");
    }

    static jobject fixLoreNbt(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fixLoreNbt();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_ITEMLORETOTEXTFIX_HPP