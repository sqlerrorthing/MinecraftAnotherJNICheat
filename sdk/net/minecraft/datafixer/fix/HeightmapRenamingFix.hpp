// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_HEIGHTMAPRENAMINGFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_HEIGHTMAPRENAMINGFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.HeightmapRenamingFix
 * Remapped: bea
 */
namespace HeightmapRenamingFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bea", "net/minecraft/util/datafix/fixes/HeightmapRenamingFix", "net/minecraft/class_1177", "net/minecraft/datafixer/fix/HeightmapRenamingFix", "net/minecraft/src/C_292_"));
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
    
    static jmethodID methodID_renameHeightmapTags() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fix", "method_4998", "renameHeightmapTags", "m_15898_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject renameHeightmapTags(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_renameHeightmapTags();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_HEIGHTMAPRENAMINGFIX_HPP