// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_ABSTRACTCHESTBLOCK_HPP
#define NET_MINECRAFT_BLOCK_ABSTRACTCHESTBLOCK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.AbstractChestBlock
 * Remapped: des
 */
namespace AbstractChestBlock {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("des", "net/minecraft/world/level/block/AbstractChestBlock", "net/minecraft/class_4739", "net/minecraft/block/AbstractChestBlock", "net/minecraft/src/C_1674_"));
        }
        return cachedClass;
    };

    // getter for protected field net.minecraft.block.AbstractChestBlock#entityTypeRetriever
    static jobject get_field_entityTypeRetriever(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "blockEntityType", "field_21796", "entityTypeRetriever", "f_48675_"), "Ljava/util/function/Supplier;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.block.AbstractChestBlock#entityTypeRetriever
    static void set_field_entityTypeRetriever(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "blockEntityType", "field_21796", "entityTypeRetriever", "f_48675_"), "Ljava/util/function/Supplier;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_53969", "getCodec", "m_304657_"), "()Lcom/mojang/serialization/MapCodec;");
    }

    static jobject getCodec(const jobject& obj) {
                
       const auto methodID = methodID_getCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBlockEntitySource() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "combine", "method_24167", "getBlockEntitySource", "m_5641_"), "(Ldtc;Ldcw;Ljd;Z)Ldif$c;");
    }

    static jobject getBlockEntitySource(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jboolean& arg3) {
                
       const auto methodID = methodID_getBlockEntitySource();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_ABSTRACTCHESTBLOCK_HPP