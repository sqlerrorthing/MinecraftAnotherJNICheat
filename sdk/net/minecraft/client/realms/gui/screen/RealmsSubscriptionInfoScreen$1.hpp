// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSSUBSCRIPTIONINFOSCREEN$1_HPP
#define NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSSUBSCRIPTIONINFOSCREEN$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.gui.screen.RealmsSubscriptionInfoScreen$1
 * Remapped: feq$1
 */
namespace RealmsSubscriptionInfoScreen$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("feq$1", "com/mojang/realmsclient/gui/screens/RealmsSubscriptionInfoScreen$1", "net/minecraft/class_4425$1", "net/minecraft/client/realms/gui/screen/RealmsSubscriptionInfoScreen$1", "net/minecraft/src/C_3337_$C_3338_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_run() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("run", "run", "", "", "run"), "()V");
    }

    static void run(const jobject& obj) {
                
       const auto methodID = methodID_run();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSSUBSCRIPTIONINFOSCREEN$1_HPP