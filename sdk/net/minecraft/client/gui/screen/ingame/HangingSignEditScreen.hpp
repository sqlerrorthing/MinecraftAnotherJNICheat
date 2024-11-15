// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_HANGINGSIGNEDITSCREEN_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_HANGINGSIGNEDITSCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.ingame.HangingSignEditScreen
 * Remapped: fpq
 */
namespace HangingSignEditScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fpq", "net/minecraft/client/gui/screens/inventory/HangingSignEditScreen", "net/minecraft/class_7744", "net/minecraft/client/gui/screen/ingame/HangingSignEditScreen", "net/minecraft/src/C_243433_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.gui.screen.ingame.HangingSignEditScreen#BACKGROUND_SCALE
    [[maybe_unused]] static jfloat get_field_BACKGROUND_SCALE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAGIC_BACKGROUND_SCALE", "field_40431", "BACKGROUND_SCALE", "f_243962_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.screen.ingame.HangingSignEditScreen#BACKGROUND_SCALE
    [[maybe_unused]] static void set_field_BACKGROUND_SCALE(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAGIC_BACKGROUND_SCALE", "field_40431", "BACKGROUND_SCALE", "f_243962_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.HangingSignEditScreen#TEXT_SCALE
    [[maybe_unused]] static jobject get_field_TEXT_SCALE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "TEXT_SCALE", "field_40432", "TEXT_SCALE", "f_243728_"), "Lorg/joml/Vector3f;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.HangingSignEditScreen#TEXT_SCALE
    [[maybe_unused]] static void set_field_TEXT_SCALE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "TEXT_SCALE", "field_40432", "TEXT_SCALE", "f_243728_"), "Lorg/joml/Vector3f;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.HangingSignEditScreen#field_40433
    [[maybe_unused]] static jint get_field_field_40433() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "TEXTURE_WIDTH", "field_40433", "field_40433", "f_244604_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.HangingSignEditScreen#field_40433
    [[maybe_unused]] static void set_field_field_40433(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "TEXTURE_WIDTH", "field_40433", "field_40433", "f_244604_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.HangingSignEditScreen#field_40434
    [[maybe_unused]] static jint get_field_field_40434() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "TEXTURE_HEIGHT", "field_40434", "field_40434", "f_244207_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.HangingSignEditScreen#field_40434
    [[maybe_unused]] static void set_field_field_40434(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "TEXTURE_HEIGHT", "field_40434", "field_40434", "f_244207_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.HangingSignEditScreen#texture
    static jobject get_field_texture(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "texture", "field_40435", "texture", "f_243720_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.HangingSignEditScreen#texture
    static void set_field_texture(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "texture", "field_40435", "texture", "f_243720_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
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

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_HANGINGSIGNEDITSCREEN_HPP