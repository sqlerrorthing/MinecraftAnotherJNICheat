// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_RECIPEBOOK_RECIPEBOOKGHOSTSLOTS$GHOSTINPUTSLOT_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_RECIPEBOOK_RECIPEBOOKGHOSTSLOTS$GHOSTINPUTSLOT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.recipebook.RecipeBookGhostSlots$GhostInputSlot
 * Remapped: fry$a
 */
namespace RecipeBookGhostSlots$GhostInputSlot {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fry$a", "net/minecraft/client/gui/screens/recipebook/GhostRecipe$GhostIngredient", "net/minecraft/class_505$class_506", "net/minecraft/client/gui/screen/recipebook/RecipeBookGhostSlots$GhostInputSlot", "net/minecraft/src/C_3712_$C_3713_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.gui.screen.recipebook.RecipeBookGhostSlots$GhostInputSlot#ingredient
    static jobject get_field_ingredient(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "ingredient", "field_3082", "ingredient", "f_100161_"), "Lcyw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.recipebook.RecipeBookGhostSlots$GhostInputSlot#ingredient
    static void set_field_ingredient(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "ingredient", "field_3082", "ingredient", "f_100161_"), "Lcyw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.recipebook.RecipeBookGhostSlots$GhostInputSlot#x
    static jint get_field_x(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "x", "field_3084", "x", "f_100162_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.recipebook.RecipeBookGhostSlots$GhostInputSlot#x
    static void set_field_x(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "x", "field_3084", "x", "f_100162_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.recipebook.RecipeBookGhostSlots$GhostInputSlot#y
    static jint get_field_y(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "y", "field_3083", "y", "f_100163_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.recipebook.RecipeBookGhostSlots$GhostInputSlot#y
    static void set_field_y(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "y", "field_3083", "y", "f_100163_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_getX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getX", "method_2574", "getX", "m_100169_"), "()I");
    }

    static jint getX(const jobject& obj) {
                
       const auto methodID = methodID_getX();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getY", "method_2575", "getY", "m_100170_"), "()I");
    }

    static jint getY(const jobject& obj) {
                
       const auto methodID = methodID_getY();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCurrentItemStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getItem", "method_2573", "getCurrentItemStack", "m_100171_"), "()Lcuq;");
    }

    static jobject getCurrentItemStack(const jobject& obj) {
                
       const auto methodID = methodID_getCurrentItemStack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_RECIPEBOOK_RECIPEBOOKGHOSTSLOTS$GHOSTINPUTSLOT_HPP