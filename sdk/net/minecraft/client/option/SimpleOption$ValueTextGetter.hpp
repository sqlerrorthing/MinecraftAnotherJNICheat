// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_OPTION_SIMPLEOPTION$VALUETEXTGETTER_HPP
#define NET_MINECRAFT_CLIENT_OPTION_SIMPLEOPTION$VALUETEXTGETTER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.option.SimpleOption$ValueTextGetter
 * Remapped: fgr$b
 */
namespace SimpleOption$ValueTextGetter {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fgr$b", "net/minecraft/client/OptionInstance$CaptionBasedToString", "net/minecraft/class_7172$class_7303", "net/minecraft/client/option/SimpleOption$ValueTextGetter", "net/minecraft/src/C_213334_$C_213336_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_toString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("toString", "toString", "toString", "toString", "m_231580_"), "(Lwz;Ljava/lang/Object;)Lwz;");
    }

    static jobject toString(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_toString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_OPTION_SIMPLEOPTION$VALUETEXTGETTER_HPP