// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ADVANCEMENT_CRITERION_USEDTOTEMCRITERION$CONDITIONS_HPP
#define NET_MINECRAFT_ADVANCEMENT_CRITERION_USEDTOTEMCRITERION$CONDITIONS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.advancement.criterion.UsedTotemCriterion$Conditions
 * Remapped: ei$a
 */
namespace UsedTotemCriterion$Conditions {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ei$a", "net/minecraft/advancements/critereon/UsedTotemTrigger$TriggerInstance", "net/minecraft/class_2148$class_2150", "net/minecraft/advancement/criterion/UsedTotemCriterion$Conditions", "net/minecraft/src/C_2631_$C_2632_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.advancement.criterion.UsedTotemCriterion$Conditions#player
    static jobject get_field_player(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "player", "comp_2029", "player", "f_302542_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.advancement.criterion.UsedTotemCriterion$Conditions#player
    static void set_field_player(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "player", "comp_2029", "player", "f_302542_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.advancement.criterion.UsedTotemCriterion$Conditions#item
    static jobject get_field_item(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "item", "comp_2100", "item", "f_74446_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.advancement.criterion.UsedTotemCriterion$Conditions#item
    static void set_field_item(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "item", "comp_2100", "item", "f_74446_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.advancement.criterion.UsedTotemCriterion$Conditions#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_47351", "CODEC", "f_303672_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.advancement.criterion.UsedTotemCriterion$Conditions#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_47351", "CODEC", "f_303672_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "usedTotem", "method_35399", "create", "m_74452_"), "(Lcs;)Lao;");
    }

    static jobject create(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "usedTotem", "method_9170", "create", "m_163724_"), "(Ldcv;)Lao;");
    }

    static jobject _create(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_matches() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "matches", "method_9171", "matches", "m_74450_"), "(Lcuq;)Z");
    }

    static jboolean matches(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_matches();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__player() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "player", "comp_2029", "player", "m_295156_"), "()Ljava/util/Optional;");
    }

    static jobject _player(const jobject& obj) {
                
       const auto methodID = methodID__player();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__item() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "item", "comp_2100", "item", "f_74446_"), "()Ljava/util/Optional;");
    }

    static jobject _item(const jobject& obj) {
                
       const auto methodID = methodID__item();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ADVANCEMENT_CRITERION_USEDTOTEMCRITERION$CONDITIONS_HPP