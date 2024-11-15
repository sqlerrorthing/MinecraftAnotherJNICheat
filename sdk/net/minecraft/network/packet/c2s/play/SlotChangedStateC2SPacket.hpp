// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_C2S_PLAY_SLOTCHANGEDSTATEC2SPACKET_HPP
#define NET_MINECRAFT_NETWORK_PACKET_C2S_PLAY_SLOTCHANGEDSTATEC2SPACKET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.c2s.play.SlotChangedStateC2SPacket
 * Remapped: agz
 */
namespace SlotChangedStateC2SPacket {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("agz", "net/minecraft/network/protocol/game/ServerboundContainerSlotStateChangedPacket", "net/minecraft/class_8875", "net/minecraft/network/packet/c2s/play/SlotChangedStateC2SPacket", "net/minecraft/src/C_302090_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.network.packet.c2s.play.SlotChangedStateC2SPacket#slotId
    static jint get_field_slotId(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "slotId", "comp_1998", "slotId", "f_303719_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.c2s.play.SlotChangedStateC2SPacket#slotId
    static void set_field_slotId(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "slotId", "comp_1998", "slotId", "f_303719_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.c2s.play.SlotChangedStateC2SPacket#screenHandlerId
    static jint get_field_screenHandlerId(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "containerId", "comp_1999", "screenHandlerId", "f_303525_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.c2s.play.SlotChangedStateC2SPacket#screenHandlerId
    static void set_field_screenHandlerId(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "containerId", "comp_1999", "screenHandlerId", "f_303525_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.c2s.play.SlotChangedStateC2SPacket#newState
    static jboolean get_field_newState(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "newState", "comp_2000", "newState", "f_303711_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.c2s.play.SlotChangedStateC2SPacket#newState
    static void set_field_newState(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "newState", "comp_2000", "newState", "f_303711_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.c2s.play.SlotChangedStateC2SPacket#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_48192", "CODEC", "f_314655_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.c2s.play.SlotChangedStateC2SPacket#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_48192", "CODEC", "f_314655_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_55973", "write", "m_307495_"), "(Lvw;)V");
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
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handle", "method_54437", "apply", "m_5797_"), "(Lagi;)V");
    }

    static void apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_apply();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__slotId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "slotId", "comp_1998", "slotId", "f_303719_"), "()I");
    }

    static jint _slotId(const jobject& obj) {
                
       const auto methodID = methodID__slotId();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__screenHandlerId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "containerId", "comp_1999", "screenHandlerId", "f_303525_"), "()I");
    }

    static jint _screenHandlerId(const jobject& obj) {
                
       const auto methodID = methodID__screenHandlerId();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__newState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "newState", "comp_2000", "newState", "f_303711_"), "()Z");
    }

    static jboolean _newState(const jobject& obj) {
                
       const auto methodID = methodID__newState();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_C2S_PLAY_SLOTCHANGEDSTATEC2SPACKET_HPP