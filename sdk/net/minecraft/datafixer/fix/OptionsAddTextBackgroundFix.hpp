// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_OPTIONSADDTEXTBACKGROUNDFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_OPTIONSADDTEXTBACKGROUNDFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.OptionsAddTextBackgroundFix
 * Remapped: bfw
 */
namespace OptionsAddTextBackgroundFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bfw", "net/minecraft/util/datafix/fixes/OptionsAddTextBackgroundFix", "net/minecraft/class_4092", "net/minecraft/datafixer/fix/OptionsAddTextBackgroundFix", "net/minecraft/src/C_330_"));
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
    
    static jmethodID methodID_convertToTextBackgroundOpacity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "calculateBackground", "method_18853", "convertToTextBackgroundOpacity", "m_16616_"), "(Ljava/lang/String;)D");
    }

    static jdouble convertToTextBackgroundOpacity(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_convertToTextBackgroundOpacity();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_OPTIONSADDTEXTBACKGROUNDFIX_HPP