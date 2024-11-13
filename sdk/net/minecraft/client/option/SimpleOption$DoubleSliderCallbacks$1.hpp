// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_OPTION_SIMPLEOPTION$DOUBLESLIDERCALLBACKS$1_HPP
#define NET_MINECRAFT_CLIENT_OPTION_SIMPLEOPTION$DOUBLESLIDERCALLBACKS$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.option.SimpleOption$DoubleSliderCallbacks$1
 * Remapped: fgr$m$1
 */
namespace SimpleOption$DoubleSliderCallbacks$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fgr$m$1", "net/minecraft/client/OptionInstance$UnitDouble$1", "net/minecraft/class_7172$class_7177$1", "net/minecraft/client/option/SimpleOption$DoubleSliderCallbacks$1", "net/minecraft/src/C_213334_$C_213350_$C_213351_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_validate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "validateValue", "method_41758", "validate", "m_214064_"), "(Ljava/lang/Object;)Ljava/util/Optional;");
    }

    static jobject validate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_validate();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_toSliderProgress() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "toSliderValue", "method_41765", "toSliderProgress", "m_213640_"), "(Ljava/lang/Object;)D");
    }

    static jdouble toSliderProgress(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_toSliderProgress();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_toValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "fromSliderValue", "method_41763", "toValue", "m_213729_"), "(D)Ljava/lang/Object;");
    }

    static jobject toValue(const jobject& obj, const jdouble& arg0) {
                
       const auto methodID = methodID_toValue();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_codec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "codec", "comp_675", "codec", "m_213664_"), "()Lcom/mojang/serialization/Codec;");
    }

    static jobject codec(const jobject& obj) {
                
       const auto methodID = methodID_codec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_OPTION_SIMPLEOPTION$DOUBLESLIDERCALLBACKS$1_HPP