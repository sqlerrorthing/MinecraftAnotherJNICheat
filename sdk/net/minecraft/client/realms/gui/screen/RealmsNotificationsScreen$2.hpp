// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSNOTIFICATIONSSCREEN$2_HPP
#define NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSNOTIFICATIONSSCREEN$2_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.gui.screen.RealmsNotificationsScreen$2
 * Remapped: fef$2
 */
namespace RealmsNotificationsScreen$2 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fef$2", "com/mojang/realmsclient/gui/screens/RealmsNotificationsScreen$2", "net/minecraft/class_4399$2", "net/minecraft/client/realms/gui/screen/RealmsNotificationsScreen$2", "net/minecraft/src/C_3304_$C_273793_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_createPeriodicRunnersManager() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "initDataFetcher", "method_49593", "createPeriodicRunnersManager", "m_274316_"), "(Lfdm;)Lfev$c;");
    }

    static jobject createPeriodicRunnersManager(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createPeriodicRunnersManager();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isNews() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "showOldNotifications", "method_49592", "isNews", "m_274362_"), "()Z");
    }

    static jboolean isNews(const jobject& obj) {
                
       const auto methodID = methodID_isNews();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSNOTIFICATIONSSCREEN$2_HPP