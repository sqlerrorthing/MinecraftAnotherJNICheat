// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_DISPENSER_DISPENSERBEHAVIOR$9_HPP
#define NET_MINECRAFT_BLOCK_DISPENSER_DISPENSERBEHAVIOR$9_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.dispenser.DispenserBehavior$9
 * Remapped: kx$9
 */
namespace DispenserBehavior$9 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("kx$9", "net/minecraft/core/dispenser/DispenseItemBehavior$17", "net/minecraft/class_2357$9", "net/minecraft/block/dispenser/DispenserBehavior$9", "net/minecraft/src/C_4718_$C_4745_"));
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

#endif // NET_MINECRAFT_BLOCK_DISPENSER_DISPENSERBEHAVIOR$9_HPP