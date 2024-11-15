// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_ENTITYPOSITIONS2CPACKET_HPP
#define NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_ENTITYPOSITIONS2CPACKET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.s2c.play.EntityPositionS2CPacket
 * Remapped: afw
 */
namespace EntityPositionS2CPacket {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("afw", "net/minecraft/network/protocol/game/ClientboundTeleportEntityPacket", "net/minecraft/class_2777", "net/minecraft/network/packet/s2c/play/EntityPositionS2CPacket", "net/minecraft/src/C_5135_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.network.packet.s2c.play.EntityPositionS2CPacket#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_48004", "CODEC", "f_315967_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.s2c.play.EntityPositionS2CPacket#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_48004", "CODEC", "f_315967_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.EntityPositionS2CPacket#id
    static jint get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "id", "field_12705", "id", "f_133529_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.EntityPositionS2CPacket#id
    static void set_field_id(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "id", "field_12705", "id", "f_133529_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.EntityPositionS2CPacket#x
    static jdouble get_field_x(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "x", "field_12703", "x", "f_133530_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.EntityPositionS2CPacket#x
    static void set_field_x(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "x", "field_12703", "x", "f_133530_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.EntityPositionS2CPacket#y
    static jdouble get_field_y(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "y", "field_12702", "y", "f_133531_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.EntityPositionS2CPacket#y
    static void set_field_y(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "y", "field_12702", "y", "f_133531_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.EntityPositionS2CPacket#z
    static jdouble get_field_z(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "z", "field_12701", "z", "f_133532_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.EntityPositionS2CPacket#z
    static void set_field_z(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "z", "field_12701", "z", "f_133532_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.EntityPositionS2CPacket#yaw
    static jbyte get_field_yaw(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "yRot", "field_12707", "yaw", "f_133533_"), "B");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetByteField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.EntityPositionS2CPacket#yaw
    static void set_field_yaw(const jobject &obj, const jbyte &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "yRot", "field_12707", "yaw", "f_133533_"), "B");
        return MinecraftSDK::env->SetByteField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.EntityPositionS2CPacket#pitch
    static jbyte get_field_pitch(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "xRot", "field_12706", "pitch", "f_133534_"), "B");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetByteField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.EntityPositionS2CPacket#pitch
    static void set_field_pitch(const jobject &obj, const jbyte &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "xRot", "field_12706", "pitch", "f_133534_"), "B");
        return MinecraftSDK::env->SetByteField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.EntityPositionS2CPacket#onGround
    static jboolean get_field_onGround(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "onGround", "field_12704", "onGround", "f_133535_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.EntityPositionS2CPacket#onGround
    static void set_field_onGround(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "onGround", "field_12704", "onGround", "f_133535_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_55949", "write", "m_133546_"), "(Lvw;)V");
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
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handle", "method_11922", "apply", "m_5797_"), "(Labu;)V");
    }

    static void apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_apply();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getId", "method_11916", "getId", "m_133545_"), "()I");
    }

    static jint getId(const jobject& obj) {
                
       const auto methodID = methodID_getId();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getX", "method_11917", "getX", "m_133548_"), "()D");
    }

    static jdouble getX(const jobject& obj) {
                
       const auto methodID = methodID_getX();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_getY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getY", "method_11919", "getY", "m_133549_"), "()D");
    }

    static jdouble getY(const jobject& obj) {
                
       const auto methodID = methodID_getY();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_getZ() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getZ", "method_11918", "getZ", "m_133550_"), "()D");
    }

    static jdouble getZ(const jobject& obj) {
                
       const auto methodID = methodID_getZ();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_getYaw() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "getyRot", "method_11920", "getYaw", "m_133551_"), "()B");
    }

    static jbyte getYaw(const jobject& obj) {
                
       const auto methodID = methodID_getYaw();
       return MinecraftSDK::env->CallByteMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPitch() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getxRot", "method_11921", "getPitch", "m_133552_"), "()B");
    }

    static jbyte getPitch(const jobject& obj) {
                
       const auto methodID = methodID_getPitch();
       return MinecraftSDK::env->CallByteMethod(obj, methodID);
    };
    
    static jmethodID methodID_isOnGround() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "isOnGround", "method_11923", "isOnGround", "m_133553_"), "()Z");
    }

    static jboolean isOnGround(const jobject& obj) {
                
       const auto methodID = methodID_isOnGround();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_ENTITYPOSITIONS2CPACKET_HPP