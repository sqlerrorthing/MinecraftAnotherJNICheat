// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PREDICATE_ENTITY_ENTITYPREDICATE$POSITIONALPREDICATES_HPP
#define NET_MINECRAFT_PREDICATE_ENTITY_ENTITYPREDICATE$POSITIONALPREDICATES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.predicate.entity.EntityPredicate$PositionalPredicates
 * Remapped: bv$b
 */
namespace EntityPredicate$PositionalPredicates {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bv$b", "net/minecraft/advancements/critereon/EntityPredicate$LocationWrapper", "net/minecraft/class_2048$class_9777", "net/minecraft/predicate/entity/EntityPredicate$PositionalPredicates", "net/minecraft/src/C_1147_$C_336557_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.predicate.entity.EntityPredicate$PositionalPredicates#located
    static jobject get_field_located(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "located", "comp_2813", "located", "f_337136_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.predicate.entity.EntityPredicate$PositionalPredicates#located
    static void set_field_located(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "located", "comp_2813", "located", "f_337136_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.predicate.entity.EntityPredicate$PositionalPredicates#steppingOn
    static jobject get_field_steppingOn(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "steppingOn", "comp_2814", "steppingOn", "f_337432_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.predicate.entity.EntityPredicate$PositionalPredicates#steppingOn
    static void set_field_steppingOn(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "steppingOn", "comp_2814", "steppingOn", "f_337432_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.predicate.entity.EntityPredicate$PositionalPredicates#affectsMovement
    static jobject get_field_affectsMovement(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "affectsMovement", "comp_2815", "affectsMovement", "f_337291_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.predicate.entity.EntityPredicate$PositionalPredicates#affectsMovement
    static void set_field_affectsMovement(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "affectsMovement", "comp_2815", "affectsMovement", "f_337291_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.predicate.entity.EntityPredicate$PositionalPredicates#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_51939", "CODEC", "f_337540_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.predicate.entity.EntityPredicate$PositionalPredicates#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_51939", "CODEC", "f_337540_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID__located() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "located", "comp_2813", "located", "f_337136_"), "()Ljava/util/Optional;");
    }

    static jobject _located(const jobject& obj) {
                
       const auto methodID = methodID__located();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__steppingOn() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "steppingOn", "comp_2814", "steppingOn", "f_337432_"), "()Ljava/util/Optional;");
    }

    static jobject _steppingOn(const jobject& obj) {
                
       const auto methodID = methodID__steppingOn();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__affectsMovement() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "affectsMovement", "comp_2815", "affectsMovement", "f_337291_"), "()Ljava/util/Optional;");
    }

    static jobject _affectsMovement(const jobject& obj) {
                
       const auto methodID = methodID__affectsMovement();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_PREDICATE_ENTITY_ENTITYPREDICATE$POSITIONALPREDICATES_HPP