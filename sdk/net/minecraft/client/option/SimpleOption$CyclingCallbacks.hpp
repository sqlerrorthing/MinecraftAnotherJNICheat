// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_OPTION_SIMPLEOPTION$CYCLINGCALLBACKS_HPP
#define NET_MINECRAFT_CLIENT_OPTION_SIMPLEOPTION$CYCLINGCALLBACKS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.option.SimpleOption$CyclingCallbacks
 * Remapped: fgr$d
 */
namespace SimpleOption$CyclingCallbacks {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fgr$d", "net/minecraft/client/OptionInstance$CycleableValueSet", "net/minecraft/class_7172$class_7305", "net/minecraft/client/option/SimpleOption$CyclingCallbacks", "net/minecraft/src/C_213334_$C_213338_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getValues() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "valueListSupplier", "method_42721", "getValues", "m_213889_"), "()Lfit$c;");
    }

    static jobject getValues(const jobject& obj) {
                
       const auto methodID = methodID_getValues();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_valueSetter() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "valueSetter", "comp_674", "valueSetter", "m_213569_"), "()Lfgr$d$a;");
    }

    static jobject valueSetter(const jobject& obj) {
                
       const auto methodID = methodID_valueSetter();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
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

#endif // NET_MINECRAFT_CLIENT_OPTION_SIMPLEOPTION$CYCLINGCALLBACKS_HPP