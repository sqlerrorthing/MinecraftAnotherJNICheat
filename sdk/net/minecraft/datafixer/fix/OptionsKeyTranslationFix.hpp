// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_OPTIONSKEYTRANSLATIONFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_OPTIONSKEYTRANSLATIONFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.OptionsKeyTranslationFix
 * Remapped: bga
 */
namespace OptionsKeyTranslationFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bga", "net/minecraft/util/datafix/fixes/OptionsKeyTranslationFix", "net/minecraft/class_1204", "net/minecraft/datafixer/fix/OptionsKeyTranslationFix", "net/minecraft/src/C_333_"));
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
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_OPTIONSKEYTRANSLATIONFIX_HPP