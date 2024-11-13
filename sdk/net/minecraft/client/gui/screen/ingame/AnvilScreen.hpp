// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_ANVILSCREEN_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_ANVILSCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.ingame.AnvilScreen
 * Remapped: fow
 */
namespace AnvilScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fow", "net/minecraft/client/gui/screens/inventory/AnvilScreen", "net/minecraft/class_471", "net/minecraft/client/gui/screen/ingame/AnvilScreen", "net/minecraft/src/C_3626_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.AnvilScreen#TEXT_FIELD_TEXTURE
    [[maybe_unused]] static jobject get_field_TEXT_FIELD_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("E", "TEXT_FIELD_SPRITE", "field_45436", "TEXT_FIELD_TEXTURE", "f_291146_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.AnvilScreen#TEXT_FIELD_TEXTURE
    [[maybe_unused]] static void set_field_TEXT_FIELD_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("E", "TEXT_FIELD_SPRITE", "field_45436", "TEXT_FIELD_TEXTURE", "f_291146_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.AnvilScreen#TEXT_FIELD_DISABLED_TEXTURE
    [[maybe_unused]] static jobject get_field_TEXT_FIELD_DISABLED_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("F", "TEXT_FIELD_DISABLED_SPRITE", "field_45437", "TEXT_FIELD_DISABLED_TEXTURE", "f_290571_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.AnvilScreen#TEXT_FIELD_DISABLED_TEXTURE
    [[maybe_unused]] static void set_field_TEXT_FIELD_DISABLED_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("F", "TEXT_FIELD_DISABLED_SPRITE", "field_45437", "TEXT_FIELD_DISABLED_TEXTURE", "f_290571_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.AnvilScreen#ERROR_TEXTURE
    [[maybe_unused]] static jobject get_field_ERROR_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("G", "ERROR_SPRITE", "field_45438", "ERROR_TEXTURE", "f_291184_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.AnvilScreen#ERROR_TEXTURE
    [[maybe_unused]] static void set_field_ERROR_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("G", "ERROR_SPRITE", "field_45438", "ERROR_TEXTURE", "f_291184_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.AnvilScreen#TEXTURE
    [[maybe_unused]] static jobject get_field_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("H", "ANVIL_LOCATION", "field_2819", "TEXTURE", "f_97869_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.AnvilScreen#TEXTURE
    [[maybe_unused]] static void set_field_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("H", "ANVIL_LOCATION", "field_2819", "TEXTURE", "f_97869_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.AnvilScreen#TOO_EXPENSIVE_TEXT
    [[maybe_unused]] static jobject get_field_TOO_EXPENSIVE_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("I", "TOO_EXPENSIVE_TEXT", "field_26559", "TOO_EXPENSIVE_TEXT", "f_97870_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.AnvilScreen#TOO_EXPENSIVE_TEXT
    [[maybe_unused]] static void set_field_TOO_EXPENSIVE_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("I", "TOO_EXPENSIVE_TEXT", "field_26559", "TOO_EXPENSIVE_TEXT", "f_97870_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.AnvilScreen#nameField
    static jobject get_field_nameField(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("J", "name", "field_2821", "nameField", "f_97871_"), "Lfiv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.AnvilScreen#nameField
    static void set_field_nameField(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("J", "name", "field_2821", "nameField", "f_97871_"), "Lfiv;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.AnvilScreen#player
    static jobject get_field_player(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("K", "player", "field_29348", "player", "f_169611_"), "Lcmx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.AnvilScreen#player
    static void set_field_player(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("K", "player", "field_29348", "player", "f_169611_"), "Lcmx;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_setup() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("E", "subInit", "method_25445", "setup", "m_5653_"), "()V");
    }

    static void setup(const jobject& obj) {
                
       const auto methodID = methodID_setup();
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
    
    static jmethodID methodID_resize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "resize", "method_25410", "resize", "m_6574_"), "(Lfgo;II)V");
    }

    static void resize(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_resize();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_keyPressed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "keyPressed", "method_25404", "keyPressed", "m_7933_"), "(III)Z");
    }

    static jboolean keyPressed(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_keyPressed();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_onRenamed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onNameChanged", "method_2403", "onRenamed", "m_97898_"), "(Ljava/lang/String;)V");
    }

    static void onRenamed(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onRenamed();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
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
    
    static jmethodID methodID_renderForeground() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "renderFg", "method_25444", "renderForeground", "m_6691_"), "(Lfhz;IIF)V");
    }

    static void renderForeground(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_renderForeground();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_drawInvalidRecipeArrow() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "renderErrorIcon", "method_48467", "drawInvalidRecipeArrow", "m_266390_"), "(Lfhz;II)V");
    }

    static void drawInvalidRecipeArrow(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_drawInvalidRecipeArrow();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_onSlotUpdate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "slotChanged", "method_7635", "onSlotUpdate", "m_7934_"), "(Lcpu;ILcuq;)V");
    }

    static void onSlotUpdate(const jobject& obj, const jobject& arg0, const jint& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_onSlotUpdate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_ANVILSCREEN_HPP