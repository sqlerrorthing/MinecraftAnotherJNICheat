// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_LIVINGTARGETCACHE_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_LIVINGTARGETCACHE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.LivingTargetCache
 * Remapped: ccu
 */
namespace LivingTargetCache {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ccu", "net/minecraft/world/entity/ai/memory/NearestVisibleLivingEntities", "net/minecraft/class_6670", "net/minecraft/entity/ai/brain/LivingTargetCache", "net/minecraft/src/C_182844_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.ai.brain.LivingTargetCache#EMPTY
    [[maybe_unused]] static jobject get_field_EMPTY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EMPTY", "field_35104", "EMPTY", "f_186098_"), "Lccu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.LivingTargetCache#EMPTY
    [[maybe_unused]] static void set_field_EMPTY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EMPTY", "field_35104", "EMPTY", "f_186098_"), "Lccu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.brain.LivingTargetCache#entities
    static jobject get_field_entities(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "nearbyEntities", "field_35105", "entities", "f_186099_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.LivingTargetCache#entities
    static void set_field_entities(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "nearbyEntities", "field_35105", "entities", "f_186099_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.brain.LivingTargetCache#targetPredicate
    static jobject get_field_targetPredicate(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "lineOfSightTest", "field_35106", "targetPredicate", "f_186100_"), "Ljava/util/function/Predicate;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.LivingTargetCache#targetPredicate
    static void set_field_targetPredicate(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "lineOfSightTest", "field_35106", "targetPredicate", "f_186100_"), "Ljava/util/function/Predicate;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_empty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "empty", "method_38971", "empty", "m_186106_"), "()Lccu;");
    }

    static jobject empty() {
       const auto clazz = self();
       const auto methodID = methodID_empty();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_findFirst() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "findClosest", "method_38975", "findFirst", "m_186116_"), "(Ljava/util/function/Predicate;)Ljava/util/Optional;");
    }

    static jobject findFirst(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_findFirst();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_iterate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "findAll", "method_38978", "iterate", "m_186123_"), "(Ljava/util/function/Predicate;)Ljava/lang/Iterable;");
    }

    static jobject iterate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_iterate();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_stream() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "find", "method_38980", "stream", "m_186128_"), "(Ljava/util/function/Predicate;)Ljava/util/stream/Stream;");
    }

    static jobject stream(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_stream();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_contains() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "contains", "method_38972", "contains", "m_186107_"), "(Lbtn;)Z");
    }

    static jboolean contains(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_contains();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_anyMatch() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "contains", "method_38981", "anyMatch", "m_186130_"), "(Ljava/util/function/Predicate;)Z");
    }

    static jboolean anyMatch(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_anyMatch();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_LIVINGTARGETCACHE_HPP