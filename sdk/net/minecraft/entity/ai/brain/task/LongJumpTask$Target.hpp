// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_LONGJUMPTASK$TARGET_HPP
#define NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_LONGJUMPTASK$TARGET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.brain.task.LongJumpTask$Target
 * Remapped: bwk$a
 */
namespace LongJumpTask$Target {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bwk$a", "net/minecraft/world/entity/ai/behavior/LongJumpToRandomPos$PossibleJump", "net/minecraft/class_6030$class_6031", "net/minecraft/entity/ai/brain/task/LongJumpTask$Target", "net/minecraft/src/C_141082_$C_141083_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.ai.brain.task.LongJumpTask$Target#pos
    static jobject get_field_pos(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "jumpTarget", "field_30147", "pos", "f_147687_"), "Ljd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.brain.task.LongJumpTask$Target#pos
    static void set_field_pos(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "jumpTarget", "field_30147", "pos", "f_147687_"), "Ljd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getJumpTarget", "method_35084", "getPos", "m_147693_"), "()Ljd;");
    }

    static jobject getPos(const jobject& obj) {
                
       const auto methodID = methodID_getPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_BRAIN_TASK_LONGJUMPTASK$TARGET_HPP