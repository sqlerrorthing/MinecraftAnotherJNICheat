// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_OPTION_SIMPLEOPTION$SLIDERCALLBACKS_HPP
#define NET_MINECRAFT_CLIENT_OPTION_SIMPLEOPTION$SLIDERCALLBACKS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.option.SimpleOption$SliderCallbacks
 * Remapped: fgr$k
 */
namespace SimpleOption$SliderCallbacks {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fgr$k", "net/minecraft/client/OptionInstance$SliderableValueSet", "net/minecraft/class_7172$class_7176", "net/minecraft/client/option/SimpleOption$SliderCallbacks", "net/minecraft/src/C_213334_$C_213347_"));
        }
        return cachedClass;
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
    
    static jmethodID methodID_applyValueImmediately() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aR_", "applyValueImmediately", "comp_2661", "applyValueImmediately", "m_320795_"), "()Z");
    }

    static jboolean applyValueImmediately(const jobject& obj) {
                
       const auto methodID = methodID_applyValueImmediately();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getWidgetCreator() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createButton", "method_41756", "getWidgetCreator", "m_213823_"), "(Lfgr$l;Lfgs;IIILjava/util/function/Consumer;)Ljava/util/function/Function;");
    }

    static jobject getWidgetCreator(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jobject& arg5) {
                
       const auto methodID = methodID_getWidgetCreator();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_OPTION_SIMPLEOPTION$SLIDERCALLBACKS_HPP