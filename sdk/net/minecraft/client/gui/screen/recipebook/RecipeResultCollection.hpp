// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_RECIPEBOOK_RECIPERESULTCOLLECTION_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_RECIPEBOOK_RECIPERESULTCOLLECTION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.recipebook.RecipeResultCollection
 * Remapped: fse
 */
namespace RecipeResultCollection {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fse", "net/minecraft/client/gui/screens/recipebook/RecipeCollection", "net/minecraft/class_516", "net/minecraft/client/gui/screen/recipebook/RecipeResultCollection", "net/minecraft/src/C_3722_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.gui.screen.recipebook.RecipeResultCollection#registryManager
    static jobject get_field_registryManager(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "registryAccess", "field_42069", "registryManager", "f_265919_"), "Lka;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.recipebook.RecipeResultCollection#registryManager
    static void set_field_registryManager(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "registryAccess", "field_42069", "registryManager", "f_265919_"), "Lka;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.recipebook.RecipeResultCollection#recipes
    static jobject get_field_recipes(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "recipes", "field_3144", "recipes", "f_100491_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.recipebook.RecipeResultCollection#recipes
    static void set_field_recipes(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "recipes", "field_3144", "recipes", "f_100491_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.recipebook.RecipeResultCollection#singleOutput
    static jboolean get_field_singleOutput(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "singleResultItem", "field_3148", "singleOutput", "f_100492_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.recipebook.RecipeResultCollection#singleOutput
    static void set_field_singleOutput(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "singleResultItem", "field_3148", "singleOutput", "f_100492_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.recipebook.RecipeResultCollection#craftableRecipes
    static jobject get_field_craftableRecipes(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "craftable", "field_3146", "craftableRecipes", "f_100493_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.recipebook.RecipeResultCollection#craftableRecipes
    static void set_field_craftableRecipes(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "craftable", "field_3146", "craftableRecipes", "f_100493_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.recipebook.RecipeResultCollection#fittingRecipes
    static jobject get_field_fittingRecipes(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "fitsDimensions", "field_3145", "fittingRecipes", "f_100494_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.recipebook.RecipeResultCollection#fittingRecipes
    static void set_field_fittingRecipes(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "fitsDimensions", "field_3145", "fittingRecipes", "f_100494_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.recipebook.RecipeResultCollection#unlockedRecipes
    static jobject get_field_unlockedRecipes(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "known", "field_3147", "unlockedRecipes", "f_100495_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.recipebook.RecipeResultCollection#unlockedRecipes
    static void set_field_unlockedRecipes(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "known", "field_3147", "unlockedRecipes", "f_100495_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_shouldHaveSingleOutput() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "allRecipesHaveSameResult", "method_30295", "shouldHaveSingleOutput", "m_100508_"), "(Lka;Ljava/util/List;)Z");
    }

    static jboolean shouldHaveSingleOutput(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_shouldHaveSingleOutput();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getRegistryManager() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "registryAccess", "method_48479", "getRegistryManager", "m_266543_"), "()Lka;");
    }

    static jobject getRegistryManager(const jobject& obj) {
                
       const auto methodID = methodID_getRegistryManager();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_isInitialized() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "hasKnownRecipes", "method_2652", "isInitialized", "m_100498_"), "()Z");
    }

    static jboolean isInitialized(const jobject& obj) {
                
       const auto methodID = methodID_isInitialized();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_initialize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateKnownRecipes", "method_2647", "initialize", "m_100499_"), "(Lavs;)V");
    }

    static void initialize(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_initialize();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_computeCraftables() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canCraft", "method_2649", "computeCraftables", "m_100501_"), "(Lcnb;IILavs;)V");
    }

    static void computeCraftables(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_computeCraftables();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_isCraftable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isCraftable", "method_2653", "isCraftable", "m_100506_"), "(Lczb;)Z");
    }

    static jboolean isCraftable(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isCraftable();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_hasCraftableRecipes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "hasCraftable", "method_2655", "hasCraftableRecipes", "m_100512_"), "()Z");
    }

    static jboolean hasCraftableRecipes(const jobject& obj) {
                
       const auto methodID = methodID_hasCraftableRecipes();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_hasFittingRecipes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "hasFitting", "method_2657", "hasFittingRecipes", "m_100515_"), "()Z");
    }

    static jboolean hasFittingRecipes(const jobject& obj) {
                
       const auto methodID = methodID_hasFittingRecipes();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getAllRecipes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getRecipes", "method_2650", "getAllRecipes", "m_100516_"), "()Ljava/util/List;");
    }

    static jobject getAllRecipes(const jobject& obj) {
                
       const auto methodID = methodID_getAllRecipes();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getResults() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getRecipes", "method_2651", "getResults", "m_100510_"), "(Z)Ljava/util/List;");
    }

    static jobject getResults(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_getResults();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getRecipes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getDisplayRecipes", "method_2648", "getRecipes", "m_100513_"), "(Z)Ljava/util/List;");
    }

    static jobject getRecipes(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_getRecipes();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_hasSingleOutput() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "hasSingleResultItem", "method_2656", "hasSingleOutput", "m_100517_"), "()Z");
    }

    static jboolean hasSingleOutput(const jobject& obj) {
                
       const auto methodID = methodID_hasSingleOutput();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_RECIPEBOOK_RECIPERESULTCOLLECTION_HPP