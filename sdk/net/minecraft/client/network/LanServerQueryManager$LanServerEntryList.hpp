// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_NETWORK_LANSERVERQUERYMANAGER$LANSERVERENTRYLIST_HPP
#define NET_MINECRAFT_CLIENT_NETWORK_LANSERVERQUERYMANAGER$LANSERVERENTRYLIST_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.network.LanServerQueryManager$LanServerEntryList
 * Remapped: guq$b
 */
namespace LanServerQueryManager$LanServerEntryList {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("guq$b", "net/minecraft/client/server/LanServerDetection$LanServerList", "net/minecraft/class_1134$class_1136", "net/minecraft/client/network/LanServerQueryManager$LanServerEntryList", "net/minecraft/src/C_4587_$C_4589_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.network.LanServerQueryManager$LanServerEntryList#serverEntries
    static jobject get_field_serverEntries(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "servers", "field_5536", "serverEntries", "f_120092_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.network.LanServerQueryManager$LanServerEntryList#serverEntries
    static void set_field_serverEntries(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "servers", "field_5536", "serverEntries", "f_120092_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.network.LanServerQueryManager$LanServerEntryList#dirty
    static jboolean get_field_dirty(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "isDirty", "field_5537", "dirty", "f_120093_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.network.LanServerQueryManager$LanServerEntryList#dirty
    static void set_field_dirty(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "isDirty", "field_5537", "dirty", "f_120093_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_getEntriesIfUpdated() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "takeDirtyServers", "method_45912", "getEntriesIfUpdated", "m_247578_"), "()Ljava/util/List;");
    }

    static jobject getEntriesIfUpdated(const jobject& obj) {
                
       const auto methodID = methodID_getEntriesIfUpdated();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_addServer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addServer", "method_4824", "addServer", "m_120096_"), "(Ljava/lang/String;Ljava/net/InetAddress;)V");
    }

    static void addServer(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_addServer();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_NETWORK_LANSERVERQUERYMANAGER$LANSERVERENTRYLIST_HPP