// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SOUND_SNIFFERDIGSOUNDINSTANCE_HPP
#define NET_MINECRAFT_CLIENT_SOUND_SNIFFERDIGSOUNDINSTANCE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.sound.SnifferDigSoundInstance
 * Remapped: gtw
 */
namespace SnifferDigSoundInstance {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gtw", "net/minecraft/client/resources/sounds/SnifferSoundInstance", "net/minecraft/class_8191", "net/minecraft/client/sound/SnifferDigSoundInstance", "net/minecraft/src/C_271059_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.sound.SnifferDigSoundInstance#field_42931
    [[maybe_unused]] static jfloat get_field_field_42931() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "VOLUME", "field_42931", "field_42931", "f_271268_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.SnifferDigSoundInstance#field_42931
    [[maybe_unused]] static void set_field_field_42931(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "VOLUME", "field_42931", "field_42931", "f_271268_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.sound.SnifferDigSoundInstance#field_42932
    [[maybe_unused]] static jfloat get_field_field_42932() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "PITCH", "field_42932", "field_42932", "f_271261_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.SnifferDigSoundInstance#field_42932
    [[maybe_unused]] static void set_field_field_42932(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "PITCH", "field_42932", "field_42932", "f_271261_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.sound.SnifferDigSoundInstance#sniffer
    static jobject get_field_sniffer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "sniffer", "field_42933", "sniffer", "f_271453_"), "Lchv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.SnifferDigSoundInstance#sniffer
    static void set_field_sniffer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "sniffer", "field_42933", "sniffer", "f_271453_"), "Lchv;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_canPlay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("s", "canPlaySound", "method_26273", "canPlay", "m_7767_"), "()Z");
    }

    static jboolean canPlay(const jobject& obj) {
                
       const auto methodID = methodID_canPlay();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("q", "tick", "method_16896", "tick", "m_7788_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_SOUND_SNIFFERDIGSOUNDINSTANCE_HPP