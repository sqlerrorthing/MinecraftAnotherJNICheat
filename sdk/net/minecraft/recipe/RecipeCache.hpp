// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RECIPE_RECIPECACHE_HPP
#define NET_MINECRAFT_RECIPE_RECIPECACHE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.recipe.RecipeCache
 * Remapped: cza
 */
namespace RecipeCache {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cza", "net/minecraft/world/item/crafting/RecipeCache", "net/minecraft/class_8884", "net/minecraft/recipe/RecipeCache", "net/minecraft/src/C_302102_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.recipe.RecipeCache#cache
    static jobject get_field_cache(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "entries", "field_46792", "cache", "f_302788_"), "[Lcza$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.recipe.RecipeCache#cache
    static void set_field_cache(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "entries", "field_46792", "cache", "f_302788_"), "[Lcza$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.recipe.RecipeCache#recipeManagerRef
    static jobject get_field_recipeManagerRef(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "cachedRecipeManager", "field_46793", "recipeManagerRef", "f_302546_"), "Ljava/lang/ref/WeakReference;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.recipe.RecipeCache#recipeManagerRef
    static void set_field_recipeManagerRef(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "cachedRecipeManager", "field_46793", "recipeManagerRef", "f_302546_"), "Ljava/lang/ref/WeakReference;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getRecipe() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_54470", "getRecipe", "m_304754_"), "(Ldcw;Lcyp;)Ljava/util/Optional;");
    }

    static jobject getRecipe(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getRecipe();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_validateRecipeManager() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "validateRecipeManager", "method_54469", "validateRecipeManager", "m_305555_"), "(Ldcw;)V");
    }

    static void validateRecipeManager(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_validateRecipeManager();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getAndCacheRecipe() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "compute", "method_54468", "getAndCacheRecipe", "m_307507_"), "(Lcyp;Ldcw;)Ljava/util/Optional;");
    }

    static jobject getAndCacheRecipe(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getAndCacheRecipe();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_sendToFront() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "moveEntryToFront", "method_54467", "sendToFront", "m_306919_"), "(I)V");
    }

    static void sendToFront(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_sendToFront();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__cache() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "insert", "method_54471", "cache", "m_307800_"), "(Lcyp;Lczb;)V");
    }

    static void _cache(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__cache();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_RECIPE_RECIPECACHE_HPP