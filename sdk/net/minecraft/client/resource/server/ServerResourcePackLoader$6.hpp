// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RESOURCE_SERVER_SERVERRESOURCEPACKLOADER$6_HPP
#define NET_MINECRAFT_CLIENT_RESOURCE_SERVER_SERVERRESOURCEPACKLOADER$6_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.resource.server.ServerResourcePackLoader$6
 * Remapped: gtc$6
 */
namespace ServerResourcePackLoader$6 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gtc$6", "net/minecraft/client/resources/server/DownloadedPackSource$6", "net/minecraft/class_1066$6", "net/minecraft/client/resource/server/ServerResourcePackLoader$6", "net/minecraft/src/C_302037_$C_301933_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_onStateChanged() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "reportUpdate", "method_55620", "onStateChanged", "m_304984_"), "(Ljava/util/UUID;Lgte$b;)V");
    }

    static void onStateChanged(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_onStateChanged();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_onFinish() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "reportFinalResult", "method_55619", "onFinish", "m_305621_"), "(Ljava/util/UUID;Lgte$a;)V");
    }

    static void onFinish(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_onFinish();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RESOURCE_SERVER_SERVERRESOURCEPACKLOADER$6_HPP