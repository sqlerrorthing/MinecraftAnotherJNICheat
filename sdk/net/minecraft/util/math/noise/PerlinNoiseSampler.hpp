// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_MATH_NOISE_PERLINNOISESAMPLER_HPP
#define NET_MINECRAFT_UTIL_MATH_NOISE_PERLINNOISESAMPLER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.math.noise.PerlinNoiseSampler
 * Remapped: eof
 */
namespace PerlinNoiseSampler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eof", "net/minecraft/world/level/levelgen/synth/ImprovedNoise", "net/minecraft/class_3756", "net/minecraft/util/math/noise/PerlinNoiseSampler", "net/minecraft/src/C_2661_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.util.math.noise.PerlinNoiseSampler#field_31701
    [[maybe_unused]] static jfloat get_field_field_31701() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SHIFT_UP_EPSILON", "field_31701", "field_31701", "f_164305_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.math.noise.PerlinNoiseSampler#field_31701
    [[maybe_unused]] static void set_field_field_31701(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SHIFT_UP_EPSILON", "field_31701", "field_31701", "f_164305_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.util.math.noise.PerlinNoiseSampler#permutation
    static jbyte get_field_permutation(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "p", "field_16590", "permutation", "f_75324_"), "[B");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetByteField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.math.noise.PerlinNoiseSampler#permutation
    static void set_field_permutation(const jobject &obj, const jbyte &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "p", "field_16590", "permutation", "f_75324_"), "[B");
        return MinecraftSDK::env->SetByteField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.util.math.noise.PerlinNoiseSampler#originX
    static jdouble get_field_originX(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "xo", "field_16591", "originX", "f_75321_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static public field net.minecraft.util.math.noise.PerlinNoiseSampler#originX
    static void set_field_originX(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "xo", "field_16591", "originX", "f_75321_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.util.math.noise.PerlinNoiseSampler#originY
    static jdouble get_field_originY(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "yo", "field_16589", "originY", "f_75322_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static public field net.minecraft.util.math.noise.PerlinNoiseSampler#originY
    static void set_field_originY(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "yo", "field_16589", "originY", "f_75322_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.util.math.noise.PerlinNoiseSampler#originZ
    static jdouble get_field_originZ(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "zo", "field_16588", "originZ", "f_75323_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static public field net.minecraft.util.math.noise.PerlinNoiseSampler#originZ
    static void set_field_originZ(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "zo", "field_16588", "originZ", "f_75323_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    static jmethodID methodID_sample() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "noise", "method_33658", "sample", "m_164308_"), "(DDD)D");
    }

    static jdouble sample(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jdouble& arg2) {
                
       const auto methodID = methodID_sample();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__sample() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "noise", "method_16447", "sample", "m_75327_"), "(DDDDD)D");
    }

    static jdouble _sample(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jdouble& arg2, const jdouble& arg3, const jdouble& arg4) {
                
       const auto methodID = methodID__sample();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_sampleDerivative() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "noiseWithDerivative", "method_35477", "sampleDerivative", "m_164312_"), "(DDD[D)D");
    }

    static jdouble sampleDerivative(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jdouble& arg2, const jarray& arg3, const jdouble& arg4) {
                
       const auto methodID = methodID_sampleDerivative();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_grad() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "gradDot", "method_16448", "grad", "m_75335_"), "(IDDD)D");
    }

    static jdouble grad(const jint& arg0, const jdouble& arg1, const jdouble& arg2, const jdouble& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_grad();
       return MinecraftSDK::env->CallStaticDoubleMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_map() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "p", "method_16449", "map", "m_75333_"), "(I)I");
    }

    static jint map(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_map();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID___sample() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "sampleAndLerp", "method_16450", "sample", "m_164317_"), "(IIIDDDD)D");
    }

    static jdouble __sample(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2, const jdouble& arg3, const jdouble& arg4, const jdouble& arg5, const jdouble& arg6) {
                
       const auto methodID = methodID___sample();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID__sampleDerivative() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "sampleWithDerivative", "method_35478", "sampleDerivative", "m_164325_"), "(IIIDDD[D)D");
    }

    static jdouble _sampleDerivative(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2, const jdouble& arg3, const jdouble& arg4, const jdouble& arg5, const jarray& arg6, const jdouble& arg7) {
                
       const auto methodID = methodID__sampleDerivative();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    };
    
    static jmethodID methodID_addDebugInfo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "parityConfigString", "method_39118", "addDebugInfo", "m_192823_"), "(Ljava/lang/StringBuilder;)V");
    }

    static void addDebugInfo(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addDebugInfo();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_UTIL_MATH_NOISE_PERLINNOISESAMPLER_HPP