// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_INVENTORY_LOOTABLEINVENTORY_HPP
#define NET_MINECRAFT_INVENTORY_LOOTABLEINVENTORY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.inventory.LootableInventory
 * Remapped: bqz
 */
namespace LootableInventory {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bqz", "net/minecraft/world/RandomizableContainer", "net/minecraft/class_8934", "net/minecraft/inventory/LootableInventory", "net/minecraft/src/C_302040_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.inventory.LootableInventory#LOOT_TABLE_KEY
    [[maybe_unused]] static jobject get_field_LOOT_TABLE_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOOT_TABLE_TAG", "field_47154", "LOOT_TABLE_KEY", "f_302305_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.inventory.LootableInventory#LOOT_TABLE_KEY
    [[maybe_unused]] static void set_field_LOOT_TABLE_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOOT_TABLE_TAG", "field_47154", "LOOT_TABLE_KEY", "f_302305_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.inventory.LootableInventory#LOOT_TABLE_SEED_KEY
    [[maybe_unused]] static jobject get_field_LOOT_TABLE_SEED_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LOOT_TABLE_SEED_TAG", "field_47155", "LOOT_TABLE_SEED_KEY", "f_303778_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.inventory.LootableInventory#LOOT_TABLE_SEED_KEY
    [[maybe_unused]] static void set_field_LOOT_TABLE_SEED_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LOOT_TABLE_SEED_TAG", "field_47155", "LOOT_TABLE_SEED_KEY", "f_303778_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getLootTable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aB_", "getLootTable", "method_54869", "getLootTable", "m_305426_"), "()Lakq;");
    }

    static jobject getLootTable(const jobject& obj) {
                
       const auto methodID = methodID_getLootTable();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setLootTable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setLootTable", "method_11285", "setLootTable", "m_59626_"), "(Lakq;)V");
    }

    static void setLootTable(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setLootTable();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__setLootTable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setLootTable", "method_54867", "setLootTable", "m_307796_"), "(Lakq;J)V");
    }

    static void _setLootTable(const jobject& obj, const jobject& arg0, const jlong& arg1) {
                
       const auto methodID = methodID__setLootTable();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getLootTableSeed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aC_", "getLootTableSeed", "method_54870", "getLootTableSeed", "m_305628_"), "()J");
    }

    static jlong getLootTableSeed(const jobject& obj) {
                
       const auto methodID = methodID_getLootTableSeed();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID_setLootTableSeed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setLootTableSeed", "method_54866", "setLootTableSeed", "m_305699_"), "(J)V");
    }

    static void setLootTableSeed(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_setLootTableSeed();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aD_", "getBlockPos", "method_11016", "getPos", "m_58899_"), "()Ljd;");
    }

    static jobject getPos(const jobject& obj) {
                
       const auto methodID = methodID_getPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getWorld() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getLevel", "method_10997", "getWorld", "m_58904_"), "()Ldcw;");
    }

    static jobject getWorld(const jobject& obj) {
                
       const auto methodID = methodID_getWorld();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID___setLootTable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "setBlockEntityLootTable", "method_54868", "setLootTable", "m_307915_"), "(Ldcc;Layw;Ljd;Lakq;)V");
    }

    static void __setLootTable(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID___setLootTable();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_readLootTable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b_", "tryLoadLootTable", "method_54871", "readLootTable", "m_307714_"), "(Lub;)Z");
    }

    static jboolean readLootTable(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_readLootTable();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_writeLootTable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c_", "trySaveLootTable", "method_54872", "writeLootTable", "m_306148_"), "(Lub;)Z");
    }

    static jboolean writeLootTable(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_writeLootTable();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_generateLoot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e_", "unpackLootTable", "method_54873", "generateLoot", "m_306438_"), "(Lcmx;)V");
    }

    static void generateLoot(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_generateLoot();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_INVENTORY_LOOTABLEINVENTORY_HPP