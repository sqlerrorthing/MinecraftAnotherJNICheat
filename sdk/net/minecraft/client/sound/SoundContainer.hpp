// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SOUND_SOUNDCONTAINER_HPP
#define NET_MINECRAFT_CLIENT_SOUND_SOUNDCONTAINER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.sound.SoundContainer
 * Remapped: gvh
 */
namespace SoundContainer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gvh", "net/minecraft/client/sounds/Weighted", "net/minecraft/class_1148", "net/minecraft/client/sound/SoundContainer", "net/minecraft/src/C_4609_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getWeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getWeight", "method_4894", "getWeight", "m_7789_"), "()I");
    }

    static jint getWeight(const jobject& obj) {
                
       const auto methodID = methodID_getWeight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getSound", "method_4893", "getSound", "m_213718_"), "(Layw;)Ljava/lang/Object;");
    }

    static jobject getSound(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_preload() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "preloadIfRequired", "method_18188", "preload", "m_8054_"), "(Lgvc;)V");
    }

    static void preload(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_preload();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_SOUND_SOUNDCONTAINER_HPP