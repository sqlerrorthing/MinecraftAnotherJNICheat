// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ADVANCEMENT_CRITERION_PLAYERGENERATESCONTAINERLOOTCRITERION$CONDITIONS_HPP
#define NET_MINECRAFT_ADVANCEMENT_CRITERION_PLAYERGENERATESCONTAINERLOOTCRITERION$CONDITIONS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.advancement.criterion.PlayerGeneratesContainerLootCriterion$Conditions
 * Remapped: dg$a
 */
namespace PlayerGeneratesContainerLootCriterion$Conditions {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dg$a", "net/minecraft/advancements/critereon/LootTableTrigger$TriggerInstance", "net/minecraft/class_5282$class_5283", "net/minecraft/advancement/criterion/PlayerGeneratesContainerLootCriterion$Conditions", "net/minecraft/src/C_1829_$C_1830_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.advancement.criterion.PlayerGeneratesContainerLootCriterion$Conditions#player
    static jobject get_field_player(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "player", "comp_2029", "player", "f_302659_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.advancement.criterion.PlayerGeneratesContainerLootCriterion$Conditions#player
    static void set_field_player(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "player", "comp_2029", "player", "f_302659_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.advancement.criterion.PlayerGeneratesContainerLootCriterion$Conditions#lootTable
    static jobject get_field_lootTable(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "lootTable", "comp_2074", "lootTable", "f_54612_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.advancement.criterion.PlayerGeneratesContainerLootCriterion$Conditions#lootTable
    static void set_field_lootTable(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "lootTable", "comp_2074", "lootTable", "f_54612_"), "Lakq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.advancement.criterion.PlayerGeneratesContainerLootCriterion$Conditions#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_47307", "CODEC", "f_303158_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.advancement.criterion.PlayerGeneratesContainerLootCriterion$Conditions#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_47307", "CODEC", "f_303158_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "lootTableUsed", "method_27995", "create", "m_54618_"), "(Lakq;)Lao;");
    }

    static jobject create(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "matches", "method_27996", "test", "m_54620_"), "(Lakq;)Z");
    }

    static jboolean test(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_test();
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
    
    static jmethodID methodID__lootTable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "lootTable", "comp_2074", "lootTable", "f_54612_"), "()Lakq;");
    }

    static jobject _lootTable(const jobject& obj) {
                
       const auto methodID = methodID__lootTable();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ADVANCEMENT_CRITERION_PLAYERGENERATESCONTAINERLOOTCRITERION$CONDITIONS_HPP