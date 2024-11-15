// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_SERVERMETADATA$PLAYERS_HPP
#define NET_MINECRAFT_SERVER_SERVERMETADATA$PLAYERS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.ServerMetadata$Players
 * Remapped: ajq$b
 */
namespace ServerMetadata$Players {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ajq$b", "net/minecraft/network/protocol/status/ServerStatus$Players", "net/minecraft/class_2926$class_2927", "net/minecraft/server/ServerMetadata$Players", "net/minecraft/src/C_5216_$C_5217_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.server.ServerMetadata$Players#max
    static jint get_field_max(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "max", "comp_1279", "max", "f_271503_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.ServerMetadata$Players#max
    static void set_field_max(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "max", "comp_1279", "max", "f_271503_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.ServerMetadata$Players#online
    static jint get_field_online(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "online", "comp_1280", "online", "f_271178_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.ServerMetadata$Players#online
    static void set_field_online(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "online", "comp_1280", "online", "f_271178_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.ServerMetadata$Players#sample
    static jobject get_field_sample(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "sample", "comp_1281", "sample", "f_134919_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.ServerMetadata$Players#sample
    static void set_field_sample(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "sample", "comp_1281", "sample", "f_134919_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.server.ServerMetadata$Players#GAME_PROFILE_CODEC
    [[maybe_unused]] static jobject get_field_GAME_PROFILE_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "PROFILE_CODEC", "field_42541", "GAME_PROFILE_CODEC", "f_271466_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.ServerMetadata$Players#GAME_PROFILE_CODEC
    [[maybe_unused]] static void set_field_GAME_PROFILE_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "PROFILE_CODEC", "field_42541", "GAME_PROFILE_CODEC", "f_271466_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.server.ServerMetadata$Players#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_42540", "CODEC", "f_271480_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.server.ServerMetadata$Players#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_42540", "CODEC", "f_271480_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID__max() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "max", "comp_1279", "max", "f_271503_"), "()I");
    }

    static jint _max(const jobject& obj) {
                
       const auto methodID = methodID__max();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__online() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "online", "comp_1280", "online", "f_271178_"), "()I");
    }

    static jint _online(const jobject& obj) {
                
       const auto methodID = methodID__online();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__sample() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "sample", "comp_1281", "sample", "f_134919_"), "()Ljava/util/List;");
    }

    static jobject _sample(const jobject& obj) {
                
       const auto methodID = methodID__sample();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SERVER_SERVERMETADATA$PLAYERS_HPP