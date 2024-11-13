// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_SHAPE_SLICEDVOXELSHAPE_HPP
#define NET_MINECRAFT_UTIL_SHAPE_SLICEDVOXELSHAPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.shape.SlicedVoxelShape
 * Remapped: ext
 */
namespace SlicedVoxelShape {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ext", "net/minecraft/world/phys/shapes/SliceShape", "net/minecraft/class_263", "net/minecraft/util/shape/SlicedVoxelShape", "net/minecraft/src/C_3070_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.util.shape.SlicedVoxelShape#shape
    static jobject get_field_shape(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "delegate", "field_1397", "shape", "f_83168_"), "Lexv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.shape.SlicedVoxelShape#shape
    static void set_field_shape(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "delegate", "field_1397", "shape", "f_83168_"), "Lexv;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.shape.SlicedVoxelShape#axis
    static jobject get_field_axis(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "axis", "field_1396", "axis", "f_83169_"), "Lji$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.shape.SlicedVoxelShape#axis
    static void set_field_axis(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "axis", "field_1396", "axis", "f_83169_"), "Lji$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.util.shape.SlicedVoxelShape#POINTS
    [[maybe_unused]] static jobject get_field_POINTS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SLICE_COORDS", "field_1395", "POINTS", "f_83170_"), "Lit/unimi/dsi/fastutil/doubles/DoubleList;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.shape.SlicedVoxelShape#POINTS
    [[maybe_unused]] static void set_field_POINTS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SLICE_COORDS", "field_1395", "POINTS", "f_83170_"), "Lit/unimi/dsi/fastutil/doubles/DoubleList;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_createVoxelSet() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "makeSlice", "method_1088", "createVoxelSet", "m_83176_"), "(Lexl;Lji$a;I)Lexl;");
    }

    static jobject createVoxelSet(const jobject& arg0, const jobject& arg1, const jint& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_createVoxelSet();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getPointPositions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getCoords", "method_1109", "getPointPositions", "m_7700_"), "(Lji$a;)Lit/unimi/dsi/fastutil/doubles/DoubleList;");
    }

    static jobject getPointPositions(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getPointPositions();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_UTIL_SHAPE_SLICEDVOXELSHAPE_HPP