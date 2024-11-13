// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCREEN_SLOT_CRAFTINGRESULTSLOT_HPP
#define NET_MINECRAFT_SCREEN_SLOT_CRAFTINGRESULTSLOT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.screen.slot.CraftingResultSlot
 * Remapped: crm
 */
namespace CraftingResultSlot {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("crm", "net/minecraft/world/inventory/ResultSlot", "net/minecraft/class_1734", "net/minecraft/screen/slot/CraftingResultSlot", "net/minecraft/src/C_1301_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.screen.slot.CraftingResultSlot#input
    static jobject get_field_input(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "craftSlots", "field_7870", "input", "f_40162_"), "Lcql;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.slot.CraftingResultSlot#input
    static void set_field_input(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "craftSlots", "field_7870", "input", "f_40162_"), "Lcql;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.screen.slot.CraftingResultSlot#player
    static jobject get_field_player(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "player", "field_7868", "player", "f_40163_"), "Lcmx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.slot.CraftingResultSlot#player
    static void set_field_player(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "player", "field_7868", "player", "f_40163_"), "Lcmx;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.screen.slot.CraftingResultSlot#amount
    static jint get_field_amount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "removeCount", "field_7869", "amount", "f_40164_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.slot.CraftingResultSlot#amount
    static void set_field_amount(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "removeCount", "field_7869", "amount", "f_40164_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_canInsert() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mayPlace", "method_7680", "canInsert", "m_5857_"), "(Lcuq;)Z");
    }

    static jboolean canInsert(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canInsert();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_takeStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "remove", "method_7671", "takeStack", "m_6201_"), "(I)Lcuq;");
    }

    static jobject takeStack(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_takeStack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
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
    
    static jmethodID methodID_disablesDynamicDisplay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "isFake", "method_55059", "disablesDynamicDisplay", "m_305540_"), "()Z");
    }

    static jboolean disablesDynamicDisplay(const jobject& obj) {
                
       const auto methodID = methodID_disablesDynamicDisplay();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SCREEN_SLOT_CRAFTINGRESULTSLOT_HPP