// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_SIGNEDITSCREEN_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_SIGNEDITSCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.ingame.SignEditScreen
 * Remapped: fqd
 */
namespace SignEditScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fqd", "net/minecraft/client/gui/screens/inventory/SignEditScreen", "net/minecraft/class_498", "net/minecraft/client/gui/screen/ingame/SignEditScreen", "net/minecraft/src/C_3678_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.gui.screen.ingame.SignEditScreen#BACKGROUND_SCALE
    [[maybe_unused]] static jfloat get_field_BACKGROUND_SCALE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAGIC_SCALE_NUMBER", "field_40436", "BACKGROUND_SCALE", "f_244337_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.screen.ingame.SignEditScreen#BACKGROUND_SCALE
    [[maybe_unused]] static void set_field_BACKGROUND_SCALE(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAGIC_SCALE_NUMBER", "field_40436", "BACKGROUND_SCALE", "f_244337_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.gui.screen.ingame.SignEditScreen#TEXT_SCALE_MULTIPLIER
    [[maybe_unused]] static jfloat get_field_TEXT_SCALE_MULTIPLIER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MAGIC_TEXT_SCALE", "field_40437", "TEXT_SCALE_MULTIPLIER", "f_244300_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.screen.ingame.SignEditScreen#TEXT_SCALE_MULTIPLIER
    [[maybe_unused]] static void set_field_TEXT_SCALE_MULTIPLIER(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MAGIC_TEXT_SCALE", "field_40437", "TEXT_SCALE_MULTIPLIER", "f_244300_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.SignEditScreen#TEXT_SCALE
    [[maybe_unused]] static jobject get_field_TEXT_SCALE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "TEXT_SCALE", "field_40438", "TEXT_SCALE", "f_244494_"), "Lorg/joml/Vector3f;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.SignEditScreen#TEXT_SCALE
    [[maybe_unused]] static void set_field_TEXT_SCALE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "TEXT_SCALE", "field_40438", "TEXT_SCALE", "f_244494_"), "Lorg/joml/Vector3f;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.SignEditScreen#model
    static jobject get_field_model(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "signModel", "field_21525", "model", "f_99253_"), "Lghn$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.SignEditScreen#model
    static void set_field_model(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "signModel", "field_21525", "model", "f_99253_"), "Lghn$a;");
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
    
    static jmethodID methodID_translateForRender() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "offsetSign", "method_45654", "translateForRender", "m_280050_"), "(Lfhz;Ldtc;)V");
    }

    static void translateForRender(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_translateForRender();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_renderSignBackground() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderSignBackground", "method_45656", "renderSignBackground", "m_245490_"), "(Lfhz;Ldtc;)V");
    }

    static void renderSignBackground(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_renderSignBackground();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getTextScale() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "getSignTextScale", "method_45661", "getTextScale", "m_245038_"), "()Lorg/joml/Vector3f;");
    }

    static jobject getTextScale(const jobject& obj) {
                
       const auto methodID = methodID_getTextScale();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_SIGNEDITSCREEN_HPP