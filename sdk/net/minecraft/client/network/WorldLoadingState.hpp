// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_NETWORK_WORLDLOADINGSTATE_HPP
#define NET_MINECRAFT_CLIENT_NETWORK_WORLDLOADINGSTATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.network.WorldLoadingState
 * Remapped: fzn
 */
namespace WorldLoadingState {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fzn", "net/minecraft/client/multiplayer/LevelLoadStatusManager", "net/minecraft/class_8819", "net/minecraft/client/network/WorldLoadingState", "net/minecraft/src/C_301930_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.network.WorldLoadingState#player
    static jobject get_field_player(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "player", "field_46579", "player", "f_303813_"), "Lgeb;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.network.WorldLoadingState#player
    static void set_field_player(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "player", "field_46579", "player", "f_303813_"), "Lgeb;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.network.WorldLoadingState#world
    static jobject get_field_world(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "level", "field_46580", "world", "f_302732_"), "Lfzf;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.network.WorldLoadingState#world
    static void set_field_world(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "level", "field_46580", "world", "f_302732_"), "Lfzf;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.network.WorldLoadingState#renderer
    static jobject get_field_renderer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "levelRenderer", "field_46581", "renderer", "f_303268_"), "Lgex;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.network.WorldLoadingState#renderer
    static void set_field_renderer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "levelRenderer", "field_46581", "renderer", "f_303268_"), "Lgex;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.network.WorldLoadingState#currentStep
    static jobject get_field_currentStep(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "status", "field_46582", "currentStep", "f_302326_"), "Lfzn$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.network.WorldLoadingState#currentStep
    static void set_field_currentStep(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "status", "field_46582", "currentStep", "f_302326_"), "Lfzn$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_54135", "tick", "m_304812_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_isReady() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "levelReady", "method_54136", "isReady", "m_305903_"), "()Z");
    }

    static jboolean isReady(const jobject& obj) {
                
       const auto methodID = methodID_isReady();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_handleChunksComingPacket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "loadingPacketsReceived", "method_54137", "handleChunksComingPacket", "m_304720_"), "()V");
    }

    static void handleChunksComingPacket(const jobject& obj) {
                
       const auto methodID = methodID_handleChunksComingPacket();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_NETWORK_WORLDLOADINGSTATE_HPP