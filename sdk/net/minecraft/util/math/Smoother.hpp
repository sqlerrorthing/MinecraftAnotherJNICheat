// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_MATH_SMOOTHER_HPP
#define NET_MINECRAFT_UTIL_MATH_SMOOTHER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.math.Smoother
 * Remapped: azf
 */
namespace Smoother {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("azf", "net/minecraft/util/SmoothDouble", "net/minecraft/class_3540", "net/minecraft/util/math/Smoother", "net/minecraft/src/C_192_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.util.math.Smoother#actualSum
    static jdouble get_field_actualSum(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "targetValue", "field_15760", "actualSum", "f_14232_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.math.Smoother#actualSum
    static void set_field_actualSum(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "targetValue", "field_15760", "actualSum", "f_14232_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.math.Smoother#smoothedSum
    static jdouble get_field_smoothedSum(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "remainingValue", "field_15759", "smoothedSum", "f_14233_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.math.Smoother#smoothedSum
    static void set_field_smoothedSum(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "remainingValue", "field_15759", "smoothedSum", "f_14233_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.math.Smoother#movementLatency
    static jdouble get_field_movementLatency(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "lastAmount", "field_15758", "movementLatency", "f_14234_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.math.Smoother#movementLatency
    static void set_field_movementLatency(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "lastAmount", "field_15758", "movementLatency", "f_14234_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    static jmethodID methodID_smooth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getNewDeltaValue", "method_15429", "smooth", "m_14237_"), "(DD)D");
    }

    static jdouble smooth(const jobject& obj, const jdouble& arg0, const jdouble& arg1) {
                
       const auto methodID = methodID_smooth();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_clear() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "reset", "method_15428", "clear", "m_14236_"), "()V");
    }

    static void clear(const jobject& obj) {
                
       const auto methodID = methodID_clear();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_MATH_SMOOTHER_HPP