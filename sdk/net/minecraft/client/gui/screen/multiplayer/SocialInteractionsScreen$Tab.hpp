// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_MULTIPLAYER_SOCIALINTERACTIONSSCREEN$TAB_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_MULTIPLAYER_SOCIALINTERACTIONSSCREEN$TAB_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.multiplayer.SocialInteractionsScreen$Tab
 * Remapped: fsw$a
 */
namespace SocialInteractionsScreen$Tab {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fsw$a", "net/minecraft/client/gui/screens/social/SocialInteractionsScreen$Page", "net/minecraft/class_5522$class_5523", "net/minecraft/client/gui/screen/multiplayer/SocialInteractionsScreen$Tab", "net/minecraft/src/C_3733_$C_3736_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.gui.screen.multiplayer.SocialInteractionsScreen$Tab#ALL
    [[maybe_unused]] static jobject get_field_ALL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ALL", "field_26890", "ALL", "ALL"), "Lfsw$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.screen.multiplayer.SocialInteractionsScreen$Tab#ALL
    [[maybe_unused]] static void set_field_ALL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ALL", "field_26890", "ALL", "ALL"), "Lfsw$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.gui.screen.multiplayer.SocialInteractionsScreen$Tab#HIDDEN
    [[maybe_unused]] static jobject get_field_HIDDEN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "HIDDEN", "field_26891", "HIDDEN", "HIDDEN"), "Lfsw$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.screen.multiplayer.SocialInteractionsScreen$Tab#HIDDEN
    [[maybe_unused]] static void set_field_HIDDEN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "HIDDEN", "field_26891", "HIDDEN", "HIDDEN"), "Lfsw$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.gui.screen.multiplayer.SocialInteractionsScreen$Tab#BLOCKED
    [[maybe_unused]] static jobject get_field_BLOCKED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "BLOCKED", "field_26921", "BLOCKED", "BLOCKED"), "Lfsw$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.gui.screen.multiplayer.SocialInteractionsScreen$Tab#BLOCKED
    [[maybe_unused]] static void set_field_BLOCKED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "BLOCKED", "field_26921", "BLOCKED", "BLOCKED"), "Lfsw$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lfsw$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lfsw$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_MULTIPLAYER_SOCIALINTERACTIONSSCREEN$TAB_HPP