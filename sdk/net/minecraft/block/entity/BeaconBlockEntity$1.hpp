// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_ENTITY_BEACONBLOCKENTITY$1_HPP
#define NET_MINECRAFT_BLOCK_ENTITY_BEACONBLOCKENTITY$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.entity.BeaconBlockEntity$1
 * Remapped: dqc$1
 */
namespace BeaconBlockEntity$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dqc$1", "net/minecraft/world/level/block/entity/BeaconBlockEntity$1", "net/minecraft/class_2580$1", "net/minecraft/block/entity/BeaconBlockEntity$1", "net/minecraft/src/C_1981_$C_1982_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_17390", "get", "m_6413_"), "(I)I");
    }

    static jint get(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_set() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "set", "method_17391", "set", "m_8050_"), "(II)V");
    }

    static void set(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_set();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_size() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getCount", "method_17389", "size", "m_6499_"), "()I");
    }

    static jint size(const jobject& obj) {
                
       const auto methodID = methodID_size();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_ENTITY_BEACONBLOCKENTITY$1_HPP