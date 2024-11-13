// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_MATH_ROTATIONPROPERTYHELPER_HPP
#define NET_MINECRAFT_UTIL_MATH_ROTATIONPROPERTYHELPER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.math.RotationPropertyHelper
 * Remapped: dui
 */
namespace RotationPropertyHelper {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dui", "net/minecraft/world/level/block/state/properties/RotationSegment", "net/minecraft/class_7718", "net/minecraft/util/math/RotationPropertyHelper", "net/minecraft/src/C_243468_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.util.math.RotationPropertyHelper#CALCULATOR
    [[maybe_unused]] static jobject get_field_CALCULATOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SEGMENTED_ANGLE16", "field_41768", "CALCULATOR", "f_263687_"), "Layy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.math.RotationPropertyHelper#CALCULATOR
    [[maybe_unused]] static void set_field_CALCULATOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SEGMENTED_ANGLE16", "field_41768", "CALCULATOR", "f_263687_"), "Layy;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.util.math.RotationPropertyHelper#MAX
    [[maybe_unused]] static jint get_field_MAX() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_SEGMENT_INDEX", "field_40345", "MAX", "f_244269_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.math.RotationPropertyHelper#MAX
    [[maybe_unused]] static void set_field_MAX(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_SEGMENT_INDEX", "field_40345", "MAX", "f_244269_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.util.math.RotationPropertyHelper#NORTH
    [[maybe_unused]] static jint get_field_NORTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "NORTH_0", "field_40346", "NORTH", "f_243806_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.math.RotationPropertyHelper#NORTH
    [[maybe_unused]] static void set_field_NORTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "NORTH_0", "field_40346", "NORTH", "f_243806_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.util.math.RotationPropertyHelper#EAST
    [[maybe_unused]] static jint get_field_EAST() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "EAST_90", "field_40347", "EAST", "f_243970_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.math.RotationPropertyHelper#EAST
    [[maybe_unused]] static void set_field_EAST(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "EAST_90", "field_40347", "EAST", "f_243970_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.util.math.RotationPropertyHelper#SOUTH
    [[maybe_unused]] static jint get_field_SOUTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "SOUTH_180", "field_40348", "SOUTH", "f_244031_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.math.RotationPropertyHelper#SOUTH
    [[maybe_unused]] static void set_field_SOUTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "SOUTH_180", "field_40348", "SOUTH", "f_244031_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.util.math.RotationPropertyHelper#WEST
    [[maybe_unused]] static jint get_field_WEST() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "WEST_270", "field_40349", "WEST", "f_243971_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.math.RotationPropertyHelper#WEST
    [[maybe_unused]] static void set_field_WEST(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "WEST_270", "field_40349", "WEST", "f_243971_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_getMax() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getMaxSegmentIndex", "method_45478", "getMax", "m_247348_"), "()I");
    }

    static jint getMax() {
       const auto clazz = self();
       const auto methodID = methodID_getMax();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID);
    };
    
    static jmethodID methodID_fromDirection() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "convertToSegment", "method_45481", "fromDirection", "m_245225_"), "(Lji;)I");
    }

    static jint fromDirection(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fromDirection();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_fromYaw() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "convertToSegment", "method_45479", "fromYaw", "m_246374_"), "(F)I");
    }

    static jint fromYaw(const jfloat& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fromYaw();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_toDirection() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "convertToDirection", "method_45480", "toDirection", "m_247487_"), "(I)Ljava/util/Optional;");
    }

    static jobject toDirection(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_toDirection();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_toDegrees() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "convertToDegrees", "method_45482", "toDegrees", "m_245107_"), "(I)F");
    }

    static jfloat toDegrees(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_toDegrees();
       return MinecraftSDK::env->CallStaticFloatMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_UTIL_MATH_ROTATIONPROPERTYHELPER_HPP