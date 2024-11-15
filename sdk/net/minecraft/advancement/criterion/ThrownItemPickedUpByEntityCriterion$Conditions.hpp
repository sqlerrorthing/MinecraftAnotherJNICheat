// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ADVANCEMENT_CRITERION_THROWNITEMPICKEDUPBYENTITYCRITERION$CONDITIONS_HPP
#define NET_MINECRAFT_ADVANCEMENT_CRITERION_THROWNITEMPICKEDUPBYENTITYCRITERION$CONDITIONS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.advancement.criterion.ThrownItemPickedUpByEntityCriterion$Conditions
 * Remapped: dl$a
 */
namespace ThrownItemPickedUpByEntityCriterion$Conditions {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dl$a", "net/minecraft/advancements/critereon/PickedUpItemTrigger$TriggerInstance", "net/minecraft/class_5279$class_5280", "net/minecraft/advancement/criterion/ThrownItemPickedUpByEntityCriterion$Conditions", "net/minecraft/src/C_213093_$C_213094_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.advancement.criterion.ThrownItemPickedUpByEntityCriterion$Conditions#player
    static jobject get_field_player(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "player", "comp_2029", "player", "f_302789_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.advancement.criterion.ThrownItemPickedUpByEntityCriterion$Conditions#player
    static void set_field_player(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "player", "comp_2029", "player", "f_302789_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.advancement.criterion.ThrownItemPickedUpByEntityCriterion$Conditions#item
    static jobject get_field_item(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "item", "comp_2075", "item", "f_221315_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.advancement.criterion.ThrownItemPickedUpByEntityCriterion$Conditions#item
    static void set_field_item(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "item", "comp_2075", "item", "f_221315_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.advancement.criterion.ThrownItemPickedUpByEntityCriterion$Conditions#entity
    static jobject get_field_entity(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "entity", "comp_2076", "entity", "f_221316_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.advancement.criterion.ThrownItemPickedUpByEntityCriterion$Conditions#entity
    static void set_field_entity(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "entity", "comp_2076", "entity", "f_221316_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.advancement.criterion.ThrownItemPickedUpByEntityCriterion$Conditions#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_47316", "CODEC", "f_302950_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.advancement.criterion.ThrownItemPickedUpByEntityCriterion$Conditions#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_47316", "CODEC", "f_302950_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_createThrownItemPickedUpByEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "thrownItemPickedUpByEntity", "method_27978", "createThrownItemPickedUpByEntity", "m_286072_"), "(Lbg;Ljava/util/Optional;Ljava/util/Optional;)Lao;");
    }

    static jobject createThrownItemPickedUpByEntity(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_createThrownItemPickedUpByEntity();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_createThrownItemPickedUpByPlayer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "thrownItemPickedUpByPlayer", "method_43277", "createThrownItemPickedUpByPlayer", "m_286101_"), "(Ljava/util/Optional;Ljava/util/Optional;Ljava/util/Optional;)Lao;");
    }

    static jobject createThrownItemPickedUpByPlayer(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_createThrownItemPickedUpByPlayer();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "matches", "method_27979", "test", "m_221322_"), "(Laqv;Lcuq;Lerr;)Z");
    }

    static jboolean test(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_validate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "validate", "method_54938", "validate", "m_7683_"), "(Lbh;)V");
    }

    static void validate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_validate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
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
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "item", "comp_2075", "item", "f_221315_"), "()Ljava/util/Optional;");
    }

    static jobject _item(const jobject& obj) {
                
       const auto methodID = methodID__item();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__entity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "entity", "comp_2076", "entity", "f_221316_"), "()Ljava/util/Optional;");
    }

    static jobject _entity(const jobject& obj) {
                
       const auto methodID = methodID__entity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ADVANCEMENT_CRITERION_THROWNITEMPICKEDUPBYENTITYCRITERION$CONDITIONS_HPP