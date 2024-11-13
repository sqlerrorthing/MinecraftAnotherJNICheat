// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_DISPENSER_DISPENSERBEHAVIOR$15_HPP
#define NET_MINECRAFT_BLOCK_DISPENSER_DISPENSERBEHAVIOR$15_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.dispenser.DispenserBehavior$15
 * Remapped: kx$15
 */
namespace DispenserBehavior$15 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("kx$15", "net/minecraft/core/dispenser/DispenseItemBehavior$6", "net/minecraft/class_2357$15", "net/minecraft/block/dispenser/DispenserBehavior$15", "net/minecraft/src/C_4718_$C_4733_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.block.dispenser.DispenserBehavior$15#fallbackBehavior
    static jobject get_field_fallbackBehavior(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "defaultDispenseItemBehavior", "field_50240", "fallbackBehavior", "f_316390_"), "Lkw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.dispenser.DispenserBehavior$15#fallbackBehavior
    static void set_field_fallbackBehavior(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "defaultDispenseItemBehavior", "field_50240", "fallbackBehavior", "f_316390_"), "Lkw;");
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

#endif // NET_MINECRAFT_BLOCK_DISPENSER_DISPENSERBEHAVIOR$15_HPP