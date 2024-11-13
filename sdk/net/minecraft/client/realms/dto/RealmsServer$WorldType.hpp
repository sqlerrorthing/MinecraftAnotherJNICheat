// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_DTO_REALMSSERVER$WORLDTYPE_HPP
#define NET_MINECRAFT_CLIENT_REALMS_DTO_REALMSSERVER$WORLDTYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.dto.RealmsServer$WorldType
 * Remapped: fcp$d
 */
namespace RealmsServer$WorldType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fcp$d", "com/mojang/realmsclient/dto/RealmsServer$WorldType", "net/minecraft/class_4877$class_4321", "net/minecraft/client/realms/dto/RealmsServer$WorldType", "net/minecraft/src/C_3244_$C_3247_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.realms.dto.RealmsServer$WorldType#NORMAL
    [[maybe_unused]] static jobject get_field_NORMAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NORMAL", "field_19437", "NORMAL", "NORMAL"), "Lfcp$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServer$WorldType#NORMAL
    [[maybe_unused]] static void set_field_NORMAL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NORMAL", "field_19437", "NORMAL", "NORMAL"), "Lfcp$d;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.realms.dto.RealmsServer$WorldType#MINIGAME
    [[maybe_unused]] static jobject get_field_MINIGAME() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MINIGAME", "field_19438", "MINIGAME", "MINIGAME"), "Lfcp$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServer$WorldType#MINIGAME
    [[maybe_unused]] static void set_field_MINIGAME(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MINIGAME", "field_19438", "MINIGAME", "MINIGAME"), "Lfcp$d;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.realms.dto.RealmsServer$WorldType#ADVENTUREMAP
    [[maybe_unused]] static jobject get_field_ADVENTUREMAP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ADVENTUREMAP", "field_19439", "ADVENTUREMAP", "ADVENTUREMAP"), "Lfcp$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServer$WorldType#ADVENTUREMAP
    [[maybe_unused]] static void set_field_ADVENTUREMAP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ADVENTUREMAP", "field_19439", "ADVENTUREMAP", "ADVENTUREMAP"), "Lfcp$d;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.realms.dto.RealmsServer$WorldType#EXPERIENCE
    [[maybe_unused]] static jobject get_field_EXPERIENCE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "EXPERIENCE", "field_19440", "EXPERIENCE", "EXPERIENCE"), "Lfcp$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServer$WorldType#EXPERIENCE
    [[maybe_unused]] static void set_field_EXPERIENCE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "EXPERIENCE", "field_19440", "EXPERIENCE", "EXPERIENCE"), "Lfcp$d;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.realms.dto.RealmsServer$WorldType#INSPIRATION
    [[maybe_unused]] static jobject get_field_INSPIRATION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "INSPIRATION", "field_19441", "INSPIRATION", "INSPIRATION"), "Lfcp$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.dto.RealmsServer$WorldType#INSPIRATION
    [[maybe_unused]] static void set_field_INSPIRATION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "INSPIRATION", "field_19441", "INSPIRATION", "INSPIRATION"), "Lfcp$d;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lfcp$d;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lfcp$d;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_DTO_REALMSSERVER$WORLDTYPE_HPP