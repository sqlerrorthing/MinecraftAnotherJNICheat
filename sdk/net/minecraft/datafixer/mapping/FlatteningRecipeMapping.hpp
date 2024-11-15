// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_MAPPING_FLATTENINGRECIPEMAPPING_HPP
#define NET_MINECRAFT_DATAFIXER_MAPPING_FLATTENINGRECIPEMAPPING_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.mapping.FlatteningRecipeMapping
 * Remapped: bgo
 */
namespace FlatteningRecipeMapping {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bgo", "net/minecraft/util/datafix/fixes/RecipesFix", "net/minecraft/class_1206", "net/minecraft/datafixer/mapping/FlatteningRecipeMapping", "net/minecraft/src/C_338_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.datafixer.mapping.FlatteningRecipeMapping#RECIPES
    [[maybe_unused]] static jobject get_field_RECIPES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RECIPES", "field_5708", "RECIPES", "f_16722_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.datafixer.mapping.FlatteningRecipeMapping#RECIPES
    [[maybe_unused]] static void set_field_RECIPES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RECIPES", "field_5708", "RECIPES", "f_16722_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

};

#endif // NET_MINECRAFT_DATAFIXER_MAPPING_FLATTENINGRECIPEMAPPING_HPP