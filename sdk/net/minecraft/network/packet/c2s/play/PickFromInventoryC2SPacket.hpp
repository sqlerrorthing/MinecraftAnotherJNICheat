// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_C2S_PLAY_PICKFROMINVENTORYC2SPACKET_HPP
#define NET_MINECRAFT_NETWORK_PACKET_C2S_PLAY_PICKFROMINVENTORYC2SPACKET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.c2s.play.PickFromInventoryC2SPacket
 * Remapped: ahj
 */
namespace PickFromInventoryC2SPacket {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ahj", "net/minecraft/network/protocol/game/ServerboundPickItemPacket", "net/minecraft/class_2838", "net/minecraft/network/packet/c2s/play/PickFromInventoryC2SPacket", "net/minecraft/src/C_5172_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.network.packet.c2s.play.PickFromInventoryC2SPacket#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_48204", "CODEC", "f_315445_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.c2s.play.PickFromInventoryC2SPacket#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_48204", "CODEC", "f_315445_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.c2s.play.PickFromInventoryC2SPacket#slot
    static jint get_field_slot(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "slot", "field_12908", "slot", "f_134222_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.c2s.play.PickFromInventoryC2SPacket#slot
    static void set_field_slot(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "slot", "field_12908", "slot", "f_134222_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_55985", "write", "m_134233_"), "(Lvw;)V");
    }

    static void write(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_write();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getPacketId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "method_55846", "getPacketId", "m_5779_"), "()Lzi;");
    }

    static jobject getPacketId(const jobject& obj) {
                
       const auto methodID = methodID_getPacketId();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handle", "method_12292", "apply", "m_5797_"), "(Lagi;)V");
    }

    static void apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_apply();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getSlot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getSlot", "method_12293", "getSlot", "m_134232_"), "()I");
    }

    static jint getSlot(const jobject& obj) {
                
       const auto methodID = methodID_getSlot();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_C2S_PLAY_PICKFROMINVENTORYC2SPACKET_HPP