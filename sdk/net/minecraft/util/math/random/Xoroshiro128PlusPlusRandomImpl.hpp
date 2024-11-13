// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_MATH_RANDOM_XOROSHIRO128PLUSPLUSRANDOMIMPL_HPP
#define NET_MINECRAFT_UTIL_MATH_RANDOM_XOROSHIRO128PLUSPLUSRANDOMIMPL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.math.random.Xoroshiro128PlusPlusRandomImpl
 * Remapped: dzy
 */
namespace Xoroshiro128PlusPlusRandomImpl {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dzy", "net/minecraft/world/level/levelgen/Xoroshiro128PlusPlus", "net/minecraft/class_6676", "net/minecraft/util/math/random/Xoroshiro128PlusPlusRandomImpl", "net/minecraft/src/C_182952_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.util.math.random.Xoroshiro128PlusPlusRandomImpl#seedLo
    static jlong get_field_seedLo(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "seedLo", "field_35146", "seedLo", "f_190089_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.math.random.Xoroshiro128PlusPlusRandomImpl#seedLo
    static void set_field_seedLo(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "seedLo", "field_35146", "seedLo", "f_190089_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.math.random.Xoroshiro128PlusPlusRandomImpl#seedHi
    static jlong get_field_seedHi(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "seedHi", "field_35147", "seedHi", "f_190090_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.math.random.Xoroshiro128PlusPlusRandomImpl#seedHi
    static void set_field_seedHi(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "seedHi", "field_35147", "seedHi", "f_190090_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.util.math.random.Xoroshiro128PlusPlusRandomImpl#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_44879", "CODEC", "f_286992_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.math.random.Xoroshiro128PlusPlusRandomImpl#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_44879", "CODEC", "f_286992_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_next() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "nextLong", "method_39007", "next", "m_190096_"), "()J");
    }

    static jlong next(const jobject& obj) {
                
       const auto methodID = methodID_next();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_MATH_RANDOM_XOROSHIRO128PLUSPLUSRANDOMIMPL_HPP