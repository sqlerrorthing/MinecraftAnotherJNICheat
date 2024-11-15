// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PREDICATE_ENTITY_DISTANCEPREDICATE_HPP
#define NET_MINECRAFT_PREDICATE_ENTITY_DISTANCEPREDICATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.predicate.entity.DistancePredicate
 * Remapped: bm
 */
namespace DistancePredicate {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bm", "net/minecraft/advancements/critereon/DistancePredicate", "net/minecraft/class_2025", "net/minecraft/predicate/entity/DistancePredicate", "net/minecraft/src/C_750_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.predicate.entity.DistancePredicate#x
    static jobject get_field_x(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "x", "comp_1743", "x", "f_26242_"), "Ldh$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.DistancePredicate#x
    static void set_field_x(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "x", "comp_1743", "x", "f_26242_"), "Ldh$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.DistancePredicate#y
    static jobject get_field_y(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "y", "comp_1744", "y", "f_26243_"), "Ldh$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.DistancePredicate#y
    static void set_field_y(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "y", "comp_1744", "y", "f_26243_"), "Ldh$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.DistancePredicate#z
    static jobject get_field_z(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "z", "comp_1745", "z", "f_26244_"), "Ldh$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.DistancePredicate#z
    static void set_field_z(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "z", "comp_1745", "z", "f_26244_"), "Ldh$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.DistancePredicate#horizontal
    static jobject get_field_horizontal(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "horizontal", "comp_1746", "horizontal", "f_26245_"), "Ldh$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.DistancePredicate#horizontal
    static void set_field_horizontal(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "horizontal", "comp_1746", "horizontal", "f_26245_"), "Ldh$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.DistancePredicate#absolute
    static jobject get_field_absolute(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "absolute", "comp_1747", "absolute", "f_26246_"), "Ldh$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.DistancePredicate#absolute
    static void set_field_absolute(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "absolute", "comp_1747", "absolute", "f_26246_"), "Ldh$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.predicate.entity.DistancePredicate#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_45728", "CODEC", "f_291581_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.predicate.entity.DistancePredicate#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_45728", "CODEC", "f_291581_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID__horizontal() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "horizontal", "method_8860", "horizontal", "m_148836_"), "(Ldh$c;)Lbm;");
    }

    static jobject _horizontal(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__horizontal();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__y() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "vertical", "method_8856", "y", "m_148838_"), "(Ldh$c;)Lbm;");
    }

    static jobject _y(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__y();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__absolute() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "absolute", "method_37223", "absolute", "m_148840_"), "(Ldh$c;)Lbm;");
    }

    static jobject _absolute(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__absolute();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "matches", "method_8859", "test", "m_26255_"), "(DDDDDD)Z");
    }

    static jboolean test(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jdouble& arg2, const jdouble& arg3, const jdouble& arg4, const jdouble& arg5) {
                
       const auto methodID = methodID_test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID__x() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "x", "comp_1743", "x", "f_26242_"), "()Ldh$c;");
    }

    static jobject _x(const jobject& obj) {
                
       const auto methodID = methodID__x();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID___y() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "y", "comp_1744", "y", "f_26243_"), "()Ldh$c;");
    }

    static jobject __y(const jobject& obj) {
                
       const auto methodID = methodID___y();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__z() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "z", "comp_1745", "z", "f_26244_"), "()Ldh$c;");
    }

    static jobject _z(const jobject& obj) {
                
       const auto methodID = methodID__z();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID___horizontal() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "horizontal", "comp_1746", "horizontal", "f_26245_"), "()Ldh$c;");
    }

    static jobject __horizontal(const jobject& obj) {
                
       const auto methodID = methodID___horizontal();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID___absolute() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "absolute", "comp_1747", "absolute", "f_26246_"), "()Ldh$c;");
    }

    static jobject __absolute(const jobject& obj) {
                
       const auto methodID = methodID___absolute();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_PREDICATE_ENTITY_DISTANCEPREDICATE_HPP