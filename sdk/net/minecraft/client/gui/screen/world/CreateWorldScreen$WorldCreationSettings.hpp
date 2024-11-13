// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_CREATEWORLDSCREEN$WORLDCREATIONSETTINGS_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_CREATEWORLDSCREEN$WORLDCREATIONSETTINGS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.world.CreateWorldScreen$WorldCreationSettings
 * Remapped: ftc$a
 */
namespace CreateWorldScreen$WorldCreationSettings {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ftc$a", "net/minecraft/client/gui/screens/worldselection/CreateWorldScreen$DataPackReloadCookie", "net/minecraft/class_525$class_7749", "net/minecraft/client/gui/screen/world/CreateWorldScreen$WorldCreationSettings", "net/minecraft/src/C_3737_$C_243578_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.gui.screen.world.CreateWorldScreen$WorldCreationSettings#worldGenSettings
    static jobject get_field_worldGenSettings(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "worldGenSettings", "comp_1025", "worldGenSettings", "f_243966_"), "Ldzu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.CreateWorldScreen$WorldCreationSettings#worldGenSettings
    static void set_field_worldGenSettings(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "worldGenSettings", "comp_1025", "worldGenSettings", "f_243966_"), "Ldzu;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.world.CreateWorldScreen$WorldCreationSettings#dataConfiguration
    static jobject get_field_dataConfiguration(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "dataConfiguration", "comp_1026", "dataConfiguration", "f_243979_"), "Lddr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.CreateWorldScreen$WorldCreationSettings#dataConfiguration
    static void set_field_dataConfiguration(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "dataConfiguration", "comp_1026", "dataConfiguration", "f_243979_"), "Lddr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__worldGenSettings() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "worldGenSettings", "comp_1025", "worldGenSettings", "f_243966_"), "()Ldzu;");
    }

    static jobject _worldGenSettings(const jobject& obj) {
                
       const auto methodID = methodID__worldGenSettings();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__dataConfiguration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "dataConfiguration", "comp_1026", "dataConfiguration", "f_243979_"), "()Lddr;");
    }

    static jobject _dataConfiguration(const jobject& obj) {
                
       const auto methodID = methodID__dataConfiguration();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_CREATEWORLDSCREEN$WORLDCREATIONSETTINGS_HPP