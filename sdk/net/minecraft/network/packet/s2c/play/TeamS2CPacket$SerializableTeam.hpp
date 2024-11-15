// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_TEAMS2CPACKET$SERIALIZABLETEAM_HPP
#define NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_TEAMS2CPACKET$SERIALIZABLETEAM_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.s2c.play.TeamS2CPacket$SerializableTeam
 * Remapped: afh$b
 */
namespace TeamS2CPacket$SerializableTeam {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("afh$b", "net/minecraft/network/protocol/game/ClientboundSetPlayerTeamPacket$Parameters", "net/minecraft/class_5900$class_5902", "net/minecraft/network/packet/s2c/play/TeamS2CPacket$SerializableTeam", "net/minecraft/src/C_5124_$C_141870_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.network.packet.s2c.play.TeamS2CPacket$SerializableTeam#displayName
    static jobject get_field_displayName(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "displayName", "field_29158", "displayName", "f_179352_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.TeamS2CPacket$SerializableTeam#displayName
    static void set_field_displayName(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "displayName", "field_29158", "displayName", "f_179352_"), "Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.TeamS2CPacket$SerializableTeam#prefix
    static jobject get_field_prefix(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "playerPrefix", "field_29159", "prefix", "f_179353_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.TeamS2CPacket$SerializableTeam#prefix
    static void set_field_prefix(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "playerPrefix", "field_29159", "prefix", "f_179353_"), "Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.TeamS2CPacket$SerializableTeam#suffix
    static jobject get_field_suffix(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "playerSuffix", "field_29160", "suffix", "f_179354_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.TeamS2CPacket$SerializableTeam#suffix
    static void set_field_suffix(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "playerSuffix", "field_29160", "suffix", "f_179354_"), "Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.TeamS2CPacket$SerializableTeam#nameTagVisibilityRule
    static jobject get_field_nameTagVisibilityRule(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "nametagVisibility", "field_29161", "nameTagVisibilityRule", "f_179355_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.TeamS2CPacket$SerializableTeam#nameTagVisibilityRule
    static void set_field_nameTagVisibilityRule(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "nametagVisibility", "field_29161", "nameTagVisibilityRule", "f_179355_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.TeamS2CPacket$SerializableTeam#collisionRule
    static jobject get_field_collisionRule(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "collisionRule", "field_29162", "collisionRule", "f_179356_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.TeamS2CPacket$SerializableTeam#collisionRule
    static void set_field_collisionRule(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "collisionRule", "field_29162", "collisionRule", "f_179356_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.TeamS2CPacket$SerializableTeam#color
    static jobject get_field_color(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "color", "field_29163", "color", "f_179357_"), "Ln;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.TeamS2CPacket$SerializableTeam#color
    static void set_field_color(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "color", "field_29163", "color", "f_179357_"), "Ln;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.play.TeamS2CPacket$SerializableTeam#friendlyFlags
    static jint get_field_friendlyFlags(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "options", "field_29164", "friendlyFlags", "f_179358_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.play.TeamS2CPacket$SerializableTeam#friendlyFlags
    static void set_field_friendlyFlags(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "options", "field_29164", "friendlyFlags", "f_179358_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_getDisplayName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getDisplayName", "method_34181", "getDisplayName", "m_179363_"), "()Lwz;");
    }

    static jobject getDisplayName(const jobject& obj) {
                
       const auto methodID = methodID_getDisplayName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getFriendlyFlagsBitwise() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getOptions", "method_34183", "getFriendlyFlagsBitwise", "m_179366_"), "()I");
    }

    static jint getFriendlyFlagsBitwise(const jobject& obj) {
                
       const auto methodID = methodID_getFriendlyFlagsBitwise();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getColor", "method_34184", "getColor", "m_179367_"), "()Ln;");
    }

    static jobject getColor(const jobject& obj) {
                
       const auto methodID = methodID_getColor();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getNameTagVisibilityRule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getNametagVisibility", "method_34185", "getNameTagVisibilityRule", "m_179368_"), "()Ljava/lang/String;");
    }

    static jobject getNameTagVisibilityRule(const jobject& obj) {
                
       const auto methodID = methodID_getNameTagVisibilityRule();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCollisionRule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getCollisionRule", "method_34186", "getCollisionRule", "m_179369_"), "()Ljava/lang/String;");
    }

    static jobject getCollisionRule(const jobject& obj) {
                
       const auto methodID = methodID_getCollisionRule();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPrefix() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getPlayerPrefix", "method_34187", "getPrefix", "m_179370_"), "()Lwz;");
    }

    static jobject getPrefix(const jobject& obj) {
                
       const auto methodID = methodID_getPrefix();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSuffix() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getPlayerSuffix", "method_34188", "getSuffix", "m_179371_"), "()Lwz;");
    }

    static jobject getSuffix(const jobject& obj) {
                
       const auto methodID = methodID_getSuffix();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_34182", "write", "m_179364_"), "(Lwk;)V");
    }

    static void write(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_write();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_S2C_PLAY_TEAMS2CPACKET$SERIALIZABLETEAM_HPP