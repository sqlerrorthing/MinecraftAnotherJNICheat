// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SOUND_BIOMEEFFECTSOUNDPLAYER$MUSICLOOP_HPP
#define NET_MINECRAFT_CLIENT_SOUND_BIOMEEFFECTSOUNDPLAYER$MUSICLOOP_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.sound.BiomeEffectSoundPlayer$MusicLoop
 * Remapped: gto$a
 */
namespace BiomeEffectSoundPlayer$MusicLoop {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gto$a", "net/minecraft/client/resources/sounds/BiomeAmbientSoundsHandler$LoopSoundInstance", "net/minecraft/class_4897$class_4898", "net/minecraft/client/sound/BiomeEffectSoundPlayer$MusicLoop", "net/minecraft/src/C_4553_$C_4554_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.sound.BiomeEffectSoundPlayer$MusicLoop#delta
    static jint get_field_delta(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "fadeDirection", "field_22805", "delta", "f_119655_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.BiomeEffectSoundPlayer$MusicLoop#delta
    static void set_field_delta(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "fadeDirection", "field_22805", "delta", "f_119655_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.sound.BiomeEffectSoundPlayer$MusicLoop#strength
    static jint get_field_strength(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "fade", "field_22806", "strength", "f_119656_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.BiomeEffectSoundPlayer$MusicLoop#strength
    static void set_field_strength(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "fade", "field_22806", "strength", "f_119656_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("q", "tick", "method_16896", "tick", "m_7788_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_fadeOut() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("o", "fadeOut", "method_25464", "fadeOut", "m_119659_"), "()V");
    }

    static void fadeOut(const jobject& obj) {
                
       const auto methodID = methodID_fadeOut();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_fadeIn() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("p", "fadeIn", "method_25465", "fadeIn", "m_119660_"), "()V");
    }

    static void fadeIn(const jobject& obj) {
                
       const auto methodID = methodID_fadeIn();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_SOUND_BIOMEEFFECTSOUNDPLAYER$MUSICLOOP_HPP