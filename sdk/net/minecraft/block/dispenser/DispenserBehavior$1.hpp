// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_DISPENSER_DISPENSERBEHAVIOR$1_HPP
#define NET_MINECRAFT_BLOCK_DISPENSER_DISPENSERBEHAVIOR$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.dispenser.DispenserBehavior$1
 * Remapped: kx$1
 */
namespace DispenserBehavior$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("kx$1", "net/minecraft/core/dispenser/DispenseItemBehavior$1", "net/minecraft/class_2357$1", "net/minecraft/block/dispenser/DispenserBehavior$1", "net/minecraft/src/C_4718_$C_4719_"));
        }
        return cachedClass;
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

#endif // NET_MINECRAFT_BLOCK_DISPENSER_DISPENSERBEHAVIOR$1_HPP