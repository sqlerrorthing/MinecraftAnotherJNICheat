// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SOUND_MINECARTINSIDESOUNDINSTANCE_HPP
#define NET_MINECRAFT_CLIENT_SOUND_MINECARTINSIDESOUNDINSTANCE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.sound.MinecartInsideSoundInstance
 * Remapped: gtu
 */
namespace MinecartInsideSoundInstance {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gtu", "net/minecraft/client/resources/sounds/RidingMinecartSoundInstance", "net/minecraft/class_1107", "net/minecraft/client/sound/MinecartInsideSoundInstance", "net/minecraft/src/C_4560_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.sound.MinecartInsideSoundInstance#field_33006
    [[maybe_unused]] static jfloat get_field_field_33006() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "VOLUME_MIN", "field_33006", "field_33006", "f_174936_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.MinecartInsideSoundInstance#field_33006
    [[maybe_unused]] static void set_field_field_33006(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "VOLUME_MIN", "field_33006", "field_33006", "f_174936_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.sound.MinecartInsideSoundInstance#field_33007
    [[maybe_unused]] static jfloat get_field_field_33007() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "VOLUME_MAX", "field_33007", "field_33007", "f_174937_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.MinecartInsideSoundInstance#field_33007
    [[maybe_unused]] static void set_field_field_33007(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "VOLUME_MAX", "field_33007", "field_33007", "f_174937_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.sound.MinecartInsideSoundInstance#player
    static jobject get_field_player(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "player", "field_5457", "player", "f_119700_"), "Lcmx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.MinecartInsideSoundInstance#player
    static void set_field_player(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "player", "field_5457", "player", "f_119700_"), "Lcmx;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.sound.MinecartInsideSoundInstance#minecart
    static jobject get_field_minecart(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "minecart", "field_5456", "minecart", "f_119701_"), "Lcot;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.MinecartInsideSoundInstance#minecart
    static void set_field_minecart(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "minecart", "field_5456", "minecart", "f_119701_"), "Lcot;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.sound.MinecartInsideSoundInstance#underwater
    static jboolean get_field_underwater(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "underwaterSound", "field_27773", "underwater", "f_174938_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.MinecartInsideSoundInstance#underwater
    static void set_field_underwater(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "underwaterSound", "field_27773", "underwater", "f_174938_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_canPlay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("s", "canPlaySound", "method_26273", "canPlay", "m_7767_"), "()Z");
    }

    static jboolean canPlay(const jobject& obj) {
                
       const auto methodID = methodID_canPlay();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldAlwaysPlay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("r", "canStartSilent", "method_4785", "shouldAlwaysPlay", "m_7784_"), "()Z");
    }

    static jboolean shouldAlwaysPlay(const jobject& obj) {
                
       const auto methodID = methodID_shouldAlwaysPlay();
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

#endif // NET_MINECRAFT_CLIENT_SOUND_MINECARTINSIDESOUNDINSTANCE_HPP