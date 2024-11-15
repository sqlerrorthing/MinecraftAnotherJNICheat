// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_WIDGET_TEXTICONBUTTONWIDGET_HPP
#define NET_MINECRAFT_CLIENT_GUI_WIDGET_TEXTICONBUTTONWIDGET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.widget.TextIconButtonWidget
 * Remapped: fjr
 */
namespace TextIconButtonWidget {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fjr", "net/minecraft/client/gui/components/SpriteIconButton", "net/minecraft/class_8662", "net/minecraft/client/gui/widget/TextIconButtonWidget", "net/minecraft/src/C_290288_"));
        }
        return cachedClass;
    };

    // getter for protected field net.minecraft.client.gui.widget.TextIconButtonWidget#texture
    static jobject get_field_texture(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "sprite", "field_45379", "texture", "f_291123_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.client.gui.widget.TextIconButtonWidget#texture
    static void set_field_texture(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "sprite", "field_45379", "texture", "f_291123_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.client.gui.widget.TextIconButtonWidget#textureWidth
    static jint get_field_textureWidth(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "spriteWidth", "field_45380", "textureWidth", "f_290307_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.client.gui.widget.TextIconButtonWidget#textureWidth
    static void set_field_textureWidth(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "spriteWidth", "field_45380", "textureWidth", "f_290307_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.client.gui.widget.TextIconButtonWidget#textureHeight
    static jint get_field_textureHeight(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "spriteHeight", "field_45381", "textureHeight", "f_291465_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.client.gui.widget.TextIconButtonWidget#textureHeight
    static void set_field_textureHeight(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "spriteHeight", "field_45381", "textureHeight", "f_291465_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_builder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "builder", "method_52723", "builder", "m_295007_"), "(Lwz;Lfim$c;Z)Lfjr$a;");
    }

    static jobject builder(const jobject& arg0, const jobject& arg1, const jboolean& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_builder();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_WIDGET_TEXTICONBUTTONWIDGET_HPP