// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_EFFECT_STATUSEFFECTUTIL_HPP
#define NET_MINECRAFT_ENTITY_EFFECT_STATUSEFFECTUTIL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.effect.StatusEffectUtil
 * Remapped: bsa
 */
namespace StatusEffectUtil {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bsa", "net/minecraft/world/effect/MobEffectUtil", "net/minecraft/class_1292", "net/minecraft/entity/effect/StatusEffectUtil", "net/minecraft/src/C_499_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getDurationText() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "formatDuration", "method_5577", "getDurationText", "m_267641_"), "(Lbrz;FF)Lwz;");
    }

    static jobject getDurationText(const jobject& arg0, const jfloat& arg1, const jfloat& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_getDurationText();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_hasHaste() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "hasDigSpeed", "method_5576", "hasHaste", "m_19584_"), "(Lbtn;)Z");
    }

    static jboolean hasHaste(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_hasHaste();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getHasteAmplifier() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getDigSpeedAmplification", "method_5575", "getHasteAmplifier", "m_19586_"), "(Lbtn;)I");
    }

    static jint getHasteAmplifier(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getHasteAmplifier();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_hasWaterBreathing() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "hasWaterBreathing", "method_5574", "hasWaterBreathing", "m_19588_"), "(Lbtn;)Z");
    }

    static jboolean hasWaterBreathing(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_hasWaterBreathing();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_addEffectToPlayersWithinDistance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "addEffectToPlayersAround", "method_42143", "addEffectToPlayersWithinDistance", "m_216946_"), "(Laqu;Lbsr;Lexc;DLbrz;I)Ljava/util/List;");
    }

    static jobject addEffectToPlayersWithinDistance(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jdouble& arg3, const jobject& arg4, const jint& arg5) {
       const auto clazz = self();
       const auto methodID = methodID_addEffectToPlayersWithinDistance();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_EFFECT_STATUSEFFECTUTIL_HPP