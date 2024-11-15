// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_RECIPEBOOK_BLASTFURNACERECIPEBOOKSCREEN_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_RECIPEBOOK_BLASTFURNACERECIPEBOOKSCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.recipebook.BlastFurnaceRecipeBookScreen
 * Remapped: frx
 */
namespace BlastFurnaceRecipeBookScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("frx", "net/minecraft/client/gui/screens/recipebook/BlastingRecipeBookComponent", "net/minecraft/class_3875", "net/minecraft/client/gui/screen/recipebook/BlastFurnaceRecipeBookScreen", "net/minecraft/src/C_3711_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.screen.recipebook.BlastFurnaceRecipeBookScreen#TOGGLE_BLASTABLE_RECIPES_TEXT
    [[maybe_unused]] static jobject get_field_TOGGLE_BLASTABLE_RECIPES_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "FILTER_NAME", "field_26592", "TOGGLE_BLASTABLE_RECIPES_TEXT", "f_100131_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.recipebook.BlastFurnaceRecipeBookScreen#TOGGLE_BLASTABLE_RECIPES_TEXT
    [[maybe_unused]] static void set_field_TOGGLE_BLASTABLE_RECIPES_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "FILTER_NAME", "field_26592", "TOGGLE_BLASTABLE_RECIPES_TEXT", "f_100131_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getToggleCraftableButtonText() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getRecipeFilterName", "method_17064", "getToggleCraftableButtonText", "m_5815_"), "()Lwz;");
    }

    static jobject getToggleCraftableButtonText(const jobject& obj) {
                
       const auto methodID = methodID_getToggleCraftableButtonText();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getAllowedFuels() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getFuelItems", "method_17065", "getAllowedFuels", "m_7690_"), "()Ljava/util/Set;");
    }

    static jobject getAllowedFuels(const jobject& obj) {
                
       const auto methodID = methodID_getAllowedFuels();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_RECIPEBOOK_BLASTFURNACERECIPEBOOKSCREEN_HPP