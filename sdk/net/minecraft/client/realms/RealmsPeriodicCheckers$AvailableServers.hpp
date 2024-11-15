// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_REALMSPERIODICCHECKERS$AVAILABLESERVERS_HPP
#define NET_MINECRAFT_CLIENT_REALMS_REALMSPERIODICCHECKERS$AVAILABLESERVERS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.RealmsPeriodicCheckers$AvailableServers
 * Remapped: fdm$a
 */
namespace RealmsPeriodicCheckers$AvailableServers {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fdm$a", "com/mojang/realmsclient/gui/RealmsDataFetcher$ServerListData", "net/minecraft/class_7578$class_8843", "net/minecraft/client/realms/RealmsPeriodicCheckers$AvailableServers", "net/minecraft/src/C_3271_$C_301924_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.realms.RealmsPeriodicCheckers$AvailableServers#serverList
    static jobject get_field_serverList(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "serverList", "comp_1989", "serverList", "f_302550_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.RealmsPeriodicCheckers$AvailableServers#serverList
    static void set_field_serverList(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "serverList", "comp_1989", "serverList", "f_302550_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.RealmsPeriodicCheckers$AvailableServers#availableSnapshotServers
    static jobject get_field_availableSnapshotServers(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "availableSnapshotServers", "comp_1990", "availableSnapshotServers", "f_303266_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.RealmsPeriodicCheckers$AvailableServers#availableSnapshotServers
    static void set_field_availableSnapshotServers(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "availableSnapshotServers", "comp_1990", "availableSnapshotServers", "f_303266_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__serverList() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "serverList", "comp_1989", "serverList", "f_302550_"), "()Ljava/util/List;");
    }

    static jobject _serverList(const jobject& obj) {
                
       const auto methodID = methodID__serverList();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__availableSnapshotServers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "availableSnapshotServers", "comp_1990", "availableSnapshotServers", "f_303266_"), "()Ljava/util/List;");
    }

    static jobject _availableSnapshotServers(const jobject& obj) {
                
       const auto methodID = methodID__availableSnapshotServers();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_REALMSPERIODICCHECKERS$AVAILABLESERVERS_HPP