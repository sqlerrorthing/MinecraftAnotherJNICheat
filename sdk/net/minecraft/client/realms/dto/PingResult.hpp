// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_DTO_PINGRESULT_HPP
#define NET_MINECRAFT_CLIENT_REALMS_DTO_PINGRESULT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.dto.PingResult
 * Remapped: fck
 */
namespace PingResult {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fck", "com/mojang/realmsclient/dto/PingResult", "net/minecraft/class_4873", "net/minecraft/client/realms/dto/PingResult", "net/minecraft/src/C_3240_"));
        }
        return cachedClass;
    };

    // getter for public field net.minecraft.client.realms.dto.PingResult#pingResults
    static jobject get_field_pingResults(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "pingResults", "field_22588", "pingResults", "f_87438_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.PingResult#pingResults
    static void set_field_pingResults(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "pingResults", "field_22588", "pingResults", "f_87438_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.dto.PingResult#worldIds
    static jobject get_field_worldIds(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "realmIds", "field_22589", "worldIds", "f_317106_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.PingResult#worldIds
    static void set_field_worldIds(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "realmIds", "field_22589", "worldIds", "f_317106_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_CLIENT_REALMS_DTO_PINGRESULT_HPP