// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_DATA_TRACKEDDATAHANDLERREGISTRY$1_HPP
#define NET_MINECRAFT_ENTITY_DATA_TRACKEDDATAHANDLERREGISTRY$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.data.TrackedDataHandlerRegistry$1
 * Remapped: ajy$1
 */
namespace TrackedDataHandlerRegistry$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ajy$1", "net/minecraft/network/syncher/EntityDataSerializers$1", "net/minecraft/class_2943$1", "net/minecraft/entity/data/TrackedDataHandlerRegistry$1", "net/minecraft/src/C_5227_$C_5228_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_codec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("codec", "codec", "", "", "m_321181_"), "()Lyx;");
    }

    static jobject codec(const jobject& obj) {
                
       const auto methodID = methodID_codec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_copy() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "copy", "method_12732", "copy", "m_7020_"), "(Lcuq;)Lcuq;");
    }

    static jobject copy(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_copy();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_DATA_TRACKEDDATAHANDLERREGISTRY$1_HPP