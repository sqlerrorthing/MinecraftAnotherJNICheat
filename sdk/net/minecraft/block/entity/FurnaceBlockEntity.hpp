// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_ENTITY_FURNACEBLOCKENTITY_HPP
#define NET_MINECRAFT_BLOCK_ENTITY_FURNACEBLOCKENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.entity.FurnaceBlockEntity
 * Remapped: dre
 */
namespace FurnaceBlockEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dre", "net/minecraft/world/level/block/entity/FurnaceBlockEntity", "net/minecraft/class_3866", "net/minecraft/block/entity/FurnaceBlockEntity", "net/minecraft/src/C_2008_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getContainerName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "getDefaultName", "method_17823", "getContainerName", "m_6820_"), "()Lwz;");
    }

    static jobject getContainerName(const jobject& obj) {
                
       const auto methodID = methodID_getContainerName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_createScreenHandler() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createMenu", "method_5465", "createScreenHandler", "m_6555_"), "(ILcmw;)Lcpu;");
    }

    static jobject createScreenHandler(const jobject& obj, const jint& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_createScreenHandler();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_ENTITY_FURNACEBLOCKENTITY_HPP