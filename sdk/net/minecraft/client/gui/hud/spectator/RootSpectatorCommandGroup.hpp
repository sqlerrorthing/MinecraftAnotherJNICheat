// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_HUD_SPECTATOR_ROOTSPECTATORCOMMANDGROUP_HPP
#define NET_MINECRAFT_CLIENT_GUI_HUD_SPECTATOR_ROOTSPECTATORCOMMANDGROUP_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.hud.spectator.RootSpectatorCommandGroup
 * Remapped: ftq
 */
namespace RootSpectatorCommandGroup {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ftq", "net/minecraft/client/gui/spectator/RootSpectatorMenuCategory", "net/minecraft/class_534", "net/minecraft/client/gui/hud/spectator/RootSpectatorCommandGroup", "net/minecraft/src/C_3775_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.hud.spectator.RootSpectatorCommandGroup#PROMPT_TEXT
    [[maybe_unused]] static jobject get_field_PROMPT_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "PROMPT_TEXT", "field_26612", "PROMPT_TEXT", "f_101765_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.spectator.RootSpectatorCommandGroup#PROMPT_TEXT
    [[maybe_unused]] static void set_field_PROMPT_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "PROMPT_TEXT", "field_26612", "PROMPT_TEXT", "f_101765_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.hud.spectator.RootSpectatorCommandGroup#elements
    static jobject get_field_elements(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "items", "field_3266", "elements", "f_101766_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.hud.spectator.RootSpectatorCommandGroup#elements
    static void set_field_elements(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "items", "field_3266", "elements", "f_101766_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getCommands() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getItems", "method_2780", "getCommands", "m_5919_"), "()Ljava/util/List;");
    }

    static jobject getCommands(const jobject& obj) {
                
       const auto methodID = methodID_getCommands();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPrompt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getPrompt", "method_2781", "getPrompt", "m_5878_"), "()Lwz;");
    }

    static jobject getPrompt(const jobject& obj) {
                
       const auto methodID = methodID_getPrompt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_HUD_SPECTATOR_ROOTSPECTATORCOMMANDGROUP_HPP