// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMPONENT_TYPE_MAPDECORATIONSCOMPONENT$DECORATION_HPP
#define NET_MINECRAFT_COMPONENT_TYPE_MAPDECORATIONSCOMPONENT$DECORATION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.component.type.MapDecorationsComponent$Decoration
 * Remapped: cxr$a
 */
namespace MapDecorationsComponent$Decoration {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cxr$a", "net/minecraft/world/item/component/MapDecorations$Entry", "net/minecraft/class_9292$class_9293", "net/minecraft/component/type/MapDecorationsComponent$Decoration", "net/minecraft/src/C_313754_$C_313620_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.component.type.MapDecorationsComponent$Decoration#type
    static jobject get_field_type(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "type", "comp_2405", "type", "f_315480_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.component.type.MapDecorationsComponent$Decoration#type
    static void set_field_type(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "type", "comp_2405", "type", "f_315480_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.component.type.MapDecorationsComponent$Decoration#x
    static jdouble get_field_x(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "x", "comp_2406", "x", "f_316470_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.component.type.MapDecorationsComponent$Decoration#x
    static void set_field_x(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "x", "comp_2406", "x", "f_316470_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.component.type.MapDecorationsComponent$Decoration#z
    static jdouble get_field_z(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "z", "comp_2407", "z", "f_314992_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.component.type.MapDecorationsComponent$Decoration#z
    static void set_field_z(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "z", "comp_2407", "z", "f_314992_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.component.type.MapDecorationsComponent$Decoration#rotation
    static jfloat get_field_rotation(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "rotation", "comp_2408", "rotation", "f_315365_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.component.type.MapDecorationsComponent$Decoration#rotation
    static void set_field_rotation(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "rotation", "comp_2408", "rotation", "f_315365_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.component.type.MapDecorationsComponent$Decoration#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_49349", "CODEC", "f_315452_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.component.type.MapDecorationsComponent$Decoration#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_49349", "CODEC", "f_315452_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID__type() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "comp_2405", "type", "f_315480_"), "()Ljm;");
    }

    static jobject _type(const jobject& obj) {
                
       const auto methodID = methodID__type();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__x() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "x", "comp_2406", "x", "f_316470_"), "()D");
    }

    static jdouble _x(const jobject& obj) {
                
       const auto methodID = methodID__x();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID__z() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "z", "comp_2407", "z", "f_314992_"), "()D");
    }

    static jdouble _z(const jobject& obj) {
                
       const auto methodID = methodID__z();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID__rotation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "rotation", "comp_2408", "rotation", "f_315365_"), "()F");
    }

    static jfloat _rotation(const jobject& obj) {
                
       const auto methodID = methodID__rotation();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_COMPONENT_TYPE_MAPDECORATIONSCOMPONENT$DECORATION_HPP