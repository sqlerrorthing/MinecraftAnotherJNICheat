// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_C2S_PLAY_CREATIVEINVENTORYACTIONC2SPACKET_HPP
#define NET_MINECRAFT_NETWORK_PACKET_C2S_PLAY_CREATIVEINVENTORYACTIONC2SPACKET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.c2s.play.CreativeInventoryActionC2SPacket
 * Remapped: ahy
 */
namespace CreativeInventoryActionC2SPacket {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ahy", "net/minecraft/network/protocol/game/ServerboundSetCreativeModeSlotPacket", "net/minecraft/class_2873", "net/minecraft/network/packet/c2s/play/CreativeInventoryActionC2SPacket", "net/minecraft/src/C_5192_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.network.packet.c2s.play.CreativeInventoryActionC2SPacket#slot
    static jshort get_field_slot(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "slotNum", "comp_2609", "slot", "f_134549_"), "S");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetShortField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.c2s.play.CreativeInventoryActionC2SPacket#slot
    static void set_field_slot(const jobject &obj, const jshort &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "slotNum", "comp_2609", "slot", "f_134549_"), "S");
        return MinecraftSDK::env->SetShortField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.c2s.play.CreativeInventoryActionC2SPacket#stack
    static jobject get_field_stack(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "itemStack", "comp_2610", "stack", "f_134550_"), "Lcuq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.c2s.play.CreativeInventoryActionC2SPacket#stack
    static void set_field_stack(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "itemStack", "comp_2610", "stack", "f_134550_"), "Lcuq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.c2s.play.CreativeInventoryActionC2SPacket#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_48219", "CODEC", "f_316304_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.c2s.play.CreativeInventoryActionC2SPacket#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_48219", "CODEC", "f_316304_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
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
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handle", "method_12480", "apply", "m_5797_"), "(Lagi;)V");
    }

    static void apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_apply();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__slot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "slotNum", "comp_2609", "slot", "f_134549_"), "()S");
    }

    static jshort _slot(const jobject& obj) {
                
       const auto methodID = methodID__slot();
       return MinecraftSDK::env->CallShortMethod(obj, methodID);
    };
    
    static jmethodID methodID__stack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "itemStack", "comp_2610", "stack", "f_134550_"), "()Lcuq;");
    }

    static jobject _stack(const jobject& obj) {
                
       const auto methodID = methodID__stack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_C2S_PLAY_CREATIVEINVENTORYACTIONC2SPACKET_HPP