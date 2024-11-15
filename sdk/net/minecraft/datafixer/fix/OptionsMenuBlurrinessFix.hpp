// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_OPTIONSMENUBLURRINESSFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_OPTIONSMENUBLURRINESSFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.OptionsMenuBlurrinessFix
 * Remapped: bgc
 */
namespace OptionsMenuBlurrinessFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bgc", "net/minecraft/util/datafix/fixes/OptionsMenuBlurrinessFix", "net/minecraft/class_9774", "net/minecraft/datafixer/fix/OptionsMenuBlurrinessFix", "net/minecraft/src/C_336552_"));
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
    
    static jmethodID methodID_update() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "convertToIntRange", "method_60602", "update", "m_338849_"), "(Ljava/lang/String;)I");
    }

    static jint update(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_update();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_OPTIONSMENUBLURRINESSFIX_HPP