// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_DENSITYFUNCTION_DENSITYFUNCTIONTYPES$SHIFTEDNOISE_HPP
#define NET_MINECRAFT_WORLD_GEN_DENSITYFUNCTION_DENSITYFUNCTIONTYPES$SHIFTEDNOISE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.densityfunction.DensityFunctionTypes$ShiftedNoise
 * Remapped: dys$v
 */
namespace DensityFunctionTypes$ShiftedNoise {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dys$v", "net/minecraft/world/level/levelgen/DensityFunctions$ShiftedNoise", "net/minecraft/class_6916$class_6940", "net/minecraft/world/gen/densityfunction/DensityFunctionTypes$ShiftedNoise", "net/minecraft/src/C_206968_$C_206997_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$ShiftedNoise#shiftX
    static jobject get_field_shiftX(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "shiftX", "comp_396", "shiftX", "f_208924_"), "Ldyr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$ShiftedNoise#shiftX
    static void set_field_shiftX(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "shiftX", "comp_396", "shiftX", "f_208924_"), "Ldyr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$ShiftedNoise#shiftY
    static jobject get_field_shiftY(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "shiftY", "comp_397", "shiftY", "f_208925_"), "Ldyr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$ShiftedNoise#shiftY
    static void set_field_shiftY(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "shiftY", "comp_397", "shiftY", "f_208925_"), "Ldyr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$ShiftedNoise#shiftZ
    static jobject get_field_shiftZ(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "shiftZ", "comp_398", "shiftZ", "f_208926_"), "Ldyr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$ShiftedNoise#shiftZ
    static void set_field_shiftZ(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "shiftZ", "comp_398", "shiftZ", "f_208926_"), "Ldyr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$ShiftedNoise#xzScale
    static jdouble get_field_xzScale(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "xzScale", "comp_399", "xzScale", "f_208927_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$ShiftedNoise#xzScale
    static void set_field_xzScale(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "xzScale", "comp_399", "xzScale", "f_208927_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$ShiftedNoise#yScale
    static jdouble get_field_yScale(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "yScale", "comp_400", "yScale", "f_208928_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$ShiftedNoise#yScale
    static void set_field_yScale(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "yScale", "comp_400", "yScale", "f_208928_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$ShiftedNoise#noise
    static jobject get_field_noise(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "noise", "comp_664", "noise", "f_208930_"), "Ldyr$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$ShiftedNoise#noise
    static void set_field_noise(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "noise", "comp_664", "noise", "f_208930_"), "Ldyr$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$ShiftedNoise#SHIFTED_NOISE_CODEC
    [[maybe_unused]] static jobject get_field_SHIFTED_NOISE_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "DATA_CODEC", "field_37098", "SHIFTED_NOISE_CODEC", "f_208931_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$ShiftedNoise#SHIFTED_NOISE_CODEC
    [[maybe_unused]] static void set_field_SHIFTED_NOISE_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "DATA_CODEC", "field_37098", "SHIFTED_NOISE_CODEC", "f_208931_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$ShiftedNoise#CODEC_HOLDER
    [[maybe_unused]] static jobject get_field_CODEC_HOLDER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_37097", "CODEC_HOLDER", "f_208923_"), "Layh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$ShiftedNoise#CODEC_HOLDER
    [[maybe_unused]] static void set_field_CODEC_HOLDER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_37097", "CODEC_HOLDER", "f_208923_"), "Layh;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_sample() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "compute", "method_40464", "sample", "m_207386_"), "(Ldyr$b;)D");
    }

    static jdouble sample(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_sample();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_fill() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fillArray", "method_40470", "fill", "m_207362_"), "([DLdyr$a;)V");
    }

    static void fill(const jobject& obj, const jarray& arg0, const jdouble& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_fill();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mapAll", "method_40469", "apply", "m_207456_"), "(Ldyr$f;)Ldyr;");
    }

    static jobject apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_apply();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_minValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "minValue", "comp_377", "minValue", "m_207402_"), "()D");
    }

    static jdouble minValue(const jobject& obj) {
                
       const auto methodID = methodID_minValue();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_maxValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "maxValue", "comp_378", "maxValue", "m_207401_"), "()D");
    }

    static jdouble maxValue(const jobject& obj) {
                
       const auto methodID = methodID_maxValue();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCodecHolder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "codec", "method_41062", "getCodecHolder", "m_214023_"), "()Layh;");
    }

    static jobject getCodecHolder(const jobject& obj) {
                
       const auto methodID = methodID_getCodecHolder();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__shiftX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "shiftX", "comp_396", "shiftX", "f_208924_"), "()Ldyr;");
    }

    static jobject _shiftX(const jobject& obj) {
                
       const auto methodID = methodID__shiftX();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__shiftY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "shiftY", "comp_397", "shiftY", "f_208925_"), "()Ldyr;");
    }

    static jobject _shiftY(const jobject& obj) {
                
       const auto methodID = methodID__shiftY();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__shiftZ() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "shiftZ", "comp_398", "shiftZ", "f_208926_"), "()Ldyr;");
    }

    static jobject _shiftZ(const jobject& obj) {
                
       const auto methodID = methodID__shiftZ();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__xzScale() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "xzScale", "comp_399", "xzScale", "f_208927_"), "()D");
    }

    static jdouble _xzScale(const jobject& obj) {
                
       const auto methodID = methodID__xzScale();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID__yScale() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n", "yScale", "comp_400", "yScale", "f_208928_"), "()D");
    }

    static jdouble _yScale(const jobject& obj) {
                
       const auto methodID = methodID__yScale();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID__noise() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("o", "noise", "comp_664", "noise", "f_208930_"), "()Ldyr$c;");
    }

    static jobject _noise(const jobject& obj) {
                
       const auto methodID = methodID__noise();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_DENSITYFUNCTION_DENSITYFUNCTIONTYPES$SHIFTEDNOISE_HPP