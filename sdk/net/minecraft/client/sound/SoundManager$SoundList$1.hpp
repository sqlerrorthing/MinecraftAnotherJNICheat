// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SOUND_SOUNDMANAGER$SOUNDLIST$1_HPP
#define NET_MINECRAFT_CLIENT_SOUND_SOUNDMANAGER$SOUNDLIST$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.sound.SoundManager$SoundList$1
 * Remapped: gvf$a$1
 */
namespace SoundManager$SoundList$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gvf$a$1", "net/minecraft/client/sounds/SoundManager$Preparations$1", "net/minecraft/class_1144$class_4009$1", "net/minecraft/client/sound/SoundManager$SoundList$1", "net/minecraft/src/C_4603_$C_4606_$C_4607_"));
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
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getSound", "method_4883", "getSound", "m_213718_"), "(Layw;)Lgtx;");
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

#endif // NET_MINECRAFT_CLIENT_SOUND_SOUNDMANAGER$SOUNDLIST$1_HPP