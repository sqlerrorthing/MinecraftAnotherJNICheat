// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RESOURCE_SIMPLERESOURCERELOAD$FACTORY_HPP
#define NET_MINECRAFT_RESOURCE_SIMPLERESOURCERELOAD$FACTORY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.resource.SimpleResourceReload$Factory
 * Remapped: auk$a
 */
namespace SimpleResourceReload$Factory {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("auk$a", "net/minecraft/server/packs/resources/SimpleReloadInstance$StateFactory", "net/minecraft/class_4014$class_4047", "net/minecraft/resource/SimpleResourceReload$Factory", "net/minecraft/src/C_82_$C_84_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("create", "create", "create", "create", "m_10863_"), "(Laty$a;Laue;Laty;Ljava/util/concurrent/Executor;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject create(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
};

#endif // NET_MINECRAFT_RESOURCE_SIMPLERESOURCERELOAD$FACTORY_HPP