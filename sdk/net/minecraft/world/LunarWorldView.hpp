// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_LUNARWORLDVIEW_HPP
#define NET_MINECRAFT_WORLD_LUNARWORLDVIEW_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.LunarWorldView
 * Remapped: ddd
 */
namespace LunarWorldView {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ddd", "net/minecraft/world/level/LevelTimeAccess", "net/minecraft/class_5424", "net/minecraft/world/LunarWorldView", "net/minecraft/src/C_1605_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getLunarTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("ak", "dayTime", "method_30271", "getLunarTime", "m_8044_"), "()J");
    }

    static jlong getLunarTime(const jobject& obj) {
                
       const auto methodID = methodID_getLunarTime();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMoonSize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aq", "getMoonBrightness", "method_30272", "getMoonSize", "m_46940_"), "()F");
    }

    static jfloat getMoonSize(const jobject& obj) {
                
       const auto methodID = methodID_getMoonSize();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSkyAngle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getTimeOfDay", "method_30274", "getSkyAngle", "m_46942_"), "(F)F");
    }

    static jfloat getSkyAngle(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_getSkyAngle();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getMoonPhase() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("ar", "getMoonPhase", "method_30273", "getMoonPhase", "m_46941_"), "()I");
    }

    static jint getMoonPhase(const jobject& obj) {
                
       const auto methodID = methodID_getMoonPhase();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_LUNARWORLDVIEW_HPP