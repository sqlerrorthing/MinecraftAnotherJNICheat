// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_OPTION_SIMPLEOPTION$TOOLTIPFACTORY_HPP
#define NET_MINECRAFT_CLIENT_OPTION_SIMPLEOPTION$TOOLTIPFACTORY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.option.SimpleOption$TooltipFactory
 * Remapped: fgr$l
 */
namespace SimpleOption$TooltipFactory {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fgr$l", "net/minecraft/client/OptionInstance$TooltipSupplier", "net/minecraft/class_7172$class_7277", "net/minecraft/client/option/SimpleOption$TooltipFactory", "net/minecraft/src/C_213334_$C_213348_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("apply", "apply", "apply", "apply", "m_257630_"), "(Ljava/lang/Object;)Lfjx;");
    }

    static jobject apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_apply();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_OPTION_SIMPLEOPTION$TOOLTIPFACTORY_HPP