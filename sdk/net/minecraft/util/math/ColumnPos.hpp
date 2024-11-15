// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_MATH_COLUMNPOS_HPP
#define NET_MINECRAFT_UTIL_MATH_COLUMNPOS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.math.ColumnPos
 * Remapped: aqi
 */
namespace ColumnPos {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aqi", "net/minecraft/server/level/ColumnPos", "net/minecraft/class_2265", "net/minecraft/util/math/ColumnPos", "net/minecraft/src/C_5440_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.util.math.ColumnPos#x
    static jint get_field_x(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "x", "comp_638", "x", "f_140723_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.math.ColumnPos#x
    static void set_field_x(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "x", "comp_638", "x", "f_140723_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.math.ColumnPos#z
    static jint get_field_z(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "z", "comp_639", "z", "f_140724_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.math.ColumnPos#z
    static void set_field_z(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "z", "comp_639", "z", "f_140724_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.util.math.ColumnPos#field_29757
    [[maybe_unused]] static jlong get_field_field_29757() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "COORD_BITS", "field_29757", "field_29757", "f_143191_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticLongField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.math.ColumnPos#field_29757
    [[maybe_unused]] static void set_field_field_29757(const jlong &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "COORD_BITS", "field_29757", "field_29757", "f_143191_"), "J");
        return MinecraftSDK::env->SetStaticLongField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.util.math.ColumnPos#field_29758
    [[maybe_unused]] static jlong get_field_field_29758() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "COORD_MASK", "field_29758", "field_29758", "f_143192_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticLongField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.math.ColumnPos#field_29758
    [[maybe_unused]] static void set_field_field_29758(const jlong &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "COORD_MASK", "field_29758", "field_29758", "f_143192_"), "J");
        return MinecraftSDK::env->SetStaticLongField(clazz, fieldID, value);
    };

    static jmethodID methodID_toChunkPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "toChunkPos", "method_34873", "toChunkPos", "m_143196_"), "()Ldcd;");
    }

    static jobject toChunkPos(const jobject& obj) {
                
       const auto methodID = methodID_toChunkPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_pack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "toLong", "method_34875", "pack", "m_143200_"), "()J");
    }

    static jlong pack(const jobject& obj) {
                
       const auto methodID = methodID_pack();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID__pack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "asLong", "method_34874", "pack", "m_143197_"), "(II)J");
    }

    static jlong _pack(const jint& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__pack();
       return MinecraftSDK::env->CallStaticLongMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getX", "method_42106", "getX", "m_214969_"), "(J)I");
    }

    static jint getX(const jlong& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getX();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getZ() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getZ", "method_42107", "getZ", "m_214971_"), "(J)I");
    }

    static jint getZ(const jlong& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getZ();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__x() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "x", "comp_638", "x", "f_140723_"), "()I");
    }

    static jint _x(const jobject& obj) {
                
       const auto methodID = methodID__x();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__z() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "z", "comp_639", "z", "f_140724_"), "()I");
    }

    static jint _z(const jobject& obj) {
                
       const auto methodID = methodID__z();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_MATH_COLUMNPOS_HPP