// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_DISPENSER_BLOCKPLACEMENTDISPENSERBEHAVIOR_HPP
#define NET_MINECRAFT_BLOCK_DISPENSER_BLOCKPLACEMENTDISPENSERBEHAVIOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.dispenser.BlockPlacementDispenserBehavior
 * Remapped: lb
 */
namespace BlockPlacementDispenserBehavior {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("lb", "net/minecraft/core/dispenser/ShulkerBoxDispenseBehavior", "net/minecraft/class_2970", "net/minecraft/block/dispenser/BlockPlacementDispenserBehavior", "net/minecraft/src/C_4748_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.block.dispenser.BlockPlacementDispenserBehavior#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LOGGER", "field_33680", "LOGGER", "f_175749_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.dispenser.BlockPlacementDispenserBehavior#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LOGGER", "field_33680", "LOGGER", "f_175749_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_dispenseSilently() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "execute", "method_10135", "dispenseSilently", "m_7498_"), "(Lku;Lcuq;)Lcuq;");
    }

    static jobject dispenseSilently(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_dispenseSilently();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_DISPENSER_BLOCKPLACEMENTDISPENSERBEHAVIOR_HPP