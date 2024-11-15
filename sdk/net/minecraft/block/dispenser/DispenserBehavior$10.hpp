// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_DISPENSER_DISPENSERBEHAVIOR$10_HPP
#define NET_MINECRAFT_BLOCK_DISPENSER_DISPENSERBEHAVIOR$10_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.dispenser.DispenserBehavior$10
 * Remapped: kx$10
 */
namespace DispenserBehavior$10 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("kx$10", "net/minecraft/core/dispenser/DispenseItemBehavior$18", "net/minecraft/class_2357$10", "net/minecraft/block/dispenser/DispenserBehavior$10", "net/minecraft/src/C_4718_$C_4720_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.block.dispenser.DispenserBehavior$10#fallbackBehavior
    static jobject get_field_fallbackBehavior(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "defaultDispenseItemBehavior", "field_49137", "fallbackBehavior", "f_317070_"), "Lkw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.dispenser.DispenserBehavior$10#fallbackBehavior
    static void set_field_fallbackBehavior(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "defaultDispenseItemBehavior", "field_49137", "fallbackBehavior", "f_317070_"), "Lkw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
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

#endif // NET_MINECRAFT_BLOCK_DISPENSER_DISPENSERBEHAVIOR$10_HPP