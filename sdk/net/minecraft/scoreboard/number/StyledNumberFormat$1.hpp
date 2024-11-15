// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCOREBOARD_NUMBER_STYLEDNUMBERFORMAT$1_HPP
#define NET_MINECRAFT_SCOREBOARD_NUMBER_STYLEDNUMBERFORMAT$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.scoreboard.number.StyledNumberFormat$1
 * Remapped: ys$1
 */
namespace StyledNumberFormat$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ys$1", "net/minecraft/network/chat/numbers/StyledFormat$1", "net/minecraft/class_9025$1", "net/minecraft/scoreboard/number/StyledNumberFormat$1", "net/minecraft/src/C_301995_$C_301899_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.scoreboard.number.StyledNumberFormat$1#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_47570", "CODEC", "f_303186_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.scoreboard.number.StyledNumberFormat$1#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_47570", "CODEC", "f_303186_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.scoreboard.number.StyledNumberFormat$1#PACKET_CODEC
    [[maybe_unused]] static jobject get_field_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STREAM_CODEC", "field_48546", "PACKET_CODEC", "f_316732_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.scoreboard.number.StyledNumberFormat$1#PACKET_CODEC
    [[maybe_unused]] static void set_field_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STREAM_CODEC", "field_48546", "PACKET_CODEC", "f_316732_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mapCodec", "method_55458", "getCodec", "m_305346_"), "()Lcom/mojang/serialization/MapCodec;");
    }

    static jobject getCodec(const jobject& obj) {
                
       const auto methodID = methodID_getCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPacketCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "streamCodec", "method_56360", "getPacketCodec", "m_321453_"), "()Lyx;");
    }

    static jobject getPacketCodec(const jobject& obj) {
                
       const auto methodID = methodID_getPacketCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SCOREBOARD_NUMBER_STYLEDNUMBERFORMAT$1_HPP