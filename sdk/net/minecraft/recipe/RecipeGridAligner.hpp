// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RECIPE_RECIPEGRIDALIGNER_HPP
#define NET_MINECRAFT_RECIPE_RECIPEGRIDALIGNER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.recipe.RecipeGridAligner
 * Remapped: ake
 */
namespace RecipeGridAligner {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ake", "net/minecraft/recipebook/PlaceRecipe", "net/minecraft/class_2952", "net/minecraft/recipe/RecipeGridAligner", "net/minecraft/src/C_5249_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_alignRecipeToGrid() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "placeRecipe", "method_12816", "alignRecipeToGrid", "m_135408_"), "(IIILczb;Ljava/util/Iterator;I)V");
    }

    static void alignRecipeToGrid(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2, const jobject& arg3, const jobject& arg4, const jint& arg5) {
                
       const auto methodID = methodID_alignRecipeToGrid();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_acceptAlignedInput() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addItemToSlot", "method_12815", "acceptAlignedInput", "m_5817_"), "(Ljava/lang/Object;IIII)V");
    }

    static void acceptAlignedInput(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4) {
                
       const auto methodID = methodID_acceptAlignedInput();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
};

#endif // NET_MINECRAFT_RECIPE_RECIPEGRIDALIGNER_HPP