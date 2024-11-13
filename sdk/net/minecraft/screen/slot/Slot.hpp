// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCREEN_SLOT_SLOT_HPP
#define NET_MINECRAFT_SCREEN_SLOT_SLOT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.screen.slot.Slot
 * Remapped: crq
 */
namespace Slot {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("crq", "net/minecraft/world/inventory/Slot", "net/minecraft/class_1735", "net/minecraft/screen/slot/Slot", "net/minecraft/src/C_1305_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.screen.slot.Slot#index
    static jint get_field_index(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "slot", "field_7875", "index", "f_40217_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.slot.Slot#index
    static void set_field_index(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "slot", "field_7875", "index", "f_40217_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.screen.slot.Slot#inventory
    static jobject get_field_inventory(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "container", "field_7871", "inventory", "f_40218_"), "Lbqk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.screen.slot.Slot#inventory
    static void set_field_inventory(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "container", "field_7871", "inventory", "f_40218_"), "Lbqk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.screen.slot.Slot#id
    static jint get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "index", "field_7874", "id", "f_40219_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.screen.slot.Slot#id
    static void set_field_id(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "index", "field_7874", "id", "f_40219_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.screen.slot.Slot#x
    static jint get_field_x(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "x", "field_7873", "x", "f_40220_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.screen.slot.Slot#x
    static void set_field_x(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "x", "field_7873", "x", "f_40220_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.screen.slot.Slot#y
    static jint get_field_y(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "y", "field_7872", "y", "f_40221_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.screen.slot.Slot#y
    static void set_field_y(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "y", "field_7872", "y", "f_40221_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_onQuickTransfer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "onQuickCraft", "method_7670", "onQuickTransfer", "m_40234_"), "(Lcuq;Lcuq;)V");
    }

    static void onQuickTransfer(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_onQuickTransfer();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_onCrafted() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onQuickCraft", "method_7678", "onCrafted", "m_7169_"), "(Lcuq;I)V");
    }

    static void onCrafted(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_onCrafted();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_onTake() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "onSwapCraft", "method_7672", "onTake", "m_6405_"), "(I)V");
    }

    static void onTake(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_onTake();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__onCrafted() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b_", "checkTakeAchievements", "method_7669", "onCrafted", "m_5845_"), "(Lcuq;)V");
    }

    static void _onCrafted(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__onCrafted();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onTakeItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onTake", "method_7667", "onTakeItem", "m_142406_"), "(Lcmx;Lcuq;)V");
    }

    static void onTakeItem(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_onTakeItem();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_canInsert() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mayPlace", "method_7680", "canInsert", "m_5857_"), "(Lcuq;)Z");
    }

    static jboolean canInsert(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canInsert();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getItem", "method_7677", "getStack", "m_7993_"), "()Lcuq;");
    }

    static jobject getStack(const jobject& obj) {
                
       const auto methodID = methodID_getStack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_hasStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "hasItem", "method_7681", "hasStack", "m_6657_"), "()Z");
    }

    static jboolean hasStack(const jobject& obj) {
                
       const auto methodID = methodID_hasStack();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_setStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "setByPlayer", "method_53512", "setStack", "m_269060_"), "(Lcuq;)V");
    }

    static void setStack(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setStack();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__setStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setByPlayer", "method_48931", "setStack", "m_269206_"), "(Lcuq;Lcuq;)V");
    }

    static void _setStack(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__setStack();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_setStackNoCallbacks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "set", "method_7673", "setStackNoCallbacks", "m_5852_"), "(Lcuq;)V");
    }

    static void setStackNoCallbacks(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setStackNoCallbacks();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_markDirty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "setChanged", "method_7668", "markDirty", "m_6654_"), "()V");
    }

    static void markDirty(const jobject& obj) {
                
       const auto methodID = methodID_markDirty();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMaxItemCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getMaxStackSize", "method_7675", "getMaxItemCount", "m_6641_"), "()I");
    }

    static jint getMaxItemCount(const jobject& obj) {
                
       const auto methodID = methodID_getMaxItemCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__getMaxItemCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a_", "getMaxStackSize", "method_7676", "getMaxItemCount", "m_5866_"), "(Lcuq;)I");
    }

    static jint _getMaxItemCount(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__getMaxItemCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getBackgroundSprite() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getNoItemIcon", "method_7679", "getBackgroundSprite", "m_7543_"), "()Lcom/mojang/datafixers/util/Pair;");
    }

    static jobject getBackgroundSprite(const jobject& obj) {
                
       const auto methodID = methodID_getBackgroundSprite();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_takeStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "remove", "method_7671", "takeStack", "m_6201_"), "(I)Lcuq;");
    }

    static jobject takeStack(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_takeStack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_canTakeItems() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mayPickup", "method_7674", "canTakeItems", "m_8010_"), "(Lcmx;)Z");
    }

    static jboolean canTakeItems(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canTakeItems();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isEnabled() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "isActive", "method_7682", "isEnabled", "m_6659_"), "()Z");
    }

    static jboolean isEnabled(const jobject& obj) {
                
       const auto methodID = methodID_isEnabled();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_tryTakeStackRange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tryRemove", "method_34264", "tryTakeStackRange", "m_150641_"), "(IILcmx;)Ljava/util/Optional;");
    }

    static jobject tryTakeStackRange(const jobject& obj, const jint& arg0, const jint& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_tryTakeStackRange();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_takeStackRange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "safeTake", "method_32753", "takeStackRange", "m_150647_"), "(IILcmx;)Lcuq;");
    }

    static jobject takeStackRange(const jobject& obj, const jint& arg0, const jint& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_takeStackRange();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_insertStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "safeInsert", "method_32756", "insertStack", "m_150659_"), "(Lcuq;)Lcuq;");
    }

    static jobject insertStack(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_insertStack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__insertStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "safeInsert", "method_32755", "insertStack", "m_150656_"), "(Lcuq;I)Lcuq;");
    }

    static jobject _insertStack(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID__insertStack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_canTakePartial() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "allowModification", "method_32754", "canTakePartial", "m_150651_"), "(Lcmx;)Z");
    }

    static jboolean canTakePartial(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canTakePartial();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getContainerSlot", "method_34266", "getIndex", "m_150661_"), "()I");
    }

    static jint getIndex(const jobject& obj) {
                
       const auto methodID = methodID_getIndex();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_canBeHighlighted() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "isHighlightable", "method_51306", "canBeHighlighted", "m_280329_"), "()Z");
    }

    static jboolean canBeHighlighted(const jobject& obj) {
                
       const auto methodID = methodID_canBeHighlighted();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_disablesDynamicDisplay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "isFake", "method_55059", "disablesDynamicDisplay", "m_305540_"), "()Z");
    }

    static jboolean disablesDynamicDisplay(const jobject& obj) {
                
       const auto methodID = methodID_disablesDynamicDisplay();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SCREEN_SLOT_SLOT_HPP