// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RECIPE_INGREDIENT$ENTRY_HPP
#define NET_MINECRAFT_RECIPE_INGREDIENT$ENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.recipe.Ingredient$Entry
 * Remapped: cyw$c
 */
namespace Ingredient$Entry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cyw$c", "net/minecraft/world/item/crafting/Ingredient$Value", "net/minecraft/class_1856$class_1859", "net/minecraft/recipe/Ingredient$Entry", "net/minecraft/src/C_1462_$C_1466_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.recipe.Ingredient$Entry#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_46099", "CODEC", "f_290964_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.recipe.Ingredient$Entry#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_46099", "CODEC", "f_290964_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getStacks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getItems", "method_8108", "getStacks", "m_6223_"), "()Ljava/util/Collection;");
    }

    static jobject getStacks(const jobject& obj) {
                
       const auto methodID = methodID_getStacks();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_RECIPE_INGREDIENT$ENTRY_HPP