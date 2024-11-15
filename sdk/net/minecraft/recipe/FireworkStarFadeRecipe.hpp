// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RECIPE_FIREWORKSTARFADERECIPE_HPP
#define NET_MINECRAFT_RECIPE_FIREWORKSTARFADERECIPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.recipe.FireworkStarFadeRecipe
 * Remapped: cyu
 */
namespace FireworkStarFadeRecipe {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cyu", "net/minecraft/world/item/crafting/FireworkStarFadeRecipe", "net/minecraft/class_1854", "net/minecraft/recipe/FireworkStarFadeRecipe", "net/minecraft/src/C_1460_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.recipe.FireworkStarFadeRecipe#INPUT_STAR
    [[maybe_unused]] static jobject get_field_INPUT_STAR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STAR_INGREDIENT", "field_9015", "INPUT_STAR", "f_43858_"), "Lcyw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.recipe.FireworkStarFadeRecipe#INPUT_STAR
    [[maybe_unused]] static void set_field_INPUT_STAR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STAR_INGREDIENT", "field_9015", "INPUT_STAR", "f_43858_"), "Lcyw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_matches() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "matches", "method_17711", "matches", "m_5818_"), "(Lcyp;Ldcw;)Z");
    }

    static jboolean matches(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_matches();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_craft() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "assemble", "method_17710", "craft", "m_5874_"), "(Lcyp;Ljo$a;)Lcuq;");
    }

    static jobject craft(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_craft();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_fits() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canCraftInDimensions", "method_8113", "fits", "m_8004_"), "(II)Z");
    }

    static jboolean fits(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_fits();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getSerializer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("at_", "getSerializer", "method_8119", "getSerializer", "m_7707_"), "()Lcze;");
    }

    static jobject getSerializer(const jobject& obj) {
                
       const auto methodID = methodID_getSerializer();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_RECIPE_FIREWORKSTARFADERECIPE_HPP