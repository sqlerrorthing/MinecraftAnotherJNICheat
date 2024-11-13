// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_DENSITYFUNCTION_DENSITYFUNCTIONTYPES$UNARYOPERATION_HPP
#define NET_MINECRAFT_WORLD_GEN_DENSITYFUNCTION_DENSITYFUNCTIONTYPES$UNARYOPERATION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.densityfunction.DensityFunctionTypes$UnaryOperation
 * Remapped: dys$k
 */
namespace DensityFunctionTypes$UnaryOperation {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dys$k", "net/minecraft/world/level/levelgen/DensityFunctions$Mapped", "net/minecraft/class_6916$class_6925", "net/minecraft/world/gen/densityfunction/DensityFunctionTypes$UnaryOperation", "net/minecraft/src/C_206968_$C_206983_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$UnaryOperation#type
    static jobject get_field_type(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "type", "comp_382", "type", "f_208654_"), "Ldys$k$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$UnaryOperation#type
    static void set_field_type(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "type", "comp_382", "type", "f_208654_"), "Ldys$k$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$UnaryOperation#input
    static jobject get_field_input(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "input", "comp_380", "input", "f_208655_"), "Ldyr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$UnaryOperation#input
    static void set_field_input(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "input", "comp_380", "input", "f_208655_"), "Ldyr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$UnaryOperation#minValue
    static jdouble get_field_minValue(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "minValue", "comp_377", "minValue", "f_208656_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$UnaryOperation#minValue
    static void set_field_minValue(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "minValue", "comp_377", "minValue", "f_208656_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$UnaryOperation#maxValue
    static jdouble get_field_maxValue(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "maxValue", "comp_378", "maxValue", "f_208657_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$UnaryOperation#maxValue
    static void set_field_maxValue(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "maxValue", "comp_378", "maxValue", "f_208657_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_41079", "create", "m_208671_"), "(Ldys$k$a;Ldyr;)Ldys$k;");
    }

    static jobject create(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "transform", "method_40521", "apply", "m_208668_"), "(Ldys$k$a;D)D");
    }

    static jdouble apply(const jobject& arg0, const jdouble& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_apply();
       return MinecraftSDK::env->CallStaticDoubleMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "transform", "method_40520", "apply", "m_207382_"), "(D)D");
    }

    static jdouble _apply(const jobject& obj, const jdouble& arg0) {
                
       const auto methodID = methodID__apply();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID___apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "mapAll", "method_41080", "apply", "m_207456_"), "(Ldyr$f;)Ldys$k;");
    }

    static jobject __apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID___apply();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getCodecHolder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "codec", "method_41062", "getCodecHolder", "m_214023_"), "()Layh;");
    }

    static jobject getCodecHolder(const jobject& obj) {
                
       const auto methodID = methodID_getCodecHolder();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__type() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "type", "comp_382", "type", "f_208654_"), "()Ldys$k$a;");
    }

    static jobject _type(const jobject& obj) {
                
       const auto methodID = methodID__type();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__input() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aG_", "input", "comp_380", "input", "m_207305_"), "()Ldyr;");
    }

    static jobject _input(const jobject& obj) {
                
       const auto methodID = methodID__input();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
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
    
};

#endif // NET_MINECRAFT_WORLD_GEN_DENSITYFUNCTION_DENSITYFUNCTIONTYPES$UNARYOPERATION_HPP