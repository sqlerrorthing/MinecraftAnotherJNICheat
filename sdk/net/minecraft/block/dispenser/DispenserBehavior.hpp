// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_DISPENSER_DISPENSERBEHAVIOR_HPP
#define NET_MINECRAFT_BLOCK_DISPENSER_DISPENSERBEHAVIOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.dispenser.DispenserBehavior
 * Remapped: kx
 */
namespace DispenserBehavior {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("kx", "net/minecraft/core/dispenser/DispenseItemBehavior", "net/minecraft/class_2357", "net/minecraft/block/dispenser/DispenserBehavior", "net/minecraft/src/C_4718_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.dispenser.DispenserBehavior#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_34020", "LOGGER", "f_181892_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.dispenser.DispenserBehavior#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_34020", "LOGGER", "f_181892_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.dispenser.DispenserBehavior#NOOP
    [[maybe_unused]] static jobject get_field_NOOP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NOOP", "field_16902", "NOOP", "f_123393_"), "Lkx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.dispenser.DispenserBehavior#NOOP
    [[maybe_unused]] static void set_field_NOOP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NOOP", "field_16902", "NOOP", "f_123393_"), "Lkx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_dispense() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("dispense", "dispense", "dispense", "dispense", "m_6115_"), "(Lku;Lcuq;)Lcuq;");
    }

    static jobject dispense(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_dispense();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_registerDefaults() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "bootStrap", "method_18346", "registerDefaults", "m_123402_"), "()V");
    }

    static void registerDefaults() {
       const auto clazz = self();
       const auto methodID = methodID_registerDefaults();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_DISPENSER_DISPENSERBEHAVIOR_HPP