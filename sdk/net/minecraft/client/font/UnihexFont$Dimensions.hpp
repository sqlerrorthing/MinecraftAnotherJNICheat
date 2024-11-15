// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_FONT_UNIHEXFONT$DIMENSIONS_HPP
#define NET_MINECRAFT_CLIENT_FONT_UNIHEXFONT$DIMENSIONS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.font.UnihexFont$Dimensions
 * Remapped: fls$c
 */
namespace UnihexFont$Dimensions {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fls$c", "net/minecraft/client/gui/font/providers/UnihexProvider$Dimensions", "net/minecraft/class_391$class_8542", "net/minecraft/client/font/UnihexFont$Dimensions", "net/minecraft/src/C_283731_$C_283736_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.client.font.UnihexFont$Dimensions#left
    static jint get_field_left(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "left", "comp_1506", "left", "f_283768_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.font.UnihexFont$Dimensions#left
    static void set_field_left(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "left", "comp_1506", "left", "f_283768_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.font.UnihexFont$Dimensions#right
    static jint get_field_right(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "right", "comp_1507", "right", "f_283776_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.font.UnihexFont$Dimensions#right
    static void set_field_right(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "right", "comp_1507", "right", "f_283776_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.client.font.UnihexFont$Dimensions#MAP_CODEC
    [[maybe_unused]] static jobject get_field_MAP_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAP_CODEC", "field_44773", "MAP_CODEC", "f_283777_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.font.UnihexFont$Dimensions#MAP_CODEC
    [[maybe_unused]] static void set_field_MAP_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAP_CODEC", "field_44773", "MAP_CODEC", "f_283777_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.font.UnihexFont$Dimensions#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_44774", "CODEC", "f_283924_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.font.UnihexFont$Dimensions#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_44774", "CODEC", "f_283924_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_packedValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "pack", "method_51670", "packedValue", "m_284373_"), "()I");
    }

    static jint packedValue(const jobject& obj) {
                
       const auto methodID = methodID_packedValue();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_pack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "pack", "method_51672", "pack", "m_284209_"), "(II)I");
    }

    static jint pack(const jint& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_pack();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getLeft() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "left", "method_51671", "getLeft", "m_284152_"), "(I)I");
    }

    static jint getLeft(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getLeft();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getRight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "right", "method_51674", "getRight", "m_284305_"), "(I)I");
    }

    static jint getRight(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getRight();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__left() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "left", "comp_1506", "left", "f_283768_"), "()I");
    }

    static jint _left(const jobject& obj) {
                
       const auto methodID = methodID__left();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__right() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "right", "comp_1507", "right", "f_283776_"), "()I");
    }

    static jint _right(const jobject& obj) {
                
       const auto methodID = methodID__right();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_FONT_UNIHEXFONT$DIMENSIONS_HPP