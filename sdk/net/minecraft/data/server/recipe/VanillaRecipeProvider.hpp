// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATA_SERVER_RECIPE_VANILLARECIPEPROVIDER_HPP
#define NET_MINECRAFT_DATA_SERVER_RECIPE_VANILLARECIPEPROVIDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.data.server.recipe.VanillaRecipeProvider
 * Remapped: oy
 */
namespace VanillaRecipeProvider {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("oy", "net/minecraft/data/recipes/packs/VanillaRecipeProvider", "net/minecraft/class_7803", "net/minecraft/data/server/recipe/VanillaRecipeProvider", "net/minecraft/src/C_243499_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.data.server.recipe.VanillaRecipeProvider#COAL_ORES
    [[maybe_unused]] static jobject get_field_COAL_ORES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "COAL_SMELTABLES", "field_40652", "COAL_ORES", "f_243671_"), "Lcom/google/common/collect/ImmutableList;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.data.server.recipe.VanillaRecipeProvider#COAL_ORES
    [[maybe_unused]] static void set_field_COAL_ORES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "COAL_SMELTABLES", "field_40652", "COAL_ORES", "f_243671_"), "Lcom/google/common/collect/ImmutableList;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.data.server.recipe.VanillaRecipeProvider#IRON_ORES
    [[maybe_unused]] static jobject get_field_IRON_ORES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "IRON_SMELTABLES", "field_40653", "IRON_ORES", "f_243779_"), "Lcom/google/common/collect/ImmutableList;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.data.server.recipe.VanillaRecipeProvider#IRON_ORES
    [[maybe_unused]] static void set_field_IRON_ORES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "IRON_SMELTABLES", "field_40653", "IRON_ORES", "f_243779_"), "Lcom/google/common/collect/ImmutableList;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.data.server.recipe.VanillaRecipeProvider#COPPER_ORES
    [[maybe_unused]] static jobject get_field_COPPER_ORES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "COPPER_SMELTABLES", "field_40654", "COPPER_ORES", "f_243908_"), "Lcom/google/common/collect/ImmutableList;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.data.server.recipe.VanillaRecipeProvider#COPPER_ORES
    [[maybe_unused]] static void set_field_COPPER_ORES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "COPPER_SMELTABLES", "field_40654", "COPPER_ORES", "f_243908_"), "Lcom/google/common/collect/ImmutableList;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.data.server.recipe.VanillaRecipeProvider#GOLD_ORES
    [[maybe_unused]] static jobject get_field_GOLD_ORES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "GOLD_SMELTABLES", "field_40655", "GOLD_ORES", "f_244369_"), "Lcom/google/common/collect/ImmutableList;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.data.server.recipe.VanillaRecipeProvider#GOLD_ORES
    [[maybe_unused]] static void set_field_GOLD_ORES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "GOLD_SMELTABLES", "field_40655", "GOLD_ORES", "f_244369_"), "Lcom/google/common/collect/ImmutableList;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.data.server.recipe.VanillaRecipeProvider#DIAMOND_ORES
    [[maybe_unused]] static jobject get_field_DIAMOND_ORES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "DIAMOND_SMELTABLES", "field_40656", "DIAMOND_ORES", "f_243974_"), "Lcom/google/common/collect/ImmutableList;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.data.server.recipe.VanillaRecipeProvider#DIAMOND_ORES
    [[maybe_unused]] static void set_field_DIAMOND_ORES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "DIAMOND_SMELTABLES", "field_40656", "DIAMOND_ORES", "f_243974_"), "Lcom/google/common/collect/ImmutableList;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.data.server.recipe.VanillaRecipeProvider#LAPIS_ORES
    [[maybe_unused]] static jobject get_field_LAPIS_ORES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "LAPIS_SMELTABLES", "field_40657", "LAPIS_ORES", "f_244628_"), "Lcom/google/common/collect/ImmutableList;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.data.server.recipe.VanillaRecipeProvider#LAPIS_ORES
    [[maybe_unused]] static void set_field_LAPIS_ORES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "LAPIS_SMELTABLES", "field_40657", "LAPIS_ORES", "f_244628_"), "Lcom/google/common/collect/ImmutableList;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.data.server.recipe.VanillaRecipeProvider#REDSTONE_ORES
    [[maybe_unused]] static jobject get_field_REDSTONE_ORES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "REDSTONE_SMELTABLES", "field_40658", "REDSTONE_ORES", "f_244565_"), "Lcom/google/common/collect/ImmutableList;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.data.server.recipe.VanillaRecipeProvider#REDSTONE_ORES
    [[maybe_unused]] static void set_field_REDSTONE_ORES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "REDSTONE_SMELTABLES", "field_40658", "REDSTONE_ORES", "f_244565_"), "Lcom/google/common/collect/ImmutableList;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.data.server.recipe.VanillaRecipeProvider#EMERALD_ORES
    [[maybe_unused]] static jobject get_field_EMERALD_ORES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "EMERALD_SMELTABLES", "field_40659", "EMERALD_ORES", "f_244430_"), "Lcom/google/common/collect/ImmutableList;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.data.server.recipe.VanillaRecipeProvider#EMERALD_ORES
    [[maybe_unused]] static void set_field_EMERALD_ORES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "EMERALD_SMELTABLES", "field_40659", "EMERALD_ORES", "f_244430_"), "Lcom/google/common/collect/ImmutableList;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_run() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "run", "method_56888", "run", "m_252749_"), "(Lly;Ljo$a;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject run(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_run();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_generate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "buildRecipes", "method_10419", "generate", "m_245200_"), "(Lon;)V");
    }

    static void generate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_generate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_streamSmithingTemplates() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "smithingTrims", "method_51694", "streamSmithingTemplates", "m_284239_"), "()Ljava/util/stream/Stream;");
    }

    static jobject streamSmithingTemplates() {
       const auto clazz = self();
       const auto methodID = methodID_streamSmithingTemplates();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
};

#endif // NET_MINECRAFT_DATA_SERVER_RECIPE_VANILLARECIPEPROVIDER_HPP