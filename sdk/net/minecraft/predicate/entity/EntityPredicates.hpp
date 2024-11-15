// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PREDICATE_ENTITY_ENTITYPREDICATES_HPP
#define NET_MINECRAFT_PREDICATE_ENTITY_ENTITYPREDICATES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.predicate.entity.EntityPredicates
 * Remapped: bsw
 */
namespace EntityPredicates {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bsw", "net/minecraft/world/entity/EntitySelector", "net/minecraft/class_1301", "net/minecraft/predicate/entity/EntityPredicates", "net/minecraft/src/C_511_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.predicate.entity.EntityPredicates#VALID_ENTITY
    [[maybe_unused]] static jobject get_field_VALID_ENTITY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ENTITY_STILL_ALIVE", "field_6154", "VALID_ENTITY", "f_20402_"), "Ljava/util/function/Predicate;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.predicate.entity.EntityPredicates#VALID_ENTITY
    [[maybe_unused]] static void set_field_VALID_ENTITY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ENTITY_STILL_ALIVE", "field_6154", "VALID_ENTITY", "f_20402_"), "Ljava/util/function/Predicate;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.predicate.entity.EntityPredicates#VALID_LIVING_ENTITY
    [[maybe_unused]] static jobject get_field_VALID_LIVING_ENTITY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LIVING_ENTITY_STILL_ALIVE", "field_6157", "VALID_LIVING_ENTITY", "f_20403_"), "Ljava/util/function/Predicate;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.predicate.entity.EntityPredicates#VALID_LIVING_ENTITY
    [[maybe_unused]] static void set_field_VALID_LIVING_ENTITY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LIVING_ENTITY_STILL_ALIVE", "field_6157", "VALID_LIVING_ENTITY", "f_20403_"), "Ljava/util/function/Predicate;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.predicate.entity.EntityPredicates#NOT_MOUNTED
    [[maybe_unused]] static jobject get_field_NOT_MOUNTED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ENTITY_NOT_BEING_RIDDEN", "field_6153", "NOT_MOUNTED", "f_20404_"), "Ljava/util/function/Predicate;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.predicate.entity.EntityPredicates#NOT_MOUNTED
    [[maybe_unused]] static void set_field_NOT_MOUNTED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ENTITY_NOT_BEING_RIDDEN", "field_6153", "NOT_MOUNTED", "f_20404_"), "Ljava/util/function/Predicate;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.predicate.entity.EntityPredicates#VALID_INVENTORIES
    [[maybe_unused]] static jobject get_field_VALID_INVENTORIES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CONTAINER_ENTITY_SELECTOR", "field_6152", "VALID_INVENTORIES", "f_20405_"), "Ljava/util/function/Predicate;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.predicate.entity.EntityPredicates#VALID_INVENTORIES
    [[maybe_unused]] static void set_field_VALID_INVENTORIES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CONTAINER_ENTITY_SELECTOR", "field_6152", "VALID_INVENTORIES", "f_20405_"), "Ljava/util/function/Predicate;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.predicate.entity.EntityPredicates#EXCEPT_CREATIVE_OR_SPECTATOR
    [[maybe_unused]] static jobject get_field_EXCEPT_CREATIVE_OR_SPECTATOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "NO_CREATIVE_OR_SPECTATOR", "field_6156", "EXCEPT_CREATIVE_OR_SPECTATOR", "f_20406_"), "Ljava/util/function/Predicate;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.predicate.entity.EntityPredicates#EXCEPT_CREATIVE_OR_SPECTATOR
    [[maybe_unused]] static void set_field_EXCEPT_CREATIVE_OR_SPECTATOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "NO_CREATIVE_OR_SPECTATOR", "field_6156", "EXCEPT_CREATIVE_OR_SPECTATOR", "f_20406_"), "Ljava/util/function/Predicate;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.predicate.entity.EntityPredicates#EXCEPT_SPECTATOR
    [[maybe_unused]] static jobject get_field_EXCEPT_SPECTATOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "NO_SPECTATORS", "field_6155", "EXCEPT_SPECTATOR", "f_20408_"), "Ljava/util/function/Predicate;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.predicate.entity.EntityPredicates#EXCEPT_SPECTATOR
    [[maybe_unused]] static void set_field_EXCEPT_SPECTATOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "NO_SPECTATORS", "field_6155", "EXCEPT_SPECTATOR", "f_20408_"), "Ljava/util/function/Predicate;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.predicate.entity.EntityPredicates#CAN_COLLIDE
    [[maybe_unused]] static jobject get_field_CAN_COLLIDE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "CAN_BE_COLLIDED_WITH", "field_35589", "CAN_COLLIDE", "f_185987_"), "Ljava/util/function/Predicate;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.predicate.entity.EntityPredicates#CAN_COLLIDE
    [[maybe_unused]] static void set_field_CAN_COLLIDE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "CAN_BE_COLLIDED_WITH", "field_35589", "CAN_COLLIDE", "f_185987_"), "Ljava/util/function/Predicate;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_maxDistance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "withinDistance", "method_5909", "maxDistance", "m_20410_"), "(DDDD)Ljava/util/function/Predicate;");
    }

    static jobject maxDistance(const jdouble& arg0, const jdouble& arg1, const jdouble& arg2, const jdouble& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_maxDistance();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_canBePushedBy() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "pushableBy", "method_5911", "canBePushedBy", "m_20421_"), "(Lbsr;)Ljava/util/function/Predicate;");
    }

    static jobject canBePushedBy(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_canBePushedBy();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_rides() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "notRiding", "method_5913", "rides", "m_20431_"), "(Lbsr;)Ljava/util/function/Predicate;");
    }

    static jobject rides(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_rides();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_PREDICATE_ENTITY_ENTITYPREDICATES_HPP