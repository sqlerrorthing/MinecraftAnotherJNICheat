// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_NETWORK_CLIENTADVANCEMENTMANAGER_HPP
#define NET_MINECRAFT_CLIENT_NETWORK_CLIENTADVANCEMENTMANAGER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.network.ClientAdvancementManager
 * Remapped: fza
 */
namespace ClientAdvancementManager {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fza", "net/minecraft/client/multiplayer/ClientAdvancements", "net/minecraft/class_632", "net/minecraft/client/network/ClientAdvancementManager", "net/minecraft/src/C_3893_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.network.ClientAdvancementManager#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_3686", "LOGGER", "f_104387_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.network.ClientAdvancementManager#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_3686", "LOGGER", "f_104387_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.network.ClientAdvancementManager#client
    static jobject get_field_client(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "minecraft", "field_3684", "client", "f_104388_"), "Lfgo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.network.ClientAdvancementManager#client
    static void set_field_client(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "minecraft", "field_3684", "client", "f_104388_"), "Lfgo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.network.ClientAdvancementManager#worldSession
    static jobject get_field_worldSession(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "telemetryManager", "field_44808", "worldSession", "f_285594_"), "Lgvs;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.network.ClientAdvancementManager#worldSession
    static void set_field_worldSession(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "telemetryManager", "field_44808", "worldSession", "f_285594_"), "Lgvs;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.network.ClientAdvancementManager#manager
    static jobject get_field_manager(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "tree", "field_46144", "manager", "f_291591_"), "Lal;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.network.ClientAdvancementManager#manager
    static void set_field_manager(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "tree", "field_46144", "manager", "f_291591_"), "Lal;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.network.ClientAdvancementManager#advancementProgresses
    static jobject get_field_advancementProgresses(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "progress", "field_3681", "advancementProgresses", "f_104390_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.network.ClientAdvancementManager#advancementProgresses
    static void set_field_advancementProgresses(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "progress", "field_3681", "advancementProgresses", "f_104390_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.network.ClientAdvancementManager#listener
    static jobject get_field_listener(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "listener", "field_3682", "listener", "f_104391_"), "Lfza$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.network.ClientAdvancementManager#listener
    static void set_field_listener(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "listener", "field_3682", "listener", "f_104391_"), "Lfza$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.network.ClientAdvancementManager#selectedTab
    static jobject get_field_selectedTab(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "selectedTab", "field_3685", "selectedTab", "f_104392_"), "Lag;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.network.ClientAdvancementManager#selectedTab
    static void set_field_selectedTab(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "selectedTab", "field_3685", "selectedTab", "f_104392_"), "Lag;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_onAdvancements() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "update", "method_2861", "onAdvancements", "m_104399_"), "(Lafz;)V");
    }

    static void onAdvancements(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onAdvancements();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getManager() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTree", "method_53814", "getManager", "m_292723_"), "()Lal;");
    }

    static jobject getManager(const jobject& obj) {
                
       const auto methodID = methodID_getManager();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_selectTab() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setSelectedTab", "method_2864", "selectTab", "m_104401_"), "(Lag;Z)V");
    }

    static void selectTab(const jobject& obj, const jobject& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_selectTab();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_setListener() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setListener", "method_2862", "setListener", "m_104397_"), "(Lfza$a;)V");
    }

    static void setListener(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setListener();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_53815", "get", "m_295984_"), "(Lakr;)Lag;");
    }

    static jobject get(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_NETWORK_CLIENTADVANCEMENTMANAGER_HPP