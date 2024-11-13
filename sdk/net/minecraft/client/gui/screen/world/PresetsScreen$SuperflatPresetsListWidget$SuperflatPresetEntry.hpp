// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_PRESETSSCREEN$SUPERFLATPRESETSLISTWIDGET$SUPERFLATPRESETENTRY_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_PRESETSSCREEN$SUPERFLATPRESETSLISTWIDGET$SUPERFLATPRESETENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.world.PresetsScreen$SuperflatPresetsListWidget$SuperflatPresetEntry
 * Remapped: fnz$a$a
 */
namespace PresetsScreen$SuperflatPresetsListWidget$SuperflatPresetEntry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fnz$a$a", "net/minecraft/client/gui/screens/PresetFlatWorldScreen$PresetsList$Entry", "net/minecraft/class_430$class_4196$class_432", "net/minecraft/client/gui/screen/world/PresetsScreen$SuperflatPresetsListWidget$SuperflatPresetEntry", "net/minecraft/src/C_3577_$C_3579_$C_3580_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.screen.world.PresetsScreen$SuperflatPresetsListWidget$SuperflatPresetEntry#STATS_ICONS_TEXTURE
    [[maybe_unused]] static jobject get_field_STATS_ICONS_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STATS_ICON_LOCATION", "field_44668", "STATS_ICONS_TEXTURE", "f_279577_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.PresetsScreen$SuperflatPresetsListWidget$SuperflatPresetEntry#STATS_ICONS_TEXTURE
    [[maybe_unused]] static void set_field_STATS_ICONS_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STATS_ICON_LOCATION", "field_44668", "STATS_ICONS_TEXTURE", "f_279577_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.world.PresetsScreen$SuperflatPresetsListWidget$SuperflatPresetEntry#preset
    static jobject get_field_preset(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "preset", "field_33812", "preset", "f_169357_"), "Lehr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.PresetsScreen$SuperflatPresetsListWidget$SuperflatPresetEntry#preset
    static void set_field_preset(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "preset", "field_33812", "preset", "f_169357_"), "Lehr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.world.PresetsScreen$SuperflatPresetsListWidget$SuperflatPresetEntry#text
    static jobject get_field_text(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "name", "field_37909", "text", "f_232755_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.PresetsScreen$SuperflatPresetsListWidget$SuperflatPresetEntry#text
    static void set_field_text(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "name", "field_37909", "text", "f_232755_"), "Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_25343", "render", "m_6311_"), "(Lfhz;IIIIIIIZF)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jint& arg5, const jint& arg6, const jint& arg7, const jboolean& arg8, const jfloat& arg9) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    };
    
    static jmethodID methodID_mouseClicked() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mouseClicked", "method_25402", "mouseClicked", "m_6375_"), "(DDI)Z");
    }

    static jboolean mouseClicked(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jint& arg2) {
                
       const auto methodID = methodID_mouseClicked();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_setPreset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "select", "method_19389", "setPreset", "m_96479_"), "()V");
    }

    static void setPreset(const jobject& obj) {
                
       const auto methodID = methodID_setPreset();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_renderIcon() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "blitSlot", "method_2200", "renderIcon", "m_280449_"), "(Lfhz;IILcul;)V");
    }

    static void renderIcon(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_renderIcon();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_drawIconBackground() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "blitSlotBg", "method_2198", "drawIconBackground", "m_280169_"), "(Lfhz;II)V");
    }

    static void drawIconBackground(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_drawIconBackground();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getNarration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getNarration", "method_37006", "getNarration", "m_142172_"), "()Lwz;");
    }

    static jobject getNarration(const jobject& obj) {
                
       const auto methodID = methodID_getNarration();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_PRESETSSCREEN$SUPERFLATPRESETSLISTWIDGET$SUPERFLATPRESETENTRY_HPP