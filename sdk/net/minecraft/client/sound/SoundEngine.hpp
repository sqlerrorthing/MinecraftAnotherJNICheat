// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SOUND_SOUNDENGINE_HPP
#define NET_MINECRAFT_CLIENT_SOUND_SOUNDENGINE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.sound.SoundEngine
 * Remapped: ezf
 */
namespace SoundEngine {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ezf", "com/mojang/blaze3d/audio/Library", "net/minecraft/class_4225", "net/minecraft/client/sound/SoundEngine", "net/minecraft/src/C_3085_"));
        }
        return cachedClass;
    };

    // getter for static default field net.minecraft.client.sound.SoundEngine#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_18897", "LOGGER", "f_83685_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.sound.SoundEngine#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_18897", "LOGGER", "f_83685_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.sound.SoundEngine#field_34945
    [[maybe_unused]] static jint get_field_field_34945() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NO_DEVICE", "field_34945", "field_34945", "f_193464_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.SoundEngine#field_34945
    [[maybe_unused]] static void set_field_field_34945(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NO_DEVICE", "field_34945", "field_34945", "f_193464_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.sound.SoundEngine#field_31897
    [[maybe_unused]] static jint get_field_field_31897() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DEFAULT_CHANNEL_COUNT", "field_31897", "field_31897", "f_166128_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.SoundEngine#field_31897
    [[maybe_unused]] static void set_field_field_31897(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DEFAULT_CHANNEL_COUNT", "field_31897", "field_31897", "f_166128_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.sound.SoundEngine#devicePointer
    static jlong get_field_devicePointer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "currentDevice", "field_18898", "devicePointer", "f_193465_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.SoundEngine#devicePointer
    static void set_field_devicePointer(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "currentDevice", "field_18898", "devicePointer", "f_193465_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.sound.SoundEngine#contextPointer
    static jlong get_field_contextPointer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "context", "field_18899", "contextPointer", "f_83687_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.SoundEngine#contextPointer
    static void set_field_contextPointer(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "context", "field_18899", "contextPointer", "f_83687_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.sound.SoundEngine#disconnectExtensionPresent
    static jboolean get_field_disconnectExtensionPresent(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "supportsDisconnections", "field_34946", "disconnectExtensionPresent", "f_193466_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.SoundEngine#disconnectExtensionPresent
    static void set_field_disconnectExtensionPresent(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "supportsDisconnections", "field_34946", "disconnectExtensionPresent", "f_193466_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.sound.SoundEngine#deviceSpecifier
    static jobject get_field_deviceSpecifier(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "defaultDeviceName", "field_34947", "deviceSpecifier", "f_193467_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.SoundEngine#deviceSpecifier
    static void set_field_deviceSpecifier(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "defaultDeviceName", "field_34947", "deviceSpecifier", "f_193467_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.client.sound.SoundEngine#EMPTY_SOURCE_SET
    [[maybe_unused]] static jobject get_field_EMPTY_SOURCE_SET() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "EMPTY", "field_19183", "EMPTY_SOURCE_SET", "f_83688_"), "Lezf$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.SoundEngine#EMPTY_SOURCE_SET
    [[maybe_unused]] static void set_field_EMPTY_SOURCE_SET(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "EMPTY", "field_19183", "EMPTY_SOURCE_SET", "f_83688_"), "Lezf$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.sound.SoundEngine#streamingSources
    static jobject get_field_streamingSources(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "staticChannels", "field_19184", "streamingSources", "f_83689_"), "Lezf$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.SoundEngine#streamingSources
    static void set_field_streamingSources(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "staticChannels", "field_19184", "streamingSources", "f_83689_"), "Lezf$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.sound.SoundEngine#staticSources
    static jobject get_field_staticSources(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "streamingChannels", "field_19185", "staticSources", "f_83690_"), "Lezf$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.SoundEngine#staticSources
    static void set_field_staticSources(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "streamingChannels", "field_19185", "staticSources", "f_83690_"), "Lezf$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.sound.SoundEngine#listener
    static jobject get_field_listener(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "listener", "field_18902", "listener", "f_83691_"), "Lezg;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.SoundEngine#listener
    static void set_field_listener(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "listener", "field_18902", "listener", "f_83691_"), "Lezg;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_init() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "init", "method_19661", "init", "m_231084_"), "(Ljava/lang/String;Z)V");
    }

    static void init(const jobject& obj, const jobject& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_init();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_setDirectionalAudio() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setHrtf", "method_41711", "setDirectionalAudio", "m_241879_"), "(Z)V");
    }

    static void setDirectionalAudio(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setDirectionalAudio();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getMonoSourceCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getChannelCount", "method_20297", "getMonoSourceCount", "m_83703_"), "()I");
    }

    static jint getMonoSourceCount(const jobject& obj) {
                
       const auto methodID = methodID_getMonoSourceCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_findAvailableDeviceSpecifier() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getDefaultDeviceName", "method_38500", "findAvailableDeviceSpecifier", "m_193468_"), "()Ljava/lang/String;");
    }

    static jobject findAvailableDeviceSpecifier() {
       const auto clazz = self();
       const auto methodID = methodID_findAvailableDeviceSpecifier();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_getCurrentDeviceName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getCurrentDeviceName", "method_38722", "getCurrentDeviceName", "m_193471_"), "()Ljava/lang/String;");
    }

    static jobject getCurrentDeviceName(const jobject& obj) {
                
       const auto methodID = methodID_getCurrentDeviceName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_updateDeviceSpecifier() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "hasDefaultDeviceChanged", "method_38723", "updateDeviceSpecifier", "m_193474_"), "()Z");
    }

    static jboolean updateDeviceSpecifier(const jobject& obj) {
                
       const auto methodID = methodID_updateDeviceSpecifier();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_openDeviceOrFallback() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "openDeviceOrFallback", "method_38501", "openDeviceOrFallback", "m_193472_"), "(Ljava/lang/String;)J");
    }

    static jlong openDeviceOrFallback(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_openDeviceOrFallback();
       return MinecraftSDK::env->CallStaticLongMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_openDevice() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "tryOpenDevice", "method_20050", "openDevice", "m_193475_"), "(Ljava/lang/String;)Ljava/util/OptionalLong;");
    }

    static jobject openDevice(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_openDevice();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "cleanup", "method_19664", "close", "m_83699_"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getListener() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getListener", "method_19665", "getListener", "m_83700_"), "()Lezg;");
    }

    static jobject getListener(const jobject& obj) {
                
       const auto methodID = methodID_getListener();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_createSource() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "acquireChannel", "method_19663", "createSource", "m_83697_"), "(Lezf$c;)Leze;");
    }

    static jobject createSource(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createSource();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_release() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "releaseChannel", "method_19662", "release", "m_83695_"), "(Leze;)V");
    }

    static void release(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_release();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getDebugString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getDebugString", "method_20296", "getDebugString", "m_83701_"), "()Ljava/lang/String;");
    }

    static jobject getDebugString(const jobject& obj) {
                
       const auto methodID = methodID_getDebugString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSoundDevices() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getAvailableSoundDevices", "method_38502", "getSoundDevices", "m_193477_"), "()Ljava/util/List;");
    }

    static jobject getSoundDevices(const jobject& obj) {
                
       const auto methodID = methodID_getSoundDevices();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_isDeviceUnavailable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "isCurrentDeviceDisconnected", "method_38724", "isDeviceUnavailable", "m_193478_"), "()Z");
    }

    static jboolean isDeviceUnavailable(const jobject& obj) {
                
       const auto methodID = methodID_isDeviceUnavailable();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_SOUND_SOUNDENGINE_HPP