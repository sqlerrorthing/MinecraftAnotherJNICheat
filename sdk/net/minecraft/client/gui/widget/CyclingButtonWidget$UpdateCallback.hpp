// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_WIDGET_CYCLINGBUTTONWIDGET$UPDATECALLBACK_HPP
#define NET_MINECRAFT_CLIENT_GUI_WIDGET_CYCLINGBUTTONWIDGET$UPDATECALLBACK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.widget.CyclingButtonWidget$UpdateCallback
 * Remapped: fit$b
 */
namespace CyclingButtonWidget$UpdateCallback {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fit$b", "net/minecraft/client/gui/components/CycleButton$OnValueChange", "net/minecraft/class_5676$class_5678", "net/minecraft/client/gui/widget/CyclingButtonWidget$UpdateCallback", "net/minecraft/src/C_141591_$C_141593_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_onValueChange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("onValueChange", "onValueChange", "onValueChange", "onValueChange", "m_168965_"), "(Lfit;Ljava/lang/Object;)V");
    }

    static void onValueChange(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_onValueChange();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_WIDGET_CYCLINGBUTTONWIDGET$UPDATECALLBACK_HPP