// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SOUND_ABSTRACTBEESOUNDINSTANCE_HPP
#define NET_MINECRAFT_CLIENT_SOUND_ABSTRACTBEESOUNDINSTANCE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.sound.AbstractBeeSoundInstance
 * Remapped: gtn
 */
namespace AbstractBeeSoundInstance {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gtn", "net/minecraft/client/resources/sounds/BeeSoundInstance", "net/minecraft/class_4510", "net/minecraft/client/sound/AbstractBeeSoundInstance", "net/minecraft/src/C_4552_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.sound.AbstractBeeSoundInstance#field_32991
    [[maybe_unused]] static jfloat get_field_field_32991() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "VOLUME_MIN", "field_32991", "field_32991", "f_174917_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.AbstractBeeSoundInstance#field_32991
    [[maybe_unused]] static void set_field_field_32991(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "VOLUME_MIN", "field_32991", "field_32991", "f_174917_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.sound.AbstractBeeSoundInstance#field_32992
    [[maybe_unused]] static jfloat get_field_field_32992() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "VOLUME_MAX", "field_32992", "field_32992", "f_174918_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.AbstractBeeSoundInstance#field_32992
    [[maybe_unused]] static void set_field_field_32992(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "VOLUME_MAX", "field_32992", "field_32992", "f_174918_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.sound.AbstractBeeSoundInstance#field_32993
    [[maybe_unused]] static jfloat get_field_field_32993() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "PITCH_MIN", "field_32993", "field_32993", "f_174919_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.AbstractBeeSoundInstance#field_32993
    [[maybe_unused]] static void set_field_field_32993(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "PITCH_MIN", "field_32993", "field_32993", "f_174919_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for protected field net.minecraft.client.sound.AbstractBeeSoundInstance#bee
    static jobject get_field_bee(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "bee", "field_20530", "bee", "f_119618_"), "Lcff;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.client.sound.AbstractBeeSoundInstance#bee
    static void set_field_bee(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "bee", "field_20530", "bee", "f_119618_"), "Lcff;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.sound.AbstractBeeSoundInstance#replaced
    static jboolean get_field_replaced(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "hasSwitched", "field_20531", "replaced", "f_119619_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.AbstractBeeSoundInstance#replaced
    static void set_field_replaced(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "hasSwitched", "field_20531", "replaced", "f_119619_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("q", "tick", "method_16896", "tick", "m_7788_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMinPitch() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("u", "getMinPitch", "method_22137", "getMinPitch", "m_119627_"), "()F");
    }

    static jfloat getMinPitch(const jobject& obj) {
                
       const auto methodID = methodID_getMinPitch();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMaxPitch() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("v", "getMaxPitch", "method_22138", "getMaxPitch", "m_119628_"), "()F");
    }

    static jfloat getMaxPitch(const jobject& obj) {
                
       const auto methodID = methodID_getMaxPitch();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldAlwaysPlay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("r", "canStartSilent", "method_4785", "shouldAlwaysPlay", "m_7784_"), "()Z");
    }

    static jboolean shouldAlwaysPlay(const jobject& obj) {
                
       const auto methodID = methodID_shouldAlwaysPlay();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_canPlay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("s", "canPlaySound", "method_26273", "canPlay", "m_7767_"), "()Z");
    }

    static jboolean canPlay(const jobject& obj) {
                
       const auto methodID = methodID_canPlay();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getReplacement() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("o", "getAlternativeSoundInstance", "method_22135", "getReplacement", "m_5958_"), "()Lgtj;");
    }

    static jobject getReplacement(const jobject& obj) {
                
       const auto methodID = methodID_getReplacement();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldReplace() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("p", "shouldSwitchSounds", "method_22136", "shouldReplace", "m_7774_"), "()Z");
    }

    static jboolean shouldReplace(const jobject& obj) {
                
       const auto methodID = methodID_shouldReplace();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_SOUND_ABSTRACTBEESOUNDINSTANCE_HPP