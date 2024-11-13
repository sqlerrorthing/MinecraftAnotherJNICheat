// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_MATH_INTPROVIDER_BIASEDTOBOTTOMINTPROVIDER_HPP
#define NET_MINECRAFT_UTIL_MATH_INTPROVIDER_BIASEDTOBOTTOMINTPROVIDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.math.intprovider.BiasedToBottomIntProvider
 * Remapped: bpo
 */
namespace BiasedToBottomIntProvider {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bpo", "net/minecraft/util/valueproviders/BiasedToBottomInt", "net/minecraft/class_6333", "net/minecraft/util/math/intprovider/BiasedToBottomIntProvider", "net/minecraft/src/C_141045_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.util.math.intprovider.BiasedToBottomIntProvider#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_33443", "CODEC", "f_146359_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.math.intprovider.BiasedToBottomIntProvider#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_33443", "CODEC", "f_146359_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.util.math.intprovider.BiasedToBottomIntProvider#min
    static jint get_field_min(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "minInclusive", "field_33444", "min", "f_146360_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.math.intprovider.BiasedToBottomIntProvider#min
    static void set_field_min(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "minInclusive", "field_33444", "min", "f_146360_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.math.intprovider.BiasedToBottomIntProvider#max
    static jint get_field_max(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "maxInclusive", "field_33445", "max", "f_146361_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.math.intprovider.BiasedToBottomIntProvider#max
    static void set_field_max(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "maxInclusive", "field_33445", "max", "f_146361_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "of", "method_36249", "create", "m_146367_"), "(II)Lbpo;");
    }

    static jobject create(const jint& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "sample", "method_35008", "get", "m_214085_"), "(Layw;)I");
    }

    static jint get(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getMin() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getMinValue", "method_35009", "getMin", "m_142739_"), "()I");
    }

    static jint getMin(const jobject& obj) {
                
       const auto methodID = methodID_getMin();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMax() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getMaxValue", "method_35011", "getMax", "m_142737_"), "()I");
    }

    static jint getMax(const jobject& obj) {
                
       const auto methodID = methodID_getMax();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getType", "method_35012", "getType", "m_141948_"), "()Lbpx;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_MATH_INTPROVIDER_BIASEDTOBOTTOMINTPROVIDER_HPP