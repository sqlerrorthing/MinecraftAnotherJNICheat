// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_GAMEMENUSCREEN_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_GAMEMENUSCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.GameMenuScreen
 * Remapped: fny
 */
namespace GameMenuScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fny", "net/minecraft/client/gui/screens/PauseScreen", "net/minecraft/class_433", "net/minecraft/client/gui/screen/GameMenuScreen", "net/minecraft/src/C_3574_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.screen.GameMenuScreen#DRAFT_REPORT_ICON_TEXTURE
    [[maybe_unused]] static jobject get_field_DRAFT_REPORT_ICON_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DRAFT_REPORT_SPRITE", "field_45416", "DRAFT_REPORT_ICON_TEXTURE", "f_291193_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameMenuScreen#DRAFT_REPORT_ICON_TEXTURE
    [[maybe_unused]] static void set_field_DRAFT_REPORT_ICON_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DRAFT_REPORT_SPRITE", "field_45416", "DRAFT_REPORT_ICON_TEXTURE", "f_291193_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.GameMenuScreen#GRID_COLUMNS
    [[maybe_unused]] static jint get_field_GRID_COLUMNS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "COLUMNS", "field_41616", "GRID_COLUMNS", "f_262286_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameMenuScreen#GRID_COLUMNS
    [[maybe_unused]] static void set_field_GRID_COLUMNS(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "COLUMNS", "field_41616", "GRID_COLUMNS", "f_262286_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.GameMenuScreen#BUTTONS_TOP_MARGIN
    [[maybe_unused]] static jint get_field_BUTTONS_TOP_MARGIN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MENU_PADDING_TOP", "field_41617", "BUTTONS_TOP_MARGIN", "f_262258_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameMenuScreen#BUTTONS_TOP_MARGIN
    [[maybe_unused]] static void set_field_BUTTONS_TOP_MARGIN(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MENU_PADDING_TOP", "field_41617", "BUTTONS_TOP_MARGIN", "f_262258_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.GameMenuScreen#GRID_MARGIN
    [[maybe_unused]] static jint get_field_GRID_MARGIN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "BUTTON_PADDING", "field_41618", "GRID_MARGIN", "f_262248_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameMenuScreen#GRID_MARGIN
    [[maybe_unused]] static void set_field_GRID_MARGIN(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "BUTTON_PADDING", "field_41618", "GRID_MARGIN", "f_262248_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.GameMenuScreen#WIDE_BUTTON_WIDTH
    [[maybe_unused]] static jint get_field_WIDE_BUTTON_WIDTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "BUTTON_WIDTH_FULL", "field_41619", "WIDE_BUTTON_WIDTH", "f_262268_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameMenuScreen#WIDE_BUTTON_WIDTH
    [[maybe_unused]] static void set_field_WIDE_BUTTON_WIDTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "BUTTON_WIDTH_FULL", "field_41619", "WIDE_BUTTON_WIDTH", "f_262268_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.GameMenuScreen#NORMAL_BUTTON_WIDTH
    [[maybe_unused]] static jint get_field_NORMAL_BUTTON_WIDTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "BUTTON_WIDTH_HALF", "field_41620", "NORMAL_BUTTON_WIDTH", "f_262229_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameMenuScreen#NORMAL_BUTTON_WIDTH
    [[maybe_unused]] static void set_field_NORMAL_BUTTON_WIDTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "BUTTON_WIDTH_HALF", "field_41620", "NORMAL_BUTTON_WIDTH", "f_262229_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.GameMenuScreen#RETURN_TO_GAME_TEXT
    [[maybe_unused]] static jobject get_field_RETURN_TO_GAME_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "RETURN_TO_GAME", "field_41621", "RETURN_TO_GAME_TEXT", "f_262276_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameMenuScreen#RETURN_TO_GAME_TEXT
    [[maybe_unused]] static void set_field_RETURN_TO_GAME_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "RETURN_TO_GAME", "field_41621", "RETURN_TO_GAME_TEXT", "f_262276_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.GameMenuScreen#ADVANCEMENTS_TEXT
    [[maybe_unused]] static jobject get_field_ADVANCEMENTS_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "ADVANCEMENTS", "field_41622", "ADVANCEMENTS_TEXT", "f_262216_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameMenuScreen#ADVANCEMENTS_TEXT
    [[maybe_unused]] static void set_field_ADVANCEMENTS_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "ADVANCEMENTS", "field_41622", "ADVANCEMENTS_TEXT", "f_262216_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.GameMenuScreen#STATS_TEXT
    [[maybe_unused]] static jobject get_field_STATS_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "STATS", "field_41623", "STATS_TEXT", "f_262255_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameMenuScreen#STATS_TEXT
    [[maybe_unused]] static void set_field_STATS_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "STATS", "field_41623", "STATS_TEXT", "f_262255_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.GameMenuScreen#SEND_FEEDBACK_TEXT
    [[maybe_unused]] static jobject get_field_SEND_FEEDBACK_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "SEND_FEEDBACK", "field_41624", "SEND_FEEDBACK_TEXT", "f_262322_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameMenuScreen#SEND_FEEDBACK_TEXT
    [[maybe_unused]] static void set_field_SEND_FEEDBACK_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "SEND_FEEDBACK", "field_41624", "SEND_FEEDBACK_TEXT", "f_262322_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.GameMenuScreen#REPORT_BUGS_TEXT
    [[maybe_unused]] static jobject get_field_REPORT_BUGS_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("z", "REPORT_BUGS", "field_41625", "REPORT_BUGS_TEXT", "f_262226_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameMenuScreen#REPORT_BUGS_TEXT
    [[maybe_unused]] static void set_field_REPORT_BUGS_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("z", "REPORT_BUGS", "field_41625", "REPORT_BUGS_TEXT", "f_262226_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.GameMenuScreen#FEEDBACK_TEXT
    [[maybe_unused]] static jobject get_field_FEEDBACK_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("A", "FEEDBACK_SUBSCREEN", "field_52133", "FEEDBACK_TEXT", "f_337719_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameMenuScreen#FEEDBACK_TEXT
    [[maybe_unused]] static void set_field_FEEDBACK_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("A", "FEEDBACK_SUBSCREEN", "field_52133", "FEEDBACK_TEXT", "f_337719_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.GameMenuScreen#SERVER_LINKS_TEXT
    [[maybe_unused]] static jobject get_field_SERVER_LINKS_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("B", "SERVER_LINKS", "field_52132", "SERVER_LINKS_TEXT", "f_337280_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameMenuScreen#SERVER_LINKS_TEXT
    [[maybe_unused]] static void set_field_SERVER_LINKS_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("B", "SERVER_LINKS", "field_52132", "SERVER_LINKS_TEXT", "f_337280_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.GameMenuScreen#OPTIONS_TEXT
    [[maybe_unused]] static jobject get_field_OPTIONS_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("C", "OPTIONS", "field_41626", "OPTIONS_TEXT", "f_262318_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameMenuScreen#OPTIONS_TEXT
    [[maybe_unused]] static void set_field_OPTIONS_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("C", "OPTIONS", "field_41626", "OPTIONS_TEXT", "f_262318_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.GameMenuScreen#SHARE_TO_LAN_TEXT
    [[maybe_unused]] static jobject get_field_SHARE_TO_LAN_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("D", "SHARE_TO_LAN", "field_41627", "SHARE_TO_LAN_TEXT", "f_262210_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameMenuScreen#SHARE_TO_LAN_TEXT
    [[maybe_unused]] static void set_field_SHARE_TO_LAN_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("D", "SHARE_TO_LAN", "field_41627", "SHARE_TO_LAN_TEXT", "f_262210_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.GameMenuScreen#PLAYER_REPORTING_TEXT
    [[maybe_unused]] static jobject get_field_PLAYER_REPORTING_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("E", "PLAYER_REPORTING", "field_41628", "PLAYER_REPORTING_TEXT", "f_262254_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameMenuScreen#PLAYER_REPORTING_TEXT
    [[maybe_unused]] static void set_field_PLAYER_REPORTING_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("E", "PLAYER_REPORTING", "field_41628", "PLAYER_REPORTING_TEXT", "f_262254_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.GameMenuScreen#RETURN_TO_MENU_TEXT
    [[maybe_unused]] static jobject get_field_RETURN_TO_MENU_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("F", "RETURN_TO_MENU", "field_41611", "RETURN_TO_MENU_TEXT", "f_262217_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameMenuScreen#RETURN_TO_MENU_TEXT
    [[maybe_unused]] static void set_field_RETURN_TO_MENU_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("F", "RETURN_TO_MENU", "field_41611", "RETURN_TO_MENU_TEXT", "f_262217_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.GameMenuScreen#SAVING_LEVEL_TEXT
    [[maybe_unused]] static jobject get_field_SAVING_LEVEL_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("G", "SAVING_LEVEL", "field_41613", "SAVING_LEVEL_TEXT", "f_262212_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameMenuScreen#SAVING_LEVEL_TEXT
    [[maybe_unused]] static void set_field_SAVING_LEVEL_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("G", "SAVING_LEVEL", "field_41613", "SAVING_LEVEL_TEXT", "f_262212_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.GameMenuScreen#GAME_TEXT
    [[maybe_unused]] static jobject get_field_GAME_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("H", "GAME", "field_41614", "GAME_TEXT", "f_262287_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameMenuScreen#GAME_TEXT
    [[maybe_unused]] static void set_field_GAME_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("H", "GAME", "field_41614", "GAME_TEXT", "f_262287_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.GameMenuScreen#PAUSED_TEXT
    [[maybe_unused]] static jobject get_field_PAUSED_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("I", "PAUSED", "field_41615", "PAUSED_TEXT", "f_262313_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameMenuScreen#PAUSED_TEXT
    [[maybe_unused]] static void set_field_PAUSED_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("I", "PAUSED", "field_41615", "PAUSED_TEXT", "f_262313_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.GameMenuScreen#showMenu
    static jboolean get_field_showMenu(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("J", "showPauseMenu", "field_19319", "showMenu", "f_96306_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameMenuScreen#showMenu
    static void set_field_showMenu(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("J", "showPauseMenu", "field_19319", "showMenu", "f_96306_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.GameMenuScreen#exitButton
    static jobject get_field_exitButton(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("K", "disconnectButton", "field_40792", "exitButton", "f_252482_"), "Lfim;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameMenuScreen#exitButton
    static void set_field_exitButton(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("K", "disconnectButton", "field_40792", "exitButton", "f_252482_"), "Lfim;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_shouldShowMenu() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "showsPauseMenu", "method_53558", "shouldShowMenu", "m_294488_"), "()Z");
    }

    static jboolean shouldShowMenu(const jobject& obj) {
                
       const auto methodID = methodID_shouldShowMenu();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_init() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aT_", "init", "method_25426", "init", "m_7856_"), "()V");
    }

    static void init(const jobject& obj) {
                
       const auto methodID = methodID_init();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_initWidgets() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("C", "createPauseMenu", "method_20543", "initWidgets", "m_96338_"), "()V");
    }

    static void initWidgets(const jobject& obj) {
                
       const auto methodID = methodID_initWidgets();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_addFeedbackAndBugsButtons() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "addFeedbackButtons", "method_60873", "addFeedbackAndBugsButtons", "m_340461_"), "(Lfod;Lfly$b;)V");
    }

    static void addFeedbackAndBugsButtons(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_addFeedbackAndBugsButtons();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_disconnect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("D", "onDisconnect", "method_47632", "disconnect", "m_261092_"), "()V");
    }

    static void disconnect(const jobject& obj) {
                
       const auto methodID = methodID_disconnect();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "tick", "method_25393", "tick", "m_86600_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_25394", "render", "m_88315_"), "(Lfhz;IIF)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_renderBackground() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "renderBackground", "method_25420", "renderBackground", "m_280273_"), "(Lfhz;IIF)V");
    }

    static void renderBackground(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_renderBackground();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_createButton() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "openScreenButton", "method_47900", "createButton", "m_262456_"), "(Lwz;Ljava/util/function/Supplier;)Lfim;");
    }

    static jobject createButton(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_createButton();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_createUrlButton() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "openLinkButton", "method_47899", "createUrlButton", "m_262461_"), "(Lfod;Lwz;Ljava/net/URI;)Lfim;");
    }

    static jobject createUrlButton(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_createUrlButton();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_GAMEMENUSCREEN_HPP