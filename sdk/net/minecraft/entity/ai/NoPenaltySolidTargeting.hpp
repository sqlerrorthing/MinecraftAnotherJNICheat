// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_NOPENALTYSOLIDTARGETING_HPP
#define NET_MINECRAFT_ENTITY_AI_NOPENALTYSOLIDTARGETING_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.NoPenaltySolidTargeting
 * Remapped: ceh
 */
namespace NoPenaltySolidTargeting {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ceh", "net/minecraft/world/entity/ai/util/AirAndWaterRandomPos", "net/minecraft/class_5530", "net/minecraft/entity/ai/NoPenaltySolidTargeting", "net/minecraft/src/C_141109_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_find() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getPos", "method_31504", "find", "m_148357_"), "(Lbtw;IIIDDD)Lexc;");
    }

    static jobject find(const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jdouble& arg4, const jdouble& arg5, const jdouble& arg6) {
       const auto clazz = self();
       const auto methodID = methodID_find();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID_tryMake() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "generateRandomPos", "method_31505", "tryMake", "m_148365_"), "(Lbtw;IIIDDDZ)Ljd;");
    }

    static jobject tryMake(const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jdouble& arg4, const jdouble& arg5, const jdouble& arg6, const jboolean& arg7) {
       const auto clazz = self();
       const auto methodID = methodID_tryMake();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_NOPENALTYSOLIDTARGETING_HPP