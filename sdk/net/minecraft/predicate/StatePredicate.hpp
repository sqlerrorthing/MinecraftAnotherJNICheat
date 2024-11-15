// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PREDICATE_STATEPREDICATE_HPP
#define NET_MINECRAFT_PREDICATE_STATEPREDICATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.predicate.StatePredicate
 * Remapped: eb
 */
namespace StatePredicate {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eb", "net/minecraft/advancements/critereon/StatePropertiesPredicate", "net/minecraft/class_4559", "net/minecraft/predicate/StatePredicate", "net/minecraft/src/C_2332_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.predicate.StatePredicate#conditions
    static jobject get_field_conditions(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "properties", "comp_1830", "conditions", "f_67659_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.StatePredicate#conditions
    static void set_field_conditions(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "properties", "comp_1830", "conditions", "f_67659_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.predicate.StatePredicate#CONDITION_LIST_CODEC
    [[maybe_unused]] static jobject get_field_CONDITION_LIST_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "PROPERTIES_CODEC", "field_45778", "CONDITION_LIST_CODEC", "f_291220_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.predicate.StatePredicate#CONDITION_LIST_CODEC
    [[maybe_unused]] static void set_field_CONDITION_LIST_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "PROPERTIES_CODEC", "field_45778", "CONDITION_LIST_CODEC", "f_291220_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.predicate.StatePredicate#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_45777", "CODEC", "f_291190_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.predicate.StatePredicate#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_45777", "CODEC", "f_291190_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.predicate.StatePredicate#PACKET_CODEC
    [[maybe_unused]] static jobject get_field_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STREAM_CODEC", "field_49396", "PACKET_CODEC", "f_316592_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.predicate.StatePredicate#PACKET_CODEC
    [[maybe_unused]] static void set_field_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STREAM_CODEC", "field_49396", "PACKET_CODEC", "f_316592_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "matches", "method_22515", "test", "m_67669_"), "(Ldtd;Ldte;)Z");
    }

    static jboolean test(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "matches", "method_22514", "test", "m_67667_"), "(Ldtc;)Z");
    }

    static jboolean _test(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID___test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "matches", "method_22518", "test", "m_67684_"), "(Lepe;)Z");
    }

    static jboolean __test(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID___test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_findMissing() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "checkState", "method_53235", "findMissing", "m_294047_"), "(Ldtd;)Ljava/util/Optional;");
    }

    static jobject findMissing(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_findMissing();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__conditions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "properties", "comp_1830", "conditions", "f_67659_"), "()Ljava/util/List;");
    }

    static jobject _conditions(const jobject& obj) {
                
       const auto methodID = methodID__conditions();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_PREDICATE_STATEPREDICATE_HPP