// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_BEACONSCREEN$ICONBUTTONWIDGET_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_BEACONSCREEN$ICONBUTTONWIDGET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.ingame.BeaconScreen$IconButtonWidget
 * Remapped: fox$f
 */
namespace BeaconScreen$IconButtonWidget {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fox$f", "net/minecraft/client/gui/screens/inventory/BeaconScreen$BeaconSpriteScreenButton", "net/minecraft/class_466$class_4072", "net/minecraft/client/gui/screen/ingame/BeaconScreen$IconButtonWidget", "net/minecraft/src/C_3627_$C_3633_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.gui.screen.ingame.BeaconScreen$IconButtonWidget#texture
    static jobject get_field_texture(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "sprite", "field_45445", "texture", "f_291364_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.ingame.BeaconScreen$IconButtonWidget#texture
    static void set_field_texture(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "sprite", "field_45445", "texture", "f_291364_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_renderExtra() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderIcon", "method_18641", "renderExtra", "m_6805_"), "(Lfhz;)V");
    }

    static void renderExtra(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_renderExtra();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_INGAME_BEACONSCREEN$ICONBUTTONWIDGET_HPP