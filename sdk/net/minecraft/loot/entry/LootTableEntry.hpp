// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_ENTRY_LOOTTABLEENTRY_HPP
#define NET_MINECRAFT_LOOT_ENTRY_LOOTTABLEENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.entry.LootTableEntry
 * Remapped: esk
 */
namespace LootTableEntry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("esk", "net/minecraft/world/level/storage/loot/entries/NestedLootTable", "net/minecraft/class_83", "net/minecraft/loot/entry/LootTableEntry", "net/minecraft/src/C_313517_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.loot.entry.LootTableEntry#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_45803", "CODEC", "f_315961_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.entry.LootTableEntry#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_45803", "CODEC", "f_315961_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.loot.entry.LootTableEntry#value
    static jobject get_field_value(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "contents", "field_49429", "value", "f_314988_"), "Lcom/mojang/datafixers/util/Either;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.entry.LootTableEntry#value
    static void set_field_value(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "contents", "field_49429", "value", "f_314988_"), "Lcom/mojang/datafixers/util/Either;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getType", "method_29318", "getType", "m_6751_"), "()Lesi;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_generateLoot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createItemStack", "method_433", "generateLoot", "m_6948_"), "(Ljava/util/function/Consumer;Lerr;)V");
    }

    static void generateLoot(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_generateLoot();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_validate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "validate", "method_415", "validate", "m_6165_"), "(Lerx;)V");
    }

    static void validate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_validate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_builder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "lootTableReference", "method_428", "builder", "m_320126_"), "(Lakq;)Lesj$a;");
    }

    static jobject builder(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_builder();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__builder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "inlineLootTable", "method_57631", "builder", "m_325034_"), "(Lerw;)Lesj$a;");
    }

    static jobject _builder(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__builder();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_LOOT_ENTRY_LOOTTABLEENTRY_HPP