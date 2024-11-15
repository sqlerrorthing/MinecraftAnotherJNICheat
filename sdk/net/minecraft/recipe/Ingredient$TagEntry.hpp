// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RECIPE_INGREDIENT$TAGENTRY_HPP
#define NET_MINECRAFT_RECIPE_INGREDIENT$TAGENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.recipe.Ingredient$TagEntry
 * Remapped: cyw$b
 */
namespace Ingredient$TagEntry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cyw$b", "net/minecraft/world/item/crafting/Ingredient$TagValue", "net/minecraft/class_1856$class_1858", "net/minecraft/recipe/Ingredient$TagEntry", "net/minecraft/src/C_1462_$C_1465_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.recipe.Ingredient$TagEntry#tag
    static jobject get_field_tag(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "tag", "comp_1931", "tag", "f_43959_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.recipe.Ingredient$TagEntry#tag
    static void set_field_tag(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "tag", "comp_1931", "tag", "f_43959_"), "Lawu;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static default field net.minecraft.recipe.Ingredient$TagEntry#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CODEC", "field_46098", "CODEC", "f_291685_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.recipe.Ingredient$TagEntry#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CODEC", "field_46098", "CODEC", "f_291685_"), "Lcom/mojang/serialization/Codec;");
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
    
    static jmethodID methodID__tag() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "tag", "comp_1931", "tag", "f_43959_"), "()Lawu;");
    }

    static jobject _tag(const jobject& obj) {
                
       const auto methodID = methodID__tag();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_RECIPE_INGREDIENT$TAGENTRY_HPP