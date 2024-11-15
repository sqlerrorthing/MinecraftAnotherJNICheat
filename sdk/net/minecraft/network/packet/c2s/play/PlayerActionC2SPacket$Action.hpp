// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_C2S_PLAY_PLAYERACTIONC2SPACKET$ACTION_HPP
#define NET_MINECRAFT_NETWORK_PACKET_C2S_PLAY_PLAYERACTIONC2SPACKET$ACTION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.c2s.play.PlayerActionC2SPacket$Action
 * Remapped: ahm$a
 */
namespace PlayerActionC2SPacket$Action {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ahm$a", "net/minecraft/network/protocol/game/ServerboundPlayerActionPacket$Action", "net/minecraft/class_2846$class_2847", "net/minecraft/network/packet/c2s/play/PlayerActionC2SPacket$Action", "net/minecraft/src/C_5175_$C_5176_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.network.packet.c2s.play.PlayerActionC2SPacket$Action#START_DESTROY_BLOCK
    [[maybe_unused]] static jobject get_field_START_DESTROY_BLOCK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "START_DESTROY_BLOCK", "field_12968", "START_DESTROY_BLOCK", "START_DESTROY_BLOCK"), "Lahm$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.c2s.play.PlayerActionC2SPacket$Action#START_DESTROY_BLOCK
    [[maybe_unused]] static void set_field_START_DESTROY_BLOCK(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "START_DESTROY_BLOCK", "field_12968", "START_DESTROY_BLOCK", "START_DESTROY_BLOCK"), "Lahm$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.c2s.play.PlayerActionC2SPacket$Action#ABORT_DESTROY_BLOCK
    [[maybe_unused]] static jobject get_field_ABORT_DESTROY_BLOCK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ABORT_DESTROY_BLOCK", "field_12971", "ABORT_DESTROY_BLOCK", "ABORT_DESTROY_BLOCK"), "Lahm$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.c2s.play.PlayerActionC2SPacket$Action#ABORT_DESTROY_BLOCK
    [[maybe_unused]] static void set_field_ABORT_DESTROY_BLOCK(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ABORT_DESTROY_BLOCK", "field_12971", "ABORT_DESTROY_BLOCK", "ABORT_DESTROY_BLOCK"), "Lahm$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.c2s.play.PlayerActionC2SPacket$Action#STOP_DESTROY_BLOCK
    [[maybe_unused]] static jobject get_field_STOP_DESTROY_BLOCK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "STOP_DESTROY_BLOCK", "field_12973", "STOP_DESTROY_BLOCK", "STOP_DESTROY_BLOCK"), "Lahm$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.c2s.play.PlayerActionC2SPacket$Action#STOP_DESTROY_BLOCK
    [[maybe_unused]] static void set_field_STOP_DESTROY_BLOCK(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "STOP_DESTROY_BLOCK", "field_12973", "STOP_DESTROY_BLOCK", "STOP_DESTROY_BLOCK"), "Lahm$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.c2s.play.PlayerActionC2SPacket$Action#DROP_ALL_ITEMS
    [[maybe_unused]] static jobject get_field_DROP_ALL_ITEMS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DROP_ALL_ITEMS", "field_12970", "DROP_ALL_ITEMS", "DROP_ALL_ITEMS"), "Lahm$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.c2s.play.PlayerActionC2SPacket$Action#DROP_ALL_ITEMS
    [[maybe_unused]] static void set_field_DROP_ALL_ITEMS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DROP_ALL_ITEMS", "field_12970", "DROP_ALL_ITEMS", "DROP_ALL_ITEMS"), "Lahm$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.c2s.play.PlayerActionC2SPacket$Action#DROP_ITEM
    [[maybe_unused]] static jobject get_field_DROP_ITEM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "DROP_ITEM", "field_12975", "DROP_ITEM", "DROP_ITEM"), "Lahm$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.c2s.play.PlayerActionC2SPacket$Action#DROP_ITEM
    [[maybe_unused]] static void set_field_DROP_ITEM(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "DROP_ITEM", "field_12975", "DROP_ITEM", "DROP_ITEM"), "Lahm$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.c2s.play.PlayerActionC2SPacket$Action#RELEASE_USE_ITEM
    [[maybe_unused]] static jobject get_field_RELEASE_USE_ITEM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "RELEASE_USE_ITEM", "field_12974", "RELEASE_USE_ITEM", "RELEASE_USE_ITEM"), "Lahm$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.c2s.play.PlayerActionC2SPacket$Action#RELEASE_USE_ITEM
    [[maybe_unused]] static void set_field_RELEASE_USE_ITEM(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "RELEASE_USE_ITEM", "field_12974", "RELEASE_USE_ITEM", "RELEASE_USE_ITEM"), "Lahm$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.c2s.play.PlayerActionC2SPacket$Action#SWAP_ITEM_WITH_OFFHAND
    [[maybe_unused]] static jobject get_field_SWAP_ITEM_WITH_OFFHAND() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "SWAP_ITEM_WITH_OFFHAND", "field_12969", "SWAP_ITEM_WITH_OFFHAND", "SWAP_ITEM_WITH_OFFHAND"), "Lahm$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.c2s.play.PlayerActionC2SPacket$Action#SWAP_ITEM_WITH_OFFHAND
    [[maybe_unused]] static void set_field_SWAP_ITEM_WITH_OFFHAND(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "SWAP_ITEM_WITH_OFFHAND", "field_12969", "SWAP_ITEM_WITH_OFFHAND", "SWAP_ITEM_WITH_OFFHAND"), "Lahm$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lahm$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lahm$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_C2S_PLAY_PLAYERACTIONC2SPACKET$ACTION_HPP