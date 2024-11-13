// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_HUD_SPECTATORHUD_HPP
#define NET_MINECRAFT_CLIENT_GUI_HUD_SPECTATORHUD_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.hud.SpectatorHud
 * Remapped: fkl
 */
namespace SpectatorHud {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fkl", "net/minecraft/client/gui/components/spectator/SpectatorGui", "net/minecraft/class_365", "net/minecraft/client/gui/hud/SpectatorHud", "net/minecraft/src/C_3496_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.hud.SpectatorHud#HOTBAR_TEXTURE
    [[maybe_unused]] static jobject get_field_HOTBAR_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "HOTBAR_SPRITE", "field_45392", "HOTBAR_TEXTURE", "f_291130_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.SpectatorHud#HOTBAR_TEXTURE
    [[maybe_unused]] static void set_field_HOTBAR_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "HOTBAR_SPRITE", "field_45392", "HOTBAR_TEXTURE", "f_291130_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.hud.SpectatorHud#HOTBAR_SELECTION_TEXTURE
    [[maybe_unused]] static jobject get_field_HOTBAR_SELECTION_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "HOTBAR_SELECTION_SPRITE", "field_45393", "HOTBAR_SELECTION_TEXTURE", "f_290404_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.SpectatorHud#HOTBAR_SELECTION_TEXTURE
    [[maybe_unused]] static void set_field_HOTBAR_SELECTION_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "HOTBAR_SELECTION_SPRITE", "field_45393", "HOTBAR_SELECTION_TEXTURE", "f_290404_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.hud.SpectatorHud#FADE_OUT_DELAY
    [[maybe_unused]] static jlong get_field_FADE_OUT_DELAY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "FADE_OUT_DELAY", "field_32215", "FADE_OUT_DELAY", "f_169074_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticLongField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.SpectatorHud#FADE_OUT_DELAY
    [[maybe_unused]] static void set_field_FADE_OUT_DELAY(const jlong &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "FADE_OUT_DELAY", "field_32215", "FADE_OUT_DELAY", "f_169074_"), "J");
        return MinecraftSDK::env->SetStaticLongField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.hud.SpectatorHud#FADE_OUT_DURATION
    [[maybe_unused]] static jlong get_field_FADE_OUT_DURATION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "FADE_OUT_TIME", "field_32216", "FADE_OUT_DURATION", "f_169075_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticLongField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.SpectatorHud#FADE_OUT_DURATION
    [[maybe_unused]] static void set_field_FADE_OUT_DURATION(const jlong &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "FADE_OUT_TIME", "field_32216", "FADE_OUT_DURATION", "f_169075_"), "J");
        return MinecraftSDK::env->SetStaticLongField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.hud.SpectatorHud#client
    static jobject get_field_client(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "minecraft", "field_2201", "client", "f_94762_"), "Lfgo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.SpectatorHud#client
    static void set_field_client(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "minecraft", "field_2201", "client", "f_94762_"), "Lfgo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.hud.SpectatorHud#lastInteractionTime
    static jlong get_field_lastInteractionTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "lastSelectionTime", "field_2198", "lastInteractionTime", "f_94763_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.SpectatorHud#lastInteractionTime
    static void set_field_lastInteractionTime(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "lastSelectionTime", "field_2198", "lastInteractionTime", "f_94763_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.hud.SpectatorHud#spectatorMenu
    static jobject get_field_spectatorMenu(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "menu", "field_2200", "spectatorMenu", "f_94764_"), "Lftr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.SpectatorHud#spectatorMenu
    static void set_field_spectatorMenu(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "menu", "field_2200", "spectatorMenu", "f_94764_"), "Lftr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_selectSlot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onHotbarSelected", "method_1977", "selectSlot", "m_94771_"), "(I)V");
    }

    static void selectSlot(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_selectSlot();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getSpectatorMenuHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getHotbarAlpha", "method_1981", "getSpectatorMenuHeight", "m_94794_"), "()F");
    }

    static jfloat getSpectatorMenuHeight(const jobject& obj) {
                
       const auto methodID = methodID_getSpectatorMenuHeight();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_renderSpectatorMenu() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderHotbar", "method_1978", "renderSpectatorMenu", "m_280623_"), "(Lfhz;)V");
    }

    static void renderSpectatorMenu(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_renderSpectatorMenu();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__renderSpectatorMenu() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderPage", "method_1975", "renderSpectatorMenu", "m_280016_"), "(Lfhz;FIILftv;)V");
    }

    static void _renderSpectatorMenu(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jint& arg2, const jint& arg3, const jobject& arg4) {
                
       const auto methodID = methodID__renderSpectatorMenu();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_renderSpectatorCommand() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderSlot", "method_1982", "renderSpectatorCommand", "m_280643_"), "(Lfhz;IIFFLftt;)V");
    }

    static void renderSpectatorCommand(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3, const jfloat& arg4, const jobject& arg5) {
                
       const auto methodID = methodID_renderSpectatorCommand();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "renderTooltip", "method_1979", "render", "m_280365_"), "(Lfhz;)V");
    }

    static void render(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onSpectatorMenuClosed", "method_2782", "close", "m_7613_"), "(Lftr;)V");
    }

    static void close(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isOpen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isMenuActive", "method_1980", "isOpen", "m_94768_"), "()Z");
    }

    static jboolean isOpen(const jobject& obj) {
                
       const auto methodID = methodID_isOpen();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_cycleSlot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "onMouseScrolled", "method_1976", "cycleSlot", "m_205380_"), "(I)V");
    }

    static void cycleSlot(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_cycleSlot();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_useSelectedCommand() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "onMouseMiddleClick", "method_1983", "useSelectedCommand", "m_94793_"), "()V");
    }

    static void useSelectedCommand(const jobject& obj) {
                
       const auto methodID = methodID_useSelectedCommand();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_HUD_SPECTATORHUD_HPP