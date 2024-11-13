// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_NETWORKPHASE_HPP
#define NET_MINECRAFT_NETWORK_NETWORKPHASE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.NetworkPhase
 * Remapped: vu
 */
namespace NetworkPhase {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("vu", "net/minecraft/network/ConnectionProtocol", "net/minecraft/class_2539", "net/minecraft/network/NetworkPhase", "net/minecraft/src/C_4965_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.network.NetworkPhase#HANDSHAKING
    [[maybe_unused]] static jobject get_field_HANDSHAKING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "HANDSHAKING", "field_20590", "HANDSHAKING", "HANDSHAKING"), "Lvu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.NetworkPhase#HANDSHAKING
    [[maybe_unused]] static void set_field_HANDSHAKING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "HANDSHAKING", "field_20590", "HANDSHAKING", "HANDSHAKING"), "Lvu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.NetworkPhase#PLAY
    [[maybe_unused]] static jobject get_field_PLAY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PLAY", "field_20591", "PLAY", "PLAY"), "Lvu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.NetworkPhase#PLAY
    [[maybe_unused]] static void set_field_PLAY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PLAY", "field_20591", "PLAY", "PLAY"), "Lvu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.NetworkPhase#STATUS
    [[maybe_unused]] static jobject get_field_STATUS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "STATUS", "field_20592", "STATUS", "STATUS"), "Lvu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.NetworkPhase#STATUS
    [[maybe_unused]] static void set_field_STATUS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "STATUS", "field_20592", "STATUS", "STATUS"), "Lvu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.NetworkPhase#LOGIN
    [[maybe_unused]] static jobject get_field_LOGIN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "LOGIN", "field_20593", "LOGIN", "LOGIN"), "Lvu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.NetworkPhase#LOGIN
    [[maybe_unused]] static void set_field_LOGIN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "LOGIN", "field_20593", "LOGIN", "LOGIN"), "Lvu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.NetworkPhase#CONFIGURATION
    [[maybe_unused]] static jobject get_field_CONFIGURATION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CONFIGURATION", "field_45671", "CONFIGURATION", "CONFIGURATION"), "Lvu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.NetworkPhase#CONFIGURATION
    [[maybe_unused]] static void set_field_CONFIGURATION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CONFIGURATION", "field_45671", "CONFIGURATION", "CONFIGURATION"), "Lvu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.network.NetworkPhase#id
    static jobject get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "id", "field_20594", "id", "f_129573_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.NetworkPhase#id
    static void set_field_id(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "id", "field_20594", "id", "f_129573_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lvu;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lvu;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "id", "method_10785", "getId", "m_294991_"), "()Ljava/lang/String;");
    }

    static jobject getId(const jobject& obj) {
                
       const auto methodID = methodID_getId();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_NETWORKPHASE_HPP