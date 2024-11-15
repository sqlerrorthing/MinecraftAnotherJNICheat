// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ADVANCEMENT_CRITERION_TRAVELCRITERION$CONDITIONS_HPP
#define NET_MINECRAFT_ADVANCEMENT_CRITERION_TRAVELCRITERION$CONDITIONS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.advancement.criterion.TravelCriterion$Conditions
 * Remapped: bn$a
 */
namespace TravelCriterion$Conditions {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bn$a", "net/minecraft/advancements/critereon/DistanceTrigger$TriggerInstance", "net/minecraft/class_2108$class_2110", "net/minecraft/advancement/criterion/TravelCriterion$Conditions", "net/minecraft/src/C_182845_$C_182846_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.advancement.criterion.TravelCriterion$Conditions#player
    static jobject get_field_player(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "player", "comp_2029", "player", "f_302814_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.advancement.criterion.TravelCriterion$Conditions#player
    static void set_field_player(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "player", "comp_2029", "player", "f_302814_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.advancement.criterion.TravelCriterion$Conditions#startPosition
    static jobject get_field_startPosition(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "startPosition", "comp_2044", "startPosition", "f_186181_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.advancement.criterion.TravelCriterion$Conditions#startPosition
    static void set_field_startPosition(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "startPosition", "comp_2044", "startPosition", "f_186181_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.advancement.criterion.TravelCriterion$Conditions#distance
    static jobject get_field_distance(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "distance", "comp_2045", "distance", "f_186182_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.advancement.criterion.TravelCriterion$Conditions#distance
    static void set_field_distance(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "distance", "comp_2045", "distance", "f_186182_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.advancement.criterion.TravelCriterion$Conditions#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_47239", "CODEC", "f_303226_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.advancement.criterion.TravelCriterion$Conditions#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_47239", "CODEC", "f_303226_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_fallFromHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fallFromHeight", "method_38851", "fallFromHeight", "m_186197_"), "(Lbv$a;Lbm;Ldf$a;)Lao;");
    }

    static jobject fallFromHeight(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_fallFromHeight();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_rideEntityInLava() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "rideEntityInLava", "method_38850", "rideEntityInLava", "m_186194_"), "(Lbv$a;Lbm;)Lao;");
    }

    static jobject rideEntityInLava(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_rideEntityInLava();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_netherTravel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "travelledThroughNether", "method_9085", "netherTravel", "m_186192_"), "(Lbm;)Lao;");
    }

    static jobject netherTravel(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_netherTravel();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_matches() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "matches", "method_9086", "matches", "m_186188_"), "(Laqu;Lexc;Lexc;)Z");
    }

    static jboolean matches(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_matches();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__player() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "player", "comp_2029", "player", "m_295156_"), "()Ljava/util/Optional;");
    }

    static jobject _player(const jobject& obj) {
                
       const auto methodID = methodID__player();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__startPosition() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "startPosition", "comp_2044", "startPosition", "f_186181_"), "()Ljava/util/Optional;");
    }

    static jobject _startPosition(const jobject& obj) {
                
       const auto methodID = methodID__startPosition();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__distance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "distance", "comp_2045", "distance", "f_186182_"), "()Ljava/util/Optional;");
    }

    static jobject _distance(const jobject& obj) {
                
       const auto methodID = methodID__distance();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ADVANCEMENT_CRITERION_TRAVELCRITERION$CONDITIONS_HPP