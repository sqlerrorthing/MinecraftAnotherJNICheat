// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RESOURCE_SERVER_DOWNLOADQUEUER_HPP
#define NET_MINECRAFT_CLIENT_RESOURCE_SERVER_DOWNLOADQUEUER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.resource.server.DownloadQueuer
 * Remapped: gtd
 */
namespace DownloadQueuer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gtd", "net/minecraft/client/resources/server/PackDownloader", "net/minecraft/class_9038", "net/minecraft/client/resource/server/DownloadQueuer", "net/minecraft/src/C_301971_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_enqueue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "download", "method_55546", "enqueue", "m_305313_"), "(Ljava/util/Map;Ljava/util/function/Consumer;)V");
    }

    static void enqueue(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_enqueue();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RESOURCE_SERVER_DOWNLOADQUEUER_HPP