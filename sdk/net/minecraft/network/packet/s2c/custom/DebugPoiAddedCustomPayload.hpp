// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_S2C_CUSTOM_DEBUGPOIADDEDCUSTOMPAYLOAD_HPP
#define NET_MINECRAFT_NETWORK_PACKET_S2C_CUSTOM_DEBUGPOIADDEDCUSTOMPAYLOAD_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.s2c.custom.DebugPoiAddedCustomPayload
 * Remapped: aat
 */
namespace DebugPoiAddedCustomPayload {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aat", "net/minecraft/network/protocol/common/custom/PoiAddedDebugPayload", "net/minecraft/class_8722", "net/minecraft/network/packet/s2c/custom/DebugPoiAddedCustomPayload", "net/minecraft/src/C_290112_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugPoiAddedCustomPayload#pos
    static jobject get_field_pos(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "pos", "comp_1704", "pos", "f_290840_"), "Ljd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugPoiAddedCustomPayload#pos
    static void set_field_pos(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "pos", "comp_1704", "pos", "f_290840_"), "Ljd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugPoiAddedCustomPayload#poiType
    static jobject get_field_poiType(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "poiType", "comp_1705", "poiType", "f_315076_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugPoiAddedCustomPayload#poiType
    static void set_field_poiType(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "poiType", "comp_1705", "poiType", "f_315076_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugPoiAddedCustomPayload#freeTicketCount
    static jint get_field_freeTicketCount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "freeTicketCount", "comp_1706", "freeTicketCount", "f_290692_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugPoiAddedCustomPayload#freeTicketCount
    static void set_field_freeTicketCount(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "freeTicketCount", "comp_1706", "freeTicketCount", "f_290692_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.s2c.custom.DebugPoiAddedCustomPayload#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_48676", "CODEC", "f_315048_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.s2c.custom.DebugPoiAddedCustomPayload#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_48676", "CODEC", "f_315048_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.s2c.custom.DebugPoiAddedCustomPayload#ID
    [[maybe_unused]] static jobject get_field_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TYPE", "field_48677", "ID", "f_315969_"), "Laaj$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.s2c.custom.DebugPoiAddedCustomPayload#ID
    [[maybe_unused]] static void set_field_ID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TYPE", "field_48677", "ID", "f_315969_"), "Laaj$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_56501", "write", "m_293671_"), "(Lvw;)V");
    }

    static void write(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_write();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "method_56479", "getId", "m_293297_"), "()Laaj$b;");
    }

    static jobject getId(const jobject& obj) {
                
       const auto methodID = methodID_getId();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__pos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "pos", "comp_1704", "pos", "f_290840_"), "()Ljd;");
    }

    static jobject _pos(const jobject& obj) {
                
       const auto methodID = methodID__pos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__poiType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "poiType", "comp_1705", "poiType", "f_315076_"), "()Ljava/lang/String;");
    }

    static jobject _poiType(const jobject& obj) {
                
       const auto methodID = methodID__poiType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__freeTicketCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "freeTicketCount", "comp_1706", "freeTicketCount", "f_290692_"), "()I");
    }

    static jint _freeTicketCount(const jobject& obj) {
                
       const auto methodID = methodID__freeTicketCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_S2C_CUSTOM_DEBUGPOIADDEDCUSTOMPAYLOAD_HPP