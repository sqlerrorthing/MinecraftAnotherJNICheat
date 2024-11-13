// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RECIPE_SHAPEDRECIPE_HPP
#define NET_MINECRAFT_RECIPE_SHAPEDRECIPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.recipe.ShapedRecipe
 * Remapped: czh
 */
namespace ShapedRecipe {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("czh", "net/minecraft/world/item/crafting/ShapedRecipe", "net/minecraft/class_1869", "net/minecraft/recipe/ShapedRecipe", "net/minecraft/src/C_1475_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.recipe.ShapedRecipe#raw
    static jobject get_field_raw(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "pattern", "field_47320", "raw", "f_302516_"), "Lczi;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.recipe.ShapedRecipe#raw
    static void set_field_raw(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "pattern", "field_47320", "raw", "f_302516_"), "Lczi;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.recipe.ShapedRecipe#result
    static jobject get_field_result(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "result", "field_9053", "result", "f_44149_"), "Lcuq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.recipe.ShapedRecipe#result
    static void set_field_result(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "result", "field_9053", "result", "f_44149_"), "Lcuq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.recipe.ShapedRecipe#group
    static jobject get_field_group(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "group", "field_9056", "group", "f_44151_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.recipe.ShapedRecipe#group
    static void set_field_group(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "group", "field_9056", "group", "f_44151_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.recipe.ShapedRecipe#category
    static jobject get_field_category(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "category", "field_40256", "category", "f_244483_"), "Lcyo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.recipe.ShapedRecipe#category
    static void set_field_category(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "category", "field_40256", "category", "f_244483_"), "Lcyo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.recipe.ShapedRecipe#showNotification
    static jboolean get_field_showNotification(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "showNotification", "field_42719", "showNotification", "f_271538_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static default field net.minecraft.recipe.ShapedRecipe#showNotification
    static void set_field_showNotification(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "showNotification", "field_42719", "showNotification", "f_271538_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_getSerializer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("at_", "getSerializer", "method_8119", "getSerializer", "m_7707_"), "()Lcze;");
    }

    static jobject getSerializer(const jobject& obj) {
                
       const auto methodID = methodID_getSerializer();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getGroup() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getGroup", "method_8112", "getGroup", "m_6076_"), "()Ljava/lang/String;");
    }

    static jobject getGroup(const jobject& obj) {
                
       const auto methodID = methodID_getGroup();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCategory() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "category", "method_45441", "getCategory", "m_245232_"), "()Lcyo;");
    }

    static jobject getCategory(const jobject& obj) {
                
       const auto methodID = methodID_getCategory();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getResult() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getResultItem", "method_8110", "getResult", "m_8043_"), "(Ljo$a;)Lcuq;");
    }

    static jobject getResult(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getResult();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getIngredients() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getIngredients", "method_8117", "getIngredients", "m_7527_"), "()Ljv;");
    }

    static jobject getIngredients(const jobject& obj) {
                
       const auto methodID = methodID_getIngredients();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__showNotification() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "showNotification", "method_49188", "showNotification", "m_271738_"), "()Z");
    }

    static jboolean _showNotification(const jobject& obj) {
                
       const auto methodID = methodID__showNotification();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_fits() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canCraftInDimensions", "method_8113", "fits", "m_8004_"), "(II)Z");
    }

    static jboolean fits(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_fits();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_matches() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "matches", "method_17728", "matches", "m_5818_"), "(Lcyp;Ldcw;)Z");
    }

    static jboolean matches(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_matches();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_craft() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "assemble", "method_17727", "craft", "m_5874_"), "(Lcyp;Ljo$a;)Lcuq;");
    }

    static jobject craft(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_craft();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "getWidth", "method_8150", "getWidth", "m_44220_"), "()I");
    }

    static jint getWidth(const jobject& obj) {
                
       const auto methodID = methodID_getWidth();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "getHeight", "method_8158", "getHeight", "m_44221_"), "()I");
    }

    static jint getHeight(const jobject& obj) {
                
       const auto methodID = methodID_getHeight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_isEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "isIncomplete", "method_31584", "isEmpty", "m_142505_"), "()Z");
    }

    static jboolean isEmpty(const jobject& obj) {
                
       const auto methodID = methodID_isEmpty();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_RECIPE_SHAPEDRECIPE_HPP