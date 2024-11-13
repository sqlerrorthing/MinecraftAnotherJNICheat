// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_CAULDRONRENAMEFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_CAULDRONRENAMEFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.CauldronRenameFix
 * Remapped: bbk
 */
namespace CauldronRenameFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bbk", "net/minecraft/util/datafix/fixes/CauldronRenameFix", "net/minecraft/class_5528", "net/minecraft/datafixer/fix/CauldronRenameFix", "net/minecraft/src/C_140998_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_rename() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fix", "method_31465", "rename", "m_145200_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject rename(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_rename();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_makeRule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("makeRule", "makeRule", "", "", "makeRule"), "()Lcom/mojang/datafixers/TypeRewriteRule;");
    }

    static jobject makeRule(const jobject& obj) {
                
       const auto methodID = methodID_makeRule();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_CAULDRONRENAMEFIX_HPP