// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATA_SERVER_RECIPE_SMITHINGTRIMRECIPEJSONBUILDER_HPP
#define NET_MINECRAFT_DATA_SERVER_RECIPE_SMITHINGTRIMRECIPEJSONBUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.data.server.recipe.SmithingTrimRecipeJsonBuilder
 * Remapped: ou
 */
namespace SmithingTrimRecipeJsonBuilder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ou", "net/minecraft/data/recipes/SmithingTrimRecipeBuilder", "net/minecraft/class_8076", "net/minecraft/data/server/recipe/SmithingTrimRecipeJsonBuilder", "net/minecraft/src/C_265812_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.data.server.recipe.SmithingTrimRecipeJsonBuilder#category
    static jobject get_field_category(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "category", "field_42097", "category", "f_266062_"), "Lom;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.data.server.recipe.SmithingTrimRecipeJsonBuilder#category
    static void set_field_category(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "category", "field_42097", "category", "f_266062_"), "Lom;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.data.server.recipe.SmithingTrimRecipeJsonBuilder#template
    static jobject get_field_template(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "template", "field_42098", "template", "f_266051_"), "Lcyw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.data.server.recipe.SmithingTrimRecipeJsonBuilder#template
    static void set_field_template(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "template", "field_42098", "template", "f_266051_"), "Lcyw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.data.server.recipe.SmithingTrimRecipeJsonBuilder#base
    static jobject get_field_base(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "base", "field_42099", "base", "f_266042_"), "Lcyw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.data.server.recipe.SmithingTrimRecipeJsonBuilder#base
    static void set_field_base(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "base", "field_42099", "base", "f_266042_"), "Lcyw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.data.server.recipe.SmithingTrimRecipeJsonBuilder#addition
    static jobject get_field_addition(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "addition", "field_42100", "addition", "f_266046_"), "Lcyw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.data.server.recipe.SmithingTrimRecipeJsonBuilder#addition
    static void set_field_addition(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "addition", "field_42100", "addition", "f_266046_"), "Lcyw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.data.server.recipe.SmithingTrimRecipeJsonBuilder#criteria
    static jobject get_field_criteria(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "criteria", "field_46153", "criteria", "f_290783_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.data.server.recipe.SmithingTrimRecipeJsonBuilder#criteria
    static void set_field_criteria(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "criteria", "field_46153", "criteria", "f_290783_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "smithingTrim", "method_48540", "create", "m_266182_"), "(Lcyw;Lcyw;Lcyw;Lom;)Lou;");
    }

    static jobject create(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_criterion() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "unlocks", "method_48541", "criterion", "m_266331_"), "(Ljava/lang/String;Lao;)Lou;");
    }

    static jobject criterion(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_criterion();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_offerTo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "save", "method_48542", "offerTo", "m_266403_"), "(Lon;Lakr;)V");
    }

    static void offerTo(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_offerTo();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_validate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "ensureValid", "method_48539", "validate", "m_266593_"), "(Lakr;)V");
    }

    static void validate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_validate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATA_SERVER_RECIPE_SMITHINGTRIMRECIPEJSONBUILDER_HPP