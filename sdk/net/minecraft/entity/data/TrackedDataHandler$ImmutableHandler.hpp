// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_DATA_TRACKEDDATAHANDLER$IMMUTABLEHANDLER_HPP
#define NET_MINECRAFT_ENTITY_DATA_TRACKEDDATAHANDLER$IMMUTABLEHANDLER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.data.TrackedDataHandler$ImmutableHandler
 * Remapped: ajx$a
 */
namespace TrackedDataHandler$ImmutableHandler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ajx$a", "net/minecraft/network/syncher/EntityDataSerializer$ForValueType", "net/minecraft/class_2941$class_7394", "net/minecraft/entity/data/TrackedDataHandler$ImmutableHandler", "net/minecraft/src/C_5226_$C_213540_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_copy() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("copy", "copy", "method_12714", "copy", "m_7020_"), "(Ljava/lang/Object;)Ljava/lang/Object;");
    }

    static jobject copy(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_copy();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_DATA_TRACKEDDATAHANDLER$IMMUTABLEHANDLER_HPP