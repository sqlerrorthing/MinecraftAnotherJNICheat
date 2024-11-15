// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SOUND_MOVINGMINECARTSOUNDINSTANCE_HPP
#define NET_MINECRAFT_CLIENT_SOUND_MOVINGMINECARTSOUNDINSTANCE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.sound.MovingMinecartSoundInstance
 * Remapped: gtt
 */
namespace MovingMinecartSoundInstance {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gtt", "net/minecraft/client/resources/sounds/MinecartSoundInstance", "net/minecraft/class_1108", "net/minecraft/client/sound/MovingMinecartSoundInstance", "net/minecraft/src/C_4559_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.sound.MovingMinecartSoundInstance#field_33001
    [[maybe_unused]] static jfloat get_field_field_33001() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "VOLUME_MIN", "field_33001", "field_33001", "f_174931_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.MovingMinecartSoundInstance#field_33001
    [[maybe_unused]] static void set_field_field_33001(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "VOLUME_MIN", "field_33001", "field_33001", "f_174931_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.sound.MovingMinecartSoundInstance#field_33002
    [[maybe_unused]] static jfloat get_field_field_33002() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "VOLUME_MAX", "field_33002", "field_33002", "f_174932_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.MovingMinecartSoundInstance#field_33002
    [[maybe_unused]] static void set_field_field_33002(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "VOLUME_MAX", "field_33002", "field_33002", "f_174932_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.sound.MovingMinecartSoundInstance#field_33003
    [[maybe_unused]] static jfloat get_field_field_33003() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "PITCH_MIN", "field_33003", "field_33003", "f_174933_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.MovingMinecartSoundInstance#field_33003
    [[maybe_unused]] static void set_field_field_33003(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "PITCH_MIN", "field_33003", "field_33003", "f_174933_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.sound.MovingMinecartSoundInstance#field_33004
    [[maybe_unused]] static jfloat get_field_field_33004() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "PITCH_MAX", "field_33004", "field_33004", "f_174934_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.MovingMinecartSoundInstance#field_33004
    [[maybe_unused]] static void set_field_field_33004(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "PITCH_MAX", "field_33004", "field_33004", "f_174934_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.sound.MovingMinecartSoundInstance#field_33005
    [[maybe_unused]] static jfloat get_field_field_33005() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "PITCH_DELTA", "field_33005", "field_33005", "f_174935_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.MovingMinecartSoundInstance#field_33005
    [[maybe_unused]] static void set_field_field_33005(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "PITCH_DELTA", "field_33005", "field_33005", "f_174935_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.sound.MovingMinecartSoundInstance#minecart
    static jobject get_field_minecart(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "minecart", "field_5458", "minecart", "f_119693_"), "Lcot;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.MovingMinecartSoundInstance#minecart
    static void set_field_minecart(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "minecart", "field_5458", "minecart", "f_119693_"), "Lcot;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.sound.MovingMinecartSoundInstance#distance
    static jfloat get_field_distance(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("t", "pitch", "field_5459", "distance", "f_119694_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.MovingMinecartSoundInstance#distance
    static void set_field_distance(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("t", "pitch", "field_5459", "distance", "f_119694_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
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

#endif // NET_MINECRAFT_CLIENT_SOUND_MOVINGMINECARTSOUNDINSTANCE_HPP