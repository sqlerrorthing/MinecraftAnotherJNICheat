// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_WORLDLISTWIDGET_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_WORLDLISTWIDGET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.world.WorldListWidget
 * Remapped: ftn
 */
namespace WorldListWidget {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ftn", "net/minecraft/client/gui/screens/worldselection/WorldSelectionList", "net/minecraft/class_528", "net/minecraft/client/gui/screen/world/WorldListWidget", "net/minecraft/src/C_3772_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.gui.screen.world.WorldListWidget#DATE_FORMAT
    [[maybe_unused]] static jobject get_field_DATE_FORMAT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DATE_FORMAT", "field_19132", "DATE_FORMAT", "f_101646_"), "Ljava/time/format/DateTimeFormatter;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.screen.world.WorldListWidget#DATE_FORMAT
    [[maybe_unused]] static void set_field_DATE_FORMAT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DATE_FORMAT", "field_19132", "DATE_FORMAT", "f_101646_"), "Ljava/time/format/DateTimeFormatter;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#ERROR_HIGHLIGHTED_TEXTURE
    [[maybe_unused]] static jobject get_field_ERROR_HIGHLIGHTED_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "ERROR_HIGHLIGHTED_SPRITE", "field_45570", "ERROR_HIGHLIGHTED_TEXTURE", "f_291416_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#ERROR_HIGHLIGHTED_TEXTURE
    [[maybe_unused]] static void set_field_ERROR_HIGHLIGHTED_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "ERROR_HIGHLIGHTED_SPRITE", "field_45570", "ERROR_HIGHLIGHTED_TEXTURE", "f_291416_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#ERROR_TEXTURE
    [[maybe_unused]] static jobject get_field_ERROR_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "ERROR_SPRITE", "field_45571", "ERROR_TEXTURE", "f_291432_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#ERROR_TEXTURE
    [[maybe_unused]] static void set_field_ERROR_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "ERROR_SPRITE", "field_45571", "ERROR_TEXTURE", "f_291432_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#MARKED_JOIN_HIGHLIGHTED_TEXTURE
    [[maybe_unused]] static jobject get_field_MARKED_JOIN_HIGHLIGHTED_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "MARKED_JOIN_HIGHLIGHTED_SPRITE", "field_45572", "MARKED_JOIN_HIGHLIGHTED_TEXTURE", "f_290451_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#MARKED_JOIN_HIGHLIGHTED_TEXTURE
    [[maybe_unused]] static void set_field_MARKED_JOIN_HIGHLIGHTED_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "MARKED_JOIN_HIGHLIGHTED_SPRITE", "field_45572", "MARKED_JOIN_HIGHLIGHTED_TEXTURE", "f_290451_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#MARKED_JOIN_TEXTURE
    [[maybe_unused]] static jobject get_field_MARKED_JOIN_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "MARKED_JOIN_SPRITE", "field_45573", "MARKED_JOIN_TEXTURE", "f_291750_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#MARKED_JOIN_TEXTURE
    [[maybe_unused]] static void set_field_MARKED_JOIN_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "MARKED_JOIN_SPRITE", "field_45573", "MARKED_JOIN_TEXTURE", "f_291750_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#WARNING_HIGHLIGHTED_TEXTURE
    [[maybe_unused]] static jobject get_field_WARNING_HIGHLIGHTED_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "WARNING_HIGHLIGHTED_SPRITE", "field_45574", "WARNING_HIGHLIGHTED_TEXTURE", "f_291467_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#WARNING_HIGHLIGHTED_TEXTURE
    [[maybe_unused]] static void set_field_WARNING_HIGHLIGHTED_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "WARNING_HIGHLIGHTED_SPRITE", "field_45574", "WARNING_HIGHLIGHTED_TEXTURE", "f_291467_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#WARNING_TEXTURE
    [[maybe_unused]] static jobject get_field_WARNING_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "WARNING_SPRITE", "field_45575", "WARNING_TEXTURE", "f_290779_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#WARNING_TEXTURE
    [[maybe_unused]] static void set_field_WARNING_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "WARNING_SPRITE", "field_45575", "WARNING_TEXTURE", "f_290779_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#JOIN_HIGHLIGHTED_TEXTURE
    [[maybe_unused]] static jobject get_field_JOIN_HIGHLIGHTED_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "JOIN_HIGHLIGHTED_SPRITE", "field_45576", "JOIN_HIGHLIGHTED_TEXTURE", "f_290682_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#JOIN_HIGHLIGHTED_TEXTURE
    [[maybe_unused]] static void set_field_JOIN_HIGHLIGHTED_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "JOIN_HIGHLIGHTED_SPRITE", "field_45576", "JOIN_HIGHLIGHTED_TEXTURE", "f_290682_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#JOIN_TEXTURE
    [[maybe_unused]] static jobject get_field_JOIN_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "JOIN_SPRITE", "field_45577", "JOIN_TEXTURE", "f_291405_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#JOIN_TEXTURE
    [[maybe_unused]] static void set_field_JOIN_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "JOIN_SPRITE", "field_45577", "JOIN_TEXTURE", "f_291405_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "LOGGER", "field_3238", "LOGGER", "f_101645_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "LOGGER", "field_3238", "LOGGER", "f_101645_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#FROM_NEWER_VERSION_FIRST_LINE
    [[maybe_unused]] static jobject get_field_FROM_NEWER_VERSION_FIRST_LINE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "FROM_NEWER_TOOLTIP_1", "field_26606", "FROM_NEWER_VERSION_FIRST_LINE", "f_101649_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#FROM_NEWER_VERSION_FIRST_LINE
    [[maybe_unused]] static void set_field_FROM_NEWER_VERSION_FIRST_LINE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "FROM_NEWER_TOOLTIP_1", "field_26606", "FROM_NEWER_VERSION_FIRST_LINE", "f_101649_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#FROM_NEWER_VERSION_SECOND_LINE
    [[maybe_unused]] static jobject get_field_FROM_NEWER_VERSION_SECOND_LINE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "FROM_NEWER_TOOLTIP_2", "field_26607", "FROM_NEWER_VERSION_SECOND_LINE", "f_101650_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#FROM_NEWER_VERSION_SECOND_LINE
    [[maybe_unused]] static void set_field_FROM_NEWER_VERSION_SECOND_LINE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "FROM_NEWER_TOOLTIP_2", "field_26607", "FROM_NEWER_VERSION_SECOND_LINE", "f_101650_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#SNAPSHOT_FIRST_LINE
    [[maybe_unused]] static jobject get_field_SNAPSHOT_FIRST_LINE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "SNAPSHOT_TOOLTIP_1", "field_26608", "SNAPSHOT_FIRST_LINE", "f_101651_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#SNAPSHOT_FIRST_LINE
    [[maybe_unused]] static void set_field_SNAPSHOT_FIRST_LINE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "SNAPSHOT_TOOLTIP_1", "field_26608", "SNAPSHOT_FIRST_LINE", "f_101651_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#SNAPSHOT_SECOND_LINE
    [[maybe_unused]] static jobject get_field_SNAPSHOT_SECOND_LINE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("z", "SNAPSHOT_TOOLTIP_2", "field_26609", "SNAPSHOT_SECOND_LINE", "f_101652_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#SNAPSHOT_SECOND_LINE
    [[maybe_unused]] static void set_field_SNAPSHOT_SECOND_LINE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("z", "SNAPSHOT_TOOLTIP_2", "field_26609", "SNAPSHOT_SECOND_LINE", "f_101652_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#LOCKED_TEXT
    [[maybe_unused]] static jobject get_field_LOCKED_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("A", "WORLD_LOCKED_TOOLTIP", "field_26610", "LOCKED_TEXT", "f_101653_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#LOCKED_TEXT
    [[maybe_unused]] static void set_field_LOCKED_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("A", "WORLD_LOCKED_TOOLTIP", "field_26610", "LOCKED_TEXT", "f_101653_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#CONVERSION_TOOLTIP
    [[maybe_unused]] static jobject get_field_CONVERSION_TOOLTIP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("B", "WORLD_REQUIRES_CONVERSION", "field_34803", "CONVERSION_TOOLTIP", "f_194113_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#CONVERSION_TOOLTIP
    [[maybe_unused]] static void set_field_CONVERSION_TOOLTIP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("B", "WORLD_REQUIRES_CONVERSION", "field_34803", "CONVERSION_TOOLTIP", "f_194113_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#INCOMPATIBLE_TOOLTIP
    [[maybe_unused]] static jobject get_field_INCOMPATIBLE_TOOLTIP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("C", "INCOMPATIBLE_VERSION_TOOLTIP", "field_46897", "INCOMPATIBLE_TOOLTIP", "f_302339_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#INCOMPATIBLE_TOOLTIP
    [[maybe_unused]] static void set_field_INCOMPATIBLE_TOOLTIP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("C", "INCOMPATIBLE_VERSION_TOOLTIP", "field_46897", "INCOMPATIBLE_TOOLTIP", "f_302339_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#EXPERIMENTAL_TEXT
    [[maybe_unused]] static jobject get_field_EXPERIMENTAL_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("D", "WORLD_EXPERIMENTAL", "field_45569", "EXPERIMENTAL_TEXT", "f_291265_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.world.WorldListWidget#EXPERIMENTAL_TEXT
    [[maybe_unused]] static void set_field_EXPERIMENTAL_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("D", "WORLD_EXPERIMENTAL", "field_45569", "EXPERIMENTAL_TEXT", "f_291265_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.world.WorldListWidget#parent
    static jobject get_field_parent(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("E", "screen", "field_3237", "parent", "f_101654_"), "Lfti;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.WorldListWidget#parent
    static void set_field_parent(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("E", "screen", "field_3237", "parent", "f_101654_"), "Lfti;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.world.WorldListWidget#levelsFuture
    static jobject get_field_levelsFuture(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("F", "pendingLevels", "field_39739", "levelsFuture", "f_238666_"), "Ljava/util/concurrent/CompletableFuture;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.WorldListWidget#levelsFuture
    static void set_field_levelsFuture(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("F", "pendingLevels", "field_39739", "levelsFuture", "f_238666_"), "Ljava/util/concurrent/CompletableFuture;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.world.WorldListWidget#levels
    static jobject get_field_levels(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("G", "currentlyDisplayedLevels", "field_39740", "levels", "f_238575_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.WorldListWidget#levels
    static void set_field_levels(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("G", "currentlyDisplayedLevels", "field_39740", "levels", "f_238575_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.world.WorldListWidget#search
    static jobject get_field_search(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("H", "filter", "field_39738", "search", "f_238624_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.WorldListWidget#search
    static void set_field_search(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("H", "filter", "field_39738", "search", "f_238624_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.world.WorldListWidget#loadingEntry
    static jobject get_field_loadingEntry(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("I", "loadingHeader", "field_38994", "loadingEntry", "f_233184_"), "Lftn$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.WorldListWidget#loadingEntry
    static void set_field_loadingEntry(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("I", "loadingHeader", "field_38994", "loadingEntry", "f_233184_"), "Lftn$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_clearEntries() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "clearEntries", "method_25339", "clearEntries", "m_93516_"), "()V");
    }

    static void clearEntries(const jobject& obj) {
                
       const auto methodID = methodID_clearEntries();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_tryGet() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("K", "pollLevelsIgnoreErrors", "method_44679", "tryGet", "m_239987_"), "()Ljava/util/List;");
    }

    static jobject tryGet(const jobject& obj) {
                
       const auto methodID = methodID_tryGet();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_load() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("L", "reloadWorldList", "method_44680", "load", "m_233206_"), "()V");
    }

    static void load(const jobject& obj) {
                
       const auto methodID = methodID_load();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_keyPressed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "keyPressed", "method_25404", "keyPressed", "m_7933_"), "(III)Z");
    }

    static jboolean keyPressed(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_keyPressed();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_renderWidget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "renderWidget", "method_48579", "renderWidget", "m_87963_"), "(Lfhz;IIF)V");
    }

    static void renderWidget(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_renderWidget();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_show() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleNewLevels", "method_44678", "show", "m_239664_"), "(Ljava/util/List;)V");
    }

    static void show(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_show();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setSearch() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateFilter", "method_44677", "setSearch", "m_239900_"), "(Ljava/lang/String;)V");
    }

    static void setSearch(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setSearch();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_loadLevels() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("M", "loadLevels", "method_43462", "loadLevels", "m_233213_"), "()Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject loadLevels(const jobject& obj) {
                
       const auto methodID = methodID_loadLevels();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_showSummaries() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fillLevels", "method_43454", "showSummaries", "m_233198_"), "(Ljava/lang/String;Ljava/util/List;)V");
    }

    static void showSummaries(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_showSummaries();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_shouldShow() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "filterAccepts", "method_43453", "shouldShow", "m_233195_"), "(Ljava/lang/String;Lerg;)Z");
    }

    static jboolean shouldShow(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_shouldShow();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_showLoadingScreen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("N", "fillLoadingLevels", "method_43463", "showLoadingScreen", "m_233214_"), "()V");
    }

    static void showLoadingScreen(const jobject& obj) {
                
       const auto methodID = methodID_showLoadingScreen();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_narrateScreenIfNarrationEnabled() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("O", "notifyListUpdated", "method_43464", "narrateScreenIfNarrationEnabled", "m_233215_"), "()V");
    }

    static void narrateScreenIfNarrationEnabled(const jobject& obj) {
                
       const auto methodID = methodID_narrateScreenIfNarrationEnabled();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_showUnableToLoadScreen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "handleLevelLoadFailure", "method_43460", "showUnableToLoadScreen", "m_233211_"), "(Lwz;)V");
    }

    static void showUnableToLoadScreen(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_showUnableToLoadScreen();
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
    
    static jmethodID methodID_setSelected() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setSelected", "method_20157", "setSelected", "m_6987_"), "(Lftn$a;)V");
    }

    static void setSelected(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setSelected();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getSelectedAsOptional() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getSelectedOpt", "method_20159", "getSelectedAsOptional", "m_101684_"), "()Ljava/util/Optional;");
    }

    static jobject getSelectedAsOptional(const jobject& obj) {
                
       const auto methodID = methodID_getSelectedAsOptional();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getParent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("J", "getScreen", "method_2752", "getParent", "m_101685_"), "()Lfti;");
    }

    static jobject getParent(const jobject& obj) {
                
       const auto methodID = methodID_getParent();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_appendClickableNarrations() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateWidgetNarration", "method_47399", "appendClickableNarrations", "m_168797_"), "(Lfmi;)V");
    }

    static void appendClickableNarrations(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_appendClickableNarrations();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_WORLDLISTWIDGET_HPP