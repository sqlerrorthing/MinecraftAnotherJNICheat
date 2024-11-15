// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_POPUPSCREEN_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_POPUPSCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.PopupScreen
 * Remapped: fjo
 */
namespace PopupScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fjo", "net/minecraft/client/gui/components/PopupScreen", "net/minecraft/class_8816", "net/minecraft/client/gui/screen/PopupScreen", "net/minecraft/src/C_301873_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.screen.PopupScreen#BACKGROUND_TEXTURE
    [[maybe_unused]] static jobject get_field_BACKGROUND_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BACKGROUND_SPRITE", "field_46554", "BACKGROUND_TEXTURE", "f_302308_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.PopupScreen#BACKGROUND_TEXTURE
    [[maybe_unused]] static void set_field_BACKGROUND_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BACKGROUND_SPRITE", "field_46554", "BACKGROUND_TEXTURE", "f_302308_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.PopupScreen#VERTICAL_SPACING
    [[maybe_unused]] static jint get_field_VERTICAL_SPACING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SPACING", "field_46555", "VERTICAL_SPACING", "f_303098_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.PopupScreen#VERTICAL_SPACING
    [[maybe_unused]] static void set_field_VERTICAL_SPACING(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SPACING", "field_46555", "VERTICAL_SPACING", "f_303098_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.PopupScreen#MARGIN_WIDTH
    [[maybe_unused]] static jint get_field_MARGIN_WIDTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "BG_BORDER_WITH_SPACING", "field_46556", "MARGIN_WIDTH", "f_303750_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.PopupScreen#MARGIN_WIDTH
    [[maybe_unused]] static void set_field_MARGIN_WIDTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "BG_BORDER_WITH_SPACING", "field_46556", "MARGIN_WIDTH", "f_303750_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.PopupScreen#BUTTON_HORIZONTAL_SPACING
    [[maybe_unused]] static jint get_field_BUTTON_HORIZONTAL_SPACING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "BUTTON_SPACING", "field_46557", "BUTTON_HORIZONTAL_SPACING", "f_303197_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.PopupScreen#BUTTON_HORIZONTAL_SPACING
    [[maybe_unused]] static void set_field_BUTTON_HORIZONTAL_SPACING(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "BUTTON_SPACING", "field_46557", "BUTTON_HORIZONTAL_SPACING", "f_303197_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.PopupScreen#IMAGE_WIDTH
    [[maybe_unused]] static jint get_field_IMAGE_WIDTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "IMAGE_SIZE_X", "field_46558", "IMAGE_WIDTH", "f_302379_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.PopupScreen#IMAGE_WIDTH
    [[maybe_unused]] static void set_field_IMAGE_WIDTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "IMAGE_SIZE_X", "field_46558", "IMAGE_WIDTH", "f_302379_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.PopupScreen#IMAGE_HEIGHT
    [[maybe_unused]] static jint get_field_IMAGE_HEIGHT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "IMAGE_SIZE_Y", "field_46559", "IMAGE_HEIGHT", "f_303011_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.PopupScreen#IMAGE_HEIGHT
    [[maybe_unused]] static void set_field_IMAGE_HEIGHT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "IMAGE_SIZE_Y", "field_46559", "IMAGE_HEIGHT", "f_303011_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.PopupScreen#DEFAULT_WIDTH
    [[maybe_unused]] static jint get_field_DEFAULT_WIDTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "POPUP_DEFAULT_WIDTH", "field_46560", "DEFAULT_WIDTH", "f_302717_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.PopupScreen#DEFAULT_WIDTH
    [[maybe_unused]] static void set_field_DEFAULT_WIDTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("v", "POPUP_DEFAULT_WIDTH", "field_46560", "DEFAULT_WIDTH", "f_302717_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.PopupScreen#backgroundScreen
    static jobject get_field_backgroundScreen(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("w", "backgroundScreen", "field_46561", "backgroundScreen", "f_302750_"), "Lfod;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.PopupScreen#backgroundScreen
    static void set_field_backgroundScreen(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("w", "backgroundScreen", "field_46561", "backgroundScreen", "f_302750_"), "Lfod;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.PopupScreen#image
    static jobject get_field_image(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("x", "image", "field_46562", "image", "f_303685_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.PopupScreen#image
    static void set_field_image(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("x", "image", "field_46562", "image", "f_303685_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.PopupScreen#message
    static jobject get_field_message(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("y", "message", "field_46563", "message", "f_302929_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.PopupScreen#message
    static void set_field_message(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("y", "message", "field_46563", "message", "f_302929_"), "Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.PopupScreen#buttons
    static jobject get_field_buttons(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("z", "buttons", "field_46564", "buttons", "f_303229_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.PopupScreen#buttons
    static void set_field_buttons(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("z", "buttons", "field_46564", "buttons", "f_303229_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.PopupScreen#onClosed
    static jobject get_field_onClosed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("A", "onClose", "field_46565", "onClosed", "f_302877_"), "Ljava/lang/Runnable;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.PopupScreen#onClosed
    static void set_field_onClosed(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("A", "onClose", "field_46565", "onClosed", "f_302877_"), "Ljava/lang/Runnable;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.PopupScreen#innerWidth
    static jint get_field_innerWidth(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("B", "contentWidth", "field_46566", "innerWidth", "f_303828_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.PopupScreen#innerWidth
    static void set_field_innerWidth(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("B", "contentWidth", "field_46566", "innerWidth", "f_303828_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.PopupScreen#layout
    static jobject get_field_layout(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("C", "layout", "field_46567", "layout", "f_303064_"), "Lfmd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.PopupScreen#layout
    static void set_field_layout(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("C", "layout", "field_46567", "layout", "f_303064_"), "Lfmd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_onDisplayed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aL_", "added", "method_49589", "onDisplayed", "m_274333_"), "()V");
    }

    static void onDisplayed(const jobject& obj) {
                
       const auto methodID = methodID_onDisplayed();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_init() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aT_", "init", "method_25426", "init", "m_7856_"), "()V");
    }

    static void init(const jobject& obj) {
                
       const auto methodID = methodID_init();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_createButtonLayout() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "buildButtonRow", "method_54124", "createButtonLayout", "m_306027_"), "()Lfmd;");
    }

    static jobject createButtonLayout(const jobject& obj) {
                
       const auto methodID = methodID_createButtonLayout();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_initTabNavigation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "repositionElements", "method_48640", "initTabNavigation", "m_267719_"), "()V");
    }

    static void initTabNavigation(const jobject& obj) {
                
       const auto methodID = methodID_initTabNavigation();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_renderBackground() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "renderBackground", "method_25420", "renderBackground", "m_280273_"), "(Lfhz;IIF)V");
    }

    static void renderBackground(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_renderBackground();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getNarratedTitle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getNarrationMessage", "method_25435", "getNarratedTitle", "m_142562_"), "()Lwz;");
    }

    static jobject getNarratedTitle(const jobject& obj) {
                
       const auto methodID = methodID_getNarratedTitle();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "onClose", "method_25419", "close", "m_7379_"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_POPUPSCREEN_HPP