// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_GENERIC3X3CONTAINERSCREEN_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_GENERIC3X3CONTAINERSCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.ingame.Generic3x3ContainerScreen
 * Remapped: fpk
 */
namespace Generic3x3ContainerScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fpk", "net/minecraft/client/gui/screens/inventory/DispenserScreen", "net/minecraft/class_480", "net/minecraft/client/gui/screen/ingame/Generic3x3ContainerScreen", "net/minecraft/src/C_3656_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.screen.ingame.Generic3x3ContainerScreen#TEXTURE
    [[maybe_unused]] static jobject get_field_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("E", "CONTAINER_LOCATION", "field_2885", "TEXTURE", "f_98682_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.Generic3x3ContainerScreen#TEXTURE
    [[maybe_unused]] static void set_field_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("E", "CONTAINER_LOCATION", "field_2885", "TEXTURE", "f_98682_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
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
    
    static jmethodID methodID_drawBackground() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderBg", "method_2389", "drawBackground", "m_7286_"), "(Lfhz;FII)V");
    }

    static void drawBackground(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jint& arg2, const jint& arg3) {
                
       const auto methodID = methodID_drawBackground();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_GENERIC3X3CONTAINERSCREEN_HPP