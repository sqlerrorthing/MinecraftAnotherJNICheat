// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PREDICATE_ENTITY_PLAYERPREDICATE$STATMATCHER_HPP
#define NET_MINECRAFT_PREDICATE_ENTITY_PLAYERPREDICATE$STATMATCHER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.predicate.entity.PlayerPredicate$StatMatcher
 * Remapped: dp$e
 */
namespace PlayerPredicate$StatMatcher {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dp$e", "net/minecraft/advancements/critereon/PlayerPredicate$StatMatcher", "net/minecraft/class_4553$class_8749", "net/minecraft/predicate/entity/PlayerPredicate$StatMatcher", "net/minecraft/src/C_2120_$C_290286_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.predicate.entity.PlayerPredicate$StatMatcher#type
    static jobject get_field_type(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "type", "comp_1825", "type", "f_290937_"), "Lavy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.PlayerPredicate$StatMatcher#type
    static void set_field_type(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "type", "comp_1825", "type", "f_290937_"), "Lavy;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.PlayerPredicate$StatMatcher#value
    static jobject get_field_value(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "value", "comp_1826", "value", "f_291891_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.PlayerPredicate$StatMatcher#value
    static void set_field_value(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "value", "comp_1826", "value", "f_291891_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.PlayerPredicate$StatMatcher#range
    static jobject get_field_range(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "range", "comp_1827", "range", "f_291204_"), "Ldh$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.PlayerPredicate$StatMatcher#range
    static void set_field_range(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "range", "comp_1827", "range", "f_291204_"), "Ldh$d;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.PlayerPredicate$StatMatcher#stat
    static jobject get_field_stat(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "stat", "comp_1828", "stat", "f_291673_"), "Ljava/util/function/Supplier;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.PlayerPredicate$StatMatcher#stat
    static void set_field_stat(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "stat", "comp_1828", "stat", "f_291673_"), "Ljava/util/function/Supplier;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.predicate.entity.PlayerPredicate$StatMatcher#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_45774", "CODEC", "f_290355_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.predicate.entity.PlayerPredicate$StatMatcher#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_45774", "CODEC", "f_290355_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_createCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createTypedCodec", "method_53224", "createCodec", "m_293532_"), "(Lavy;)Lcom/mojang/serialization/MapCodec;");
    }

    static jobject createCodec(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_createCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "matches", "method_53228", "test", "m_294347_"), "(Lawa;)Z");
    }

    static jboolean test(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__type() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "comp_1825", "type", "f_290937_"), "()Lavy;");
    }

    static jobject _type(const jobject& obj) {
                
       const auto methodID = methodID__type();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__value() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "value", "comp_1826", "value", "f_291891_"), "()Ljm;");
    }

    static jobject _value(const jobject& obj) {
                
       const auto methodID = methodID__value();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__range() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "range", "comp_1827", "range", "f_291204_"), "()Ldh$d;");
    }

    static jobject _range(const jobject& obj) {
                
       const auto methodID = methodID__range();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__stat() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "stat", "comp_1828", "stat", "f_291673_"), "()Ljava/util/function/Supplier;");
    }

    static jobject _stat(const jobject& obj) {
                
       const auto methodID = methodID__stat();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_PREDICATE_ENTITY_PLAYERPREDICATE$STATMATCHER_HPP