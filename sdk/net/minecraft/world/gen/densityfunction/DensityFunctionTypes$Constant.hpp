// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_DENSITYFUNCTION_DENSITYFUNCTIONTYPES$CONSTANT_HPP
#define NET_MINECRAFT_WORLD_GEN_DENSITYFUNCTION_DENSITYFUNCTIONTYPES$CONSTANT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.densityfunction.DensityFunctionTypes$Constant
 * Remapped: dys$h
 */
namespace DensityFunctionTypes$Constant {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dys$h", "net/minecraft/world/level/levelgen/DensityFunctions$Constant", "net/minecraft/class_6916$class_6923", "net/minecraft/world/gen/densityfunction/DensityFunctionTypes$Constant", "net/minecraft/src/C_206968_$C_206980_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$Constant#value
    static jdouble get_field_value(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "value", "comp_381", "value", "f_208607_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static default field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$Constant#value
    static void set_field_value(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "value", "comp_381", "value", "f_208607_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for static default field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$Constant#CODEC_HOLDER
    [[maybe_unused]] static jobject get_field_CODEC_HOLDER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CODEC", "field_37084", "CODEC_HOLDER", "f_208608_"), "Layh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$Constant#CODEC_HOLDER
    [[maybe_unused]] static void set_field_CODEC_HOLDER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CODEC", "field_37084", "CODEC_HOLDER", "f_208608_"), "Layh;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$Constant#ZERO
    [[maybe_unused]] static jobject get_field_ZERO() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "ZERO", "field_36553", "ZERO", "f_208609_"), "Ldys$h;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$Constant#ZERO
    [[maybe_unused]] static void set_field_ZERO(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "ZERO", "field_36553", "ZERO", "f_208609_"), "Ldys$h;");
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
    
    static jmethodID methodID__value() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "value", "comp_381", "value", "f_208607_"), "()D");
    }

    static jdouble _value(const jobject& obj) {
                
       const auto methodID = methodID__value();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_DENSITYFUNCTION_DENSITYFUNCTIONTYPES$CONSTANT_HPP