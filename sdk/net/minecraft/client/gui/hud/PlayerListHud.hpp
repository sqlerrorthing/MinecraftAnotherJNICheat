// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_HUD_PLAYERLISTHUD_HPP
#define NET_MINECRAFT_CLIENT_GUI_HUD_PLAYERLISTHUD_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.hud.PlayerListHud
 * Remapped: fjn
 */
namespace PlayerListHud {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fjn", "net/minecraft/client/gui/components/PlayerTabOverlay", "net/minecraft/class_355", "net/minecraft/client/gui/hud/PlayerListHud", "net/minecraft/src/C_3479_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.hud.PlayerListHud#PING_UNKNOWN_ICON_TEXTURE
    [[maybe_unused]] static jobject get_field_PING_UNKNOWN_ICON_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PING_UNKNOWN_SPRITE", "field_45365", "PING_UNKNOWN_ICON_TEXTURE", "f_290471_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.PlayerListHud#PING_UNKNOWN_ICON_TEXTURE
    [[maybe_unused]] static void set_field_PING_UNKNOWN_ICON_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PING_UNKNOWN_SPRITE", "field_45365", "PING_UNKNOWN_ICON_TEXTURE", "f_290471_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.hud.PlayerListHud#PING_1_ICON_TEXTURE
    [[maybe_unused]] static jobject get_field_PING_1_ICON_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PING_1_SPRITE", "field_45366", "PING_1_ICON_TEXTURE", "f_290416_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.PlayerListHud#PING_1_ICON_TEXTURE
    [[maybe_unused]] static void set_field_PING_1_ICON_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PING_1_SPRITE", "field_45366", "PING_1_ICON_TEXTURE", "f_290416_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.hud.PlayerListHud#PING_2_ICON_TEXTURE
    [[maybe_unused]] static jobject get_field_PING_2_ICON_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "PING_2_SPRITE", "field_45367", "PING_2_ICON_TEXTURE", "f_291723_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.PlayerListHud#PING_2_ICON_TEXTURE
    [[maybe_unused]] static void set_field_PING_2_ICON_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "PING_2_SPRITE", "field_45367", "PING_2_ICON_TEXTURE", "f_291723_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.hud.PlayerListHud#PING_3_ICON_TEXTURE
    [[maybe_unused]] static jobject get_field_PING_3_ICON_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "PING_3_SPRITE", "field_45368", "PING_3_ICON_TEXTURE", "f_291285_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.PlayerListHud#PING_3_ICON_TEXTURE
    [[maybe_unused]] static void set_field_PING_3_ICON_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "PING_3_SPRITE", "field_45368", "PING_3_ICON_TEXTURE", "f_291285_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.hud.PlayerListHud#PING_4_ICON_TEXTURE
    [[maybe_unused]] static jobject get_field_PING_4_ICON_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "PING_4_SPRITE", "field_45369", "PING_4_ICON_TEXTURE", "f_290852_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.PlayerListHud#PING_4_ICON_TEXTURE
    [[maybe_unused]] static void set_field_PING_4_ICON_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "PING_4_SPRITE", "field_45369", "PING_4_ICON_TEXTURE", "f_290852_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.hud.PlayerListHud#PING_5_ICON_TEXTURE
    [[maybe_unused]] static jobject get_field_PING_5_ICON_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "PING_5_SPRITE", "field_45370", "PING_5_ICON_TEXTURE", "f_290455_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.PlayerListHud#PING_5_ICON_TEXTURE
    [[maybe_unused]] static void set_field_PING_5_ICON_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "PING_5_SPRITE", "field_45370", "PING_5_ICON_TEXTURE", "f_290455_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.hud.PlayerListHud#CONTAINER_HEART_BLINKING_TEXTURE
    [[maybe_unused]] static jobject get_field_CONTAINER_HEART_BLINKING_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "HEART_CONTAINER_BLINKING_SPRITE", "field_45371", "CONTAINER_HEART_BLINKING_TEXTURE", "f_290385_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.PlayerListHud#CONTAINER_HEART_BLINKING_TEXTURE
    [[maybe_unused]] static void set_field_CONTAINER_HEART_BLINKING_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "HEART_CONTAINER_BLINKING_SPRITE", "field_45371", "CONTAINER_HEART_BLINKING_TEXTURE", "f_290385_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.hud.PlayerListHud#CONTAINER_HEART_TEXTURE
    [[maybe_unused]] static jobject get_field_CONTAINER_HEART_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "HEART_CONTAINER_SPRITE", "field_45372", "CONTAINER_HEART_TEXTURE", "f_291081_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.PlayerListHud#CONTAINER_HEART_TEXTURE
    [[maybe_unused]] static void set_field_CONTAINER_HEART_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "HEART_CONTAINER_SPRITE", "field_45372", "CONTAINER_HEART_TEXTURE", "f_291081_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.hud.PlayerListHud#FULL_HEART_BLINKING_TEXTURE
    [[maybe_unused]] static jobject get_field_FULL_HEART_BLINKING_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "HEART_FULL_BLINKING_SPRITE", "field_45373", "FULL_HEART_BLINKING_TEXTURE", "f_291628_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.PlayerListHud#FULL_HEART_BLINKING_TEXTURE
    [[maybe_unused]] static void set_field_FULL_HEART_BLINKING_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "HEART_FULL_BLINKING_SPRITE", "field_45373", "FULL_HEART_BLINKING_TEXTURE", "f_291628_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.hud.PlayerListHud#HALF_HEART_BLINKING_TEXTURE
    [[maybe_unused]] static jobject get_field_HALF_HEART_BLINKING_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "HEART_HALF_BLINKING_SPRITE", "field_45374", "HALF_HEART_BLINKING_TEXTURE", "f_290505_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.PlayerListHud#HALF_HEART_BLINKING_TEXTURE
    [[maybe_unused]] static void set_field_HALF_HEART_BLINKING_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "HEART_HALF_BLINKING_SPRITE", "field_45374", "HALF_HEART_BLINKING_TEXTURE", "f_290505_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.hud.PlayerListHud#ABSORBING_FULL_HEART_BLINKING_TEXTURE
    [[maybe_unused]] static jobject get_field_ABSORBING_FULL_HEART_BLINKING_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "HEART_ABSORBING_FULL_BLINKING_SPRITE", "field_45375", "ABSORBING_FULL_HEART_BLINKING_TEXTURE", "f_290825_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.PlayerListHud#ABSORBING_FULL_HEART_BLINKING_TEXTURE
    [[maybe_unused]] static void set_field_ABSORBING_FULL_HEART_BLINKING_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "HEART_ABSORBING_FULL_BLINKING_SPRITE", "field_45375", "ABSORBING_FULL_HEART_BLINKING_TEXTURE", "f_290825_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.hud.PlayerListHud#FULL_HEART_TEXTURE
    [[maybe_unused]] static jobject get_field_FULL_HEART_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "HEART_FULL_SPRITE", "field_45376", "FULL_HEART_TEXTURE", "f_291640_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.PlayerListHud#FULL_HEART_TEXTURE
    [[maybe_unused]] static void set_field_FULL_HEART_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "HEART_FULL_SPRITE", "field_45376", "FULL_HEART_TEXTURE", "f_291640_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.hud.PlayerListHud#ABSORBING_HALF_HEART_BLINKING_TEXTURE
    [[maybe_unused]] static jobject get_field_ABSORBING_HALF_HEART_BLINKING_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "HEART_ABSORBING_HALF_BLINKING_SPRITE", "field_45377", "ABSORBING_HALF_HEART_BLINKING_TEXTURE", "f_290644_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.PlayerListHud#ABSORBING_HALF_HEART_BLINKING_TEXTURE
    [[maybe_unused]] static void set_field_ABSORBING_HALF_HEART_BLINKING_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "HEART_ABSORBING_HALF_BLINKING_SPRITE", "field_45377", "ABSORBING_HALF_HEART_BLINKING_TEXTURE", "f_290644_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.hud.PlayerListHud#HALF_HEART_TEXTURE
    [[maybe_unused]] static jobject get_field_HALF_HEART_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "HEART_HALF_SPRITE", "field_45378", "HALF_HEART_TEXTURE", "f_290968_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.PlayerListHud#HALF_HEART_TEXTURE
    [[maybe_unused]] static void set_field_HALF_HEART_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "HEART_HALF_SPRITE", "field_45378", "HALF_HEART_TEXTURE", "f_290968_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.hud.PlayerListHud#ENTRY_ORDERING
    [[maybe_unused]] static jobject get_field_ENTRY_ORDERING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "PLAYER_COMPARATOR", "field_2156", "ENTRY_ORDERING", "f_243768_"), "Ljava/util/Comparator;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.PlayerListHud#ENTRY_ORDERING
    [[maybe_unused]] static void set_field_ENTRY_ORDERING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "PLAYER_COMPARATOR", "field_2156", "ENTRY_ORDERING", "f_243768_"), "Ljava/util/Comparator;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.gui.hud.PlayerListHud#MAX_ROWS
    [[maybe_unused]] static jint get_field_MAX_ROWS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAX_ROWS_PER_COL", "field_32205", "MAX_ROWS", "f_169049_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.hud.PlayerListHud#MAX_ROWS
    [[maybe_unused]] static void set_field_MAX_ROWS(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAX_ROWS_PER_COL", "field_32205", "MAX_ROWS", "f_169049_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.hud.PlayerListHud#client
    static jobject get_field_client(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "minecraft", "field_2155", "client", "f_94519_"), "Lfgo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.PlayerListHud#client
    static void set_field_client(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "minecraft", "field_2155", "client", "f_94519_"), "Lfgo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.hud.PlayerListHud#inGameHud
    static jobject get_field_inGameHud(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "gui", "field_2157", "inGameHud", "f_94520_"), "Lfhy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.PlayerListHud#inGameHud
    static void set_field_inGameHud(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "gui", "field_2157", "inGameHud", "f_94520_"), "Lfhy;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.hud.PlayerListHud#footer
    static jobject get_field_footer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "footer", "field_2154", "footer", "f_94521_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.PlayerListHud#footer
    static void set_field_footer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "footer", "field_2154", "footer", "f_94521_"), "Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.hud.PlayerListHud#header
    static jobject get_field_header(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("t", "header", "field_2153", "header", "f_94522_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.PlayerListHud#header
    static void set_field_header(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("t", "header", "field_2153", "header", "f_94522_"), "Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.hud.PlayerListHud#visible
    static jboolean get_field_visible(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "visible", "field_2158", "visible", "f_94524_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.PlayerListHud#visible
    static void set_field_visible(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "visible", "field_2158", "visible", "f_94524_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.hud.PlayerListHud#hearts
    static jobject get_field_hearts(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("v", "healthStates", "field_40393", "hearts", "f_244278_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.PlayerListHud#hearts
    static void set_field_hearts(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("v", "healthStates", "field_40393", "hearts", "f_244278_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getPlayerName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getNameForDisplay", "method_1918", "getPlayerName", "m_94549_"), "(Lfzq;)Lwz;");
    }

    static jobject getPlayerName(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getPlayerName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_applyGameModeFormatting() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "decorateName", "method_27538", "applyGameModeFormatting", "m_94551_"), "(Lfzq;Lxn;)Lwz;");
    }

    static jobject applyGameModeFormatting(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_applyGameModeFormatting();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_setVisible() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setVisible", "method_1921", "setVisible", "m_94556_"), "(Z)V");
    }

    static void setVisible(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setVisible();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_collectPlayerEntries() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getPlayerInfos", "method_48213", "collectPlayerEntries", "m_264246_"), "()Ljava/util/List;");
    }

    static jobject collectPlayerEntries(const jobject& obj) {
                
       const auto methodID = methodID_collectPlayerEntries();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_1919", "render", "m_280406_"), "(Lfhz;ILeyg;Lexy;)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jint& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_renderLatencyIcon() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderPingIcon", "method_1923", "renderLatencyIcon", "m_280020_"), "(Lfhz;IIILfzq;)V");
    }

    static void renderLatencyIcon(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_renderLatencyIcon();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_renderScoreboardObjective() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderTablistScore", "method_1922", "renderScoreboardObjective", "m_280582_"), "(Lexy;ILfjn$b;IILjava/util/UUID;Lfhz;)V");
    }

    static void renderScoreboardObjective(const jobject& obj, const jobject& arg0, const jint& arg1, const jobject& arg2, const jint& arg3, const jint& arg4, const jobject& arg5, const jobject& arg6) {
                
       const auto methodID = methodID_renderScoreboardObjective();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID_renderHearts() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderTablistHearts", "method_45590", "renderHearts", "m_280237_"), "(IIILjava/util/UUID;Lfhz;I)V");
    }

    static void renderHearts(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2, const jobject& arg3, const jobject& arg4, const jint& arg5) {
                
       const auto methodID = methodID_renderHearts();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_setFooter() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setFooter", "method_1924", "setFooter", "m_94554_"), "(Lwz;)V");
    }

    static void setFooter(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setFooter();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setHeader() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setHeader", "method_1925", "setHeader", "m_94558_"), "(Lwz;)V");
    }

    static void setHeader(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setHeader();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_clear() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "reset", "method_1920", "clear", "m_94529_"), "()V");
    }

    static void clear(const jobject& obj) {
                
       const auto methodID = methodID_clear();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_HUD_PLAYERLISTHUD_HPP