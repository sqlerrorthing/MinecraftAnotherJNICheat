// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RECIPE_BREWINGRECIPEREGISTRY_HPP
#define NET_MINECRAFT_RECIPE_BREWINGRECIPEREGISTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.recipe.BrewingRecipeRegistry
 * Remapped: cwt
 */
namespace BrewingRecipeRegistry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cwt", "net/minecraft/world/item/alchemy/PotionBrewing", "net/minecraft/class_1845", "net/minecraft/recipe/BrewingRecipeRegistry", "net/minecraft/src/C_1441_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.recipe.BrewingRecipeRegistry#field_30942
    [[maybe_unused]] static jint get_field_field_30942() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BREWING_TIME_SECONDS", "field_30942", "field_30942", "f_151252_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.recipe.BrewingRecipeRegistry#field_30942
    [[maybe_unused]] static void set_field_field_30942(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BREWING_TIME_SECONDS", "field_30942", "field_30942", "f_151252_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.recipe.BrewingRecipeRegistry#EMPTY
    [[maybe_unused]] static jobject get_field_EMPTY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EMPTY", "field_51402", "EMPTY", "f_317012_"), "Lcwt;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.recipe.BrewingRecipeRegistry#EMPTY
    [[maybe_unused]] static void set_field_EMPTY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EMPTY", "field_51402", "EMPTY", "f_317012_"), "Lcwt;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.recipe.BrewingRecipeRegistry#potionTypes
    static jobject get_field_potionTypes(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "containers", "field_51403", "potionTypes", "f_317135_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.recipe.BrewingRecipeRegistry#potionTypes
    static void set_field_potionTypes(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "containers", "field_51403", "potionTypes", "f_317135_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.recipe.BrewingRecipeRegistry#potionRecipes
    static jobject get_field_potionRecipes(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "potionMixes", "field_51404", "potionRecipes", "f_316577_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.recipe.BrewingRecipeRegistry#potionRecipes
    static void set_field_potionRecipes(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "potionMixes", "field_51404", "potionRecipes", "f_316577_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.recipe.BrewingRecipeRegistry#itemRecipes
    static jobject get_field_itemRecipes(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "containerMixes", "field_51405", "itemRecipes", "f_314332_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.recipe.BrewingRecipeRegistry#itemRecipes
    static void set_field_itemRecipes(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "containerMixes", "field_51405", "itemRecipes", "f_314332_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_isValidIngredient() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isIngredient", "method_8077", "isValidIngredient", "m_43506_"), "(Lcuq;)Z");
    }

    static jboolean isValidIngredient(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isValidIngredient();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isPotionType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "isContainer", "method_59700", "isPotionType", "m_321499_"), "(Lcuq;)Z");
    }

    static jboolean isPotionType(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isPotionType();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isItemRecipeIngredient() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "isContainerIngredient", "method_8079", "isItemRecipeIngredient", "m_43517_"), "(Lcuq;)Z");
    }

    static jboolean isItemRecipeIngredient(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isItemRecipeIngredient();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isPotionRecipeIngredient() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "isPotionIngredient", "method_8069", "isPotionRecipeIngredient", "m_43522_"), "(Lcuq;)Z");
    }

    static jboolean isPotionRecipeIngredient(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isPotionRecipeIngredient();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isBrewable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isBrewablePotion", "method_20361", "isBrewable", "m_43511_"), "(Ljm;)Z");
    }

    static jboolean isBrewable(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isBrewable();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_hasRecipe() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hasMix", "method_8072", "hasRecipe", "m_43508_"), "(Lcuq;Lcuq;)Z");
    }

    static jboolean hasRecipe(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_hasRecipe();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_hasItemRecipe() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "hasContainerMix", "method_8070", "hasItemRecipe", "m_43519_"), "(Lcuq;Lcuq;)Z");
    }

    static jboolean hasItemRecipe(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_hasItemRecipe();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_hasPotionRecipe() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "hasPotionMix", "method_8075", "hasPotionRecipe", "m_43524_"), "(Lcuq;Lcuq;)Z");
    }

    static jboolean hasPotionRecipe(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_hasPotionRecipe();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_craft() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "mix", "method_8078", "craft", "m_43529_"), "(Lcuq;Lcuq;)Lcuq;");
    }

    static jobject craft(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_craft();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "bootstrap", "method_8076", "create", "m_320553_"), "(Lcpl;)Lcwt;");
    }

    static jobject create(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_registerDefaults() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "addVanillaMixes", "method_59699", "registerDefaults", "m_43502_"), "(Lcwt$a;)V");
    }

    static void registerDefaults(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_registerDefaults();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_RECIPE_BREWINGRECIPEREGISTRY_HPP