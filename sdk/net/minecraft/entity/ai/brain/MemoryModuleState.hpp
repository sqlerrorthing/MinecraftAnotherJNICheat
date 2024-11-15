// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_MEMORYMODULESTATE_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_MEMORYMODULESTATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.MemoryModuleState
 * Remapped: cct
 */
namespace MemoryModuleState {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cct", "net/minecraft/world/entity/ai/memory/MemoryStatus", "net/minecraft/class_4141", "net/minecraft/entity/ai/brain/MemoryModuleState", "net/minecraft/src/C_754_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.ai.brain.MemoryModuleState#VALUE_PRESENT
    [[maybe_unused]] static jobject get_field_VALUE_PRESENT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "VALUE_PRESENT", "field_18456", "VALUE_PRESENT", "VALUE_PRESENT"), "Lcct;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.ai.brain.MemoryModuleState#VALUE_PRESENT
    [[maybe_unused]] static void set_field_VALUE_PRESENT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "VALUE_PRESENT", "field_18456", "VALUE_PRESENT", "VALUE_PRESENT"), "Lcct;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.ai.brain.MemoryModuleState#VALUE_ABSENT
    [[maybe_unused]] static jobject get_field_VALUE_ABSENT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "VALUE_ABSENT", "field_18457", "VALUE_ABSENT", "VALUE_ABSENT"), "Lcct;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.ai.brain.MemoryModuleState#VALUE_ABSENT
    [[maybe_unused]] static void set_field_VALUE_ABSENT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "VALUE_ABSENT", "field_18457", "VALUE_ABSENT", "VALUE_ABSENT"), "Lcct;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.ai.brain.MemoryModuleState#REGISTERED
    [[maybe_unused]] static jobject get_field_REGISTERED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "REGISTERED", "field_18458", "REGISTERED", "REGISTERED"), "Lcct;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.ai.brain.MemoryModuleState#REGISTERED
    [[maybe_unused]] static void set_field_REGISTERED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "REGISTERED", "field_18458", "REGISTERED", "REGISTERED"), "Lcct;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lcct;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lcct;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_MEMORYMODULESTATE_HPP