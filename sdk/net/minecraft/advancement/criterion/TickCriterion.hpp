// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ADVANCEMENT_CRITERION_TICKCRITERION_HPP
#define NET_MINECRAFT_ADVANCEMENT_CRITERION_TICKCRITERION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.advancement.criterion.TickCriterion
 * Remapped: dq
 */
namespace TickCriterion {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dq", "net/minecraft/advancements/critereon/PlayerTrigger", "net/minecraft/class_2135", "net/minecraft/advancement/criterion/TickCriterion", "net/minecraft/src/C_213118_"));
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
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "trigger", "method_9141", "trigger", "m_222618_"), "(Laqv;)V");
    }

    static void trigger(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_trigger();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ADVANCEMENT_CRITERION_TICKCRITERION_HPP