// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_MATH_VEC2F_HPP
#define NET_MINECRAFT_UTIL_MATH_VEC2F_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.math.Vec2f
 * Remapped: exb
 */
namespace Vec2f {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("exb", "net/minecraft/world/phys/Vec2", "net/minecraft/class_241", "net/minecraft/util/math/Vec2f", "net/minecraft/src/C_3045_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.util.math.Vec2f#ZERO
    [[maybe_unused]] static jobject get_field_ZERO() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ZERO", "field_1340", "ZERO", "f_82462_"), "Lexb;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.math.Vec2f#ZERO
    [[maybe_unused]] static void set_field_ZERO(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ZERO", "field_1340", "ZERO", "f_82462_"), "Lexb;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.math.Vec2f#SOUTH_EAST_UNIT
    [[maybe_unused]] static jobject get_field_SOUTH_EAST_UNIT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ONE", "field_1335", "SOUTH_EAST_UNIT", "f_82463_"), "Lexb;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.math.Vec2f#SOUTH_EAST_UNIT
    [[maybe_unused]] static void set_field_SOUTH_EAST_UNIT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ONE", "field_1335", "SOUTH_EAST_UNIT", "f_82463_"), "Lexb;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.math.Vec2f#EAST_UNIT
    [[maybe_unused]] static jobject get_field_EAST_UNIT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "UNIT_X", "field_1341", "EAST_UNIT", "f_82464_"), "Lexb;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.math.Vec2f#EAST_UNIT
    [[maybe_unused]] static void set_field_EAST_UNIT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "UNIT_X", "field_1341", "EAST_UNIT", "f_82464_"), "Lexb;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.math.Vec2f#WEST_UNIT
    [[maybe_unused]] static jobject get_field_WEST_UNIT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "NEG_UNIT_X", "field_1338", "WEST_UNIT", "f_82465_"), "Lexb;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.math.Vec2f#WEST_UNIT
    [[maybe_unused]] static void set_field_WEST_UNIT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "NEG_UNIT_X", "field_1338", "WEST_UNIT", "f_82465_"), "Lexb;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.math.Vec2f#SOUTH_UNIT
    [[maybe_unused]] static jobject get_field_SOUTH_UNIT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "UNIT_Y", "field_1336", "SOUTH_UNIT", "f_82466_"), "Lexb;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.math.Vec2f#SOUTH_UNIT
    [[maybe_unused]] static void set_field_SOUTH_UNIT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "UNIT_Y", "field_1336", "SOUTH_UNIT", "f_82466_"), "Lexb;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.math.Vec2f#NORTH_UNIT
    [[maybe_unused]] static jobject get_field_NORTH_UNIT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "NEG_UNIT_Y", "field_1344", "NORTH_UNIT", "f_82467_"), "Lexb;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.math.Vec2f#NORTH_UNIT
    [[maybe_unused]] static void set_field_NORTH_UNIT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "NEG_UNIT_Y", "field_1344", "NORTH_UNIT", "f_82467_"), "Lexb;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.math.Vec2f#MAX_SOUTH_EAST
    [[maybe_unused]] static jobject get_field_MAX_SOUTH_EAST() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "MAX", "field_1337", "MAX_SOUTH_EAST", "f_82468_"), "Lexb;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.math.Vec2f#MAX_SOUTH_EAST
    [[maybe_unused]] static void set_field_MAX_SOUTH_EAST(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "MAX", "field_1337", "MAX_SOUTH_EAST", "f_82468_"), "Lexb;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.math.Vec2f#MIN_SOUTH_EAST
    [[maybe_unused]] static jobject get_field_MIN_SOUTH_EAST() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "MIN", "field_1339", "MIN_SOUTH_EAST", "f_82469_"), "Lexb;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.math.Vec2f#MIN_SOUTH_EAST
    [[maybe_unused]] static void set_field_MIN_SOUTH_EAST(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "MIN", "field_1339", "MIN_SOUTH_EAST", "f_82469_"), "Lexb;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for public field net.minecraft.util.math.Vec2f#x
    static jfloat get_field_x(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "x", "field_1343", "x", "f_82470_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static public field net.minecraft.util.math.Vec2f#x
    static void set_field_x(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "x", "field_1343", "x", "f_82470_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.util.math.Vec2f#y
    static jfloat get_field_y(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "y", "field_1342", "y", "f_82471_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static public field net.minecraft.util.math.Vec2f#y
    static void set_field_y(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "y", "field_1342", "y", "f_82471_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    static jmethodID methodID_multiply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "scale", "method_35582", "multiply", "m_165903_"), "(F)Lexb;");
    }

    static jobject multiply(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_multiply();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_dot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "dot", "method_35583", "dot", "m_165905_"), "(Lexb;)F");
    }

    static jfloat dot(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_dot();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "add", "method_35586", "add", "m_165910_"), "(Lexb;)Lexb;");
    }

    static jobject add(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_add();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "add", "method_35585", "add", "m_165908_"), "(F)Lexb;");
    }

    static jobject _add(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID__add();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_equals() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "equals", "method_1016", "equals", "m_82476_"), "(Lexb;)Z");
    }

    static jboolean equals(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_equals();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_normalize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "normalized", "method_35581", "normalize", "m_165902_"), "()Lexb;");
    }

    static jobject normalize(const jobject& obj) {
                
       const auto methodID = methodID_normalize();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_length() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "length", "method_35584", "length", "m_165907_"), "()F");
    }

    static jfloat length(const jobject& obj) {
                
       const auto methodID = methodID_length();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_lengthSquared() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "lengthSquared", "method_35587", "lengthSquared", "m_165912_"), "()F");
    }

    static jfloat lengthSquared(const jobject& obj) {
                
       const auto methodID = methodID_lengthSquared();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_distanceSquared() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "distanceToSqr", "method_35589", "distanceSquared", "m_165914_"), "(Lexb;)F");
    }

    static jfloat distanceSquared(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_distanceSquared();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_negate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "negated", "method_35588", "negate", "m_165913_"), "()Lexb;");
    }

    static jobject negate(const jobject& obj) {
                
       const auto methodID = methodID_negate();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_MATH_VEC2F_HPP