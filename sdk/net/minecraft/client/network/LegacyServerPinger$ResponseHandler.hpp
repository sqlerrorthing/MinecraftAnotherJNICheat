// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_NETWORK_LEGACYSERVERPINGER$RESPONSEHANDLER_HPP
#define NET_MINECRAFT_CLIENT_NETWORK_LEGACYSERVERPINGER$RESPONSEHANDLER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.network.LegacyServerPinger$ResponseHandler
 * Remapped: fzm$a
 */
namespace LegacyServerPinger$ResponseHandler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fzm$a", "net/minecraft/client/multiplayer/LegacyServerPinger$Output", "net/minecraft/class_8676$class_8677", "net/minecraft/client/network/LegacyServerPinger$ResponseHandler", "net/minecraft/src/C_290183_$C_290274_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_handleResponse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("handleResponse", "handleResponse", "handleResponse", "handleResponse", "m_296016_"), "(ILjava/lang/String;Ljava/lang/String;II)V");
    }

    static void handleResponse(const jobject& obj, const jint& arg0, const jobject& arg1, const jobject& arg2, const jint& arg3, const jint& arg4) {
                
       const auto methodID = methodID_handleResponse();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_NETWORK_LEGACYSERVERPINGER$RESPONSEHANDLER_HPP