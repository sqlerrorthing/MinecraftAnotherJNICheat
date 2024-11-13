// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PREDICATE_NUMBERRANGE$INTRANGE_HPP
#define NET_MINECRAFT_PREDICATE_NUMBERRANGE$INTRANGE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.predicate.NumberRange$IntRange
 * Remapped: dh$d
 */
namespace NumberRange$IntRange {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dh$d", "net/minecraft/advancements/critereon/MinMaxBounds$Ints", "net/minecraft/class_2096$class_2100", "net/minecraft/predicate/NumberRange$IntRange", "net/minecraft/src/C_1863_$C_1867_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.predicate.NumberRange$IntRange#min
    static jobject get_field_min(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "min", "comp_1805", "min", "f_290888_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.NumberRange$IntRange#min
    static void set_field_min(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "min", "comp_1805", "min", "f_290888_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.NumberRange$IntRange#max
    static jobject get_field_max(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "max", "comp_1806", "max", "f_291545_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.NumberRange$IntRange#max
    static void set_field_max(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "max", "comp_1806", "max", "f_291545_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.NumberRange$IntRange#minSquared
    static jobject get_field_minSquared(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "minSq", "comp_1809", "minSquared", "f_55365_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.NumberRange$IntRange#minSquared
    static void set_field_minSquared(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "minSq", "comp_1809", "minSquared", "f_55365_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.NumberRange$IntRange#maxSquared
    static jobject get_field_maxSquared(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "maxSq", "comp_1810", "maxSquared", "f_55366_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.NumberRange$IntRange#maxSquared
    static void set_field_maxSquared(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "maxSq", "comp_1810", "maxSquared", "f_55366_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.predicate.NumberRange$IntRange#ANY
    [[maybe_unused]] static jobject get_field_ANY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ANY", "field_9708", "ANY", "f_55364_"), "Ldh$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.predicate.NumberRange$IntRange#ANY
    [[maybe_unused]] static void set_field_ANY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ANY", "field_9708", "ANY", "f_55364_"), "Ldh$d;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.predicate.NumberRange$IntRange#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CODEC", "field_45763", "CODEC", "f_290636_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.predicate.NumberRange$IntRange#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CODEC", "field_45763", "CODEC", "f_290636_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_parse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_9055", "parse", "m_55377_"), "(Lcom/mojang/brigadier/StringReader;Ljava/util/Optional;Ljava/util/Optional;)Ldh$d;");
    }

    static jobject parse(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_parse();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_square() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "squareOpt", "method_9059", "square", "m_55384_"), "(Ljava/util/Optional;)Ljava/util/Optional;");
    }

    static jobject square(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_square();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_exactly() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "exactly", "method_9058", "exactly", "m_55371_"), "(I)Ldh$d;");
    }

    static jobject exactly(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_exactly();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_between() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "between", "method_35287", "between", "m_154814_"), "(II)Ldh$d;");
    }

    static jobject between(const jint& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_between();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_atLeast() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "atLeast", "method_9053", "atLeast", "m_55386_"), "(I)Ldh$d;");
    }

    static jobject atLeast(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_atLeast();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_atMost() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "atMost", "method_35289", "atMost", "m_154819_"), "(I)Ldh$d;");
    }

    static jobject atMost(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_atMost();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "matches", "method_9054", "test", "m_55390_"), "(I)Z");
    }

    static jboolean test(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_testSqrt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "matchesSqr", "method_35288", "testSqrt", "m_154817_"), "(J)Z");
    }

    static jboolean testSqrt(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_testSqrt();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__parse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fromReader", "method_9060", "parse", "m_55375_"), "(Lcom/mojang/brigadier/StringReader;)Ldh$d;");
    }

    static jobject _parse(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__parse();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_fromStringReader() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fromReader", "method_9057", "fromStringReader", "m_55381_"), "(Lcom/mojang/brigadier/StringReader;Ljava/util/function/Function;)Ldh$d;");
    }

    static jobject fromStringReader(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_fromStringReader();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__min() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "min", "comp_1805", "min", "m_293284_"), "()Ljava/util/Optional;");
    }

    static jobject _min(const jobject& obj) {
                
       const auto methodID = methodID__min();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__max() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "max", "comp_1806", "max", "m_294019_"), "()Ljava/util/Optional;");
    }

    static jobject _max(const jobject& obj) {
                
       const auto methodID = methodID__max();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__minSquared() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "minSq", "comp_1809", "minSquared", "f_55365_"), "()Ljava/util/Optional;");
    }

    static jobject _minSquared(const jobject& obj) {
                
       const auto methodID = methodID__minSquared();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__maxSquared() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "maxSq", "comp_1810", "maxSquared", "f_55366_"), "()Ljava/util/Optional;");
    }

    static jobject _maxSquared(const jobject& obj) {
                
       const auto methodID = methodID__maxSquared();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_PREDICATE_NUMBERRANGE$INTRANGE_HPP