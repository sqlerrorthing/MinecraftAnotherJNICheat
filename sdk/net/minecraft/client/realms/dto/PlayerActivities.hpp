// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_DTO_PLAYERACTIVITIES_HPP
#define NET_MINECRAFT_CLIENT_REALMS_DTO_PLAYERACTIVITIES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.dto.PlayerActivities
 * Remapped: fcz
 */
namespace PlayerActivities {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fcz", "com/mojang/realmsclient/dto/ServerActivityList", "net/minecraft/class_6193", "net/minecraft/client/realms/dto/PlayerActivities", "net/minecraft/src/C_141555_"));
        }
        return cachedClass;
    };

    // getter for public field net.minecraft.client.realms.dto.PlayerActivities#periodInMillis
    static jlong get_field_periodInMillis(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "periodInMillis", "field_32114", "periodInMillis", "f_167318_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.PlayerActivities#periodInMillis
    static void set_field_periodInMillis(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "periodInMillis", "field_32114", "periodInMillis", "f_167318_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.dto.PlayerActivities#playerActivityDto
    static jobject get_field_playerActivityDto(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "serverActivities", "field_32115", "playerActivityDto", "f_167319_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.PlayerActivities#playerActivityDto
    static void set_field_playerActivityDto(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "serverActivities", "field_32115", "playerActivityDto", "f_167319_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_parse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "parse", "method_35687", "parse", "m_167321_"), "(Ljava/lang/String;)Lfcz;");
    }

    static jobject parse(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_parse();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_DTO_PLAYERACTIVITIES_HPP