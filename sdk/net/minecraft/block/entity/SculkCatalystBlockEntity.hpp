// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_ENTITY_SCULKCATALYSTBLOCKENTITY_HPP
#define NET_MINECRAFT_BLOCK_ENTITY_SCULKCATALYSTBLOCKENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.entity.SculkCatalystBlockEntity
 * Remapped: dro
 */
namespace SculkCatalystBlockEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dro", "net/minecraft/world/level/block/entity/SculkCatalystBlockEntity", "net/minecraft/class_7132", "net/minecraft/block/entity/SculkCatalystBlockEntity", "net/minecraft/src/C_213121_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.block.entity.SculkCatalystBlockEntity#eventListener
    static jobject get_field_eventListener(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "catalystListener", "field_44610", "eventListener", "f_279609_"), "Ldro$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.SculkCatalystBlockEntity#eventListener
    static void set_field_eventListener(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "catalystListener", "field_44610", "eventListener", "f_279609_"), "Ldro$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "serverTick", "method_41517", "tick", "m_222779_"), "(Ldcw;Ljd;Ldtc;Ldro;)V");
    }

    static void tick(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_readNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "loadAdditional", "method_11014", "readNbt", "m_318667_"), "(Lub;Ljo$a;)V");
    }

    static void readNbt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_readNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_writeNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "saveAdditional", "method_11007", "writeNbt", "m_183515_"), "(Lub;Ljo$a;)V");
    }

    static void writeNbt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_writeNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getEventListener() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getListener", "method_51357", "getEventListener", "m_280221_"), "()Ldro$a;");
    }

    static jobject getEventListener(const jobject& obj) {
                
       const auto methodID = methodID_getEventListener();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_ENTITY_SCULKCATALYSTBLOCKENTITY_HPP