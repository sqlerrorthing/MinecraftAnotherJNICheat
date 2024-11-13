// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_C2S_PLAY_PLAYERMOVEC2SPACKET_HPP
#define NET_MINECRAFT_NETWORK_PACKET_C2S_PLAY_PLAYERMOVEC2SPACKET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket
 * Remapped: ahg
 */
namespace PlayerMoveC2SPacket {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ahg", "net/minecraft/network/protocol/game/ServerboundMovePlayerPacket", "net/minecraft/class_2828", "net/minecraft/network/packet/c2s/play/PlayerMoveC2SPacket", "net/minecraft/src/C_5166_"));
        }
        return cachedClass;
    };

    // getter for protected field net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket#x
    static jdouble get_field_x(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "x", "field_12889", "x", "f_134118_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket#x
    static void set_field_x(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "x", "field_12889", "x", "f_134118_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket#y
    static jdouble get_field_y(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "y", "field_12886", "y", "f_134119_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket#y
    static void set_field_y(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "y", "field_12886", "y", "f_134119_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket#z
    static jdouble get_field_z(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "z", "field_12884", "z", "f_134120_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket#z
    static void set_field_z(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "z", "field_12884", "z", "f_134120_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket#yaw
    static jfloat get_field_yaw(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "yRot", "field_12887", "yaw", "f_134121_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket#yaw
    static void set_field_yaw(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "yRot", "field_12887", "yaw", "f_134121_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket#pitch
    static jfloat get_field_pitch(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "xRot", "field_12885", "pitch", "f_134122_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket#pitch
    static void set_field_pitch(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "xRot", "field_12885", "pitch", "f_134122_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket#onGround
    static jboolean get_field_onGround(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "onGround", "field_29179", "onGround", "f_134123_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket#onGround
    static void set_field_onGround(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "onGround", "field_29179", "onGround", "f_134123_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket#changePosition
    static jboolean get_field_changePosition(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "hasPos", "field_12890", "changePosition", "f_134124_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket#changePosition
    static void set_field_changePosition(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "hasPos", "field_12890", "changePosition", "f_134124_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket#changeLook
    static jboolean get_field_changeLook(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "hasRot", "field_12888", "changeLook", "f_134125_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket#changeLook
    static void set_field_changeLook(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "hasRot", "field_12888", "changeLook", "f_134125_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
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
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handle", "method_12272", "apply", "m_5797_"), "(Lagi;)V");
    }

    static void apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_apply();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getX", "method_12269", "getX", "m_134129_"), "(D)D");
    }

    static jdouble getX(const jobject& obj, const jdouble& arg0) {
                
       const auto methodID = methodID_getX();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getY", "method_12268", "getY", "m_134140_"), "(D)D");
    }

    static jdouble getY(const jobject& obj, const jdouble& arg0) {
                
       const auto methodID = methodID_getY();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getZ() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getZ", "method_12274", "getZ", "m_134146_"), "(D)D");
    }

    static jdouble getZ(const jobject& obj, const jdouble& arg0) {
                
       const auto methodID = methodID_getZ();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getYaw() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getYRot", "method_12271", "getYaw", "m_134131_"), "(F)F");
    }

    static jfloat getYaw(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_getYaw();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getPitch() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getXRot", "method_12270", "getPitch", "m_134142_"), "(F)F");
    }

    static jfloat getPitch(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_getPitch();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isOnGround() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "isOnGround", "method_12273", "isOnGround", "m_134139_"), "()Z");
    }

    static jboolean isOnGround(const jobject& obj) {
                
       const auto methodID = methodID_isOnGround();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_changesPosition() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "hasPosition", "method_36171", "changesPosition", "m_179683_"), "()Z");
    }

    static jboolean changesPosition(const jobject& obj) {
                
       const auto methodID = methodID_changesPosition();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_changesLook() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "hasRotation", "method_36172", "changesLook", "m_179684_"), "()Z");
    }

    static jboolean changesLook(const jobject& obj) {
                
       const auto methodID = methodID_changesLook();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_C2S_PLAY_PLAYERMOVEC2SPACKET_HPP