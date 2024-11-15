// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_MULTIPLAYER_MULTIPLAYERSERVERLISTWIDGET_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_MULTIPLAYER_MULTIPLAYERSERVERLISTWIDGET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget
 * Remapped: fqx
 */
namespace MultiplayerServerListWidget {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fqx", "net/minecraft/client/gui/screens/multiplayer/ServerSelectionList", "net/minecraft/class_4267", "net/minecraft/client/gui/screen/multiplayer/MultiplayerServerListWidget", "net/minecraft/src/C_3696_"));
        }
        return cachedClass;
    };

    // getter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#INCOMPATIBLE_TEXTURE
    [[maybe_unused]] static jobject get_field_INCOMPATIBLE_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "INCOMPATIBLE_SPRITE", "field_45516", "INCOMPATIBLE_TEXTURE", "f_291621_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#INCOMPATIBLE_TEXTURE
    [[maybe_unused]] static void set_field_INCOMPATIBLE_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "INCOMPATIBLE_SPRITE", "field_45516", "INCOMPATIBLE_TEXTURE", "f_291621_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#UNREACHABLE_TEXTURE
    [[maybe_unused]] static jobject get_field_UNREACHABLE_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "UNREACHABLE_SPRITE", "field_45517", "UNREACHABLE_TEXTURE", "f_291095_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#UNREACHABLE_TEXTURE
    [[maybe_unused]] static void set_field_UNREACHABLE_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "UNREACHABLE_SPRITE", "field_45517", "UNREACHABLE_TEXTURE", "f_291095_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#PING_1_TEXTURE
    [[maybe_unused]] static jobject get_field_PING_1_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "PING_1_SPRITE", "field_45518", "PING_1_TEXTURE", "f_291481_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#PING_1_TEXTURE
    [[maybe_unused]] static void set_field_PING_1_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "PING_1_SPRITE", "field_45518", "PING_1_TEXTURE", "f_291481_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#PING_2_TEXTURE
    [[maybe_unused]] static jobject get_field_PING_2_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "PING_2_SPRITE", "field_45519", "PING_2_TEXTURE", "f_291352_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#PING_2_TEXTURE
    [[maybe_unused]] static void set_field_PING_2_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "PING_2_SPRITE", "field_45519", "PING_2_TEXTURE", "f_291352_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#PING_3_TEXTURE
    [[maybe_unused]] static jobject get_field_PING_3_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "PING_3_SPRITE", "field_45520", "PING_3_TEXTURE", "f_290600_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#PING_3_TEXTURE
    [[maybe_unused]] static void set_field_PING_3_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "PING_3_SPRITE", "field_45520", "PING_3_TEXTURE", "f_290600_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#PING_4_TEXTURE
    [[maybe_unused]] static jobject get_field_PING_4_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "PING_4_SPRITE", "field_45521", "PING_4_TEXTURE", "f_291043_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#PING_4_TEXTURE
    [[maybe_unused]] static void set_field_PING_4_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "PING_4_SPRITE", "field_45521", "PING_4_TEXTURE", "f_291043_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#PING_5_TEXTURE
    [[maybe_unused]] static jobject get_field_PING_5_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "PING_5_SPRITE", "field_45522", "PING_5_TEXTURE", "f_290749_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#PING_5_TEXTURE
    [[maybe_unused]] static void set_field_PING_5_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "PING_5_SPRITE", "field_45522", "PING_5_TEXTURE", "f_290749_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#PINGING_1_TEXTURE
    [[maybe_unused]] static jobject get_field_PINGING_1_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "PINGING_1_SPRITE", "field_45523", "PINGING_1_TEXTURE", "f_290586_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#PINGING_1_TEXTURE
    [[maybe_unused]] static void set_field_PINGING_1_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "PINGING_1_SPRITE", "field_45523", "PINGING_1_TEXTURE", "f_290586_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#PINGING_2_TEXTURE
    [[maybe_unused]] static jobject get_field_PINGING_2_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "PINGING_2_SPRITE", "field_45524", "PINGING_2_TEXTURE", "f_291800_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#PINGING_2_TEXTURE
    [[maybe_unused]] static void set_field_PINGING_2_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "PINGING_2_SPRITE", "field_45524", "PINGING_2_TEXTURE", "f_291800_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#PINGING_3_TEXTURE
    [[maybe_unused]] static jobject get_field_PINGING_3_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "PINGING_3_SPRITE", "field_45525", "PINGING_3_TEXTURE", "f_290953_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#PINGING_3_TEXTURE
    [[maybe_unused]] static void set_field_PINGING_3_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "PINGING_3_SPRITE", "field_45525", "PINGING_3_TEXTURE", "f_290953_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#PINGING_4_TEXTURE
    [[maybe_unused]] static jobject get_field_PINGING_4_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "PINGING_4_SPRITE", "field_45526", "PINGING_4_TEXTURE", "f_291670_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#PINGING_4_TEXTURE
    [[maybe_unused]] static void set_field_PINGING_4_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "PINGING_4_SPRITE", "field_45526", "PINGING_4_TEXTURE", "f_291670_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#PINGING_5_TEXTURE
    [[maybe_unused]] static jobject get_field_PINGING_5_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "PINGING_5_SPRITE", "field_45527", "PINGING_5_TEXTURE", "f_291720_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#PINGING_5_TEXTURE
    [[maybe_unused]] static void set_field_PINGING_5_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "PINGING_5_SPRITE", "field_45527", "PINGING_5_TEXTURE", "f_291720_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#JOIN_HIGHLIGHTED_TEXTURE
    [[maybe_unused]] static jobject get_field_JOIN_HIGHLIGHTED_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "JOIN_HIGHLIGHTED_SPRITE", "field_45528", "JOIN_HIGHLIGHTED_TEXTURE", "f_290768_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#JOIN_HIGHLIGHTED_TEXTURE
    [[maybe_unused]] static void set_field_JOIN_HIGHLIGHTED_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "JOIN_HIGHLIGHTED_SPRITE", "field_45528", "JOIN_HIGHLIGHTED_TEXTURE", "f_290768_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#JOIN_TEXTURE
    [[maybe_unused]] static jobject get_field_JOIN_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("z", "JOIN_SPRITE", "field_45529", "JOIN_TEXTURE", "f_290763_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#JOIN_TEXTURE
    [[maybe_unused]] static void set_field_JOIN_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("z", "JOIN_SPRITE", "field_45529", "JOIN_TEXTURE", "f_290763_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#MOVE_UP_HIGHLIGHTED_TEXTURE
    [[maybe_unused]] static jobject get_field_MOVE_UP_HIGHLIGHTED_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("A", "MOVE_UP_HIGHLIGHTED_SPRITE", "field_45530", "MOVE_UP_HIGHLIGHTED_TEXTURE", "f_291174_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#MOVE_UP_HIGHLIGHTED_TEXTURE
    [[maybe_unused]] static void set_field_MOVE_UP_HIGHLIGHTED_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("A", "MOVE_UP_HIGHLIGHTED_SPRITE", "field_45530", "MOVE_UP_HIGHLIGHTED_TEXTURE", "f_291174_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#MOVE_UP_TEXTURE
    [[maybe_unused]] static jobject get_field_MOVE_UP_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("B", "MOVE_UP_SPRITE", "field_45513", "MOVE_UP_TEXTURE", "f_290378_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#MOVE_UP_TEXTURE
    [[maybe_unused]] static void set_field_MOVE_UP_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("B", "MOVE_UP_SPRITE", "field_45513", "MOVE_UP_TEXTURE", "f_290378_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#MOVE_DOWN_HIGHLIGHTED_TEXTURE
    [[maybe_unused]] static jobject get_field_MOVE_DOWN_HIGHLIGHTED_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("C", "MOVE_DOWN_HIGHLIGHTED_SPRITE", "field_45514", "MOVE_DOWN_HIGHLIGHTED_TEXTURE", "f_291824_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#MOVE_DOWN_HIGHLIGHTED_TEXTURE
    [[maybe_unused]] static void set_field_MOVE_DOWN_HIGHLIGHTED_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("C", "MOVE_DOWN_HIGHLIGHTED_SPRITE", "field_45514", "MOVE_DOWN_HIGHLIGHTED_TEXTURE", "f_291824_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#MOVE_DOWN_TEXTURE
    [[maybe_unused]] static jobject get_field_MOVE_DOWN_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("D", "MOVE_DOWN_SPRITE", "field_45515", "MOVE_DOWN_TEXTURE", "f_290758_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#MOVE_DOWN_TEXTURE
    [[maybe_unused]] static void set_field_MOVE_DOWN_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("D", "MOVE_DOWN_SPRITE", "field_45515", "MOVE_DOWN_TEXTURE", "f_290758_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("E", "LOGGER", "field_19104", "LOGGER", "f_99756_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("E", "LOGGER", "field_19104", "LOGGER", "f_99756_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#SERVER_PINGER_THREAD_POOL
    [[maybe_unused]] static jobject get_field_SERVER_PINGER_THREAD_POOL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("F", "THREAD_POOL", "field_19105", "SERVER_PINGER_THREAD_POOL", "f_99757_"), "Ljava/util/concurrent/ThreadPoolExecutor;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#SERVER_PINGER_THREAD_POOL
    [[maybe_unused]] static void set_field_SERVER_PINGER_THREAD_POOL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("F", "THREAD_POOL", "field_19105", "SERVER_PINGER_THREAD_POOL", "f_99757_"), "Ljava/util/concurrent/ThreadPoolExecutor;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#LAN_SCANNING_TEXT
    [[maybe_unused]] static jobject get_field_LAN_SCANNING_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("G", "SCANNING_LABEL", "field_26581", "LAN_SCANNING_TEXT", "f_99760_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#LAN_SCANNING_TEXT
    [[maybe_unused]] static void set_field_LAN_SCANNING_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("G", "SCANNING_LABEL", "field_26581", "LAN_SCANNING_TEXT", "f_99760_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#CANNOT_RESOLVE_TEXT
    [[maybe_unused]] static jobject get_field_CANNOT_RESOLVE_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("H", "CANT_RESOLVE_TEXT", "field_26582", "CANNOT_RESOLVE_TEXT", "f_99761_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#CANNOT_RESOLVE_TEXT
    [[maybe_unused]] static void set_field_CANNOT_RESOLVE_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("H", "CANT_RESOLVE_TEXT", "field_26582", "CANNOT_RESOLVE_TEXT", "f_99761_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#CANNOT_CONNECT_TEXT
    [[maybe_unused]] static jobject get_field_CANNOT_CONNECT_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("I", "CANT_CONNECT_TEXT", "field_26583", "CANNOT_CONNECT_TEXT", "f_99762_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#CANNOT_CONNECT_TEXT
    [[maybe_unused]] static void set_field_CANNOT_CONNECT_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("I", "CANT_CONNECT_TEXT", "field_26583", "CANNOT_CONNECT_TEXT", "f_99762_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#INCOMPATIBLE_TEXT
    [[maybe_unused]] static jobject get_field_INCOMPATIBLE_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("J", "INCOMPATIBLE_STATUS", "field_41853", "INCOMPATIBLE_TEXT", "f_263833_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#INCOMPATIBLE_TEXT
    [[maybe_unused]] static void set_field_INCOMPATIBLE_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("J", "INCOMPATIBLE_STATUS", "field_41853", "INCOMPATIBLE_TEXT", "f_263833_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#NO_CONNECTION_TEXT
    [[maybe_unused]] static jobject get_field_NO_CONNECTION_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("K", "NO_CONNECTION_STATUS", "field_41854", "NO_CONNECTION_TEXT", "f_263836_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#NO_CONNECTION_TEXT
    [[maybe_unused]] static void set_field_NO_CONNECTION_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("K", "NO_CONNECTION_STATUS", "field_41854", "NO_CONNECTION_TEXT", "f_263836_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#PINGING_TEXT
    [[maybe_unused]] static jobject get_field_PINGING_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("L", "PINGING_STATUS", "field_41855", "PINGING_TEXT", "f_263746_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#PINGING_TEXT
    [[maybe_unused]] static void set_field_PINGING_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("L", "PINGING_STATUS", "field_41855", "PINGING_TEXT", "f_263746_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#ONLINE_TEXT
    [[maybe_unused]] static jobject get_field_ONLINE_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("M", "ONLINE_STATUS", "field_41856", "ONLINE_TEXT", "f_263785_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#ONLINE_TEXT
    [[maybe_unused]] static void set_field_ONLINE_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("M", "ONLINE_STATUS", "field_41856", "ONLINE_TEXT", "f_263785_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#screen
    static jobject get_field_screen(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("N", "screen", "field_19108", "screen", "f_99766_"), "Lfqt;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#screen
    static void set_field_screen(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("N", "screen", "field_19108", "screen", "f_99766_"), "Lfqt;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#servers
    static jobject get_field_servers(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("O", "onlineServers", "field_19109", "servers", "f_99767_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#servers
    static void set_field_servers(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("O", "onlineServers", "field_19109", "servers", "f_99767_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#scanningEntry
    static jobject get_field_scanningEntry(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("P", "lanHeader", "field_19110", "scanningEntry", "f_99768_"), "Lfqx$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#scanningEntry
    static void set_field_scanningEntry(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("P", "lanHeader", "field_19110", "scanningEntry", "f_99768_"), "Lfqx$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#lanServers
    static jobject get_field_lanServers(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("Q", "networkServers", "field_19111", "lanServers", "f_99755_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.multiplayer.MultiplayerServerListWidget#lanServers
    static void set_field_lanServers(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("Q", "networkServers", "field_19111", "lanServers", "f_99755_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_updateEntries() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("J", "refreshEntries", "method_20131", "updateEntries", "m_99780_"), "()V");
    }

    static void updateEntries(const jobject& obj) {
                
       const auto methodID = methodID_updateEntries();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_setSelected() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setSelected", "method_20122", "setSelected", "m_6987_"), "(Lfqx$a;)V");
    }

    static void setSelected(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setSelected();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_keyPressed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "keyPressed", "method_25404", "keyPressed", "m_7933_"), "(III)Z");
    }

    static jboolean keyPressed(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_keyPressed();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_setServers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateOnlineServers", "method_20125", "setServers", "m_99797_"), "(Lfzu;)V");
    }

    static void setServers(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setServers();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setLanServers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateNetworkServers", "method_20126", "setLanServers", "m_99799_"), "(Ljava/util/List;)V");
    }

    static void setLanServers(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setLanServers();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getRowWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getRowWidth", "method_25322", "getRowWidth", "m_5759_"), "()I");
    }

    static jint getRowWidth(const jobject& obj) {
                
       const auto methodID = methodID_getRowWidth();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_onRemoved() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "removed", "method_52204", "onRemoved", "m_289224_"), "()V");
    }

    static void onRemoved(const jobject& obj) {
                
       const auto methodID = methodID_onRemoved();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_MULTIPLAYER_MULTIPLAYERSERVERLISTWIDGET_HPP