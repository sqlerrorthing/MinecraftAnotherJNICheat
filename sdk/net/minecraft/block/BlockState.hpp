// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_BLOCKSTATE_HPP
#define NET_MINECRAFT_BLOCK_BLOCKSTATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.BlockState
 * Remapped: dtc
 */
namespace BlockState {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dtc", "net/minecraft/world/level/block/state/BlockState", "net/minecraft/class_2680", "net/minecraft/block/BlockState", "net/minecraft/src/C_2064_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.BlockState#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_24734", "CODEC", "f_61039_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.BlockState#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_24734", "CODEC", "f_61039_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_asBlockState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("x", "asState", "method_26233", "asBlockState", "m_7160_"), "()Ldtc;");
    }

    static jobject asBlockState(const jobject& obj) {
                
       const auto methodID = methodID_asBlockState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_BLOCKSTATE_HPP