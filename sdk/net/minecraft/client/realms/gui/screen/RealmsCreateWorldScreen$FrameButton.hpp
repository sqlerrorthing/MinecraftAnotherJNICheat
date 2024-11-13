// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSCREATEWORLDSCREEN$FRAMEBUTTON_HPP
#define NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSCREATEWORLDSCREEN$FRAMEBUTTON_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.gui.screen.RealmsCreateWorldScreen$FrameButton
 * Remapped: fel$a
 */
namespace RealmsCreateWorldScreen$FrameButton {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fel$a", "com/mojang/realmsclient/gui/screens/RealmsResetWorldScreen$FrameButton", "net/minecraft/class_4410$class_4411", "net/minecraft/client/realms/gui/screen/RealmsCreateWorldScreen$FrameButton", "net/minecraft/src/C_3320_$C_3323_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsCreateWorldScreen$FrameButton#TEXTURE
    [[maybe_unused]] static jobject get_field_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SLOT_FRAME_SPRITE", "field_48384", "TEXTURE", "f_316773_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsCreateWorldScreen$FrameButton#TEXTURE
    [[maybe_unused]] static void set_field_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SLOT_FRAME_SPRITE", "field_48384", "TEXTURE", "f_316773_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsCreateWorldScreen$FrameButton#SIZE
    [[maybe_unused]] static jint get_field_SIZE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "FRAME_SIZE", "field_48385", "SIZE", "f_316774_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsCreateWorldScreen$FrameButton#SIZE
    [[maybe_unused]] static void set_field_SIZE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "FRAME_SIZE", "field_48385", "SIZE", "f_316774_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsCreateWorldScreen$FrameButton#TEXTURE_MARGIN
    [[maybe_unused]] static jint get_field_TEXTURE_MARGIN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "FRAME_WIDTH", "field_48386", "TEXTURE_MARGIN", "f_315122_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsCreateWorldScreen$FrameButton#TEXTURE_MARGIN
    [[maybe_unused]] static void set_field_TEXTURE_MARGIN(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "FRAME_WIDTH", "field_48386", "TEXTURE_MARGIN", "f_315122_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsCreateWorldScreen$FrameButton#TEXTURE_SIZE
    [[maybe_unused]] static jint get_field_TEXTURE_SIZE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "IMAGE_SIZE", "field_46130", "TEXTURE_SIZE", "f_291559_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsCreateWorldScreen$FrameButton#TEXTURE_SIZE
    [[maybe_unused]] static void set_field_TEXTURE_SIZE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "IMAGE_SIZE", "field_46130", "TEXTURE_SIZE", "f_291559_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsCreateWorldScreen$FrameButton#image
    static jobject get_field_image(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("v", "image", "field_20032", "image", "f_89436_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsCreateWorldScreen$FrameButton#image
    static void set_field_image(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("v", "image", "field_20032", "image", "f_89436_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_renderWidget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "renderWidget", "method_48579", "renderWidget", "m_87963_"), "(Lfhz;IIF)V");
    }

    static void renderWidget(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_renderWidget();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSCREATEWORLDSCREEN$FRAMEBUTTON_HPP