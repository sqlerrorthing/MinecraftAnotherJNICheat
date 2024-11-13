// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSLONGRUNNINGTICKABLETASKSCREEN_HPP
#define NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSLONGRUNNINGTICKABLETASKSCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.gui.screen.RealmsLongRunningTickableTaskScreen
 * Remapped: fee
 */
namespace RealmsLongRunningTickableTaskScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fee", "com/mojang/realmsclient/gui/screens/RealmsLongRunningMcoTickTaskScreen", "net/minecraft/class_8789", "net/minecraft/client/realms/gui/screen/RealmsLongRunningTickableTaskScreen", "net/minecraft/src/C_290261_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsLongRunningTickableTaskScreen#tickableTask
    static jobject get_field_tickableTask(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "task", "field_46113", "tickableTask", "f_291633_"), "Lffn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsLongRunningTickableTaskScreen#tickableTask
    static void set_field_tickableTask(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "task", "field_46113", "tickableTask", "f_291633_"), "Lffn;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "tick", "method_25393", "tick", "m_86600_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_onCancel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "cancel", "method_53798", "onCancel", "m_293809_"), "()V");
    }

    static void onCancel(const jobject& obj) {
                
       const auto methodID = methodID_onCancel();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSLONGRUNNINGTICKABLETASKSCREEN_HPP