// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_C2S_PLAY_PLAYERINTERACTENTITYC2SPACKET$INTERACTATHANDLER_HPP
#define NET_MINECRAFT_NETWORK_PACKET_C2S_PLAY_PLAYERINTERACTENTITYC2SPACKET$INTERACTATHANDLER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.c2s.play.PlayerInteractEntityC2SPacket$InteractAtHandler
 * Remapped: ahd$e
 */
namespace PlayerInteractEntityC2SPacket$InteractAtHandler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ahd$e", "net/minecraft/network/protocol/game/ServerboundInteractPacket$InteractionAtLocationAction", "net/minecraft/class_2824$class_5910", "net/minecraft/network/packet/c2s/play/PlayerInteractEntityC2SPacket$InteractAtHandler", "net/minecraft/src/C_5161_$C_141878_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.network.packet.c2s.play.PlayerInteractEntityC2SPacket$InteractAtHandler#hand
    static jobject get_field_hand(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "hand", "field_29177", "hand", "f_179656_"), "Lbqq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.c2s.play.PlayerInteractEntityC2SPacket$InteractAtHandler#hand
    static void set_field_hand(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "hand", "field_29177", "hand", "f_179656_"), "Lbqq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.c2s.play.PlayerInteractEntityC2SPacket$InteractAtHandler#pos
    static jobject get_field_pos(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "location", "field_29178", "pos", "f_179657_"), "Lexc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.c2s.play.PlayerInteractEntityC2SPacket$InteractAtHandler#pos
    static void set_field_pos(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "location", "field_29178", "pos", "f_179657_"), "Lexc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getType", "method_34211", "getType", "m_142249_"), "()Lahd$b;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_handle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "dispatch", "method_34213", "handle", "m_142457_"), "(Lahd$c;)V");
    }

    static void handle(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_handle();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_34212", "write", "m_142450_"), "(Lvw;)V");
    }

    static void write(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_write();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_C2S_PLAY_PLAYERINTERACTENTITYC2SPACKET$INTERACTATHANDLER_HPP