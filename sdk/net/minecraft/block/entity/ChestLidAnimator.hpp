// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_ENTITY_CHESTLIDANIMATOR_HPP
#define NET_MINECRAFT_BLOCK_ENTITY_CHESTLIDANIMATOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.entity.ChestLidAnimator
 * Remapped: dqp
 */
namespace ChestLidAnimator {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dqp", "net/minecraft/world/level/block/entity/ChestLidController", "net/minecraft/class_5560", "net/minecraft/block/entity/ChestLidAnimator", "net/minecraft/src/C_141247_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.block.entity.ChestLidAnimator#open
    static jboolean get_field_open(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "shouldBeOpen", "field_27212", "open", "f_155370_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.ChestLidAnimator#open
    static void set_field_open(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "shouldBeOpen", "field_27212", "open", "f_155370_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.ChestLidAnimator#progress
    static jfloat get_field_progress(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "openness", "field_27213", "progress", "f_155371_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.ChestLidAnimator#progress
    static void set_field_progress(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "openness", "field_27213", "progress", "f_155371_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.ChestLidAnimator#lastProgress
    static jfloat get_field_lastProgress(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "oOpenness", "field_27214", "lastProgress", "f_155372_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.ChestLidAnimator#lastProgress
    static void set_field_lastProgress(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "oOpenness", "field_27214", "lastProgress", "f_155372_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    static jmethodID methodID_step() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tickLid", "method_31672", "step", "m_155374_"), "()V");
    }

    static void step(const jobject& obj) {
                
       const auto methodID = methodID_step();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getProgress() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getOpenness", "method_31673", "getProgress", "m_155375_"), "(F)F");
    }

    static jfloat getProgress(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_getProgress();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setOpen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "shouldBeOpen", "method_31674", "setOpen", "m_155377_"), "(Z)V");
    }

    static void setOpen(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setOpen();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_ENTITY_CHESTLIDANIMATOR_HPP