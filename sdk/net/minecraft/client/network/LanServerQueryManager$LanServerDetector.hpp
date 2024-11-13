// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_NETWORK_LANSERVERQUERYMANAGER$LANSERVERDETECTOR_HPP
#define NET_MINECRAFT_CLIENT_NETWORK_LANSERVERQUERYMANAGER$LANSERVERDETECTOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.network.LanServerQueryManager$LanServerDetector
 * Remapped: guq$a
 */
namespace LanServerQueryManager$LanServerDetector {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("guq$a", "net/minecraft/client/server/LanServerDetection$LanServerDetector", "net/minecraft/class_1134$class_1135", "net/minecraft/client/network/LanServerQueryManager$LanServerDetector", "net/minecraft/src/C_4587_$C_4588_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.network.LanServerQueryManager$LanServerDetector#entryList
    static jobject get_field_entryList(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "serverList", "field_5533", "entryList", "f_120086_"), "Lguq$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.network.LanServerQueryManager$LanServerDetector#entryList
    static void set_field_entryList(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "serverList", "field_5533", "entryList", "f_120086_"), "Lguq$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.network.LanServerQueryManager$LanServerDetector#multicastAddress
    static jobject get_field_multicastAddress(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "pingGroup", "field_5534", "multicastAddress", "f_120087_"), "Ljava/net/InetAddress;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.network.LanServerQueryManager$LanServerDetector#multicastAddress
    static void set_field_multicastAddress(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "pingGroup", "field_5534", "multicastAddress", "f_120087_"), "Ljava/net/InetAddress;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.network.LanServerQueryManager$LanServerDetector#socket
    static jobject get_field_socket(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "socket", "field_5535", "socket", "f_120088_"), "Ljava/net/MulticastSocket;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.network.LanServerQueryManager$LanServerDetector#socket
    static void set_field_socket(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "socket", "field_5535", "socket", "f_120088_"), "Ljava/net/MulticastSocket;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_run() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("run", "run", "", "", "run"), "()V");
    }

    static void run(const jobject& obj) {
                
       const auto methodID = methodID_run();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_NETWORK_LANSERVERQUERYMANAGER$LANSERVERDETECTOR_HPP