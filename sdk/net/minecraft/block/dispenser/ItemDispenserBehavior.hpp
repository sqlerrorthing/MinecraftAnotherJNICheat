// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_DISPENSER_ITEMDISPENSERBEHAVIOR_HPP
#define NET_MINECRAFT_BLOCK_DISPENSER_ITEMDISPENSERBEHAVIOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.dispenser.ItemDispenserBehavior
 * Remapped: kw
 */
namespace ItemDispenserBehavior {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("kw", "net/minecraft/core/dispenser/DefaultDispenseItemBehavior", "net/minecraft/class_2347", "net/minecraft/block/dispenser/ItemDispenserBehavior", "net/minecraft/src/C_4717_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.block.dispenser.ItemDispenserBehavior#field_51916
    [[maybe_unused]] static jint get_field_field_51916() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DEFAULT_ACCURACY", "field_51916", "field_51916", "f_337058_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.dispenser.ItemDispenserBehavior#field_51916
    [[maybe_unused]] static void set_field_field_51916(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DEFAULT_ACCURACY", "field_51916", "field_51916", "f_337058_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_dispense() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("dispense", "dispense", "dispense", "dispense", "m_6115_"), "(Lku;Lcuq;)Lcuq;");
    }

    static jobject dispense(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_dispense();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_dispenseSilently() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "execute", "method_10135", "dispenseSilently", "m_7498_"), "(Lku;Lcuq;)Lcuq;");
    }

    static jobject dispenseSilently(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_dispenseSilently();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_spawnItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "spawnItem", "method_10134", "spawnItem", "m_123378_"), "(Ldcw;Lcuq;ILji;Ljw;)V");
    }

    static void spawnItem(const jobject& arg0, const jobject& arg1, const jint& arg2, const jobject& arg3, const jobject& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_spawnItem();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_playSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "playSound", "method_10136", "playSound", "m_6823_"), "(Lku;)V");
    }

    static void playSound(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_playSound();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_spawnParticles() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "playAnimation", "method_10133", "spawnParticles", "m_123387_"), "(Lku;Lji;)V");
    }

    static void spawnParticles(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_spawnParticles();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_syncDispensesEvent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "playDefaultSound", "method_60578", "syncDispensesEvent", "m_340140_"), "(Lku;)V");
    }

    static void syncDispensesEvent(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_syncDispensesEvent();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_syncActivatesEvent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "playDefaultAnimation", "method_60580", "syncActivatesEvent", "m_338579_"), "(Lku;Lji;)V");
    }

    static void syncActivatesEvent(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_syncActivatesEvent();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_decrementStackWithRemainder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "consumeWithRemainder", "method_60577", "decrementStackWithRemainder", "m_338981_"), "(Lku;Lcuq;Lcuq;)Lcuq;");
    }

    static jobject decrementStackWithRemainder(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_decrementStackWithRemainder();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_addStackOrSpawn() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "addToInventoryOrDispense", "method_60579", "addStackOrSpawn", "m_340150_"), "(Lku;Lcuq;)V");
    }

    static void addStackOrSpawn(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_addStackOrSpawn();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_DISPENSER_ITEMDISPENSERBEHAVIOR_HPP