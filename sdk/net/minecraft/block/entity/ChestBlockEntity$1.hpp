// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_ENTITY_CHESTBLOCKENTITY$1_HPP
#define NET_MINECRAFT_BLOCK_ENTITY_CHESTBLOCKENTITY$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.entity.ChestBlockEntity$1
 * Remapped: dqo$1
 */
namespace ChestBlockEntity$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dqo$1", "net/minecraft/world/level/block/entity/ChestBlockEntity$1", "net/minecraft/class_2595$1", "net/minecraft/block/entity/ChestBlockEntity$1", "net/minecraft/src/C_1997_$C_141246_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_onContainerOpen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onOpen", "method_31681", "onContainerOpen", "m_142292_"), "(Ldcw;Ljd;Ldtc;)V");
    }

    static void onContainerOpen(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_onContainerOpen();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_onContainerClose() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "onClose", "method_31683", "onContainerClose", "m_142289_"), "(Ldcw;Ljd;Ldtc;)V");
    }

    static void onContainerClose(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_onContainerClose();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_onViewerCountUpdate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "openerCountChanged", "method_31682", "onViewerCountUpdate", "m_142148_"), "(Ldcw;Ljd;Ldtc;II)V");
    }

    static void onViewerCountUpdate(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jint& arg3, const jint& arg4) {
                
       const auto methodID = methodID_onViewerCountUpdate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_isPlayerViewing() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isOwnContainer", "method_31679", "isPlayerViewing", "m_142718_"), "(Lcmx;)Z");
    }

    static jboolean isPlayerViewing(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isPlayerViewing();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_ENTITY_CHESTBLOCKENTITY$1_HPP