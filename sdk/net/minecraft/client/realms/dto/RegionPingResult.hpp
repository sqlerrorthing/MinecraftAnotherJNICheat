// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_DTO_REGIONPINGRESULT_HPP
#define NET_MINECRAFT_CLIENT_REALMS_DTO_REGIONPINGRESULT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.dto.RegionPingResult
 * Remapped: fcx
 */
namespace RegionPingResult {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fcx", "com/mojang/realmsclient/dto/RegionPingResult", "net/minecraft/class_4886", "net/minecraft/client/realms/dto/RegionPingResult", "net/minecraft/src/C_3256_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.realms.dto.RegionPingResult#regionName
    static jobject get_field_regionName(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "regionName", "field_22651", "regionName", "f_87647_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.dto.RegionPingResult#regionName
    static void set_field_regionName(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "regionName", "field_22651", "regionName", "f_87647_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.dto.RegionPingResult#ping
    static jint get_field_ping(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "ping", "field_22652", "ping", "f_87648_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.dto.RegionPingResult#ping
    static void set_field_ping(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "ping", "field_22652", "ping", "f_87648_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_getPing() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "ping", "method_25084", "getPing", "m_87652_"), "()I");
    }

    static jint getPing(const jobject& obj) {
                
       const auto methodID = methodID_getPing();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_DTO_REGIONPINGRESULT_HPP