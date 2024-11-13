// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SOUND_CHANNEL_HPP
#define NET_MINECRAFT_CLIENT_SOUND_CHANNEL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.sound.Channel
 * Remapped: guu
 */
namespace Channel {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("guu", "net/minecraft/client/sounds/ChannelAccess", "net/minecraft/class_4235", "net/minecraft/client/sound/Channel", "net/minecraft/src/C_4592_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.sound.Channel#sources
    static jobject get_field_sources(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "channels", "field_18937", "sources", "f_120121_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.Channel#sources
    static void set_field_sources(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "channels", "field_18937", "sources", "f_120121_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.sound.Channel#soundEngine
    static jobject get_field_soundEngine(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "library", "field_18938", "soundEngine", "f_120122_"), "Lezf;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.sound.Channel#soundEngine
    static void set_field_soundEngine(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "library", "field_18938", "soundEngine", "f_120122_"), "Lezf;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.sound.Channel#executor
    static jobject get_field_executor(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "executor", "field_18939", "executor", "f_120123_"), "Ljava/util/concurrent/Executor;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.sound.Channel#executor
    static void set_field_executor(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "executor", "field_18939", "executor", "f_120123_"), "Ljava/util/concurrent/Executor;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_createSource() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createHandle", "method_19723", "createSource", "m_120128_"), "(Lezf$c;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject createSource(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createSource();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_execute() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "executeOnChannels", "method_19727", "execute", "m_120137_"), "(Ljava/util/function/Consumer;)V");
    }

    static void execute(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_execute();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "scheduleTick", "method_19722", "tick", "m_120127_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "clear", "method_19728", "close", "m_120139_"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_SOUND_CHANNEL_HPP