// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCREEN_SCREENHANDLERCONTEXT$1_HPP
#define NET_MINECRAFT_SCREEN_SCREENHANDLERCONTEXT$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.screen.ScreenHandlerContext$1
 * Remapped: cqg$1
 */
namespace ScreenHandlerContext$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cqg$1", "net/minecraft/world/inventory/ContainerLevelAccess$1", "net/minecraft/class_3914$1", "net/minecraft/screen/ScreenHandlerContext$1", "net/minecraft/src/C_1247_$C_1248_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "evaluate", "method_17395", "get", "m_6721_"), "(Ljava/util/function/BiFunction;)Ljava/util/Optional;");
    }

    static jobject get(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SCREEN_SCREENHANDLERCONTEXT$1_HPP