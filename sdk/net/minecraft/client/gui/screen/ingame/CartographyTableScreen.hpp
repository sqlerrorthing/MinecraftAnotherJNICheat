// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_CARTOGRAPHYTABLESCREEN_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_CARTOGRAPHYTABLESCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.ingame.CartographyTableScreen
 * Remapped: fpc
 */
namespace CartographyTableScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fpc", "net/minecraft/client/gui/screens/inventory/CartographyTableScreen", "net/minecraft/class_3934", "net/minecraft/client/gui/screen/ingame/CartographyTableScreen", "net/minecraft/src/C_3645_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.CartographyTableScreen#ERROR_TEXTURE
    [[maybe_unused]] static jobject get_field_ERROR_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("E", "ERROR_SPRITE", "field_45453", "ERROR_TEXTURE", "f_290490_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.CartographyTableScreen#ERROR_TEXTURE
    [[maybe_unused]] static void set_field_ERROR_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("E", "ERROR_SPRITE", "field_45453", "ERROR_TEXTURE", "f_290490_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.CartographyTableScreen#SCALED_MAP_TEXTURE
    [[maybe_unused]] static jobject get_field_SCALED_MAP_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("F", "SCALED_MAP_SPRITE", "field_45454", "SCALED_MAP_TEXTURE", "f_290970_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.CartographyTableScreen#SCALED_MAP_TEXTURE
    [[maybe_unused]] static void set_field_SCALED_MAP_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("F", "SCALED_MAP_SPRITE", "field_45454", "SCALED_MAP_TEXTURE", "f_290970_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.CartographyTableScreen#DUPLICATED_MAP_TEXTURE
    [[maybe_unused]] static jobject get_field_DUPLICATED_MAP_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("G", "DUPLICATED_MAP_SPRITE", "field_45455", "DUPLICATED_MAP_TEXTURE", "f_290525_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.CartographyTableScreen#DUPLICATED_MAP_TEXTURE
    [[maybe_unused]] static void set_field_DUPLICATED_MAP_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("G", "DUPLICATED_MAP_SPRITE", "field_45455", "DUPLICATED_MAP_TEXTURE", "f_290525_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.CartographyTableScreen#MAP_TEXTURE
    [[maybe_unused]] static jobject get_field_MAP_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("H", "MAP_SPRITE", "field_45451", "MAP_TEXTURE", "f_290439_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.CartographyTableScreen#MAP_TEXTURE
    [[maybe_unused]] static void set_field_MAP_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("H", "MAP_SPRITE", "field_45451", "MAP_TEXTURE", "f_290439_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.CartographyTableScreen#LOCKED_TEXTURE
    [[maybe_unused]] static jobject get_field_LOCKED_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("I", "LOCKED_SPRITE", "field_45452", "LOCKED_TEXTURE", "f_290847_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.CartographyTableScreen#LOCKED_TEXTURE
    [[maybe_unused]] static void set_field_LOCKED_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("I", "LOCKED_SPRITE", "field_45452", "LOCKED_TEXTURE", "f_290847_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.CartographyTableScreen#TEXTURE
    [[maybe_unused]] static jobject get_field_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("J", "BG_LOCATION", "field_17421", "TEXTURE", "f_98346_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.CartographyTableScreen#TEXTURE
    [[maybe_unused]] static void set_field_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("J", "BG_LOCATION", "field_17421", "TEXTURE", "f_98346_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_25394", "render", "m_88315_"), "(Lfhz;IIF)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_drawBackground() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderBg", "method_2389", "drawBackground", "m_7286_"), "(Lfhz;FII)V");
    }

    static void drawBackground(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jint& arg2, const jint& arg3) {
                
       const auto methodID = methodID_drawBackground();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_drawMap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderResultingMap", "method_17567", "drawMap", "m_280549_"), "(Lfhz;Leqr;Leqt;ZZZZ)V");
    }

    static void drawMap(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jboolean& arg3, const jboolean& arg4, const jboolean& arg5, const jboolean& arg6) {
                
       const auto methodID = methodID_drawMap();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID__drawMap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderMap", "method_17566", "drawMap", "m_280090_"), "(Lfhz;Leqr;Leqt;IIF)V");
    }

    static void _drawMap(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jint& arg3, const jint& arg4, const jfloat& arg5) {
                
       const auto methodID = methodID__drawMap();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_CARTOGRAPHYTABLESCREEN_HPP