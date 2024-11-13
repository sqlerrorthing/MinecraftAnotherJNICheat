// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSSLOTOPTIONSSCREEN$SETTINGSSLIDER_HPP
#define NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSSLOTOPTIONSSCREEN$SETTINGSSLIDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.gui.screen.RealmsSlotOptionsScreen$SettingsSlider
 * Remapped: fep$a
 */
namespace RealmsSlotOptionsScreen$SettingsSlider {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fep$a", "com/mojang/realmsclient/gui/screens/RealmsSlotOptionsScreen$SettingsSlider", "net/minecraft/class_4423$class_4424", "net/minecraft/client/realms/gui/screen/RealmsSlotOptionsScreen$SettingsSlider", "net/minecraft/src/C_3335_$C_3336_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsSlotOptionsScreen$SettingsSlider#min
    static jdouble get_field_min(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "minValue", "field_22725", "min", "f_89942_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsSlotOptionsScreen$SettingsSlider#min
    static void set_field_min(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "minValue", "field_22725", "min", "f_89942_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsSlotOptionsScreen$SettingsSlider#max
    static jdouble get_field_max(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "maxValue", "field_22726", "max", "f_89943_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsSlotOptionsScreen$SettingsSlider#max
    static void set_field_max(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "maxValue", "field_22726", "max", "f_89943_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    static jmethodID methodID_applyValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "applyValue", "method_25344", "applyValue", "m_5697_"), "()V");
    }

    static void applyValue(const jobject& obj) {
                
       const auto methodID = methodID_applyValue();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_updateMessage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "updateMessage", "method_25346", "updateMessage", "m_5695_"), "()V");
    }

    static void updateMessage(const jobject& obj) {
                
       const auto methodID = methodID_updateMessage();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSSLOTOPTIONSSCREEN$SETTINGSSLIDER_HPP