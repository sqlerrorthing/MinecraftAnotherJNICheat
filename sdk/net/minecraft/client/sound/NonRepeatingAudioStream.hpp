// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SOUND_NONREPEATINGAUDIOSTREAM_HPP
#define NET_MINECRAFT_CLIENT_SOUND_NONREPEATINGAUDIOSTREAM_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.sound.NonRepeatingAudioStream
 * Remapped: guw
 */
namespace NonRepeatingAudioStream {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("guw", "net/minecraft/client/sounds/FiniteAudioStream", "net/minecraft/class_9672", "net/minecraft/client/sound/NonRepeatingAudioStream", "net/minecraft/src/C_313318_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_readAll() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "readAll", "method_59757", "readAll", "m_319707_"), "()Ljava/nio/ByteBuffer;");
    }

    static jobject readAll(const jobject& obj) {
                
       const auto methodID = methodID_readAll();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_SOUND_NONREPEATINGAUDIOSTREAM_HPP