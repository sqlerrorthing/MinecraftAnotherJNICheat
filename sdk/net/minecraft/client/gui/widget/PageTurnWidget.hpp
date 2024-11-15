// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_WIDGET_PAGETURNWIDGET_HPP
#define NET_MINECRAFT_CLIENT_GUI_WIDGET_PAGETURNWIDGET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.widget.PageTurnWidget
 * Remapped: fqb
 */
namespace PageTurnWidget {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fqb", "net/minecraft/client/gui/screens/inventory/PageButton", "net/minecraft/class_474", "net/minecraft/client/gui/widget/PageTurnWidget", "net/minecraft/src/C_3676_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.widget.PageTurnWidget#PAGE_FORWARD_HIGHLIGHTED_TEXTURE
    [[maybe_unused]] static jobject get_field_PAGE_FORWARD_HIGHLIGHTED_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "PAGE_FORWARD_HIGHLIGHTED_SPRITE", "field_45493", "PAGE_FORWARD_HIGHLIGHTED_TEXTURE", "f_290915_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.PageTurnWidget#PAGE_FORWARD_HIGHLIGHTED_TEXTURE
    [[maybe_unused]] static void set_field_PAGE_FORWARD_HIGHLIGHTED_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "PAGE_FORWARD_HIGHLIGHTED_SPRITE", "field_45493", "PAGE_FORWARD_HIGHLIGHTED_TEXTURE", "f_290915_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.widget.PageTurnWidget#PAGE_FORWARD_TEXTURE
    [[maybe_unused]] static jobject get_field_PAGE_FORWARD_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PAGE_FORWARD_SPRITE", "field_45494", "PAGE_FORWARD_TEXTURE", "f_291073_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.PageTurnWidget#PAGE_FORWARD_TEXTURE
    [[maybe_unused]] static void set_field_PAGE_FORWARD_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PAGE_FORWARD_SPRITE", "field_45494", "PAGE_FORWARD_TEXTURE", "f_291073_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.widget.PageTurnWidget#PAGE_BACKWARD_HIGHLIGHTED_TEXTURE
    [[maybe_unused]] static jobject get_field_PAGE_BACKWARD_HIGHLIGHTED_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PAGE_BACKWARD_HIGHLIGHTED_SPRITE", "field_45495", "PAGE_BACKWARD_HIGHLIGHTED_TEXTURE", "f_291337_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.PageTurnWidget#PAGE_BACKWARD_HIGHLIGHTED_TEXTURE
    [[maybe_unused]] static void set_field_PAGE_BACKWARD_HIGHLIGHTED_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PAGE_BACKWARD_HIGHLIGHTED_SPRITE", "field_45495", "PAGE_BACKWARD_HIGHLIGHTED_TEXTURE", "f_291337_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.widget.PageTurnWidget#PAGE_BACKWARD_TEXTURE
    [[maybe_unused]] static jobject get_field_PAGE_BACKWARD_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "PAGE_BACKWARD_SPRITE", "field_45496", "PAGE_BACKWARD_TEXTURE", "f_290908_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.PageTurnWidget#PAGE_BACKWARD_TEXTURE
    [[maybe_unused]] static void set_field_PAGE_BACKWARD_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "PAGE_BACKWARD_SPRITE", "field_45496", "PAGE_BACKWARD_TEXTURE", "f_290908_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.widget.PageTurnWidget#isNextPageButton
    static jboolean get_field_isNextPageButton(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "isForward", "field_2851", "isNextPageButton", "f_99222_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.PageTurnWidget#isNextPageButton
    static void set_field_isNextPageButton(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "isForward", "field_2851", "isNextPageButton", "f_99222_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.widget.PageTurnWidget#playPageTurnSound
    static jboolean get_field_playPageTurnSound(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("v", "playTurnSound", "field_18977", "playPageTurnSound", "f_99223_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.PageTurnWidget#playPageTurnSound
    static void set_field_playPageTurnSound(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("v", "playTurnSound", "field_18977", "playPageTurnSound", "f_99223_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_renderWidget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "renderWidget", "method_48579", "renderWidget", "m_87963_"), "(Lfhz;IIF)V");
    }

    static void renderWidget(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_renderWidget();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_playDownSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "playDownSound", "method_25354", "playDownSound", "m_7435_"), "(Lgvf;)V");
    }

    static void playDownSound(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_playDownSound();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_WIDGET_PAGETURNWIDGET_HPP