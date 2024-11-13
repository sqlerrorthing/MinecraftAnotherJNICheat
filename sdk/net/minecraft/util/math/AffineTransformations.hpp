// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_MATH_AFFINETRANSFORMATIONS_HPP
#define NET_MINECRAFT_UTIL_MATH_AFFINETRANSFORMATIONS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.math.AffineTransformations
 * Remapped: jc
 */
namespace AffineTransformations {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("jc", "net/minecraft/core/BlockMath", "net/minecraft/class_4609", "net/minecraft/util/math/AffineTransformations", "net/minecraft/src/C_4674_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.util.math.AffineTransformations#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LOGGER", "field_21023", "LOGGER", "f_121840_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.math.AffineTransformations#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LOGGER", "field_21023", "LOGGER", "f_121840_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.math.AffineTransformations#DIRECTION_ROTATIONS
    [[maybe_unused]] static jobject get_field_DIRECTION_ROTATIONS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "VANILLA_UV_TRANSFORM_LOCAL_TO_GLOBAL", "field_21021", "DIRECTION_ROTATIONS", "f_175256_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.math.AffineTransformations#DIRECTION_ROTATIONS
    [[maybe_unused]] static void set_field_DIRECTION_ROTATIONS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "VANILLA_UV_TRANSFORM_LOCAL_TO_GLOBAL", "field_21021", "DIRECTION_ROTATIONS", "f_175256_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.math.AffineTransformations#INVERTED_DIRECTION_ROTATIONS
    [[maybe_unused]] static jobject get_field_INVERTED_DIRECTION_ROTATIONS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "VANILLA_UV_TRANSFORM_GLOBAL_TO_LOCAL", "field_21022", "INVERTED_DIRECTION_ROTATIONS", "f_175257_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.math.AffineTransformations#INVERTED_DIRECTION_ROTATIONS
    [[maybe_unused]] static void set_field_INVERTED_DIRECTION_ROTATIONS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "VANILLA_UV_TRANSFORM_GLOBAL_TO_LOCAL", "field_21022", "INVERTED_DIRECTION_ROTATIONS", "f_175257_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_setupUvLock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "blockCenterToCorner", "method_23220", "setupUvLock", "m_121842_"), "(Lj;)Lj;");
    }

    static jobject setupUvLock(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_setupUvLock();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_method_35829() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "blockCornerToCenter", "method_35829", "method_35829", "m_175259_"), "(Lj;)Lj;");
    }

    static jobject method_35829(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_method_35829();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_uvLock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getUVLockTransform", "method_23221", "uvLock", "m_121844_"), "(Lj;Lji;)Lj;");
    }

    static jobject uvLock(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_uvLock();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_UTIL_MATH_AFFINETRANSFORMATIONS_HPP