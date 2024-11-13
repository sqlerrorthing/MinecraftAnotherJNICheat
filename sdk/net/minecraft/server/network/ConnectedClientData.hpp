// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_NETWORK_CONNECTEDCLIENTDATA_HPP
#define NET_MINECRAFT_SERVER_NETWORK_CONNECTEDCLIENTDATA_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.network.ConnectedClientData
 * Remapped: arj
 */
namespace ConnectedClientData {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("arj", "net/minecraft/server/network/CommonListenerCookie", "net/minecraft/class_8792", "net/minecraft/server/network/ConnectedClientData", "net/minecraft/src/C_290146_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.server.network.ConnectedClientData#gameProfile
    static jobject get_field_gameProfile(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "gameProfile", "comp_1959", "gameProfile", "f_290628_"), "Lcom/mojang/authlib/GameProfile;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.network.ConnectedClientData#gameProfile
    static void set_field_gameProfile(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "gameProfile", "comp_1959", "gameProfile", "f_290628_"), "Lcom/mojang/authlib/GameProfile;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.network.ConnectedClientData#latency
    static jint get_field_latency(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "latency", "comp_1960", "latency", "f_291325_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.network.ConnectedClientData#latency
    static void set_field_latency(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "latency", "comp_1960", "latency", "f_291325_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.network.ConnectedClientData#syncedOptions
    static jobject get_field_syncedOptions(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "clientInformation", "comp_1961", "syncedOptions", "f_290565_"), "Laqh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.network.ConnectedClientData#syncedOptions
    static void set_field_syncedOptions(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "clientInformation", "comp_1961", "syncedOptions", "f_290565_"), "Laqh;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.network.ConnectedClientData#transferred
    static jboolean get_field_transferred(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "transferred", "comp_2202", "transferred", "f_315441_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.network.ConnectedClientData#transferred
    static void set_field_transferred(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "transferred", "comp_2202", "transferred", "f_315441_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_createDefault() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createInitial", "method_53824", "createDefault", "m_294081_"), "(Lcom/mojang/authlib/GameProfile;Z)Larj;");
    }

    static jobject createDefault(const jobject& arg0, const jboolean& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_createDefault();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__gameProfile() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "gameProfile", "comp_1959", "gameProfile", "f_290628_"), "()Lcom/mojang/authlib/GameProfile;");
    }

    static jobject _gameProfile(const jobject& obj) {
                
       const auto methodID = methodID__gameProfile();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__latency() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "latency", "comp_1960", "latency", "f_291325_"), "()I");
    }

    static jint _latency(const jobject& obj) {
                
       const auto methodID = methodID__latency();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__syncedOptions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "clientInformation", "comp_1961", "syncedOptions", "f_290565_"), "()Laqh;");
    }

    static jobject _syncedOptions(const jobject& obj) {
                
       const auto methodID = methodID__syncedOptions();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__transferred() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "transferred", "comp_2202", "transferred", "f_315441_"), "()Z");
    }

    static jboolean _transferred(const jobject& obj) {
                
       const auto methodID = methodID__transferred();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SERVER_NETWORK_CONNECTEDCLIENTDATA_HPP