// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_OPTION_LANGUAGEOPTIONSSCREEN$LANGUAGESELECTIONLISTWIDGET_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_OPTION_LANGUAGEOPTIONSSCREEN$LANGUAGESELECTIONLISTWIDGET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.option.LanguageOptionsScreen$LanguageSelectionListWidget
 * Remapped: frd$a
 */
namespace LanguageOptionsScreen$LanguageSelectionListWidget {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("frd$a", "net/minecraft/client/gui/screens/options/LanguageSelectScreen$LanguageSelectionList", "net/minecraft/class_426$class_4195", "net/minecraft/client/gui/screen/option/LanguageOptionsScreen$LanguageSelectionListWidget", "net/minecraft/src/C_336602_$C_336476_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getRowWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getRowWidth", "method_25322", "getRowWidth", "m_5759_"), "()I");
    }

    static jint getRowWidth(const jobject& obj) {
                
       const auto methodID = methodID_getRowWidth();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_OPTION_LANGUAGEOPTIONSSCREEN$LANGUAGESELECTIONLISTWIDGET_HPP