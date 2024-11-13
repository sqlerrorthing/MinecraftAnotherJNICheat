// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_LOOKTARGET_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_LOOKTARGET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.LookTarget
 * Remapped: bwv
 */
namespace LookTarget {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bwv", "net/minecraft/world/entity/ai/behavior/PositionTracker", "net/minecraft/class_4115", "net/minecraft/entity/ai/brain/LookTarget", "net/minecraft/src/C_612_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "currentPosition", "method_18991", "getPos", "m_7024_"), "()Lexc;");
    }

    static jobject getPos(const jobject& obj) {
                
       const auto methodID = methodID_getPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBlockPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "currentBlockPosition", "method_18989", "getBlockPos", "m_6675_"), "()Ljd;");
    }

    static jobject getBlockPos(const jobject& obj) {
                
       const auto methodID = methodID_getBlockPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_isSeenBy() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isVisibleBy", "method_18990", "isSeenBy", "m_6826_"), "(Lbtn;)Z");
    }

    static jboolean isSeenBy(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isSeenBy();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_LOOKTARGET_HPP