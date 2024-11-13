// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_VEHICLE_STORAGEMINECARTENTITY_HPP
#define NET_MINECRAFT_ENTITY_VEHICLE_STORAGEMINECARTENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.vehicle.StorageMinecartEntity
 * Remapped: cou
 */
namespace StorageMinecartEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cou", "net/minecraft/world/entity/vehicle/AbstractMinecartContainer", "net/minecraft/class_1693", "net/minecraft/entity/vehicle/StorageMinecartEntity", "net/minecraft/src/C_1204_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.vehicle.StorageMinecartEntity#inventory
    static jobject get_field_inventory(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "itemStacks", "field_7735", "inventory", "f_38202_"), "Ljv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.vehicle.StorageMinecartEntity#inventory
    static void set_field_inventory(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "itemStacks", "field_7735", "inventory", "f_38202_"), "Ljv;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.vehicle.StorageMinecartEntity#lootTable
    static jobject get_field_lootTable(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "lootTable", "field_7734", "lootTable", "f_38204_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.vehicle.StorageMinecartEntity#lootTable
    static void set_field_lootTable(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "lootTable", "field_7734", "lootTable", "f_38204_"), "Lakq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.vehicle.StorageMinecartEntity#lootSeed
    static jlong get_field_lootSeed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "lootTableSeed", "field_7732", "lootSeed", "f_38205_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.vehicle.StorageMinecartEntity#lootSeed
    static void set_field_lootSeed(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "lootTableSeed", "field_7732", "lootSeed", "f_38205_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    static jmethodID methodID_killAndDropSelf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "destroy", "method_7516", "killAndDropSelf", "m_38227_"), "(Lbrk;)V");
    }

    static void killAndDropSelf(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_killAndDropSelf();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getItem", "method_5438", "getStack", "m_8020_"), "(I)Lcuq;");
    }

    static jobject getStack(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getStack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_removeStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "removeItem", "method_5434", "removeStack", "m_7407_"), "(II)Lcuq;");
    }

    static jobject removeStack(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_removeStack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__removeStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "removeItemNoUpdate", "method_5441", "removeStack", "m_8016_"), "(I)Lcuq;");
    }

    static jobject _removeStack(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID__removeStack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setItem", "method_5447", "setStack", "m_6836_"), "(ILcuq;)V");
    }

    static void setStack(const jobject& obj, const jint& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_setStack();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getStackReference() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a_", "getSlot", "method_32318", "getStackReference", "m_141942_"), "(I)Lbug;");
    }

    static jobject getStackReference(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getStackReference();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_markDirty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "setChanged", "method_5431", "markDirty", "m_6596_"), "()V");
    }

    static void markDirty(const jobject& obj) {
                
       const auto methodID = methodID_markDirty();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_canPlayerUse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "stillValid", "method_5443", "canPlayerUse", "m_6542_"), "(Lcmx;)Z");
    }

    static jboolean canPlayerUse(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canPlayerUse();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_remove() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "remove", "method_5650", "remove", "m_142687_"), "(Lbsr$c;)V");
    }

    static void remove(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_remove();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_writeCustomDataToNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "addAdditionalSaveData", "method_5652", "writeCustomDataToNbt", "m_7380_"), "(Lub;)V");
    }

    static void writeCustomDataToNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_writeCustomDataToNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_readCustomDataFromNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "readAdditionalSaveData", "method_5749", "readCustomDataFromNbt", "m_7378_"), "(Lub;)V");
    }

    static void readCustomDataFromNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_readCustomDataFromNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_interact() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "interact", "method_5688", "interact", "m_6096_"), "(Lcmx;Lbqq;)Lbqr;");
    }

    static jobject interact(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_interact();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_applySlowdown() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("t", "applyNaturalSlowdown", "method_7525", "applySlowdown", "m_7114_"), "()V");
    }

    static void applySlowdown(const jobject& obj) {
                
       const auto methodID = methodID_applySlowdown();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_clear() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "clearContent", "method_5448", "clear", "m_6211_"), "()V");
    }

    static void clear(const jobject& obj) {
                
       const auto methodID = methodID_clear();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_setLootTable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setLootTable", "method_7562", "setLootTable", "m_219858_"), "(Lakq;J)V");
    }

    static void setLootTable(const jobject& obj, const jobject& arg0, const jlong& arg1) {
                
       const auto methodID = methodID_setLootTable();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_createMenu() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("createMenu", "createMenu", "createMenu", "createMenu", "m_7208_"), "(ILcmw;Lcmx;)Lcpu;");
    }

    static jobject createMenu(const jobject& obj, const jint& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_createMenu();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getScreenHandler() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createMenu", "method_17357", "getScreenHandler", "m_7402_"), "(ILcmw;)Lcpu;");
    }

    static jobject getScreenHandler(const jobject& obj, const jint& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getScreenHandler();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getLootTable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("B", "getLootTable", "method_42276", "getLootTable", "m_214142_"), "()Lakq;");
    }

    static jobject getLootTable(const jobject& obj) {
                
       const auto methodID = methodID_getLootTable();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__setLootTable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setLootTable", "method_42275", "setLootTable", "m_38236_"), "(Lakq;)V");
    }

    static void _setLootTable(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__setLootTable();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getLootTableSeed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("C", "getLootTableSeed", "method_42277", "getLootTableSeed", "m_213803_"), "()J");
    }

    static jlong getLootTableSeed(const jobject& obj) {
                
       const auto methodID = methodID_getLootTableSeed();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID_setLootTableSeed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setLootTableSeed", "method_42274", "setLootTableSeed", "m_214065_"), "(J)V");
    }

    static void setLootTableSeed(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_setLootTableSeed();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getInventory() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("D", "getItemStacks", "method_42278", "getInventory", "m_213659_"), "()Ljv;");
    }

    static jobject getInventory(const jobject& obj) {
                
       const auto methodID = methodID_getInventory();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_resetInventory() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("E", "clearItemStacks", "method_42273", "resetInventory", "m_213775_"), "()V");
    }

    static void resetInventory(const jobject& obj) {
                
       const auto methodID = methodID_resetInventory();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_VEHICLE_STORAGEMINECARTENTITY_HPP