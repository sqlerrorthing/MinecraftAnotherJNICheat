// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_LOOTPOOL$BUILDER_HPP
#define NET_MINECRAFT_LOOT_LOOTPOOL$BUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.LootPool$Builder
 * Remapped: erv$a
 */
namespace LootPool$Builder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("erv$a", "net/minecraft/world/level/storage/loot/LootPool$Builder", "net/minecraft/class_55$class_56", "net/minecraft/loot/LootPool$Builder", "net/minecraft/src/C_2818_$C_2820_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.loot.LootPool$Builder#entries
    static jobject get_field_entries(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "entries", "field_960", "entries", "f_79067_"), "Lcom/google/common/collect/ImmutableList$Builder;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.LootPool$Builder#entries
    static void set_field_entries(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "entries", "field_960", "entries", "f_79067_"), "Lcom/google/common/collect/ImmutableList$Builder;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.loot.LootPool$Builder#conditions
    static jobject get_field_conditions(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "conditions", "field_963", "conditions", "f_79068_"), "Lcom/google/common/collect/ImmutableList$Builder;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.LootPool$Builder#conditions
    static void set_field_conditions(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "conditions", "field_963", "conditions", "f_79068_"), "Lcom/google/common/collect/ImmutableList$Builder;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.loot.LootPool$Builder#functions
    static jobject get_field_functions(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "functions", "field_961", "functions", "f_79069_"), "Lcom/google/common/collect/ImmutableList$Builder;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.LootPool$Builder#functions
    static void set_field_functions(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "functions", "field_961", "functions", "f_79069_"), "Lcom/google/common/collect/ImmutableList$Builder;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.loot.LootPool$Builder#rolls
    static jobject get_field_rolls(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "rolls", "field_959", "rolls", "f_79070_"), "Levy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.LootPool$Builder#rolls
    static void set_field_rolls(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "rolls", "field_959", "rolls", "f_79070_"), "Levy;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.loot.LootPool$Builder#bonusRollsRange
    static jobject get_field_bonusRollsRange(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "bonusRolls", "field_962", "bonusRollsRange", "f_79071_"), "Levy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.LootPool$Builder#bonusRollsRange
    static void set_field_bonusRollsRange(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "bonusRolls", "field_962", "bonusRollsRange", "f_79071_"), "Levy;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__rolls() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setRolls", "method_352", "rolls", "m_165133_"), "(Levy;)Lerv$a;");
    }

    static jobject _rolls(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__rolls();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getThisFunctionConsumingBuilder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "unwrap", "method_354", "getThisFunctionConsumingBuilder", "m_79073_"), "()Lerv$a;");
    }

    static jobject getThisFunctionConsumingBuilder(const jobject& obj) {
                
       const auto methodID = methodID_getThisFunctionConsumingBuilder();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_bonusRolls() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setBonusRolls", "method_35509", "bonusRolls", "m_165135_"), "(Levy;)Lerv$a;");
    }

    static jobject bonusRolls(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_bonusRolls();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_with() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "add", "method_351", "with", "m_79076_"), "(Lesh$a;)Lerv$a;");
    }

    static jobject with(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_with();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_conditionally() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "when", "method_356", "conditionally", "m_79080_"), "(Levc$a;)Lerv$a;");
    }

    static jobject conditionally(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_conditionally();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "apply", "method_353", "apply", "m_79078_"), "(Letf$a;)Lerv$a;");
    }

    static jobject apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_apply();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "build", "method_355", "build", "m_79082_"), "()Lerv;");
    }

    static jobject build(const jobject& obj) {
                
       const auto methodID = methodID_build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_LOOT_LOOTPOOL$BUILDER_HPP