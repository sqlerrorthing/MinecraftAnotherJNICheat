// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_TELEPORTTARGET_HPP
#define NET_MINECRAFT_WORLD_TELEPORTTARGET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.TeleportTarget
 * Remapped: eqc
 */
namespace TeleportTarget {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eqc", "net/minecraft/world/level/portal/DimensionTransition", "net/minecraft/class_5454", "net/minecraft/world/TeleportTarget", "net/minecraft/src/C_336494_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.TeleportTarget#world
    static jobject get_field_world(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "newLevel", "comp_2820", "world", "f_336737_"), "Laqu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.TeleportTarget#world
    static void set_field_world(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "newLevel", "comp_2820", "world", "f_336737_"), "Laqu;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.TeleportTarget#pos
    static jobject get_field_pos(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "pos", "comp_2821", "pos", "f_337495_"), "Lexc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.TeleportTarget#pos
    static void set_field_pos(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "pos", "comp_2821", "pos", "f_337495_"), "Lexc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.TeleportTarget#velocity
    static jobject get_field_velocity(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "speed", "comp_2822", "velocity", "f_337067_"), "Lexc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.TeleportTarget#velocity
    static void set_field_velocity(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "speed", "comp_2822", "velocity", "f_337067_"), "Lexc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.TeleportTarget#yaw
    static jfloat get_field_yaw(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "yRot", "comp_2823", "yaw", "f_337667_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.TeleportTarget#yaw
    static void set_field_yaw(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "yRot", "comp_2823", "yaw", "f_337667_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.TeleportTarget#pitch
    static jfloat get_field_pitch(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "xRot", "comp_2824", "pitch", "f_337294_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.TeleportTarget#pitch
    static void set_field_pitch(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "xRot", "comp_2824", "pitch", "f_337294_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.TeleportTarget#missingRespawnBlock
    static jboolean get_field_missingRespawnBlock(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "missingRespawnBlock", "comp_2825", "missingRespawnBlock", "f_336743_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.TeleportTarget#missingRespawnBlock
    static void set_field_missingRespawnBlock(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "missingRespawnBlock", "comp_2825", "missingRespawnBlock", "f_336743_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.TeleportTarget#postDimensionTransition
    static jobject get_field_postDimensionTransition(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "postDimensionTransition", "comp_2864", "postDimensionTransition", "f_337240_"), "Leqc$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.TeleportTarget#postDimensionTransition
    static void set_field_postDimensionTransition(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "postDimensionTransition", "comp_2864", "postDimensionTransition", "f_337240_"), "Leqc$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.world.TeleportTarget#NO_OP
    [[maybe_unused]] static jobject get_field_NO_OP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DO_NOTHING", "field_52245", "NO_OP", "f_337581_"), "Leqc$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.TeleportTarget#NO_OP
    [[maybe_unused]] static void set_field_NO_OP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DO_NOTHING", "field_52245", "NO_OP", "f_337581_"), "Leqc$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.TeleportTarget#SEND_TRAVEL_THROUGH_PORTAL_PACKET
    [[maybe_unused]] static jobject get_field_SEND_TRAVEL_THROUGH_PORTAL_PACKET() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PLAY_PORTAL_SOUND", "field_52246", "SEND_TRAVEL_THROUGH_PORTAL_PACKET", "f_337401_"), "Leqc$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.TeleportTarget#SEND_TRAVEL_THROUGH_PORTAL_PACKET
    [[maybe_unused]] static void set_field_SEND_TRAVEL_THROUGH_PORTAL_PACKET(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PLAY_PORTAL_SOUND", "field_52246", "SEND_TRAVEL_THROUGH_PORTAL_PACKET", "f_337401_"), "Leqc$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.TeleportTarget#ADD_PORTAL_CHUNK_TICKET
    [[maybe_unused]] static jobject get_field_ADD_PORTAL_CHUNK_TICKET() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PLACE_PORTAL_TICKET", "field_52247", "ADD_PORTAL_CHUNK_TICKET", "f_336890_"), "Leqc$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.TeleportTarget#ADD_PORTAL_CHUNK_TICKET
    [[maybe_unused]] static void set_field_ADD_PORTAL_CHUNK_TICKET(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PLACE_PORTAL_TICKET", "field_52247", "ADD_PORTAL_CHUNK_TICKET", "f_336890_"), "Leqc$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_sendTravelThroughPortalPacket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "playPortalSound", "method_61024", "sendTravelThroughPortalPacket", "m_339082_"), "(Lbsr;)V");
    }

    static void sendTravelThroughPortalPacket(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_sendTravelThroughPortalPacket();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_addPortalChunkTicket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "placePortalTicket", "method_61025", "addPortalChunkTicket", "m_339655_"), "(Lbsr;)V");
    }

    static void addPortalChunkTicket(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_addPortalChunkTicket();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_missingSpawnBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "missingRespawnBlock", "method_60635", "missingSpawnBlock", "m_339282_"), "(Laqu;Lbsr;Leqc$a;)Leqc;");
    }

    static jobject missingSpawnBlock(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_missingSpawnBlock();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getWorldSpawnPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "findAdjustedSharedSpawnPos", "method_61023", "getWorldSpawnPos", "m_339756_"), "(Laqu;Lbsr;)Lexc;");
    }

    static jobject getWorldSpawnPos(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getWorldSpawnPos();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__world() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "newLevel", "comp_2820", "world", "f_336737_"), "()Laqu;");
    }

    static jobject _world(const jobject& obj) {
                
       const auto methodID = methodID__world();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__pos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "pos", "comp_2821", "pos", "f_337495_"), "()Lexc;");
    }

    static jobject _pos(const jobject& obj) {
                
       const auto methodID = methodID__pos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__velocity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "speed", "comp_2822", "velocity", "f_337067_"), "()Lexc;");
    }

    static jobject _velocity(const jobject& obj) {
                
       const auto methodID = methodID__velocity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__yaw() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "yRot", "comp_2823", "yaw", "f_337667_"), "()F");
    }

    static jfloat _yaw(const jobject& obj) {
                
       const auto methodID = methodID__yaw();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID__pitch() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "xRot", "comp_2824", "pitch", "f_337294_"), "()F");
    }

    static jfloat _pitch(const jobject& obj) {
                
       const auto methodID = methodID__pitch();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID__missingRespawnBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "missingRespawnBlock", "comp_2825", "missingRespawnBlock", "f_336743_"), "()Z");
    }

    static jboolean _missingRespawnBlock(const jobject& obj) {
                
       const auto methodID = methodID__missingRespawnBlock();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID__postDimensionTransition() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "postDimensionTransition", "comp_2864", "postDimensionTransition", "f_337240_"), "()Leqc$a;");
    }

    static jobject _postDimensionTransition(const jobject& obj) {
                
       const auto methodID = methodID__postDimensionTransition();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_TELEPORTTARGET_HPP