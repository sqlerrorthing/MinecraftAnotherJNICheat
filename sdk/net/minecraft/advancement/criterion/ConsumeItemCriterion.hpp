// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ADVANCEMENT_CRITERION_CONSUMEITEMCRITERION_HPP
#define NET_MINECRAFT_ADVANCEMENT_CRITERION_CONSUMEITEMCRITERION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.advancement.criterion.ConsumeItemCriterion
 * Remapped: bf
 */
namespace ConsumeItemCriterion {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bf", "net/minecraft/advancements/critereon/ConsumeItemTrigger", "net/minecraft/class_2010", "net/minecraft/advancement/criterion/ConsumeItemCriterion", "net/minecraft/src/C_609_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getConditionsCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_54937", "getConditionsCodec", "m_5868_"), "()Lcom/mojang/serialization/Codec;");
    }

    static jobject getConditionsCodec(const jobject& obj) {
                
       const auto methodID = methodID_getConditionsCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_trigger() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "trigger", "method_8821", "trigger", "m_23682_"), "(Laqv;Lcuq;)V");
    }

    static void trigger(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_trigger();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_ADVANCEMENT_CRITERION_CONSUMEITEMCRITERION_HPP