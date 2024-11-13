// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_NETWORKSTATEBUILDER$1_HPP
#define NET_MINECRAFT_NETWORK_NETWORKSTATEBUILDER$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.NetworkStateBuilder$1
 * Remapped: zl$1
 */
namespace NetworkStateBuilder$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("zl$1", "net/minecraft/network/protocol/ProtocolInfoBuilder$1", "net/minecraft/class_9147$1", "net/minecraft/network/NetworkStateBuilder$1", "net/minecraft/src/C_313614_$C_336508_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_bind() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "bind", "method_61107", "bind", "m_324476_"), "(Ljava/util/function/Function;)Lwh;");
    }

    static jobject bind(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_bind();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_phase() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "id", "method_61106", "phase", "m_338717_"), "()Lvu;");
    }

    static jobject phase(const jobject& obj) {
                
       const auto methodID = methodID_phase();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_side() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "flow", "method_61109", "side", "m_338773_"), "()Lzh;");
    }

    static jobject side(const jobject& obj) {
                
       const auto methodID = methodID_side();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_forEachPacketType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "listPackets", "method_61108", "forEachPacketType", "m_339387_"), "(Lwh$a$a;)V");
    }

    static void forEachPacketType(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_forEachPacketType();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_NETWORKSTATEBUILDER$1_HPP