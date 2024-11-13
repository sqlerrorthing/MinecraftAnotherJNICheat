// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SOUND_SOUNDENGINE$SOURCESET_HPP
#define NET_MINECRAFT_CLIENT_SOUND_SOUNDENGINE$SOURCESET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.sound.SoundEngine$SourceSet
 * Remapped: ezf$a
 */
namespace SoundEngine$SourceSet {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ezf$a", "com/mojang/blaze3d/audio/Library$ChannelPool", "net/minecraft/class_4225$class_4276", "net/minecraft/client/sound/SoundEngine$SourceSet", "net/minecraft/src/C_3085_$C_3087_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_createSource() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "acquire", "method_19666", "createSource", "m_5574_"), "()Leze;");
    }

    static jobject createSource(const jobject& obj) {
                
       const auto methodID = methodID_createSource();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_release() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "release", "method_19667", "release", "m_5658_"), "(Leze;)Z");
    }

    static jboolean release(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_release();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "cleanup", "method_19668", "close", "m_6471_"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMaxSourceCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getMaxCount", "method_20298", "getMaxSourceCount", "m_6492_"), "()I");
    }

    static jint getMaxSourceCount(const jobject& obj) {
                
       const auto methodID = methodID_getMaxSourceCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSourceCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getUsedCount", "method_20299", "getSourceCount", "m_6500_"), "()I");
    }

    static jint getSourceCount(const jobject& obj) {
                
       const auto methodID = methodID_getSourceCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_SOUND_SOUNDENGINE$SOURCESET_HPP