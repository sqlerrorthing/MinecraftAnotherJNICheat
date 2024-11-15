// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_S2C_CUSTOM_DEBUGBEECUSTOMPAYLOAD$BEE_HPP
#define NET_MINECRAFT_NETWORK_PACKET_S2C_CUSTOM_DEBUGBEECUSTOMPAYLOAD$BEE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.s2c.custom.DebugBeeCustomPayload$Bee
 * Remapped: aaf$a
 */
namespace DebugBeeCustomPayload$Bee {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aaf$a", "net/minecraft/network/protocol/common/custom/BeeDebugPayload$BeeInfo", "net/minecraft/class_8707$class_5243", "net/minecraft/network/packet/s2c/custom/DebugBeeCustomPayload$Bee", "net/minecraft/src/C_290228_$C_290273_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugBeeCustomPayload$Bee#uuid
    static jobject get_field_uuid(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "uuid", "comp_1649", "uuid", "f_290845_"), "Ljava/util/UUID;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugBeeCustomPayload$Bee#uuid
    static void set_field_uuid(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "uuid", "comp_1649", "uuid", "f_290845_"), "Ljava/util/UUID;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugBeeCustomPayload$Bee#entityId
    static jint get_field_entityId(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "id", "comp_1650", "entityId", "f_291027_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugBeeCustomPayload$Bee#entityId
    static void set_field_entityId(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "id", "comp_1650", "entityId", "f_291027_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugBeeCustomPayload$Bee#pos
    static jobject get_field_pos(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "pos", "comp_1651", "pos", "f_290637_"), "Lexc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugBeeCustomPayload$Bee#pos
    static void set_field_pos(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "pos", "comp_1651", "pos", "f_290637_"), "Lexc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugBeeCustomPayload$Bee#path
    static jobject get_field_path(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "path", "comp_1652", "path", "f_290619_"), "Leps;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugBeeCustomPayload$Bee#path
    static void set_field_path(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "path", "comp_1652", "path", "f_290619_"), "Leps;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugBeeCustomPayload$Bee#hivePos
    static jobject get_field_hivePos(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "hivePos", "comp_1653", "hivePos", "f_290544_"), "Ljd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugBeeCustomPayload$Bee#hivePos
    static void set_field_hivePos(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "hivePos", "comp_1653", "hivePos", "f_290544_"), "Ljd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugBeeCustomPayload$Bee#flowerPos
    static jobject get_field_flowerPos(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "flowerPos", "comp_1654", "flowerPos", "f_291765_"), "Ljd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugBeeCustomPayload$Bee#flowerPos
    static void set_field_flowerPos(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "flowerPos", "comp_1654", "flowerPos", "f_291765_"), "Ljd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugBeeCustomPayload$Bee#travelTicks
    static jint get_field_travelTicks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "travelTicks", "comp_1655", "travelTicks", "f_291807_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugBeeCustomPayload$Bee#travelTicks
    static void set_field_travelTicks(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "travelTicks", "comp_1655", "travelTicks", "f_291807_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugBeeCustomPayload$Bee#goals
    static jobject get_field_goals(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "goals", "comp_1656", "goals", "f_291620_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugBeeCustomPayload$Bee#goals
    static void set_field_goals(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "goals", "comp_1656", "goals", "f_291620_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugBeeCustomPayload$Bee#disallowedHives
    static jobject get_field_disallowedHives(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "blacklistedHives", "comp_1657", "disallowedHives", "f_291314_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugBeeCustomPayload$Bee#disallowedHives
    static void set_field_disallowedHives(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "blacklistedHives", "comp_1657", "disallowedHives", "f_291314_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_53030", "write", "m_295368_"), "(Lvw;)V");
    }

    static void write(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_write();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isHiveAt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hasHive", "method_27649", "isHiveAt", "m_293397_"), "(Ljd;)Z");
    }

    static jboolean isHiveAt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isHiveAt();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "generateName", "method_53029", "getName", "m_292788_"), "()Ljava/lang/String;");
    }

    static jobject getName(const jobject& obj) {
                
       const auto methodID = methodID_getName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__uuid() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "uuid", "comp_1649", "uuid", "f_290845_"), "()Ljava/util/UUID;");
    }

    static jobject _uuid(const jobject& obj) {
                
       const auto methodID = methodID__uuid();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__entityId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "id", "comp_1650", "entityId", "f_291027_"), "()I");
    }

    static jint _entityId(const jobject& obj) {
                
       const auto methodID = methodID__entityId();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__pos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "pos", "comp_1651", "pos", "f_290637_"), "()Lexc;");
    }

    static jobject _pos(const jobject& obj) {
                
       const auto methodID = methodID__pos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__path() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "path", "comp_1652", "path", "f_290619_"), "()Leps;");
    }

    static jobject _path(const jobject& obj) {
                
       const auto methodID = methodID__path();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__hivePos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "hivePos", "comp_1653", "hivePos", "f_290544_"), "()Ljd;");
    }

    static jobject _hivePos(const jobject& obj) {
                
       const auto methodID = methodID__hivePos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__flowerPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "flowerPos", "comp_1654", "flowerPos", "f_291765_"), "()Ljd;");
    }

    static jobject _flowerPos(const jobject& obj) {
                
       const auto methodID = methodID__flowerPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__travelTicks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "travelTicks", "comp_1655", "travelTicks", "f_291807_"), "()I");
    }

    static jint _travelTicks(const jobject& obj) {
                
       const auto methodID = methodID__travelTicks();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__goals() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "goals", "comp_1656", "goals", "f_291620_"), "()Ljava/util/Set;");
    }

    static jobject _goals(const jobject& obj) {
                
       const auto methodID = methodID__goals();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__disallowedHives() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "blacklistedHives", "comp_1657", "disallowedHives", "f_291314_"), "()Ljava/util/List;");
    }

    static jobject _disallowedHives(const jobject& obj) {
                
       const auto methodID = methodID__disallowedHives();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_S2C_CUSTOM_DEBUGBEECUSTOMPAYLOAD$BEE_HPP