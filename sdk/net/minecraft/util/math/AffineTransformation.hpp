// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_MATH_AFFINETRANSFORMATION_HPP
#define NET_MINECRAFT_UTIL_MATH_AFFINETRANSFORMATION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.math.AffineTransformation
 * Remapped: j
 */
namespace AffineTransformation {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("j", "com/mojang/math/Transformation", "net/minecraft/class_4590", "net/minecraft/util/math/AffineTransformation", "net/minecraft/src/C_4649_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.util.math.AffineTransformation#matrix
    static jobject get_field_matrix(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "matrix", "field_20900", "matrix", "f_121078_"), "Lorg/joml/Matrix4f;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.math.AffineTransformation#matrix
    static void set_field_matrix(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "matrix", "field_20900", "matrix", "f_121078_"), "Lorg/joml/Matrix4f;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.util.math.AffineTransformation#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_42532", "CODEC", "f_268453_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.math.AffineTransformation#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_42532", "CODEC", "f_268453_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.math.AffineTransformation#ANY_CODEC
    [[maybe_unused]] static jobject get_field_ANY_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EXTENDED_CODEC", "field_42533", "ANY_CODEC", "f_268620_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.math.AffineTransformation#ANY_CODEC
    [[maybe_unused]] static void set_field_ANY_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EXTENDED_CODEC", "field_42533", "ANY_CODEC", "f_268620_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.util.math.AffineTransformation#initialized
    static jboolean get_field_initialized(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "decomposed", "field_20901", "initialized", "f_121079_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.math.AffineTransformation#initialized
    static void set_field_initialized(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "decomposed", "field_20901", "initialized", "f_121079_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.math.AffineTransformation#translation
    static jobject get_field_translation(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "translation", "field_20902", "translation", "f_121080_"), "Lorg/joml/Vector3f;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.math.AffineTransformation#translation
    static void set_field_translation(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "translation", "field_20902", "translation", "f_121080_"), "Lorg/joml/Vector3f;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.math.AffineTransformation#leftRotation
    static jobject get_field_leftRotation(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "leftRotation", "field_20903", "leftRotation", "f_121081_"), "Lorg/joml/Quaternionf;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.math.AffineTransformation#leftRotation
    static void set_field_leftRotation(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "leftRotation", "field_20903", "leftRotation", "f_121081_"), "Lorg/joml/Quaternionf;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.math.AffineTransformation#scale
    static jobject get_field_scale(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "scale", "field_20904", "scale", "f_121082_"), "Lorg/joml/Vector3f;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.math.AffineTransformation#scale
    static void set_field_scale(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "scale", "field_20904", "scale", "f_121082_"), "Lorg/joml/Vector3f;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.math.AffineTransformation#rightRotation
    static jobject get_field_rightRotation(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "rightRotation", "field_20905", "rightRotation", "f_121083_"), "Lorg/joml/Quaternionf;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.math.AffineTransformation#rightRotation
    static void set_field_rightRotation(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "rightRotation", "field_20905", "rightRotation", "f_121083_"), "Lorg/joml/Quaternionf;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.util.math.AffineTransformation#IDENTITY
    [[maybe_unused]] static jobject get_field_IDENTITY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "IDENTITY", "field_20906", "IDENTITY", "f_121084_"), "Lj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.math.AffineTransformation#IDENTITY
    [[maybe_unused]] static void set_field_IDENTITY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "IDENTITY", "field_20906", "IDENTITY", "f_121084_"), "Lj;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_identity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "identity", "method_22931", "identity", "m_121093_"), "()Lj;");
    }

    static jobject identity() {
       const auto clazz = self();
       const auto methodID = methodID_identity();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_multiply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "compose", "method_22933", "multiply", "m_121096_"), "(Lj;)Lj;");
    }

    static jobject multiply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_multiply();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_invert() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "inverse", "method_22935", "invert", "m_121103_"), "()Lj;");
    }

    static jobject invert(const jobject& obj) {
                
       const auto methodID = methodID_invert();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_init() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "ensureDecomposed", "method_22938", "init", "m_121106_"), "()V");
    }

    static void init(const jobject& obj) {
                
       const auto methodID = methodID_init();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_setup() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "compose", "method_22934", "setup", "m_253227_"), "(Lorg/joml/Vector3f;Lorg/joml/Quaternionf;Lorg/joml/Vector3f;Lorg/joml/Quaternionf;)Lorg/joml/Matrix4f;");
    }

    static jobject setup(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_setup();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getMatrix() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getMatrix", "method_22936", "getMatrix", "m_252783_"), "()Lorg/joml/Matrix4f;");
    }

    static jobject getMatrix(const jobject& obj) {
                
       const auto methodID = methodID_getMatrix();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTranslation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getTranslation", "method_35865", "getTranslation", "m_252829_"), "()Lorg/joml/Vector3f;");
    }

    static jobject getTranslation(const jobject& obj) {
                
       const auto methodID = methodID_getTranslation();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getLeftRotation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getLeftRotation", "method_22937", "getLeftRotation", "m_253244_"), "()Lorg/joml/Quaternionf;");
    }

    static jobject getLeftRotation(const jobject& obj) {
                
       const auto methodID = methodID_getLeftRotation();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getScale() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getScale", "method_35866", "getScale", "m_252900_"), "()Lorg/joml/Vector3f;");
    }

    static jobject getScale(const jobject& obj) {
                
       const auto methodID = methodID_getScale();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRightRotation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getRightRotation", "method_35867", "getRightRotation", "m_252848_"), "()Lorg/joml/Quaternionf;");
    }

    static jobject getRightRotation(const jobject& obj) {
                
       const auto methodID = methodID_getRightRotation();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_interpolate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "slerp", "method_35864", "interpolate", "m_175937_"), "(Lj;F)Lj;");
    }

    static jobject interpolate(const jobject& obj, const jobject& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_interpolate();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_UTIL_MATH_AFFINETRANSFORMATION_HPP