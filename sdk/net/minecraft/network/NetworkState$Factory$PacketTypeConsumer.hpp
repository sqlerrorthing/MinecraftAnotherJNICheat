// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_NETWORKSTATE$FACTORY$PACKETTYPECONSUMER_HPP
#define NET_MINECRAFT_NETWORK_NETWORKSTATE$FACTORY$PACKETTYPECONSUMER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.NetworkState$Factory$PacketTypeConsumer
 * Remapped: wh$a$a
 */
namespace NetworkState$Factory$PacketTypeConsumer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("wh$a$a", "net/minecraft/network/ProtocolInfo$Unbound$PacketVisitor", "net/minecraft/class_9127$class_9128$class_9828", "net/minecraft/network/NetworkState$Factory$PacketTypeConsumer", "net/minecraft/src/C_313600_$C_313580_$C_336530_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_accept() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("accept", "accept", "accept", "accept", "m_340568_"), "(Lzi;I)V");
    }

    static void accept(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_accept();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_NETWORKSTATE$FACTORY$PACKETTYPECONSUMER_HPP