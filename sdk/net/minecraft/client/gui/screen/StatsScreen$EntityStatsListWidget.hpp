// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_STATSSCREEN$ENTITYSTATSLISTWIDGET_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_STATSSCREEN$ENTITYSTATSLISTWIDGET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.StatsScreen$EntityStatsListWidget
 * Remapped: foh$c
 */
namespace StatsScreen$EntityStatsListWidget {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("foh$c", "net/minecraft/client/gui/screens/achievement/StatsScreen$MobsStatisticsList", "net/minecraft/class_447$class_4202", "net/minecraft/client/gui/screen/StatsScreen$EntityStatsListWidget", "net/minecraft/src/C_3594_$C_3601_"));
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

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_STATSSCREEN$ENTITYSTATSLISTWIDGET_HPP