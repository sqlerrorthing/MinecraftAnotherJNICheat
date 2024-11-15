// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_ENTITY_HOPPER_HPP
#define NET_MINECRAFT_BLOCK_ENTITY_HOPPER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.entity.Hopper
 * Remapped: drg
 */
namespace Hopper {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("drg", "net/minecraft/world/level/block/entity/Hopper", "net/minecraft/class_2615", "net/minecraft/block/entity/Hopper", "net/minecraft/src/C_2009_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.entity.Hopper#INPUT_AREA_SHAPE
    [[maybe_unused]] static jobject get_field_INPUT_AREA_SHAPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s_", "SUCK_AABB", "field_12026", "INPUT_AREA_SHAPE", "f_315244_"), "Lewx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.entity.Hopper#INPUT_AREA_SHAPE
    [[maybe_unused]] static void set_field_INPUT_AREA_SHAPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s_", "SUCK_AABB", "field_12026", "INPUT_AREA_SHAPE", "f_315244_"), "Lewx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getInputAreaShape() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("am_", "getSuckAabb", "method_11262", "getInputAreaShape", "m_319170_"), "()Lewx;");
    }

    static jobject getInputAreaShape(const jobject& obj) {
                
       const auto methodID = methodID_getInputAreaShape();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getHopperX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("H", "getLevelX", "method_11266", "getHopperX", "m_6343_"), "()D");
    }

    static jdouble getHopperX(const jobject& obj) {
                
       const auto methodID = methodID_getHopperX();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_getHopperY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("I", "getLevelY", "method_11264", "getHopperY", "m_6358_"), "()D");
    }

    static jdouble getHopperY(const jobject& obj) {
                
       const auto methodID = methodID_getHopperY();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_getHopperZ() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("J", "getLevelZ", "method_11265", "getHopperZ", "m_6446_"), "()D");
    }

    static jdouble getHopperZ(const jobject& obj) {
                
       const auto methodID = methodID_getHopperZ();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_canBlockFromAbove() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("K", "isGridAligned", "method_57081", "canBlockFromAbove", "m_320496_"), "()Z");
    }

    static jboolean canBlockFromAbove(const jobject& obj) {
                
       const auto methodID = methodID_canBlockFromAbove();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_ENTITY_HOPPER_HPP