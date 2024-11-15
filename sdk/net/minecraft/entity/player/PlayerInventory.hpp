// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PLAYER_PLAYERINVENTORY_HPP
#define NET_MINECRAFT_ENTITY_PLAYER_PLAYERINVENTORY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.player.PlayerInventory
 * Remapped: cmw
 */
namespace PlayerInventory {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cmw", "net/minecraft/world/entity/player/Inventory", "net/minecraft/class_1661", "net/minecraft/entity/player/PlayerInventory", "net/minecraft/src/C_1140_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.player.PlayerInventory#ITEM_USAGE_COOLDOWN
    [[maybe_unused]] static jint get_field_ITEM_USAGE_COOLDOWN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "POP_TIME_DURATION", "field_30637", "ITEM_USAGE_COOLDOWN", "f_150064_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.PlayerInventory#ITEM_USAGE_COOLDOWN
    [[maybe_unused]] static void set_field_ITEM_USAGE_COOLDOWN(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "POP_TIME_DURATION", "field_30637", "ITEM_USAGE_COOLDOWN", "f_150064_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.player.PlayerInventory#MAIN_SIZE
    [[maybe_unused]] static jint get_field_MAIN_SIZE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "INVENTORY_SIZE", "field_30638", "MAIN_SIZE", "f_150065_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.PlayerInventory#MAIN_SIZE
    [[maybe_unused]] static void set_field_MAIN_SIZE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "INVENTORY_SIZE", "field_30638", "MAIN_SIZE", "f_150065_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.player.PlayerInventory#HOTBAR_SIZE
    [[maybe_unused]] static jint get_field_HOTBAR_SIZE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "SELECTION_SIZE", "field_30641", "HOTBAR_SIZE", "f_150070_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.player.PlayerInventory#HOTBAR_SIZE
    [[maybe_unused]] static void set_field_HOTBAR_SIZE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "SELECTION_SIZE", "field_30641", "HOTBAR_SIZE", "f_150070_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.player.PlayerInventory#OFF_HAND_SLOT
    [[maybe_unused]] static jint get_field_OFF_HAND_SLOT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SLOT_OFFHAND", "field_30639", "OFF_HAND_SLOT", "f_150066_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.PlayerInventory#OFF_HAND_SLOT
    [[maybe_unused]] static void set_field_OFF_HAND_SLOT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SLOT_OFFHAND", "field_30639", "OFF_HAND_SLOT", "f_150066_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.player.PlayerInventory#NOT_FOUND
    [[maybe_unused]] static jint get_field_NOT_FOUND() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "NOT_FOUND_INDEX", "field_30640", "NOT_FOUND", "f_150067_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.PlayerInventory#NOT_FOUND
    [[maybe_unused]] static void set_field_NOT_FOUND(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "NOT_FOUND_INDEX", "field_30640", "NOT_FOUND", "f_150067_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.player.PlayerInventory#ARMOR_SLOTS
    [[maybe_unused]] static jint get_field_ARMOR_SLOTS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "ALL_ARMOR_SLOTS", "field_33767", "ARMOR_SLOTS", "f_150068_"), "[I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.PlayerInventory#ARMOR_SLOTS
    [[maybe_unused]] static void set_field_ARMOR_SLOTS(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "ALL_ARMOR_SLOTS", "field_33767", "ARMOR_SLOTS", "f_150068_"), "[I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.player.PlayerInventory#HELMET_SLOTS
    [[maybe_unused]] static jint get_field_HELMET_SLOTS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "HELMET_SLOT_ONLY", "field_33768", "HELMET_SLOTS", "f_150069_"), "[I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.PlayerInventory#HELMET_SLOTS
    [[maybe_unused]] static void set_field_HELMET_SLOTS(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "HELMET_SLOT_ONLY", "field_33768", "HELMET_SLOTS", "f_150069_"), "[I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for public field net.minecraft.entity.player.PlayerInventory#main
    static jobject get_field_main(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "items", "field_7547", "main", "f_35974_"), "Ljv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.PlayerInventory#main
    static void set_field_main(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "items", "field_7547", "main", "f_35974_"), "Ljv;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.entity.player.PlayerInventory#armor
    static jobject get_field_armor(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "armor", "field_7548", "armor", "f_35975_"), "Ljv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.PlayerInventory#armor
    static void set_field_armor(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "armor", "field_7548", "armor", "f_35975_"), "Ljv;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.entity.player.PlayerInventory#offHand
    static jobject get_field_offHand(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "offhand", "field_7544", "offHand", "f_35976_"), "Ljv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.PlayerInventory#offHand
    static void set_field_offHand(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "offhand", "field_7544", "offHand", "f_35976_"), "Ljv;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.player.PlayerInventory#combinedInventory
    static jobject get_field_combinedInventory(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "compartments", "field_7543", "combinedInventory", "f_35979_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.player.PlayerInventory#combinedInventory
    static void set_field_combinedInventory(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "compartments", "field_7543", "combinedInventory", "f_35979_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.entity.player.PlayerInventory#selectedSlot
    static jint get_field_selectedSlot(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "selected", "field_7545", "selectedSlot", "f_35977_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.PlayerInventory#selectedSlot
    static void set_field_selectedSlot(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "selected", "field_7545", "selectedSlot", "f_35977_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.entity.player.PlayerInventory#player
    static jobject get_field_player(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "player", "field_7546", "player", "f_35978_"), "Lcmx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.entity.player.PlayerInventory#player
    static void set_field_player(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "player", "field_7546", "player", "f_35978_"), "Lcmx;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.player.PlayerInventory#changeCount
    static jint get_field_changeCount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "timesChanged", "field_7542", "changeCount", "f_35981_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.player.PlayerInventory#changeCount
    static void set_field_changeCount(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "timesChanged", "field_7542", "changeCount", "f_35981_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_getMainHandStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getSelected", "method_7391", "getMainHandStack", "m_36056_"), "()Lcuq;");
    }

    static jobject getMainHandStack(const jobject& obj) {
       const auto methodID = methodID_getMainHandStack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getHotbarSize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("g", "getSelectionSize", "method_7368", "getHotbarSize", "m_36059_"), "()I");
    }

    static jint getHotbarSize() {
       const auto clazz = self();
       const auto methodID = methodID_getHotbarSize();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID);
    };
    
