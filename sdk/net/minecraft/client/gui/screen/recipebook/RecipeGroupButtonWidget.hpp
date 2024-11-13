// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_RECIPEBOOK_RECIPEGROUPBUTTONWIDGET_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_RECIPEBOOK_RECIPEGROUPBUTTONWIDGET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.recipebook.RecipeGroupButtonWidget
 * Remapped: fsc
 */
namespace RecipeGroupButtonWidget {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fsc", "net/minecraft/client/gui/screens/recipebook/RecipeBookTabButton", "net/minecraft/class_512", "net/minecraft/client/gui/screen/recipebook/RecipeGroupButtonWidget", "net/minecraft/src/C_3720_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.screen.recipebook.RecipeGroupButtonWidget#TEXTURES
    [[maybe_unused]] static jobject get_field_TEXTURES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SPRITES", "field_45554", "TEXTURES", "f_290704_"), "Lfjz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.recipebook.RecipeGroupButtonWidget#TEXTURES
    [[maybe_unused]] static void set_field_TEXTURES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SPRITES", "field_45554", "TEXTURES", "f_290704_"), "Lfjz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.recipebook.RecipeGroupButtonWidget#category
    static jobject get_field_category(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "category", "field_3123", "category", "f_100445_"), "Lfgw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.recipebook.RecipeGroupButtonWidget#category
    static void set_field_category(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "category", "field_3123", "category", "f_100445_"), "Lfgw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.recipebook.RecipeGroupButtonWidget#field_32412
    [[maybe_unused]] static jfloat get_field_field_32412() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "ANIMATION_TIME", "field_32412", "field_32412", "f_170055_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.recipebook.RecipeGroupButtonWidget#field_32412
    [[maybe_unused]] static void set_field_field_32412(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "ANIMATION_TIME", "field_32412", "field_32412", "f_170055_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.recipebook.RecipeGroupButtonWidget#bounce
    static jfloat get_field_bounce(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "animationTime", "field_3122", "bounce", "f_100446_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.recipebook.RecipeGroupButtonWidget#bounce
    static void set_field_bounce(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "animationTime", "field_3122", "bounce", "f_100446_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    static jmethodID methodID_checkForNewRecipes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "startAnimation", "method_2622", "checkForNewRecipes", "m_100451_"), "(Lfgo;)V");
    }

    static void checkForNewRecipes(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_checkForNewRecipes();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_renderWidget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "renderWidget", "method_48579", "renderWidget", "m_87963_"), "(Lfhz;IIF)V");
    }

    static void renderWidget(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_renderWidget();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_renderIcons() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderIcon", "method_2621", "renderIcons", "m_280194_"), "(Lfhz;Lglh;)V");
    }

    static void renderIcons(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_renderIcons();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getCategory() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getCategory", "method_2623", "getCategory", "m_100455_"), "()Lfgw;");
    }

    static jobject getCategory(const jobject& obj) {
                
       const auto methodID = methodID_getCategory();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_hasKnownRecipes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateVisibility", "method_2624", "hasKnownRecipes", "m_100449_"), "(Lfga;)Z");
    }

    static jboolean hasKnownRecipes(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_hasKnownRecipes();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_RECIPEBOOK_RECIPEGROUPBUTTONWIDGET_HPP