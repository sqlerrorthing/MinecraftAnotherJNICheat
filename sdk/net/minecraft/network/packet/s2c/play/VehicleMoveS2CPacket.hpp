// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_VEHICLEMOVES2CPACKET_HPP
#define NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_VEHICLEMOVES2CPACKET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.s2c.play.VehicleMoveS2CPacket
 * Remapped: adp
 */
namespace VehicleMoveS2CPacket {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("adp", "net/minecraft/network/protocol/game/ClientboundMoveVehiclePacket", "net/minecraft/class_2692", "net/minecraft/network/packet/s2c/play/VehicleMoveS2CPacket", "net/minecraft/src/C_5082_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.network.packet.s2c.play.VehicleMoveS2CPacket#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_47943", "CODEC", "f_314203_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.s2c.play.VehicleMoveS2CPacket#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_47943", "CODEC", "f_314203_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.VehicleMoveS2CPacket#x
    static jdouble get_field_x(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "x", "field_12324", "x", "f_132577_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.VehicleMoveS2CPacket#x
    static void set_field_x(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "x", "field_12324", "x", "f_132577_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.VehicleMoveS2CPacket#y
    static jdouble get_field_y(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "y", "field_12322", "y", "f_132578_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.VehicleMoveS2CPacket#y
    static void set_field_y(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "y", "field_12322", "y", "f_132578_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.VehicleMoveS2CPacket#z
    static jdouble get_field_z(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "z", "field_12320", "z", "f_132579_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.VehicleMoveS2CPacket#z
    static void set_field_z(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "z", "field_12320", "z", "f_132579_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.VehicleMoveS2CPacket#yaw
    static jfloat get_field_yaw(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "yRot", "field_12323", "yaw", "f_132580_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.VehicleMoveS2CPacket#yaw
    static void set_field_yaw(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "yRot", "field_12323", "yaw", "f_132580_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.VehicleMoveS2CPacket#pitch
    static jfloat get_field_pitch(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "xRot", "field_12321", "pitch", "f_132581_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.VehicleMoveS2CPacket#pitch
    static void set_field_pitch(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "xRot", "field_12321", "pitch", "f_132581_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_55893", "write", "m_132592_"), "(Lvw;)V");
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
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handle", "method_11672", "apply", "m_5797_"), "(Labu;)V");
    }

    static void apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_apply();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getX", "method_11673", "getX", "m_132591_"), "()D");
    }

    static jdouble getX(const jobject& obj) {
                
       const auto methodID = methodID_getX();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_getY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getY", "method_11674", "getY", "m_132594_"), "()D");
    }

    static jdouble getY(const jobject& obj) {
                
       const auto methodID = methodID_getY();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_getZ() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getZ", "method_11670", "getZ", "m_132595_"), "()D");
    }

    static jdouble getZ(const jobject& obj) {
                
       const auto methodID = methodID_getZ();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_getYaw() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getYRot", "method_11675", "getYaw", "m_132596_"), "()F");
    }

    static jfloat getYaw(const jobject& obj) {
                
       const auto methodID = methodID_getYaw();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPitch() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "getXRot", "method_11671", "getPitch", "m_132597_"), "()F");
    }

    static jfloat getPitch(const jobject& obj) {
                
       const auto methodID = methodID_getPitch();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_VEHICLEMOVES2CPACKET_HPP