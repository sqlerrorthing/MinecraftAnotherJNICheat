// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_NETWORK_SERVERCONFIGURATIONNETWORKHANDLER_HPP
#define NET_MINECRAFT_SERVER_NETWORK_SERVERCONFIGURATIONNETWORKHANDLER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.network.ServerConfigurationNetworkHandler
 * Remapped: ars
 */
namespace ServerConfigurationNetworkHandler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ars", "net/minecraft/server/network/ServerConfigurationPacketListenerImpl", "net/minecraft/class_8610", "net/minecraft/server/network/ServerConfigurationNetworkHandler", "net/minecraft/src/C_290166_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.server.network.ServerConfigurationNetworkHandler#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "LOGGER", "field_45020", "LOGGER", "f_291519_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.network.ServerConfigurationNetworkHandler#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "LOGGER", "field_45020", "LOGGER", "f_291519_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.network.ServerConfigurationNetworkHandler#INVALID_PLAYER_DATA_TEXT
    [[maybe_unused]] static jobject get_field_INVALID_PLAYER_DATA_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "DISCONNECT_REASON_INVALID_DATA", "field_45021", "INVALID_PLAYER_DATA_TEXT", "f_291657_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.network.ServerConfigurationNetworkHandler#INVALID_PLAYER_DATA_TEXT
    [[maybe_unused]] static void set_field_INVALID_PLAYER_DATA_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "DISCONNECT_REASON_INVALID_DATA", "field_45021", "INVALID_PLAYER_DATA_TEXT", "f_291657_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.server.network.ServerConfigurationNetworkHandler#profile
    static jobject get_field_profile(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "gameProfile", "field_45022", "profile", "f_291596_"), "Lcom/mojang/authlib/GameProfile;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.network.ServerConfigurationNetworkHandler#profile
    static void set_field_profile(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "gameProfile", "field_45022", "profile", "f_291596_"), "Lcom/mojang/authlib/GameProfile;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.network.ServerConfigurationNetworkHandler#tasks
    static jobject get_field_tasks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "configurationTasks", "field_45023", "tasks", "f_290691_"), "Ljava/util/Queue;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.network.ServerConfigurationNetworkHandler#tasks
    static void set_field_tasks(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "configurationTasks", "field_45023", "tasks", "f_290691_"), "Ljava/util/Queue;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.network.ServerConfigurationNetworkHandler#currentTask
    static jobject get_field_currentTask(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "currentTask", "field_45024", "currentTask", "f_291862_"), "Lark;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.network.ServerConfigurationNetworkHandler#currentTask
    static void set_field_currentTask(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "currentTask", "field_45024", "currentTask", "f_291862_"), "Lark;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.network.ServerConfigurationNetworkHandler#syncedOptions
    static jobject get_field_syncedOptions(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "clientInformation", "field_46157", "syncedOptions", "f_290851_"), "Laqh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.network.ServerConfigurationNetworkHandler#syncedOptions
    static void set_field_syncedOptions(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "clientInformation", "field_46157", "syncedOptions", "f_290851_"), "Laqh;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.network.ServerConfigurationNetworkHandler#synchronizedRegistriesTask
    static jobject get_field_synchronizedRegistriesTask(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "synchronizeRegistriesTask", "field_49026", "synchronizedRegistriesTask", "f_316235_"), "Lasd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.network.ServerConfigurationNetworkHandler#synchronizedRegistriesTask
    static void set_field_synchronizedRegistriesTask(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "synchronizeRegistriesTask", "field_49026", "synchronizedRegistriesTask", "f_316235_"), "Lasd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getProfile() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "playerProfile", "method_52403", "getProfile", "m_293343_"), "()Lcom/mojang/authlib/GameProfile;");
    }

    static jobject getProfile(const jobject& obj) {
                
       const auto methodID = methodID_getProfile();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_onDisconnected() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onDisconnect", "method_10839", "onDisconnected", "m_7026_"), "(Lvv;)V");
    }

    static void onDisconnected(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onDisconnected();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isConnectionOpen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "isAcceptingMessages", "method_48106", "isConnectionOpen", "m_6198_"), "()Z");
    }

    static jboolean isConnectionOpen(const jobject& obj) {
                
       const auto methodID = methodID_isConnectionOpen();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_sendConfigurations() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "startConfiguration", "method_52409", "sendConfigurations", "m_294295_"), "()V");
    }

    static void sendConfigurations(const jobject& obj) {
                
       const auto methodID = methodID_sendConfigurations();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_endConfiguration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "returnToWorld", "method_52410", "endConfiguration", "m_295733_"), "()V");
    }

    static void endConfiguration(const jobject& obj) {
                
       const auto methodID = methodID_endConfiguration();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_queueSendResourcePackTask() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n", "addOptionalTasks", "method_52411", "queueSendResourcePackTask", "m_295612_"), "()V");
    }

    static void queueSendResourcePackTask(const jobject& obj) {
                
       const auto methodID = methodID_queueSendResourcePackTask();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_onClientOptions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleClientInformation", "method_12069", "onClientOptions", "m_9844_"), "(Laaa;)V");
    }

    static void onClientOptions(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onClientOptions();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onResourcePackStatus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleResourcePackResponse", "method_52395", "onResourcePackStatus", "m_293248_"), "(Laae;)V");
    }

    static void onResourcePackStatus(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onResourcePackStatus();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onSelectKnownPacks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleSelectKnownPacks", "method_56909", "onSelectKnownPacks", "m_322556_"), "(Labm;)V");
    }

    static void onSelectKnownPacks(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onSelectKnownPacks();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onReady() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleConfigurationFinished", "method_52408", "onReady", "m_293007_"), "(Labl;)V");
    }

    static void onReady(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onReady();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "tick", "method_18784", "tick", "m_9933_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_pollTask() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("o", "startNextTask", "method_52412", "pollTask", "m_295676_"), "()V");
    }

    static void pollTask(const jobject& obj) {
                
       const auto methodID = methodID_pollTask();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_onTaskFinished() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "finishCurrentTask", "method_52406", "onTaskFinished", "m_293514_"), "(Lark$a;)V");
    }

    static void onTaskFinished(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onTaskFinished();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SERVER_NETWORK_SERVERCONFIGURATIONNETWORKHANDLER_HPP