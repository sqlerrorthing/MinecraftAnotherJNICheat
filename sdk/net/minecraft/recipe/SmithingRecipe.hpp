// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RECIPE_SMITHINGRECIPE_HPP
#define NET_MINECRAFT_RECIPE_SMITHINGRECIPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.recipe.SmithingRecipe
 * Remapped: czr
 */
namespace SmithingRecipe {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("czr", "net/minecraft/world/item/crafting/SmithingRecipe", "net/minecraft/class_8059", "net/minecraft/recipe/SmithingRecipe", "net/minecraft/src/C_265807_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getType", "method_17716", "getType", "m_6671_"), "()Lczf;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_fits() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canCraftInDimensions", "method_8113", "fits", "m_8004_"), "(II)Z");
    }

    static jboolean fits(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_fits();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_createIcon() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getToastSymbol", "method_17447", "createIcon", "m_8042_"), "()Lcuq;");
    }

    static jobject createIcon(const jobject& obj) {
                
       const auto methodID = methodID_createIcon();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_testTemplate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isTemplateIngredient", "method_48453", "testTemplate", "m_266166_"), "(Lcuq;)Z");
    }

    static jboolean testTemplate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_testTemplate();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_testBase() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "isBaseIngredient", "method_48454", "testBase", "m_266343_"), "(Lcuq;)Z");
    }

    static jboolean testBase(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_testBase();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_testAddition() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "isAdditionIngredient", "method_30029", "testAddition", "m_266253_"), "(Lcuq;)Z");
    }

    static jboolean testAddition(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_testAddition();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_RECIPE_SMITHINGRECIPE_HPP