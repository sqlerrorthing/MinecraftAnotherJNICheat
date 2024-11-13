// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PREDICATE_ENTITY_MOVEMENTPREDICATE_HPP
#define NET_MINECRAFT_PREDICATE_ENTITY_MOVEMENTPREDICATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.predicate.entity.MovementPredicate
 * Remapped: dj
 */
namespace MovementPredicate {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dj", "net/minecraft/advancements/critereon/MovementPredicate", "net/minecraft/class_9750", "net/minecraft/predicate/entity/MovementPredicate", "net/minecraft/src/C_336431_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.predicate.entity.MovementPredicate#x
    static jobject get_field_x(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "x", "comp_2772", "x", "f_337025_"), "Ldh$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.MovementPredicate#x
    static void set_field_x(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "x", "comp_2772", "x", "f_337025_"), "Ldh$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.MovementPredicate#y
    static jobject get_field_y(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "y", "comp_2773", "y", "f_337404_"), "Ldh$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.MovementPredicate#y
    static void set_field_y(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "y", "comp_2773", "y", "f_337404_"), "Ldh$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.MovementPredicate#z
    static jobject get_field_z(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "z", "comp_2774", "z", "f_337000_"), "Ldh$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.MovementPredicate#z
    static void set_field_z(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "z", "comp_2774", "z", "f_337000_"), "Ldh$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.MovementPredicate#speed
    static jobject get_field_speed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "speed", "comp_2775", "speed", "f_336675_"), "Ldh$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.MovementPredicate#speed
    static void set_field_speed(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "speed", "comp_2775", "speed", "f_336675_"), "Ldh$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.MovementPredicate#horizontalSpeed
    static jobject get_field_horizontalSpeed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "horizontalSpeed", "comp_2776", "horizontalSpeed", "f_337632_"), "Ldh$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.MovementPredicate#horizontalSpeed
    static void set_field_horizontalSpeed(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "horizontalSpeed", "comp_2776", "horizontalSpeed", "f_337632_"), "Ldh$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.MovementPredicate#verticalSpeed
    static jobject get_field_verticalSpeed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "verticalSpeed", "comp_2777", "verticalSpeed", "f_336606_"), "Ldh$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.MovementPredicate#verticalSpeed
    static void set_field_verticalSpeed(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "verticalSpeed", "comp_2777", "verticalSpeed", "f_336606_"), "Ldh$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.MovementPredicate#fallDistance
    static jobject get_field_fallDistance(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "fallDistance", "comp_2778", "fallDistance", "f_336746_"), "Ldh$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.MovementPredicate#fallDistance
    static void set_field_fallDistance(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "fallDistance", "comp_2778", "fallDistance", "f_336746_"), "Ldh$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.predicate.entity.MovementPredicate#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_51786", "CODEC", "f_336765_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.predicate.entity.MovementPredicate#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_51786", "CODEC", "f_336765_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID__speed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "speed", "method_60279", "speed", "m_340444_"), "(Ldh$c;)Ldj;");
    }

    static jobject _speed(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__speed();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__horizontalSpeed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "horizontalSpeed", "method_60280", "horizontalSpeed", "m_338516_"), "(Ldh$c;)Ldj;");
    }

    static jobject _horizontalSpeed(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__horizontalSpeed();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__verticalSpeed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "verticalSpeed", "method_60281", "verticalSpeed", "m_339474_"), "(Ldh$c;)Ldj;");
    }

    static jobject _verticalSpeed(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__verticalSpeed();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__fallDistance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "fallDistance", "method_60282", "fallDistance", "m_339134_"), "(Ldh$c;)Ldj;");
    }

    static jobject _fallDistance(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__fallDistance();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "matches", "method_60277", "test", "m_339525_"), "(DDDD)Z");
    }

    static jboolean test(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jdouble& arg2, const jdouble& arg3) {
                
       const auto methodID = methodID_test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID__x() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "x", "comp_2772", "x", "f_337025_"), "()Ldh$c;");
    }

    static jobject _x(const jobject& obj) {
                
       const auto methodID = methodID__x();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__y() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "y", "comp_2773", "y", "f_337404_"), "()Ldh$c;");
    }

    static jobject _y(const jobject& obj) {
                
       const auto methodID = methodID__y();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__z() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "z", "comp_2774", "z", "f_337000_"), "()Ldh$c;");
    }

    static jobject _z(const jobject& obj) {
                
       const auto methodID = methodID__z();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID___speed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "speed", "comp_2775", "speed", "f_336675_"), "()Ldh$c;");
    }

    static jobject __speed(const jobject& obj) {
                
       const auto methodID = methodID___speed();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID___horizontalSpeed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "horizontalSpeed", "comp_2776", "horizontalSpeed", "f_337632_"), "()Ldh$c;");
    }

    static jobject __horizontalSpeed(const jobject& obj) {
                
       const auto methodID = methodID___horizontalSpeed();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID___verticalSpeed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "verticalSpeed", "comp_2777", "verticalSpeed", "f_336606_"), "()Ldh$c;");
    }

    static jobject __verticalSpeed(const jobject& obj) {
                
       const auto methodID = methodID___verticalSpeed();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID___fallDistance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "fallDistance", "comp_2778", "fallDistance", "f_336746_"), "()Ldh$c;");
    }

    static jobject __fallDistance(const jobject& obj) {
                
       const auto methodID = methodID___fallDistance();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_PREDICATE_ENTITY_MOVEMENTPREDICATE_HPP