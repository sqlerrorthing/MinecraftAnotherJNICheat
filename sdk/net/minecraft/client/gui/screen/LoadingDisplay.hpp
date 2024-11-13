// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_LOADINGDISPLAY_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_LOADINGDISPLAY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.LoadingDisplay
 * Remapped: fns
 */
namespace LoadingDisplay {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fns", "net/minecraft/client/gui/screens/LoadingDotsText", "net/minecraft/class_7413", "net/minecraft/client/gui/screen/LoadingDisplay", "net/minecraft/src/C_213381_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.screen.LoadingDisplay#TEXTS
    [[maybe_unused]] static jobject get_field_TEXTS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "FRAMES", "field_38992", "TEXTS", "f_232740_"), "[Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.LoadingDisplay#TEXTS
    [[maybe_unused]] static void set_field_TEXTS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "FRAMES", "field_38992", "TEXTS", "f_232740_"), "[Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.LoadingDisplay#INTERVAL
    [[maybe_unused]] static jlong get_field_INTERVAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "INTERVAL_MS", "field_38993", "INTERVAL", "f_232741_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticLongField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.LoadingDisplay#INTERVAL
    [[maybe_unused]] static void set_field_INTERVAL(const jlong &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "INTERVAL_MS", "field_38993", "INTERVAL", "f_232741_"), "J");
        return MinecraftSDK::env->SetStaticLongField(clazz, fieldID, value);
    };

    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_43449", "get", "m_232744_"), "(J)Ljava/lang/String;");
    }

    static jobject get(const jlong& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_LOADINGDISPLAY_HPP