// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RESOURCE_SERVER_PACKSTATECHANGECALLBACK_HPP
#define NET_MINECRAFT_CLIENT_RESOURCE_SERVER_PACKSTATECHANGECALLBACK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.resource.server.PackStateChangeCallback
 * Remapped: gte
 */
namespace PackStateChangeCallback {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gte", "net/minecraft/client/resources/server/PackLoadFeedback", "net/minecraft/class_9039", "net/minecraft/client/resource/server/PackStateChangeCallback", "net/minecraft/src/C_301939_"));
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

#endif // NET_MINECRAFT_CLIENT_RESOURCE_SERVER_PACKSTATECHANGECALLBACK_HPP