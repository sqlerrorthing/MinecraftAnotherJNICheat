// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_DENSITYFUNCTION_DENSITYFUNCTION$NOISE_HPP
#define NET_MINECRAFT_WORLD_GEN_DENSITYFUNCTION_DENSITYFUNCTION$NOISE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.densityfunction.DensityFunction$Noise
 * Remapped: dyr$c
 */
namespace DensityFunction$Noise {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dyr$c", "net/minecraft/world/level/levelgen/DensityFunction$NoiseHolder", "net/minecraft/class_6910$class_7270", "net/minecraft/world/gen/densityfunction/DensityFunction$Noise", "net/minecraft/src/C_206962_$C_213135_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.gen.densityfunction.DensityFunction$Noise#noiseData
    static jobject get_field_noiseData(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "noiseData", "comp_662", "noiseData", "f_223997_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.densityfunction.DensityFunction$Noise#noiseData
    static void set_field_noiseData(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "noiseData", "comp_662", "noiseData", "f_223997_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.densityfunction.DensityFunction$Noise#noise
    static jobject get_field_noise(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "noise", "comp_663", "noise", "f_223998_"), "Leoh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.densityfunction.DensityFunction$Noise#noise
    static void set_field_noise(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "noise", "comp_663", "noise", "f_223998_"), "Leoh;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.densityfunction.DensityFunction$Noise#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_38248", "CODEC", "f_223996_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.densityfunction.DensityFunction$Noise#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_38248", "CODEC", "f_223996_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_sample() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getValue", "method_42356", "sample", "m_224006_"), "(DDD)D");
    }

    static jdouble sample(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jdouble& arg2) {
                
       const auto methodID = methodID_sample();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getMaxValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "maxValue", "method_42355", "getMaxValue", "m_224005_"), "()D");
    }

    static jdouble getMaxValue(const jobject& obj) {
                
       const auto methodID = methodID_getMaxValue();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID__noiseData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "noiseData", "comp_662", "noiseData", "f_223997_"), "()Ljm;");
    }

    static jobject _noiseData(const jobject& obj) {
                
       const auto methodID = methodID__noiseData();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__noise() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "noise", "comp_663", "noise", "f_223998_"), "()Leoh;");
    }

    static jobject _noise(const jobject& obj) {
                
       const auto methodID = methodID__noise();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_DENSITYFUNCTION_DENSITYFUNCTION$NOISE_HPP