// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_EQUIPMENTTABLE_HPP
#define NET_MINECRAFT_ENTITY_EQUIPMENTTABLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.EquipmentTable
 * Remapped: bta
 */
namespace EquipmentTable {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bta", "net/minecraft/world/entity/EquipmentTable", "net/minecraft/class_9652", "net/minecraft/entity/EquipmentTable", "net/minecraft/src/C_313465_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.EquipmentTable#lootTable
    static jobject get_field_lootTable(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "lootTable", "comp_2621", "lootTable", "f_316700_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.EquipmentTable#lootTable
    static void set_field_lootTable(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "lootTable", "comp_2621", "lootTable", "f_316700_"), "Lakq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.EquipmentTable#slotDropChances
    static jobject get_field_slotDropChances(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "slotDropChances", "comp_2622", "slotDropChances", "f_315505_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.EquipmentTable#slotDropChances
    static void set_field_slotDropChances(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "slotDropChances", "comp_2622", "slotDropChances", "f_315505_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.EquipmentTable#SLOT_DROP_CHANCES_CODEC
    [[maybe_unused]] static jobject get_field_SLOT_DROP_CHANCES_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DROP_CHANCES_CODEC", "field_51374", "SLOT_DROP_CHANCES_CODEC", "f_316849_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.EquipmentTable#SLOT_DROP_CHANCES_CODEC
    [[maybe_unused]] static void set_field_SLOT_DROP_CHANCES_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DROP_CHANCES_CODEC", "field_51374", "SLOT_DROP_CHANCES_CODEC", "f_316849_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.EquipmentTable#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_51375", "CODEC", "f_313947_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.EquipmentTable#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_51375", "CODEC", "f_313947_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_createSlotDropChances() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createForAllSlots", "method_59658", "createSlotDropChances", "m_322309_"), "(F)Ljava/util/Map;");
    }

    static jobject createSlotDropChances(const jfloat& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_createSlotDropChances();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__createSlotDropChances() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createForAllSlots", "method_59661", "createSlotDropChances", "m_321920_"), "(Ljava/util/List;F)Ljava/util/Map;");
    }

    static jobject _createSlotDropChances(const jobject& arg0, const jfloat& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__createSlotDropChances();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__lootTable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "lootTable", "comp_2621", "lootTable", "f_316700_"), "()Lakq;");
    }

    static jobject _lootTable(const jobject& obj) {
                
       const auto methodID = methodID__lootTable();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__slotDropChances() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "slotDropChances", "comp_2622", "slotDropChances", "f_315505_"), "()Ljava/util/Map;");
    }

    static jobject _slotDropChances(const jobject& obj) {
                
       const auto methodID = methodID__slotDropChances();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_EQUIPMENTTABLE_HPP