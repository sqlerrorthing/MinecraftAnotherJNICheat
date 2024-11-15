// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_OPENTOLANSCREEN_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_OPENTOLANSCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.OpenToLanScreen
 * Remapped: foe
 */
namespace OpenToLanScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("foe", "net/minecraft/client/gui/screens/ShareToLanScreen", "net/minecraft/class_436", "net/minecraft/client/gui/screen/OpenToLanScreen", "net/minecraft/src/C_3584_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.screen.OpenToLanScreen#MIN_PORT
    [[maybe_unused]] static jint get_field_MIN_PORT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "PORT_LOWER_BOUND", "field_41629", "MIN_PORT", "f_262314_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.OpenToLanScreen#MIN_PORT
    [[maybe_unused]] static void set_field_MIN_PORT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "PORT_LOWER_BOUND", "field_41629", "MIN_PORT", "f_262314_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.OpenToLanScreen#MAX_PORT
    [[maybe_unused]] static jint get_field_MAX_PORT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PORT_HIGHER_BOUND", "field_41630", "MAX_PORT", "f_262301_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.OpenToLanScreen#MAX_PORT
    [[maybe_unused]] static void set_field_MAX_PORT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PORT_HIGHER_BOUND", "field_41630", "MAX_PORT", "f_262301_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.OpenToLanScreen#ALLOW_COMMANDS_TEXT
    [[maybe_unused]] static jobject get_field_ALLOW_COMMANDS_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ALLOW_COMMANDS_LABEL", "field_25889", "ALLOW_COMMANDS_TEXT", "f_96640_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.OpenToLanScreen#ALLOW_COMMANDS_TEXT
    [[maybe_unused]] static void set_field_ALLOW_COMMANDS_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ALLOW_COMMANDS_LABEL", "field_25889", "ALLOW_COMMANDS_TEXT", "f_96640_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.OpenToLanScreen#GAME_MODE_TEXT
    [[maybe_unused]] static jobject get_field_GAME_MODE_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "GAME_MODE_LABEL", "field_25890", "GAME_MODE_TEXT", "f_96641_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.OpenToLanScreen#GAME_MODE_TEXT
    [[maybe_unused]] static void set_field_GAME_MODE_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "GAME_MODE_LABEL", "field_25890", "GAME_MODE_TEXT", "f_96641_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.OpenToLanScreen#OTHER_PLAYERS_TEXT
    [[maybe_unused]] static jobject get_field_OTHER_PLAYERS_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "INFO_TEXT", "field_26545", "OTHER_PLAYERS_TEXT", "f_96642_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.OpenToLanScreen#OTHER_PLAYERS_TEXT
    [[maybe_unused]] static void set_field_OTHER_PLAYERS_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "INFO_TEXT", "field_26545", "OTHER_PLAYERS_TEXT", "f_96642_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.OpenToLanScreen#PORT_TEXT
    [[maybe_unused]] static jobject get_field_PORT_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "PORT_INFO_TEXT", "field_41108", "PORT_TEXT", "f_257007_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.OpenToLanScreen#PORT_TEXT
    [[maybe_unused]] static void set_field_PORT_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "PORT_INFO_TEXT", "field_41108", "PORT_TEXT", "f_257007_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.OpenToLanScreen#UNAVAILABLE_PORT_TEXT
    [[maybe_unused]] static jobject get_field_UNAVAILABLE_PORT_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "PORT_UNAVAILABLE", "field_41106", "UNAVAILABLE_PORT_TEXT", "f_257045_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.OpenToLanScreen#UNAVAILABLE_PORT_TEXT
    [[maybe_unused]] static void set_field_UNAVAILABLE_PORT_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "PORT_UNAVAILABLE", "field_41106", "UNAVAILABLE_PORT_TEXT", "f_257045_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.OpenToLanScreen#INVALID_PORT_TEXT
    [[maybe_unused]] static jobject get_field_INVALID_PORT_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "INVALID_PORT", "field_41109", "INVALID_PORT_TEXT", "f_256909_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.OpenToLanScreen#INVALID_PORT_TEXT
    [[maybe_unused]] static void set_field_INVALID_PORT_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "INVALID_PORT", "field_41109", "INVALID_PORT_TEXT", "f_256909_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.OpenToLanScreen#ERROR_TEXT_COLOR
    [[maybe_unused]] static jint get_field_ERROR_TEXT_COLOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "INVALID_PORT_COLOR", "field_41107", "ERROR_TEXT_COLOR", "f_257022_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.OpenToLanScreen#ERROR_TEXT_COLOR
    [[maybe_unused]] static void set_field_ERROR_TEXT_COLOR(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "INVALID_PORT_COLOR", "field_41107", "ERROR_TEXT_COLOR", "f_257022_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.OpenToLanScreen#parent
    static jobject get_field_parent(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("y", "lastScreen", "field_2548", "parent", "f_96643_"), "Lfod;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.OpenToLanScreen#parent
    static void set_field_parent(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("y", "lastScreen", "field_2548", "parent", "f_96643_"), "Lfod;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.OpenToLanScreen#gameMode
    static jobject get_field_gameMode(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("z", "gameMode", "field_2545", "gameMode", "f_169427_"), "Ldct;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.OpenToLanScreen#gameMode
    static void set_field_gameMode(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("z", "gameMode", "field_2545", "gameMode", "f_169427_"), "Ldct;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.OpenToLanScreen#allowCommands
    static jboolean get_field_allowCommands(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("A", "commands", "field_2546", "allowCommands", "f_96647_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.OpenToLanScreen#allowCommands
    static void set_field_allowCommands(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("A", "commands", "field_2546", "allowCommands", "f_96647_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.OpenToLanScreen#port
    static jint get_field_port(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("B", "port", "field_41110", "port", "f_256852_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.OpenToLanScreen#port
    static void set_field_port(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("B", "port", "field_41110", "port", "f_256852_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.OpenToLanScreen#portField
    static jobject get_field_portField(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("C", "portEdit", "field_41111", "portField", "f_256803_"), "Lfiv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.OpenToLanScreen#portField
    static void set_field_portField(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("C", "portEdit", "field_41111", "portField", "f_256803_"), "Lfiv;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_init() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aT_", "init", "method_25426", "init", "m_7856_"), "()V");
    }

    static void init(const jobject& obj) {
                
       const auto methodID = methodID_init();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "onClose", "method_25419", "close", "m_7379_"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_updatePort() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tryParsePort", "method_47417", "updatePort", "m_257854_"), "(Ljava/lang/String;)Lwz;");
    }

    static jobject updatePort(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_updatePort();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_25394", "render", "m_88315_"), "(Lfhz;IIF)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_OPENTOLANSCREEN_HPP