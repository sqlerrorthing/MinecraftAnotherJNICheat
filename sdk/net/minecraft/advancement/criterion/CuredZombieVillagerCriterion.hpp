// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ADVANCEMENT_CRITERION_CUREDZOMBIEVILLAGERCRITERION_HPP
#define NET_MINECRAFT_ADVANCEMENT_CRITERION_CUREDZOMBIEVILLAGERCRITERION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.advancement.criterion.CuredZombieVillagerCriterion
 * Remapped: bi
 */
namespace CuredZombieVillagerCriterion {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bi", "net/minecraft/advancements/critereon/CuredZombieVillagerTrigger", "net/minecraft/class_2014", "net/minecraft/advancement/criterion/CuredZombieVillagerCriterion", "net/minecraft/src/C_637_"));
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
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "trigger", "method_8831", "trigger", "m_24274_"), "(Laqv;Lckw;Lcmk;)V");
    }

    static void trigger(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_trigger();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_ADVANCEMENT_CRITERION_CUREDZOMBIEVILLAGERCRITERION_HPP