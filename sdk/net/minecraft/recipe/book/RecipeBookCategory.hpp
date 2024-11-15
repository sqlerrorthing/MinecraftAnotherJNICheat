// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RECIPE_BOOK_RECIPEBOOKCATEGORY_HPP
#define NET_MINECRAFT_RECIPE_BOOK_RECIPEBOOKCATEGORY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.recipe.book.RecipeBookCategory
 * Remapped: crj
 */
namespace RecipeBookCategory {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("crj", "net/minecraft/world/inventory/RecipeBookType", "net/minecraft/class_5421", "net/minecraft/recipe/book/RecipeBookCategory", "net/minecraft/src/C_1298_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.recipe.book.RecipeBookCategory#CRAFTING
    [[maybe_unused]] static jobject get_field_CRAFTING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CRAFTING", "field_25763", "CRAFTING", "CRAFTING"), "Lcrj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.recipe.book.RecipeBookCategory#CRAFTING
    [[maybe_unused]] static void set_field_CRAFTING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CRAFTING", "field_25763", "CRAFTING", "CRAFTING"), "Lcrj;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.recipe.book.RecipeBookCategory#FURNACE
    [[maybe_unused]] static jobject get_field_FURNACE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "FURNACE", "field_25764", "FURNACE", "FURNACE"), "Lcrj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.recipe.book.RecipeBookCategory#FURNACE
    [[maybe_unused]] static void set_field_FURNACE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "FURNACE", "field_25764", "FURNACE", "FURNACE"), "Lcrj;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.recipe.book.RecipeBookCategory#BLAST_FURNACE
    [[maybe_unused]] static jobject get_field_BLAST_FURNACE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "BLAST_FURNACE", "field_25765", "BLAST_FURNACE", "BLAST_FURNACE"), "Lcrj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.recipe.book.RecipeBookCategory#BLAST_FURNACE
    [[maybe_unused]] static void set_field_BLAST_FURNACE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "BLAST_FURNACE", "field_25765", "BLAST_FURNACE", "BLAST_FURNACE"), "Lcrj;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.recipe.book.RecipeBookCategory#SMOKER
    [[maybe_unused]] static jobject get_field_SMOKER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SMOKER", "field_25766", "SMOKER", "SMOKER"), "Lcrj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.recipe.book.RecipeBookCategory#SMOKER
    [[maybe_unused]] static void set_field_SMOKER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SMOKER", "field_25766", "SMOKER", "SMOKER"), "Lcrj;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lcrj;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lcrj;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_RECIPE_BOOK_RECIPEBOOKCATEGORY_HPP