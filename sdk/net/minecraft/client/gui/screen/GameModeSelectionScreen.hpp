// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_GAMEMODESELECTIONSCREEN_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_GAMEMODESELECTIONSCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.GameModeSelectionScreen
 * Remapped: fop
 */
namespace GameModeSelectionScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fop", "net/minecraft/client/gui/screens/debug/GameModeSwitcherScreen", "net/minecraft/class_5289", "net/minecraft/client/gui/screen/GameModeSelectionScreen", "net/minecraft/src/C_3618_"));
        }
        return cachedClass;
    };

    // getter for static default field net.minecraft.client.gui.screen.GameModeSelectionScreen#SLOT_TEXTURE
    [[maybe_unused]] static jobject get_field_SLOT_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SLOT_SPRITE", "field_45432", "SLOT_TEXTURE", "f_290989_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.GameModeSelectionScreen#SLOT_TEXTURE
    [[maybe_unused]] static void set_field_SLOT_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SLOT_SPRITE", "field_45432", "SLOT_TEXTURE", "f_290989_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.GameModeSelectionScreen#SELECTION_TEXTURE
    [[maybe_unused]] static jobject get_field_SELECTION_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SELECTION_SPRITE", "field_45433", "SELECTION_TEXTURE", "f_291869_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.GameModeSelectionScreen#SELECTION_TEXTURE
    [[maybe_unused]] static void set_field_SELECTION_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SELECTION_SPRITE", "field_45433", "SELECTION_TEXTURE", "f_291869_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.GameModeSelectionScreen#TEXTURE
    [[maybe_unused]] static jobject get_field_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "GAMEMODE_SWITCHER_LOCATION", "field_24566", "TEXTURE", "f_97541_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameModeSelectionScreen#TEXTURE
    [[maybe_unused]] static void set_field_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "GAMEMODE_SWITCHER_LOCATION", "field_24566", "TEXTURE", "f_97541_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.GameModeSelectionScreen#TEXTURE_WIDTH
    [[maybe_unused]] static jint get_field_TEXTURE_WIDTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "SPRITE_SHEET_WIDTH", "field_32310", "TEXTURE_WIDTH", "f_169582_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameModeSelectionScreen#TEXTURE_WIDTH
    [[maybe_unused]] static void set_field_TEXTURE_WIDTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "SPRITE_SHEET_WIDTH", "field_32310", "TEXTURE_WIDTH", "f_169582_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.GameModeSelectionScreen#TEXTURE_HEIGHT
    [[maybe_unused]] static jint get_field_TEXTURE_HEIGHT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "SPRITE_SHEET_HEIGHT", "field_32311", "TEXTURE_HEIGHT", "f_169583_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameModeSelectionScreen#TEXTURE_HEIGHT
    [[maybe_unused]] static void set_field_TEXTURE_HEIGHT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "SPRITE_SHEET_HEIGHT", "field_32311", "TEXTURE_HEIGHT", "f_169583_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.GameModeSelectionScreen#BUTTON_SIZE
    [[maybe_unused]] static jint get_field_BUTTON_SIZE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "SLOT_AREA", "field_32312", "BUTTON_SIZE", "f_169584_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameModeSelectionScreen#BUTTON_SIZE
    [[maybe_unused]] static void set_field_BUTTON_SIZE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "SLOT_AREA", "field_32312", "BUTTON_SIZE", "f_169584_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.GameModeSelectionScreen#ICON_OFFSET
    [[maybe_unused]] static jint get_field_ICON_OFFSET() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "SLOT_PADDING", "field_32313", "ICON_OFFSET", "f_169585_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameModeSelectionScreen#ICON_OFFSET
    [[maybe_unused]] static void set_field_ICON_OFFSET(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "SLOT_PADDING", "field_32313", "ICON_OFFSET", "f_169585_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.GameModeSelectionScreen#field_32314
    [[maybe_unused]] static jint get_field_field_32314() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "SLOT_AREA_PADDED", "field_32314", "field_32314", "f_169586_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameModeSelectionScreen#field_32314
    [[maybe_unused]] static void set_field_field_32314(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "SLOT_AREA_PADDED", "field_32314", "field_32314", "f_169586_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.GameModeSelectionScreen#field_32315
    [[maybe_unused]] static jint get_field_field_32315() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "HELP_TIPS_OFFSET_Y", "field_32315", "field_32315", "f_169587_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameModeSelectionScreen#field_32315
    [[maybe_unused]] static void set_field_field_32315(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "HELP_TIPS_OFFSET_Y", "field_32315", "field_32315", "f_169587_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.GameModeSelectionScreen#UI_WIDTH
    [[maybe_unused]] static jint get_field_UI_WIDTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "ALL_SLOTS_WIDTH", "field_24567", "UI_WIDTH", "f_97542_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameModeSelectionScreen#UI_WIDTH
    [[maybe_unused]] static void set_field_UI_WIDTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "ALL_SLOTS_WIDTH", "field_24567", "UI_WIDTH", "f_97542_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.GameModeSelectionScreen#SELECT_NEXT_TEXT
    [[maybe_unused]] static jobject get_field_SELECT_NEXT_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("z", "SELECT_KEY", "field_25454", "SELECT_NEXT_TEXT", "f_97543_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameModeSelectionScreen#SELECT_NEXT_TEXT
    [[maybe_unused]] static void set_field_SELECT_NEXT_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("z", "SELECT_KEY", "field_25454", "SELECT_NEXT_TEXT", "f_97543_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.GameModeSelectionScreen#currentGameMode
    static jobject get_field_currentGameMode(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("A", "previousHovered", "field_24568", "currentGameMode", "f_97544_"), "Lfop$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameModeSelectionScreen#currentGameMode
    static void set_field_currentGameMode(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("A", "previousHovered", "field_24568", "currentGameMode", "f_97544_"), "Lfop$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.GameModeSelectionScreen#gameMode
    static jobject get_field_gameMode(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("B", "currentlyHovered", "field_24569", "gameMode", "f_97545_"), "Lfop$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameModeSelectionScreen#gameMode
    static void set_field_gameMode(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("B", "currentlyHovered", "field_24569", "gameMode", "f_97545_"), "Lfop$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.GameModeSelectionScreen#lastMouseX
    static jint get_field_lastMouseX(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("C", "firstMouseX", "field_24570", "lastMouseX", "f_97546_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameModeSelectionScreen#lastMouseX
    static void set_field_lastMouseX(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("C", "firstMouseX", "field_24570", "lastMouseX", "f_97546_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.GameModeSelectionScreen#lastMouseY
    static jint get_field_lastMouseY(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("D", "firstMouseY", "field_24571", "lastMouseY", "f_97547_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameModeSelectionScreen#lastMouseY
    static void set_field_lastMouseY(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("D", "firstMouseY", "field_24571", "lastMouseY", "f_97547_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.GameModeSelectionScreen#mouseUsedForSelection
    static jboolean get_field_mouseUsedForSelection(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("E", "setFirstMousePos", "field_24572", "mouseUsedForSelection", "f_97548_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameModeSelectionScreen#mouseUsedForSelection
    static void set_field_mouseUsedForSelection(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("E", "setFirstMousePos", "field_24572", "mouseUsedForSelection", "f_97548_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.GameModeSelectionScreen#gameModeButtons
    static jobject get_field_gameModeButtons(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("F", "slots", "field_24573", "gameModeButtons", "f_97549_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.GameModeSelectionScreen#gameModeButtons
    static void set_field_gameModeButtons(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("F", "slots", "field_24573", "gameModeButtons", "f_97549_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getPreviousGameMode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "getDefaultSelected", "method_30106", "getPreviousGameMode", "m_97575_"), "()Ldct;");
    }

    static jobject getPreviousGameMode(const jobject& obj) {
                
       const auto methodID = methodID_getPreviousGameMode();
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
    
    static jmethodID methodID_apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("C", "switchToHoveredGameMode", "method_28068", "apply", "m_97576_"), "()V");
    }

    static void apply(const jobject& obj) {
                
       const auto methodID = methodID_apply();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID__apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "switchToHoveredGameMode", "method_28064", "apply", "m_280040_"), "(Lfgo;Lfop$a;)V");
    }

    static void _apply(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__apply();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_checkForClose() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("D", "checkToClose", "method_28069", "checkForClose", "m_97577_"), "()Z");
    }

    static jboolean checkForClose(const jobject& obj) {
                
       const auto methodID = methodID_checkForClose();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_keyPressed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "keyPressed", "method_25404", "keyPressed", "m_7933_"), "(III)Z");
    }

    static jboolean keyPressed(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_keyPressed();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_shouldPause() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "isPauseScreen", "method_25421", "shouldPause", "m_7043_"), "()Z");
    }

    static jboolean shouldPause(const jobject& obj) {
                
       const auto methodID = methodID_shouldPause();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_GAMEMODESELECTIONSCREEN_HPP