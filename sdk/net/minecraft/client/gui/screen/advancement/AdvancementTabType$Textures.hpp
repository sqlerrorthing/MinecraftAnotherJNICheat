// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_ADVANCEMENT_ADVANCEMENTTABTYPE$TEXTURES_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_ADVANCEMENT_ADVANCEMENTTABTYPE$TEXTURES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.advancement.AdvancementTabType$Textures
 * Remapped: fok$a
 */
namespace AdvancementTabType$Textures {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fok$a", "net/minecraft/client/gui/screens/advancements/AdvancementTabType$Sprites", "net/minecraft/class_453$class_8670", "net/minecraft/client/gui/screen/advancement/AdvancementTabType$Textures", "net/minecraft/src/C_3605_$C_290262_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.gui.screen.advancement.AdvancementTabType$Textures#first
    static jobject get_field_first(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "first", "comp_1608", "first", "f_291212_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.advancement.AdvancementTabType$Textures#first
    static void set_field_first(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "first", "comp_1608", "first", "f_291212_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.advancement.AdvancementTabType$Textures#middle
    static jobject get_field_middle(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "middle", "comp_1609", "middle", "f_291410_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.advancement.AdvancementTabType$Textures#middle
    static void set_field_middle(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "middle", "comp_1609", "middle", "f_291410_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.advancement.AdvancementTabType$Textures#last
    static jobject get_field_last(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "last", "comp_1610", "last", "f_291802_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.advancement.AdvancementTabType$Textures#last
    static void set_field_last(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "last", "comp_1610", "last", "f_291802_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__first() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "first", "comp_1608", "first", "f_291212_"), "()Lakr;");
    }

    static jobject _first(const jobject& obj) {
                
       const auto methodID = methodID__first();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__middle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "middle", "comp_1609", "middle", "f_291410_"), "()Lakr;");
    }

    static jobject _middle(const jobject& obj) {
                
       const auto methodID = methodID__middle();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__last() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "last", "comp_1610", "last", "f_291802_"), "()Lakr;");
    }

    static jobject _last(const jobject& obj) {
                
       const auto methodID = methodID__last();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_ADVANCEMENT_ADVANCEMENTTABTYPE$TEXTURES_HPP