    static jmethodID methodID_canStackAddMore() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hasRemainingSpaceForItem", "method_7393", "canStackAddMore", "m_36014_"), "(Lcuq;Lcuq;)Z");
    }

    static jboolean canStackAddMore(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_canStackAddMore();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getEmptySlot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "getFreeSlot", "method_7376", "getEmptySlot", "m_36062_"), "()I");
    }

    static jint getEmptySlot(const jobject& obj) {
                
       const auto methodID = methodID_getEmptySlot();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_addPickBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setPickedItem", "method_7374", "addPickBlock", "m_36012_"), "(Lcuq;)V");
    }

    static void addPickBlock(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addPickBlock();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_swapSlotWithHotbar() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "pickSlot", "method_7365", "swapSlotWithHotbar", "m_36038_"), "(I)V");
    }

    static void swapSlotWithHotbar(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_swapSlotWithHotbar();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isValidHotbarIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "isHotbarSlot", "method_7380", "isValidHotbarIndex", "m_36045_"), "(I)Z");
    }

    static jboolean isValidHotbarIndex(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_isValidHotbarIndex();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getSlotWithStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "findSlotMatchingItem", "method_7395", "getSlotWithStack", "m_36030_"), "(Lcuq;)I");
    }

    static jint getSlotWithStack(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getSlotWithStack();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_indexOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "findSlotMatchingUnusedItem", "method_7371", "indexOf", "m_36043_"), "(Lcuq;)I");
    }

    static jint indexOf(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_indexOf();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getSwappableHotbarSlot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getSuitableHotbarSlot", "method_7386", "getSwappableHotbarSlot", "m_36065_"), "()I");
    }

    static jint getSwappableHotbarSlot(const jobject& obj) {
                
       const auto methodID = methodID_getSwappableHotbarSlot();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_scrollInHotbar() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "swapPaint", "method_7373", "scrollInHotbar", "m_35988_"), "(D)V");
    }

    static void scrollInHotbar(const jobject& obj, const jdouble& arg0) {
                
       const auto methodID = methodID_scrollInHotbar();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_remove() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "clearOrCountMatchingItems", "method_29280", "remove", "m_36022_"), "(Ljava/util/function/Predicate;ILbqk;)I");
    }

    static jint remove(const jobject& obj, const jobject& arg0, const jint& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_remove();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_addStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "addResource", "method_7366", "addStack", "m_36066_"), "(Lcuq;)I");
    }

    static jint addStack(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addStack();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__addStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "addResource", "method_7385", "addStack", "m_36047_"), "(ILcuq;)I");
    }

    static jint _addStack(const jobject& obj, const jint& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__addStack();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getOccupiedSlotWithRoomForStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getSlotWithRemainingSpace", "method_7390", "getOccupiedSlotWithRoomForStack", "m_36050_"), "(Lcuq;)I");
    }

    static jint getOccupiedSlotWithRoomForStack(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getOccupiedSlotWithRoomForStack();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_updateItems() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "tick", "method_7381", "updateItems", "m_36068_"), "()V");
    }

    static void updateItems(const jobject& obj) {
                
       const auto methodID = methodID_updateItems();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_insertStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "add", "method_7394", "insertStack", "m_36054_"), "(Lcuq;)Z");
    }

    static jboolean insertStack(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_insertStack();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__insertStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "add", "method_7367", "insertStack", "m_36040_"), "(ILcuq;)Z");
    }

    static jboolean _insertStack(const jobject& obj, const jint& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__insertStack();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_offerOrDrop() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "placeItemBackInInventory", "method_7398", "offerOrDrop", "m_150079_"), "(Lcuq;)V");
    }

    static void offerOrDrop(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_offerOrDrop();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_offer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "placeItemBackInInventory", "method_32338", "offer", "m_150076_"), "(Lcuq;Z)V");
    }

    static void offer(const jobject& obj, const jobject& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_offer();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_removeStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "removeItem", "method_5434", "removeStack", "m_7407_"), "(II)Lcuq;");
    }

    static jobject removeStack(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_removeStack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_removeOne() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "removeItem", "method_7378", "removeOne", "m_36057_"), "(Lcuq;)V");
    }

    static void removeOne(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_removeOne();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
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
    
    static jmethodID methodID_getBlockBreakingSpeed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getDestroySpeed", "method_7370", "getBlockBreakingSpeed", "m_36020_"), "(Ldtc;)F");
    }

    static jfloat getBlockBreakingSpeed(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getBlockBreakingSpeed();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_writeNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "save", "method_7384", "writeNbt", "m_36026_"), "(Luh;)Luh;");
    }

    static jobject writeNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_writeNbt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_readNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "load", "method_7397", "readNbt", "m_36035_"), "(Luh;)V");
    }

    static void readNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_readNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_size() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getContainerSize", "method_5439", "size", "m_6643_"), "()I");
    }

    static jint size(const jobject& obj) {
                
       const auto methodID = methodID_size();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_isEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "isEmpty", "method_5442", "isEmpty", "m_7983_"), "()Z");
    }

    static jboolean isEmpty(const jobject& obj) {
                
       const auto methodID = methodID_isEmpty();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getItem", "method_5438", "getStack", "m_8020_"), "(I)Lcuq;");
    }

    static jobject getStack(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getStack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("ah", "getName", "method_5477", "getName", "m_7755_"), "()Lwz;");
    }

    static jobject getName(const jobject& obj) {
                
       const auto methodID = methodID_getName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getArmorStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getArmor", "method_7372", "getArmorStack", "m_36052_"), "(I)Lcuq;");
    }

    static jobject getArmorStack(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getArmorStack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_dropAll() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "dropAll", "method_7388", "dropAll", "m_36071_"), "()V");
    }

    static void dropAll(const jobject& obj) {
                
       const auto methodID = methodID_dropAll();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_markDirty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "setChanged", "method_5431", "markDirty", "m_6596_"), "()V");
    }

    static void markDirty(const jobject& obj) {
                
       const auto methodID = methodID_markDirty();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getChangeCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "getTimesChanged", "method_7364", "getChangeCount", "m_36072_"), "()I");
    }

    static jint getChangeCount(const jobject& obj) {
                
       const auto methodID = methodID_getChangeCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_canPlayerUse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "stillValid", "method_5443", "canPlayerUse", "m_6542_"), "(Lcmx;)Z");
    }

    static jboolean canPlayerUse(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canPlayerUse();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_contains() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "contains", "method_7379", "contains", "m_36063_"), "(Lcuq;)Z");
    }

    static jboolean contains(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_contains();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__contains() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "contains", "method_7382", "contains", "m_204075_"), "(Lawu;)Z");
    }

    static jboolean _contains(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__contains();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID___contains() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "contains", "method_55753", "contains", "m_321814_"), "(Ljava/util/function/Predicate;)Z");
    }

    static jboolean __contains(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID___contains();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_clone() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "replaceWith", "method_7377", "clone", "m_36006_"), "(Lcmw;)V");
    }

    static void clone(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_clone();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_clear() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "clearContent", "method_5448", "clear", "m_6211_"), "()V");
    }

    static void clear(const jobject& obj) {
                
       const auto methodID = methodID_clear();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_populateRecipeFinder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fillStackedContents", "method_7387", "populateRecipeFinder", "m_36010_"), "(Lcnb;)V");
    }

    static void populateRecipeFinder(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_populateRecipeFinder();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_dropSelectedItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "removeFromSelected", "method_37417", "dropSelectedItem", "m_182403_"), "(Z)Lcuq;");
    }

    static jobject dropSelectedItem(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_dropSelectedItem();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PLAYER_PLAYERINVENTORY_HPP