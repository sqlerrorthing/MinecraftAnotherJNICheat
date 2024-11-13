// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_QUICKPLAYLOGGER$WORLDTYPE_HPP
#define NET_MINECRAFT_CLIENT_QUICKPLAYLOGGER$WORLDTYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.QuickPlayLogger$WorldType
 * Remapped: gej$c
 */
namespace QuickPlayLogger$WorldType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gej$c", "net/minecraft/client/quickplay/QuickPlayLog$Type", "net/minecraft/class_8497$class_8500", "net/minecraft/client/QuickPlayLogger$WorldType", "net/minecraft/src/C_278365_$C_278351_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.QuickPlayLogger$WorldType#SINGLEPLAYER
    [[maybe_unused]] static jobject get_field_SINGLEPLAYER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SINGLEPLAYER", "field_44568", "SINGLEPLAYER", "SINGLEPLAYER"), "Lgej$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.QuickPlayLogger$WorldType#SINGLEPLAYER
    [[maybe_unused]] static void set_field_SINGLEPLAYER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SINGLEPLAYER", "field_44568", "SINGLEPLAYER", "SINGLEPLAYER"), "Lgej$c;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.QuickPlayLogger$WorldType#MULTIPLAYER
    [[maybe_unused]] static jobject get_field_MULTIPLAYER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MULTIPLAYER", "field_44569", "MULTIPLAYER", "MULTIPLAYER"), "Lgej$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.QuickPlayLogger$WorldType#MULTIPLAYER
    [[maybe_unused]] static void set_field_MULTIPLAYER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MULTIPLAYER", "field_44569", "MULTIPLAYER", "MULTIPLAYER"), "Lgej$c;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.QuickPlayLogger$WorldType#REALMS
    [[maybe_unused]] static jobject get_field_REALMS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "REALMS", "field_44570", "REALMS", "REALMS"), "Lgej$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.QuickPlayLogger$WorldType#REALMS
    [[maybe_unused]] static void set_field_REALMS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "REALMS", "field_44570", "REALMS", "REALMS"), "Lgej$c;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.QuickPlayLogger$WorldType#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CODEC", "field_44571", "CODEC", "f_278494_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.QuickPlayLogger$WorldType#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CODEC", "field_44571", "CODEC", "f_278494_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.QuickPlayLogger$WorldType#id
    static jobject get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "name", "field_44572", "id", "f_278427_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.QuickPlayLogger$WorldType#id
    static void set_field_id(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "name", "field_44572", "id", "f_278427_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lgej$c;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lgej$c;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_asString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getSerializedName", "method_15434", "asString", "m_7912_"), "()Ljava/lang/String;");
    }

    static jobject asString(const jobject& obj) {
                
       const auto methodID = methodID_asString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_QUICKPLAYLOGGER$WORLDTYPE_HPP