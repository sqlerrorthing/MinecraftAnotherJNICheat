// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_ENTITY_TRAPPEDCHESTBLOCKENTITY_HPP
#define NET_MINECRAFT_BLOCK_ENTITY_TRAPPEDCHESTBLOCKENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.entity.TrappedChestBlockEntity
 * Remapped: dsb
 */
namespace TrappedChestBlockEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dsb", "net/minecraft/world/level/block/entity/TrappedChestBlockEntity", "net/minecraft/class_2646", "net/minecraft/block/entity/TrappedChestBlockEntity", "net/minecraft/src/C_2035_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_onViewerCountUpdate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "signalOpenCount", "method_11049", "onViewerCountUpdate", "m_142151_"), "(Ldcw;Ljd;Ldtc;II)V");
    }

    static void onViewerCountUpdate(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jint& arg3, const jint& arg4) {
                
       const auto methodID = methodID_onViewerCountUpdate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_ENTITY_TRAPPEDCHESTBLOCKENTITY_HPP