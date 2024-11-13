// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_BOSS_DRAGON_PHASE_HOVERPHASE_HPP
#define NET_MINECRAFT_ENTITY_BOSS_DRAGON_PHASE_HOVERPHASE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.boss.dragon.phase.HoverPhase
 * Remapped: cih
 */
namespace HoverPhase {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cih", "net/minecraft/world/entity/boss/enderdragon/phases/DragonHoverPhase", "net/minecraft/class_1516", "net/minecraft/entity/boss/dragon/phase/HoverPhase", "net/minecraft/src/C_951_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.boss.dragon.phase.HoverPhase#target
    static jobject get_field_target(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "targetLocation", "field_7042", "target", "f_31244_"), "Lexc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.dragon.phase.HoverPhase#target
    static void set_field_target(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "targetLocation", "field_7042", "target", "f_31244_"), "Lexc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_serverTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "doServerTick", "method_6855", "serverTick", "m_6989_"), "()V");
    }

    static void serverTick(const jobject& obj) {
                
       const auto methodID = methodID_serverTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_isSittingOrHovering() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isSitting", "method_6848", "isSittingOrHovering", "m_7080_"), "()Z");
    }

    static jboolean isSittingOrHovering(const jobject& obj) {
                
       const auto methodID = methodID_isSittingOrHovering();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_beginPhase() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "begin", "method_6856", "beginPhase", "m_7083_"), "()V");
    }

    static void beginPhase(const jobject& obj) {
                
       const auto methodID = methodID_beginPhase();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMaxYAcceleration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getFlySpeed", "method_6846", "getMaxYAcceleration", "m_7072_"), "()F");
    }

    static jfloat getMaxYAcceleration(const jobject& obj) {
                
       const auto methodID = methodID_getMaxYAcceleration();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPathTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getFlyTargetLocation", "method_6851", "getPathTarget", "m_5535_"), "()Lexc;");
    }

    static jobject getPathTarget(const jobject& obj) {
                
       const auto methodID = methodID_getPathTarget();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getPhase", "method_6849", "getType", "m_7309_"), "()Lciq;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_BOSS_DRAGON_PHASE_HOVERPHASE_HPP