// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_PACK_EXPERIMENTALWARNINGSCREEN$DETAILSSCREEN$PACKLISTWIDGET_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_PACK_EXPERIMENTALWARNINGSCREEN$DETAILSSCREEN$PACKLISTWIDGET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.pack.ExperimentalWarningScreen$DetailsScreen$PackListWidget
 * Remapped: ftb$a$a
 */
namespace ExperimentalWarningScreen$DetailsScreen$PackListWidget {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ftb$a$a", "net/minecraft/client/gui/screens/worldselection/ConfirmExperimentalFeaturesScreen$DetailsScreen$PackList", "net/minecraft/class_7745$class_7746$class_7747", "net/minecraft/client/gui/screen/pack/ExperimentalWarningScreen$DetailsScreen$PackListWidget", "net/minecraft/src/C_243632_$C_243598_$C_243569_"));
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

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_PACK_EXPERIMENTALWARNINGSCREEN$DETAILSSCREEN$PACKLISTWIDGET_HPP