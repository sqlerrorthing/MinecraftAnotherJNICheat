// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_BEACONSCREEN_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_BEACONSCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.ingame.BeaconScreen
 * Remapped: fox
 */
namespace BeaconScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fox", "net/minecraft/client/gui/screens/inventory/BeaconScreen", "net/minecraft/class_466", "net/minecraft/client/gui/screen/ingame/BeaconScreen", "net/minecraft/src/C_3627_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.BeaconScreen#TEXTURE
    [[maybe_unused]] static jobject get_field_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("E", "BEACON_LOCATION", "field_2808", "TEXTURE", "f_97903_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.BeaconScreen#TEXTURE
    [[maybe_unused]] static void set_field_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("E", "BEACON_LOCATION", "field_2808", "TEXTURE", "f_97903_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.ingame.BeaconScreen#BUTTON_DISABLED_TEXTURE
    [[maybe_unused]] static jobject get_field_BUTTON_DISABLED_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("F", "BUTTON_DISABLED_SPRITE", "field_45443", "BUTTON_DISABLED_TEXTURE", "f_291613_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.ingame.BeaconScreen#BUTTON_DISABLED_TEXTURE
    [[maybe_unused]] static void set_field_BUTTON_DISABLED_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("F", "BUTTON_DISABLED_SPRITE", "field_45443", "BUTTON_DISABLED_TEXTURE", "f_291613_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.ingame.BeaconScreen#BUTTON_SELECTED_TEXTURE
    [[maybe_unused]] static jobject get_field_BUTTON_SELECTED_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("G", "BUTTON_SELECTED_SPRITE", "field_45444", "BUTTON_SELECTED_TEXTURE", "f_290884_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.ingame.BeaconScreen#BUTTON_SELECTED_TEXTURE
    [[maybe_unused]] static void set_field_BUTTON_SELECTED_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("G", "BUTTON_SELECTED_SPRITE", "field_45444", "BUTTON_SELECTED_TEXTURE", "f_290884_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.ingame.BeaconScreen#BUTTON_HIGHLIGHTED_TEXTURE
    [[maybe_unused]] static jobject get_field_BUTTON_HIGHLIGHTED_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("H", "BUTTON_HIGHLIGHTED_SPRITE", "field_45439", "BUTTON_HIGHLIGHTED_TEXTURE", "f_291172_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.ingame.BeaconScreen#BUTTON_HIGHLIGHTED_TEXTURE
    [[maybe_unused]] static void set_field_BUTTON_HIGHLIGHTED_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("H", "BUTTON_HIGHLIGHTED_SPRITE", "field_45439", "BUTTON_HIGHLIGHTED_TEXTURE", "f_291172_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.ingame.BeaconScreen#BUTTON_TEXTURE
    [[maybe_unused]] static jobject get_field_BUTTON_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("I", "BUTTON_SPRITE", "field_45440", "BUTTON_TEXTURE", "f_290792_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.ingame.BeaconScreen#BUTTON_TEXTURE
    [[maybe_unused]] static void set_field_BUTTON_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("I", "BUTTON_SPRITE", "field_45440", "BUTTON_TEXTURE", "f_290792_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.ingame.BeaconScreen#CONFIRM_TEXTURE
    [[maybe_unused]] static jobject get_field_CONFIRM_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("J", "CONFIRM_SPRITE", "field_45441", "CONFIRM_TEXTURE", "f_291201_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.ingame.BeaconScreen#CONFIRM_TEXTURE
    [[maybe_unused]] static void set_field_CONFIRM_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("J", "CONFIRM_SPRITE", "field_45441", "CONFIRM_TEXTURE", "f_291201_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.gui.screen.ingame.BeaconScreen#CANCEL_TEXTURE
    [[maybe_unused]] static jobject get_field_CANCEL_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("K", "CANCEL_SPRITE", "field_45442", "CANCEL_TEXTURE", "f_291331_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.ingame.BeaconScreen#CANCEL_TEXTURE
    [[maybe_unused]] static void set_field_CANCEL_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("K", "CANCEL_SPRITE", "field_45442", "CANCEL_TEXTURE", "f_291331_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.BeaconScreen#PRIMARY_POWER_TEXT
    [[maybe_unused]] static jobject get_field_PRIMARY_POWER_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("L", "PRIMARY_EFFECT_LABEL", "field_26560", "PRIMARY_POWER_TEXT", "f_97904_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.BeaconScreen#PRIMARY_POWER_TEXT
    [[maybe_unused]] static void set_field_PRIMARY_POWER_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("L", "PRIMARY_EFFECT_LABEL", "field_26560", "PRIMARY_POWER_TEXT", "f_97904_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.BeaconScreen#SECONDARY_POWER_TEXT
    [[maybe_unused]] static jobject get_field_SECONDARY_POWER_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("M", "SECONDARY_EFFECT_LABEL", "field_26561", "SECONDARY_POWER_TEXT", "f_97905_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.BeaconScreen#SECONDARY_POWER_TEXT
    [[maybe_unused]] static void set_field_SECONDARY_POWER_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("M", "SECONDARY_EFFECT_LABEL", "field_26561", "SECONDARY_POWER_TEXT", "f_97905_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.BeaconScreen#buttons
    static jobject get_field_buttons(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("N", "beaconButtons", "field_33832", "buttons", "f_169612_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.BeaconScreen#buttons
    static void set_field_buttons(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("N", "beaconButtons", "field_33832", "buttons", "f_169612_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.gui.screen.ingame.BeaconScreen#primaryEffect
    static jobject get_field_primaryEffect(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("O", "primary", "field_17412", "primaryEffect", "f_97908_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.ingame.BeaconScreen#primaryEffect
    static void set_field_primaryEffect(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("O", "primary", "field_17412", "primaryEffect", "f_97908_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.gui.screen.ingame.BeaconScreen#secondaryEffect
    static jobject get_field_secondaryEffect(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("P", "secondary", "field_17413", "secondaryEffect", "f_97909_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.gui.screen.ingame.BeaconScreen#secondaryEffect
    static void set_field_secondaryEffect(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("P", "secondary", "field_17413", "secondaryEffect", "f_97909_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_addButton() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addBeaconButton", "method_37076", "addButton", "m_169616_"), "(Lfik;)V");
    }

    static void addButton(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addButton();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_init() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aT_", "init", "method_25426", "init", "m_7856_"), "()V");
    }

    static void init(const jobject& obj) {
                
       const auto methodID = methodID_init();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_handledScreenTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("C", "containerTick", "method_37432", "handledScreenTick", "m_181908_"), "()V");
    }

    static void handledScreenTick(const jobject& obj) {
                
       const auto methodID = methodID_handledScreenTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_tickButtons() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("E", "updateButtons", "method_37078", "tickButtons", "m_169626_"), "()V");
    }

    static void tickButtons(const jobject& obj) {
                
       const auto methodID = methodID_tickButtons();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_drawForeground() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "renderLabels", "method_2388", "drawForeground", "m_280003_"), "(Lfhz;II)V");
    }

    static void drawForeground(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_drawForeground();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_drawBackground() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderBg", "method_2389", "drawBackground", "m_7286_"), "(Lfhz;FII)V");
    }

    static void drawBackground(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jint& arg2, const jint& arg3) {
                
       const auto methodID = methodID_drawBackground();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
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

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_BEACONSCREEN_HPP