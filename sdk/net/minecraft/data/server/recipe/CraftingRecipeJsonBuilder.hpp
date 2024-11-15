// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATA_SERVER_RECIPE_CRAFTINGRECIPEJSONBUILDER_HPP
#define NET_MINECRAFT_DATA_SERVER_RECIPE_CRAFTINGRECIPEJSONBUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.data.server.recipe.CraftingRecipeJsonBuilder
 * Remapped: ol
 */
namespace CraftingRecipeJsonBuilder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ol", "net/minecraft/data/recipes/RecipeBuilder", "net/minecraft/class_5797", "net/minecraft/data/server/recipe/CraftingRecipeJsonBuilder", "net/minecraft/src/C_141809_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.data.server.recipe.CraftingRecipeJsonBuilder#ROOT
    [[maybe_unused]] static jobject get_field_ROOT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ROOT_RECIPE_ADVANCEMENT", "field_39377", "ROOT", "f_236353_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.data.server.recipe.CraftingRecipeJsonBuilder#ROOT
    [[maybe_unused]] static void set_field_ROOT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ROOT_RECIPE_ADVANCEMENT", "field_39377", "ROOT", "f_236353_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_criterion() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "unlockedBy", "method_33530", "criterion", "m_126132_"), "(Ljava/lang/String;Lao;)Lol;");
    }

    static jobject criterion(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_criterion();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_group() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "group", "method_33529", "group", "m_126145_"), "(Ljava/lang/String;)Lol;");
    }

    static jobject group(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_group();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getOutputItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getResult", "method_36441", "getOutputItem", "m_142372_"), "()Lcul;");
    }

    static jobject getOutputItem(const jobject& obj) {
                
       const auto methodID = methodID_getOutputItem();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_offerTo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "save", "method_17972", "offerTo", "m_126140_"), "(Lon;Lakr;)V");
    }

    static void offerTo(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_offerTo();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__offerTo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "save", "method_10431", "offerTo", "m_176498_"), "(Lon;)V");
    }

    static void _offerTo(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__offerTo();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID___offerTo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "save", "method_36443", "offerTo", "m_176500_"), "(Lon;Ljava/lang/String;)V");
    }

    static void __offerTo(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID___offerTo();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getItemId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getDefaultRecipeId", "method_36442", "getItemId", "m_176493_"), "(Ldcv;)Lakr;");
    }

    static jobject getItemId(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getItemId();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_toCraftingCategory() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "determineBookCategory", "method_55308", "toCraftingCategory", "m_307035_"), "(Lom;)Lcyo;");
    }

    static jobject toCraftingCategory(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_toCraftingCategory();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATA_SERVER_RECIPE_CRAFTINGRECIPEJSONBUILDER_HPP