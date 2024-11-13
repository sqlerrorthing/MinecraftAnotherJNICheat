// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_PARTICLES2CPACKET_HPP
#define NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_PARTICLES2CPACKET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.s2c.play.ParticleS2CPacket
 * Remapped: adi
 */
namespace ParticleS2CPacket {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("adi", "net/minecraft/network/protocol/game/ClientboundLevelParticlesPacket", "net/minecraft/class_2675", "net/minecraft/network/packet/s2c/play/ParticleS2CPacket", "net/minecraft/src/C_5072_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.network.packet.s2c.play.ParticleS2CPacket#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_47935", "CODEC", "f_316628_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.s2c.play.ParticleS2CPacket#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_47935", "CODEC", "f_316628_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.ParticleS2CPacket#x
    static jdouble get_field_x(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "x", "field_12258", "x", "f_132280_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.ParticleS2CPacket#x
    static void set_field_x(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "x", "field_12258", "x", "f_132280_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.ParticleS2CPacket#y
    static jdouble get_field_y(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "y", "field_12257", "y", "f_132281_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.ParticleS2CPacket#y
    static void set_field_y(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "y", "field_12257", "y", "f_132281_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.ParticleS2CPacket#z
    static jdouble get_field_z(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "z", "field_12256", "z", "f_132282_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.ParticleS2CPacket#z
    static void set_field_z(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "z", "field_12256", "z", "f_132282_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.ParticleS2CPacket#offsetX
    static jfloat get_field_offsetX(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "xDist", "field_12255", "offsetX", "f_132283_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.ParticleS2CPacket#offsetX
    static void set_field_offsetX(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "xDist", "field_12255", "offsetX", "f_132283_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.ParticleS2CPacket#offsetY
    static jfloat get_field_offsetY(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "yDist", "field_12252", "offsetY", "f_132284_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.ParticleS2CPacket#offsetY
    static void set_field_offsetY(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "yDist", "field_12252", "offsetY", "f_132284_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.ParticleS2CPacket#offsetZ
    static jfloat get_field_offsetZ(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "zDist", "field_12251", "offsetZ", "f_132285_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.ParticleS2CPacket#offsetZ
    static void set_field_offsetZ(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "zDist", "field_12251", "offsetZ", "f_132285_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.ParticleS2CPacket#speed
    static jfloat get_field_speed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "maxSpeed", "field_12260", "speed", "f_132286_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.ParticleS2CPacket#speed
    static void set_field_speed(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "maxSpeed", "field_12260", "speed", "f_132286_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.ParticleS2CPacket#count
    static jint get_field_count(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "count", "field_12253", "count", "f_132287_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.ParticleS2CPacket#count
    static void set_field_count(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "count", "field_12253", "count", "f_132287_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.ParticleS2CPacket#longDistance
    static jboolean get_field_longDistance(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "overrideLimiter", "field_12254", "longDistance", "f_132288_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.ParticleS2CPacket#longDistance
    static void set_field_longDistance(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "overrideLimiter", "field_12254", "longDistance", "f_132288_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.ParticleS2CPacket#parameters
    static jobject get_field_parameters(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "particle", "field_12259", "parameters", "f_132289_"), "Llk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.ParticleS2CPacket#parameters
    static void set_field_parameters(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "particle", "field_12259", "parameters", "f_132289_"), "Llk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_55885", "write", "m_132312_"), "(Lwk;)V");
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
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handle", "method_11553", "apply", "m_5797_"), "(Labu;)V");
    }

    static void apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_apply();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isLongDistance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "isOverrideLimiter", "method_11552", "isLongDistance", "m_132311_"), "()Z");
    }

    static jboolean isLongDistance(const jobject& obj) {
                
       const auto methodID = methodID_isLongDistance();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getX", "method_11544", "getX", "m_132314_"), "()D");
    }

    static jdouble getX(const jobject& obj) {
                
       const auto methodID = methodID_getX();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_getY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getY", "method_11547", "getY", "m_132315_"), "()D");
    }

    static jdouble getY(const jobject& obj) {
                
       const auto methodID = methodID_getY();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_getZ() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getZ", "method_11546", "getZ", "m_132316_"), "()D");
    }

    static jdouble getZ(const jobject& obj) {
                
       const auto methodID = methodID_getZ();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_getOffsetX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "getXDist", "method_11548", "getOffsetX", "m_132317_"), "()F");
    }

    static jfloat getOffsetX(const jobject& obj) {
                
       const auto methodID = methodID_getOffsetX();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getOffsetY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getYDist", "method_11549", "getOffsetY", "m_132318_"), "()F");
    }

    static jfloat getOffsetY(const jobject& obj) {
                
       const auto methodID = methodID_getOffsetY();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getOffsetZ() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "getZDist", "method_11550", "getOffsetZ", "m_132319_"), "()F");
    }

    static jfloat getOffsetZ(const jobject& obj) {
                
       const auto methodID = methodID_getOffsetZ();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSpeed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "getMaxSpeed", "method_11543", "getSpeed", "m_132320_"), "()F");
    }

    static jfloat getSpeed(const jobject& obj) {
                
       const auto methodID = methodID_getSpeed();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "getCount", "method_11545", "getCount", "m_132321_"), "()I");
    }

    static jint getCount(const jobject& obj) {
                
       const auto methodID = methodID_getCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getParameters() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "getParticle", "method_11551", "getParameters", "m_132322_"), "()Llk;");
    }

    static jobject getParameters(const jobject& obj) {
                
       const auto methodID = methodID_getParameters();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_PARTICLES2CPACKET_HPP