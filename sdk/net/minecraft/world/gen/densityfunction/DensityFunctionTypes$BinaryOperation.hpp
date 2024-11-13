// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_DENSITYFUNCTION_DENSITYFUNCTIONTYPES$BINARYOPERATION_HPP
#define NET_MINECRAFT_WORLD_GEN_DENSITYFUNCTION_DENSITYFUNCTIONTYPES$BINARYOPERATION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.densityfunction.DensityFunctionTypes$BinaryOperation
 * Remapped: dys$a
 */
namespace DensityFunctionTypes$BinaryOperation {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dys$a", "net/minecraft/world/level/levelgen/DensityFunctions$Ap2", "net/minecraft/class_6916$class_6917", "net/minecraft/world/gen/densityfunction/DensityFunctionTypes$BinaryOperation", "net/minecraft/src/C_206968_$C_206970_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$BinaryOperation#type
    static jobject get_field_type(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "type", "comp_374", "type", "f_208397_"), "Ldys$y$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$BinaryOperation#type
    static void set_field_type(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "type", "comp_374", "type", "f_208397_"), "Ldys$y$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$BinaryOperation#argument1
    static jobject get_field_argument1(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "argument1", "comp_375", "argument1", "f_208398_"), "Ldyr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$BinaryOperation#argument1
    static void set_field_argument1(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "argument1", "comp_375", "argument1", "f_208398_"), "Ldyr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$BinaryOperation#argument2
    static jobject get_field_argument2(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "argument2", "comp_376", "argument2", "f_208399_"), "Ldyr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$BinaryOperation#argument2
    static void set_field_argument2(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "argument2", "comp_376", "argument2", "f_208399_"), "Ldyr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$BinaryOperation#minValue
    static jdouble get_field_minValue(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "minValue", "comp_377", "minValue", "f_208400_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$BinaryOperation#minValue
    static void set_field_minValue(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "minValue", "comp_377", "minValue", "f_208400_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$BinaryOperation#maxValue
    static jdouble get_field_maxValue(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "maxValue", "comp_378", "maxValue", "f_208401_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$BinaryOperation#maxValue
    static void set_field_maxValue(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "maxValue", "comp_378", "maxValue", "f_208401_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
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
    
    static jmethodID methodID__minValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "minValue", "comp_377", "minValue", "m_207402_"), "()D");
    }

    static jdouble _minValue(const jobject& obj) {
                
       const auto methodID = methodID__minValue();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID__maxValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "maxValue", "comp_378", "maxValue", "m_207401_"), "()D");
    }

    static jdouble _maxValue(const jobject& obj) {
                
       const auto methodID = methodID__maxValue();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID__type() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "type", "comp_374", "type", "m_207119_"), "()Ldys$y$a;");
    }

    static jobject _type(const jobject& obj) {
                
       const auto methodID = methodID__type();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__argument1() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "argument1", "comp_375", "argument1", "m_207185_"), "()Ldyr;");
    }

    static jobject _argument1(const jobject& obj) {
                
       const auto methodID = methodID__argument1();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__argument2() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "argument2", "comp_376", "argument2", "m_207190_"), "()Ldyr;");
    }

    static jobject _argument2(const jobject& obj) {
                
       const auto methodID = methodID__argument2();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_DENSITYFUNCTION_DENSITYFUNCTIONTYPES$BINARYOPERATION_HPP