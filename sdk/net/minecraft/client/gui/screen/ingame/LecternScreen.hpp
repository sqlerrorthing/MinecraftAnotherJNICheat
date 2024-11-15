// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_LECTERNSCREEN_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_LECTERNSCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.ingame.LecternScreen
 * Remapped: fpw
 */
namespace LecternScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fpw", "net/minecraft/client/gui/screens/inventory/LecternScreen", "net/minecraft/class_3935", "net/minecraft/client/gui/screen/ingame/LecternScreen", "net/minecraft/src/C_3669_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.LecternScreen#handler
    static jobject get_field_handler(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("y", "menu", "field_17422", "handler", "f_99017_"), "Lcqz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.LecternScreen#handler
    static void set_field_handler(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("y", "menu", "field_17422", "handler", "f_99017_"), "Lcqz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.LecternScreen#listener
    static jobject get_field_listener(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("z", "listener", "field_17423", "listener", "f_99018_"), "Lcqh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.LecternScreen#listener
    static void set_field_listener(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("z", "listener", "field_17423", "listener", "f_99018_"), "Lcqh;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getScreenHandler() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("J", "getMenu", "method_17573", "getScreenHandler", "m_6262_"), "()Lcqz;");
    }

    static jobject getScreenHandler(const jobject& obj) {
                
       const auto methodID = methodID_getScreenHandler();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_init() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aT_", "init", "method_25426", "init", "m_7856_"), "()V");
    }

    static void init(const jobject& obj) {
                
       const auto methodID = methodID_init();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "onClose", "method_25419", "close", "m_7379_"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_removed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "removed", "method_25432", "removed", "m_7861_"), "()V");
    }

    static void removed(const jobject& obj) {
                
       const auto methodID = methodID_removed();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_addCloseButton() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "createMenuControls", "method_17557", "addCloseButton", "m_7829_"), "()V");
    }

    static void addCloseButton(const jobject& obj) {
                
       const auto methodID = methodID_addCloseButton();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_goToPreviousPage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("E", "pageBack", "method_17057", "goToPreviousPage", "m_7811_"), "()V");
    }

    static void goToPreviousPage(const jobject& obj) {
                
       const auto methodID = methodID_goToPreviousPage();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_goToNextPage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("F", "pageForward", "method_17058", "goToNextPage", "m_7815_"), "()V");
    }

    static void goToNextPage(const jobject& obj) {
                
       const auto methodID = methodID_goToNextPage();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_jumpToPage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "forcePage", "method_17789", "jumpToPage", "m_7735_"), "(I)Z");
    }

    static jboolean jumpToPage(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_jumpToPage();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_sendButtonPressPacket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "sendButtonClick", "method_17572", "sendButtonPressPacket", "m_99036_"), "(I)V");
    }

    static void sendButtonPressPacket(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_sendButtonPressPacket();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_shouldPause() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "isPauseScreen", "method_25421", "shouldPause", "m_7043_"), "()Z");
    }

    static jboolean shouldPause(const jobject& obj) {
                
       const auto methodID = methodID_shouldPause();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_updatePageProvider() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("K", "bookChanged", "method_17574", "updatePageProvider", "m_99044_"), "()V");
    }

    static void updatePageProvider(const jobject& obj) {
                
       const auto methodID = methodID_updatePageProvider();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_updatePage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("L", "pageChanged", "method_17575", "updatePage", "m_99045_"), "()V");
    }

    static void updatePage(const jobject& obj) {
                
       const auto methodID = methodID_updatePage();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_closeScreen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("G", "closeScreen", "method_34494", "closeScreen", "m_141919_"), "()V");
    }

    static void closeScreen(const jobject& obj) {
                
       const auto methodID = methodID_closeScreen();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_LECTERNSCREEN_HPP