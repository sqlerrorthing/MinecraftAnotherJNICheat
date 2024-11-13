// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_CREATEWORLDSCREEN_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_CREATEWORLDSCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.world.CreateWorldScreen
 * Remapped: ftc
 */
namespace CreateWorldScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ftc", "net/minecraft/client/gui/screens/worldselection/CreateWorldScreen", "net/minecraft/class_525", "net/minecraft/client/gui/screen/world/CreateWorldScreen", "net/minecraft/src/C_3737_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.screen.world.CreateWorldScreen#field_42165
    [[maybe_unused]] static jint get_field_field_42165() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "GROUP_BOTTOM", "field_42165", "field_42165", "f_267463_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.CreateWorldScreen#field_42165
    [[maybe_unused]] static void set_field_field_42165(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "GROUP_BOTTOM", "field_42165", "field_42165", "f_267463_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.world.CreateWorldScreen#field_42166
    [[maybe_unused]] static jint get_field_field_42166() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "TAB_COLUMN_WIDTH", "field_42166", "field_42166", "f_267486_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.CreateWorldScreen#field_42166
    [[maybe_unused]] static void set_field_field_42166(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "TAB_COLUMN_WIDTH", "field_42166", "field_42166", "f_267486_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.world.CreateWorldScreen#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "LOGGER", "field_25480", "LOGGER", "f_100848_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.CreateWorldScreen#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "LOGGER", "field_25480", "LOGGER", "f_100848_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.world.CreateWorldScreen#TEMP_DIR_PREFIX
    [[maybe_unused]] static jobject get_field_TEMP_DIR_PREFIX() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "TEMP_WORLD_PREFIX", "field_32434", "TEMP_DIR_PREFIX", "f_170147_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.CreateWorldScreen#TEMP_DIR_PREFIX
    [[maybe_unused]] static void set_field_TEMP_DIR_PREFIX(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "TEMP_WORLD_PREFIX", "field_32434", "TEMP_DIR_PREFIX", "f_170147_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.world.CreateWorldScreen#GAME_MODE_TEXT
    [[maybe_unused]] static jobject get_field_GAME_MODE_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "GAME_MODEL_LABEL", "field_25898", "GAME_MODE_TEXT", "f_100849_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.world.CreateWorldScreen#GAME_MODE_TEXT
    [[maybe_unused]] static void set_field_GAME_MODE_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "GAME_MODEL_LABEL", "field_25898", "GAME_MODE_TEXT", "f_100849_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.world.CreateWorldScreen#ENTER_NAME_TEXT
    [[maybe_unused]] static jobject get_field_ENTER_NAME_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "NAME_LABEL", "field_26600", "ENTER_NAME_TEXT", "f_100852_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.world.CreateWorldScreen#ENTER_NAME_TEXT
    [[maybe_unused]] static void set_field_ENTER_NAME_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "NAME_LABEL", "field_26600", "ENTER_NAME_TEXT", "f_100852_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.world.CreateWorldScreen#EXPERIMENTS_TEXT
    [[maybe_unused]] static jobject get_field_EXPERIMENTS_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "EXPERIMENTS_LABEL", "field_42501", "EXPERIMENTS_TEXT", "f_268721_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.world.CreateWorldScreen#EXPERIMENTS_TEXT
    [[maybe_unused]] static void set_field_EXPERIMENTS_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "EXPERIMENTS_LABEL", "field_42501", "EXPERIMENTS_TEXT", "f_268721_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.world.CreateWorldScreen#ALLOW_COMMANDS_INFO_TEXT
    [[maybe_unused]] static jobject get_field_ALLOW_COMMANDS_INFO_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "ALLOW_COMMANDS_INFO", "field_42169", "ALLOW_COMMANDS_INFO_TEXT", "f_314626_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.world.CreateWorldScreen#ALLOW_COMMANDS_INFO_TEXT
    [[maybe_unused]] static void set_field_ALLOW_COMMANDS_INFO_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "ALLOW_COMMANDS_INFO", "field_42169", "ALLOW_COMMANDS_INFO_TEXT", "f_314626_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.world.CreateWorldScreen#PREPARING_TEXT
    [[maybe_unused]] static jobject get_field_PREPARING_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "PREPARING_WORLD_DATA", "field_37911", "PREPARING_TEXT", "f_232866_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.CreateWorldScreen#PREPARING_TEXT
    [[maybe_unused]] static void set_field_PREPARING_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "PREPARING_WORLD_DATA", "field_37911", "PREPARING_TEXT", "f_232866_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.world.CreateWorldScreen#field_42170
    [[maybe_unused]] static jint get_field_field_42170() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("z", "HORIZONTAL_BUTTON_SPACING", "field_42170", "field_42170", "f_267420_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.CreateWorldScreen#field_42170
    [[maybe_unused]] static void set_field_field_42170(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("z", "HORIZONTAL_BUTTON_SPACING", "field_42170", "field_42170", "f_267420_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.world.CreateWorldScreen#field_42171
    [[maybe_unused]] static jint get_field_field_42171() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("A", "VERTICAL_BUTTON_SPACING", "field_42171", "field_42171", "f_267460_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.CreateWorldScreen#field_42171
    [[maybe_unused]] static void set_field_field_42171(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("A", "VERTICAL_BUTTON_SPACING", "field_42171", "field_42171", "f_267460_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.gui.screen.world.CreateWorldScreen#TAB_HEADER_BACKGROUND_TEXTURE
    [[maybe_unused]] static jobject get_field_TAB_HEADER_BACKGROUND_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TAB_HEADER_BACKGROUND", "field_49902", "TAB_HEADER_BACKGROUND_TEXTURE", "f_314408_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.screen.world.CreateWorldScreen#TAB_HEADER_BACKGROUND_TEXTURE
    [[maybe_unused]] static void set_field_TAB_HEADER_BACKGROUND_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TAB_HEADER_BACKGROUND", "field_49902", "TAB_HEADER_BACKGROUND_TEXTURE", "f_314408_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.world.CreateWorldScreen#layout
    static jobject get_field_layout(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("B", "layout", "field_49557", "layout", "f_313923_"), "Lflz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.CreateWorldScreen#layout
    static void set_field_layout(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("B", "layout", "field_49557", "layout", "f_313923_"), "Lflz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.gui.screen.world.CreateWorldScreen#worldCreator
    static jobject get_field_worldCreator(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("C", "uiState", "field_42172", "worldCreator", "f_267389_"), "Lftl;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.world.CreateWorldScreen#worldCreator
    static void set_field_worldCreator(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("C", "uiState", "field_42172", "worldCreator", "f_267389_"), "Lftl;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.world.CreateWorldScreen#tabManager
    static jobject get_field_tabManager(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("D", "tabManager", "field_42173", "tabManager", "f_267424_"), "Lfkp;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.CreateWorldScreen#tabManager
    static void set_field_tabManager(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("D", "tabManager", "field_42173", "tabManager", "f_267424_"), "Lfkp;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.world.CreateWorldScreen#recreated
    static jboolean get_field_recreated(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("E", "recreated", "field_42502", "recreated", "f_268587_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.CreateWorldScreen#recreated
    static void set_field_recreated(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("E", "recreated", "field_42502", "recreated", "f_268587_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.world.CreateWorldScreen#symlinkFinder
    static jobject get_field_symlinkFinder(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("F", "packValidator", "field_45568", "symlinkFinder", "f_291518_"), "Lews;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.CreateWorldScreen#symlinkFinder
    static void set_field_symlinkFinder(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("F", "packValidator", "field_45568", "symlinkFinder", "f_291518_"), "Lews;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.world.CreateWorldScreen#parent
    static jobject get_field_parent(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("G", "lastScreen", "field_3187", "parent", "f_100855_"), "Lfod;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.CreateWorldScreen#parent
    static void set_field_parent(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("G", "lastScreen", "field_3187", "parent", "f_100855_"), "Lfod;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.world.CreateWorldScreen#dataPackTempDir
    static jobject get_field_dataPackTempDir(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("H", "tempDataPackDir", "field_25477", "dataPackTempDir", "f_100831_"), "Ljava/nio/file/Path;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.CreateWorldScreen#dataPackTempDir
    static void set_field_dataPackTempDir(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("H", "tempDataPackDir", "field_25477", "dataPackTempDir", "f_100831_"), "Ljava/nio/file/Path;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.world.CreateWorldScreen#packManager
    static jobject get_field_packManager(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("I", "tempDataPackRepository", "field_25792", "packManager", "f_100832_"), "Latp;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.CreateWorldScreen#packManager
    static void set_field_packManager(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("I", "tempDataPackRepository", "field_25792", "packManager", "f_100832_"), "Latp;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.world.CreateWorldScreen#tabNavigation
    static jobject get_field_tabNavigation(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("J", "tabNavigationBar", "field_42164", "tabNavigation", "f_267490_"), "Lfkq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.CreateWorldScreen#tabNavigation
    static void set_field_tabNavigation(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("J", "tabNavigationBar", "field_42164", "tabNavigation", "f_267490_"), "Lfkq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "openFresh", "method_31130", "create", "m_232896_"), "(Lfgo;Lfod;)V");
    }

    static void create(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createFromExisting", "method_40212", "create", "m_275847_"), "(Lfgo;Lfod;Ldda;Lftk;Ljava/nio/file/Path;)Lftc;");
    }

    static jobject _create(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
       const auto clazz = self();
       const auto methodID = methodID__create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_getWorldCreator() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "getUiState", "method_48657", "getWorldCreator", "m_267748_"), "()Lftl;");
    }

    static jobject getWorldCreator(const jobject& obj) {
                
       const auto methodID = methodID_getWorldCreator();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_init() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aT_", "init", "method_25426", "init", "m_7856_"), "()V");
    }

    static void init(const jobject& obj) {
                
       const auto methodID = methodID_init();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_setInitialFocus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aI_", "setInitialFocus", "method_56131", "setInitialFocus", "m_318615_"), "()V");
    }

    static void setInitialFocus(const jobject& obj) {
                
       const auto methodID = methodID_setInitialFocus();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_initTabNavigation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "repositionElements", "method_48640", "initTabNavigation", "m_267719_"), "()V");
    }

    static void initTabNavigation(const jobject& obj) {
                
       const auto methodID = methodID_initTabNavigation();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_showMessage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "queueLoadScreen", "method_41852", "showMessage", "m_232899_"), "(Lfgo;Lwz;)V");
    }

    static void showMessage(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_showMessage();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_createLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("D", "onCreate", "method_2736", "createLevel", "m_100972_"), "()V");
    }

    static void createLevel(const jobject& obj) {
                
       const auto methodID = methodID_createLevel();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_startServer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createNewWorld", "method_41847", "startServer", "m_245184_"), "(Lerj$a;Ljt;Lcom/mojang/serialization/Lifecycle;)V");
    }

    static void startServer(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_startServer();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_createLevelInfo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "createLevelSettings", "method_40213", "createLevelInfo", "m_205447_"), "(Z)Ldda;");
    }

    static jobject createLevelInfo(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_createLevelInfo();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_keyPressed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "keyPressed", "method_25404", "keyPressed", "m_7933_"), "(III)Z");
    }

    static jboolean keyPressed(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_keyPressed();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "onClose", "method_25419", "close", "m_7379_"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_onCloseScreen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("C", "popScreen", "method_30297", "onCloseScreen", "m_100967_"), "()V");
    }

    static void onCloseScreen(const jobject& obj) {
                
       const auto methodID = methodID_onCloseScreen();
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
    
    static jmethodID methodID_renderDarkening() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderMenuBackground", "method_57735", "renderDarkening", "m_323963_"), "(Lfhz;)V");
    }

    static void renderDarkening(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_renderDarkening();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addSelectableChild() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "addWidget", "method_25429", "addSelectableChild", "m_7787_"), "(Lfki;)Lfki;");
    }

    static jobject addSelectableChild(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addSelectableChild();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addDrawableChild() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "addRenderableWidget", "method_37063", "addDrawableChild", "m_142416_"), "(Lfki;)Lfki;");
    }

    static jobject addDrawableChild(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addDrawableChild();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getDataPackTempDir() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("E", "getTempDataPackDir", "method_29693", "getDataPackTempDir", "m_100968_"), "()Ljava/nio/file/Path;");
    }

    static jobject getDataPackTempDir(const jobject& obj) {
                
       const auto methodID = methodID_getDataPackTempDir();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_openExperimentsScreen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "openExperimentsScreen", "method_49010", "openExperimentsScreen", "m_269545_"), "(Lddr;)V");
    }

    static void openExperimentsScreen(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_openExperimentsScreen();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_openPackScreen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "openDataPackSelectionScreen", "method_29694", "openPackScreen", "m_267734_"), "(Lddr;)V");
    }

    static void openPackScreen(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_openPackScreen();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_applyDataPacks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tryApplyNewDataPacks", "method_29682", "applyDataPacks", "m_269443_"), "(Latp;ZLjava/util/function/Consumer;)V");
    }

    static void applyDataPacks(const jobject& obj, const jobject& arg0, const jboolean& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_applyDataPacks();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_validateDataPacks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "applyNewPackConfig", "method_45679", "validateDataPacks", "m_269431_"), "(Latp;Lddr;Ljava/util/function/Consumer;)V");
    }

    static void validateDataPacks(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_validateDataPacks();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_createServerConfig() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createDefaultLoadConfig", "method_41849", "createServerConfig", "m_245574_"), "(Latp;Lddr;)Lalo$c;");
    }

    static jobject createServerConfig(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_createServerConfig();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_clearDataPackTempDir() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("F", "removeTempDataPackDir", "method_29695", "clearDataPackTempDir", "m_100976_"), "()V");
    }

    static void clearDataPackTempDir(const jobject& obj) {
                
       const auto methodID = methodID_clearDataPackTempDir();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_copyDataPack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "copyBetweenDirs", "method_29687", "copyDataPack", "m_100912_"), "(Ljava/nio/file/Path;Ljava/nio/file/Path;Ljava/nio/file/Path;)V");
    }

    static void copyDataPack(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_copyDataPack();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_createSession() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("G", "createNewWorldDirectory", "method_41848", "createSession", "m_232868_"), "()Ljava/util/Optional;");
    }

    static jobject createSession(const jobject& obj) {
                
       const auto methodID = methodID_createSession();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__copyDataPack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createTempDataPackDirFromExistingWorld", "method_29685", "copyDataPack", "m_100906_"), "(Ljava/nio/file/Path;Lfgo;)Ljava/nio/file/Path;");
    }

    static jobject _copyDataPack(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__copyDataPack();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getScannedPack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getDataPackSelectionSettings", "method_30296", "getScannedPack", "m_267637_"), "(Lddr;)Lcom/mojang/datafixers/util/Pair;");
    }

    static jobject getScannedPack(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getScannedPack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_CREATEWORLDSCREEN_HPP