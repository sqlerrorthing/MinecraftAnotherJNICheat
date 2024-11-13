// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_WALKTARGET_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_WALKTARGET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.WalkTarget
 * Remapped: ccv
 */
namespace WalkTarget {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ccv", "net/minecraft/world/entity/ai/memory/WalkTarget", "net/minecraft/class_4142", "net/minecraft/entity/ai/brain/WalkTarget", "net/minecraft/src/C_755_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.ai.brain.WalkTarget#lookTarget
    static jobject get_field_lookTarget(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "target", "field_18460", "lookTarget", "f_26405_"), "Lbwv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.WalkTarget#lookTarget
    static void set_field_lookTarget(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "target", "field_18460", "lookTarget", "f_26405_"), "Lbwv;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.brain.WalkTarget#speed
    static jfloat get_field_speed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "speedModifier", "field_18461", "speed", "f_26406_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.WalkTarget#speed
    static void set_field_speed(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "speedModifier", "field_18461", "speed", "f_26406_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.brain.WalkTarget#completionRange
    static jint get_field_completionRange(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "closeEnoughDist", "field_18462", "completionRange", "f_26407_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.WalkTarget#completionRange
    static void set_field_completionRange(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "closeEnoughDist", "field_18462", "completionRange", "f_26407_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_getLookTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTarget", "method_19094", "getLookTarget", "m_26420_"), "()Lbwv;");
    }

    static jobject getLookTarget(const jobject& obj) {
                
       const auto methodID = methodID_getLookTarget();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSpeed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getSpeedModifier", "method_19095", "getSpeed", "m_26421_"), "()F");
    }

    static jfloat getSpeed(const jobject& obj) {
                
       const auto methodID = methodID_getSpeed();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCompletionRange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getCloseEnoughDist", "method_19096", "getCompletionRange", "m_26422_"), "()I");
    }

    static jint getCompletionRange(const jobject& obj) {
                
       const auto methodID = methodID_getCompletionRange();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_WALKTARGET_HPP