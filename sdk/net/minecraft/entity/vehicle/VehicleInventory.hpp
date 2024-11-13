// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_VEHICLE_VEHICLEINVENTORY_HPP
#define NET_MINECRAFT_ENTITY_VEHICLE_VEHICLEINVENTORY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.vehicle.VehicleInventory
 * Remapped: cox
 */
namespace VehicleInventory {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cox", "net/minecraft/world/entity/vehicle/ContainerEntity", "net/minecraft/class_7265", "net/minecraft/entity/vehicle/VehicleInventory", "net/minecraft/src/C_213074_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("dm", "position", "method_19538", "getPos", "m_20182_"), "()Lexc;");
    }

    static jobject getPos(const jobject& obj) {
                
       const auto methodID = methodID_getPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBoundingBox() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("cK", "getBoundingBox", "method_5829", "getBoundingBox", "m_20191_"), "()Lewx;");
    }

    static jobject getBoundingBox(const jobject& obj) {
                
       const auto methodID = methodID_getBoundingBox();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getLootTable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("B", "getLootTable", "method_42276", "getLootTable", "m_214142_"), "()Lakq;");
    }

    static jobject getLootTable(const jobject& obj) {
                
       const auto methodID = methodID_getLootTable();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setLootTable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setLootTable", "method_42275", "setLootTable", "m_38236_"), "(Lakq;)V");
    }

    static void setLootTable(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setLootTable();
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
    
    static jmethodID methodID_getWorld() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("dO", "level", "method_37908", "getWorld", "m_9236_"), "()Ldcw;");
    }

    static jobject getWorld(const jobject& obj) {
                
       const auto methodID = methodID_getWorld();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_isRemoved() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("dJ", "isRemoved", "method_31481", "isRemoved", "m_213877_"), "()Z");
    }

    static jboolean isRemoved(const jobject& obj) {
                
       const auto methodID = methodID_isRemoved();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_isEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "isEmpty", "method_5442", "isEmpty", "m_7983_"), "()Z");
    }

    static jboolean isEmpty(const jobject& obj) {
                
       const auto methodID = methodID_isEmpty();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_writeInventoryToNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addChestVehicleSaveData", "method_42288", "writeInventoryToNbt", "m_219943_"), "(Lub;Ljo$a;)V");
    }

    static void writeInventoryToNbt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_writeInventoryToNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_readInventoryFromNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "readChestVehicleSaveData", "method_42285", "readInventoryFromNbt", "m_219934_"), "(Lub;Ljo$a;)V");
    }

    static void readInventoryFromNbt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_readInventoryFromNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_onBroken() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "chestVehicleDestroyed", "method_42283", "onBroken", "m_219927_"), "(Lbrk;Ldcw;Lbsr;)V");
    }

    static void onBroken(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_onBroken();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_open() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c_", "interactWithContainerVehicle", "method_42284", "open", "m_268996_"), "(Lcmx;)Lbqr;");
    }

    static jobject open(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_open();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_generateInventoryLoot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "unpackChestVehicleLootTable", "method_42291", "generateInventoryLoot", "m_219949_"), "(Lcmx;)V");
    }

    static void generateInventoryLoot(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_generateInventoryLoot();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_clearInventory() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "clearChestVehicleContent", "method_42293", "clearInventory", "m_219953_"), "()V");
    }

    static void clearInventory(const jobject& obj) {
                
       const auto methodID = methodID_clearInventory();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_isInventoryEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "isChestVehicleEmpty", "method_42295", "isInventoryEmpty", "m_219956_"), "()Z");
    }

    static jboolean isInventoryEmpty(const jobject& obj) {
                
       const auto methodID = methodID_isInventoryEmpty();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_removeInventoryStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e_", "removeChestVehicleItemNoUpdate", "method_42289", "removeInventoryStack", "m_219945_"), "(I)Lcuq;");
    }

    static jobject removeInventoryStack(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_removeInventoryStack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getInventoryStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f_", "getChestVehicleItem", "method_42290", "getInventoryStack", "m_219947_"), "(I)Lcuq;");
    }

    static jobject getInventoryStack(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getInventoryStack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__removeInventoryStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "removeChestVehicleItem", "method_42286", "removeInventoryStack", "m_219936_"), "(II)Lcuq;");
    }

    static jobject _removeInventoryStack(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID__removeInventoryStack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_setInventoryStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "setChestVehicleItem", "method_42287", "setInventoryStack", "m_219940_"), "(ILcuq;)V");
    }

    static void setInventoryStack(const jobject& obj, const jint& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_setInventoryStack();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getInventoryStackReference() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g_", "getChestVehicleSlot", "method_42292", "getInventoryStackReference", "m_219951_"), "(I)Lbug;");
    }

    static jobject getInventoryStackReference(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getInventoryStackReference();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_canPlayerAccess() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "isChestVehicleStillValid", "method_42294", "canPlayerAccess", "m_219954_"), "(Lcmx;)Z");
    }

    static jboolean canPlayerAccess(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canPlayerAccess();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_VEHICLE_VEHICLEINVENTORY_HPP