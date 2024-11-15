// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RECIPE_RECIPEMATCHER$MATCHER_HPP
#define NET_MINECRAFT_RECIPE_RECIPEMATCHER$MATCHER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.recipe.RecipeMatcher$Matcher
 * Remapped: cnb$a
 */
namespace RecipeMatcher$Matcher {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cnb$a", "net/minecraft/world/entity/player/StackedContents$RecipePicker", "net/minecraft/class_1662$class_1663", "net/minecraft/recipe/RecipeMatcher$Matcher", "net/minecraft/src/C_1145_$C_1146_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.recipe.RecipeMatcher$Matcher#recipe
    static jobject get_field_recipe(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "recipe", "field_7555", "recipe", "f_36499_"), "Lcyz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.recipe.RecipeMatcher$Matcher#recipe
    static void set_field_recipe(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "recipe", "field_7555", "recipe", "f_36499_"), "Lcyz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.recipe.RecipeMatcher$Matcher#ingredients
    static jobject get_field_ingredients(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "ingredients", "field_7552", "ingredients", "f_36500_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.recipe.RecipeMatcher$Matcher#ingredients
    static void set_field_ingredients(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "ingredients", "field_7552", "ingredients", "f_36500_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.recipe.RecipeMatcher$Matcher#totalIngredients
    static jint get_field_totalIngredients(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "ingredientCount", "field_7556", "totalIngredients", "f_36501_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.recipe.RecipeMatcher$Matcher#totalIngredients
    static void set_field_totalIngredients(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "ingredientCount", "field_7556", "totalIngredients", "f_36501_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.recipe.RecipeMatcher$Matcher#requiredItems
    static jint get_field_requiredItems(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "items", "field_7551", "requiredItems", "f_36502_"), "[I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.recipe.RecipeMatcher$Matcher#requiredItems
    static void set_field_requiredItems(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "items", "field_7551", "requiredItems", "f_36502_"), "[I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.recipe.RecipeMatcher$Matcher#totalRequiredItems
    static jint get_field_totalRequiredItems(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "itemCount", "field_7553", "totalRequiredItems", "f_36503_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.recipe.RecipeMatcher$Matcher#totalRequiredItems
    static void set_field_totalRequiredItems(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "itemCount", "field_7553", "totalRequiredItems", "f_36503_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.recipe.RecipeMatcher$Matcher#requirementsMatrix
    static jobject get_field_requirementsMatrix(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "data", "field_7558", "requirementsMatrix", "f_36504_"), "Ljava/util/BitSet;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.recipe.RecipeMatcher$Matcher#requirementsMatrix
    static void set_field_requirementsMatrix(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "data", "field_7558", "requirementsMatrix", "f_36504_"), "Ljava/util/BitSet;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.recipe.RecipeMatcher$Matcher#ingredientItemLookup
    static jobject get_field_ingredientItemLookup(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "path", "field_7557", "ingredientItemLookup", "f_36505_"), "Lit/unimi/dsi/fastutil/ints/IntList;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.recipe.RecipeMatcher$Matcher#ingredientItemLookup
    static void set_field_ingredientItemLookup(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "path", "field_7557", "ingredientItemLookup", "f_36505_"), "Lit/unimi/dsi/fastutil/ints/IntList;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_match() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tryPick", "method_7417", "match", "m_36512_"), "(ILit/unimi/dsi/fastutil/ints/IntList;)Z");
    }

    static jboolean match(const jobject& obj, const jint& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_match();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_createItemRequirementList() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getUniqueAvailableIngredientItems", "method_7422", "createItemRequirementList", "m_36509_"), "()[I");
    }

    static jint createItemRequirementList(const jobject& obj) {
                
       const auto methodID = methodID_createItemRequirementList();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_checkRequirements() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "dfs", "method_7423", "checkRequirements", "m_36510_"), "(I)Z");
    }

    static jboolean checkRequirements(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_checkRequirements();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getRequirement() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "isSatisfied", "method_7416", "getRequirement", "m_36523_"), "(I)Z");
    }

    static jboolean getRequirement(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getRequirement();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_unfulfillRequirement() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "setSatisfied", "method_7421", "unfulfillRequirement", "m_36535_"), "(I)V");
    }

    static void unfulfillRequirement(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_unfulfillRequirement();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getRequirementIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getSatisfiedIndex", "method_7419", "getRequirementIndex", "m_36544_"), "(I)I");
    }

    static jint getRequirementIndex(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getRequirementIndex();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_needsRequirement() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hasConnection", "method_7418", "needsRequirement", "m_36518_"), "(ZII)Z");
    }

    static jboolean needsRequirement(const jobject& obj, const jboolean& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_needsRequirement();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_checkRequirement() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "hasResidual", "method_7425", "checkRequirement", "m_36531_"), "(ZII)Z");
    }

    static jboolean checkRequirement(const jobject& obj, const jboolean& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_checkRequirement();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_flipRequirement() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "toggleResidual", "method_7414", "flipRequirement", "m_36540_"), "(ZII)V");
    }

    static void flipRequirement(const jobject& obj, const jboolean& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_flipRequirement();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__getRequirementIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getIndex", "method_7420", "getRequirementIndex", "m_36546_"), "(ZII)I");
    }

    static jint _getRequirementIndex(const jobject& obj, const jboolean& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID__getRequirementIndex();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_addRequirement() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visit", "method_7413", "addRequirement", "m_36515_"), "(ZI)V");
    }

    static void addRequirement(const jobject& obj, const jboolean& arg0, const jint& arg1) {
                
       const auto methodID = methodID_addRequirement();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isRequirementUnfulfilled() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "hasVisited", "method_7426", "isRequirementUnfulfilled", "m_36528_"), "(ZI)Z");
    }

    static jboolean isRequirementUnfulfilled(const jobject& obj, const jboolean& arg0, const jint& arg1) {
                
       const auto methodID = methodID_isRequirementUnfulfilled();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID___getRequirementIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getVisitedIndex", "method_7424", "getRequirementIndex", "m_36537_"), "(ZI)I");
    }

    static jint __getRequirementIndex(const jobject& obj, const jboolean& arg0, const jint& arg1) {
                
       const auto methodID = methodID___getRequirementIndex();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_countCrafts() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "tryPickAll", "method_7427", "countCrafts", "m_36525_"), "(ILit/unimi/dsi/fastutil/ints/IntList;)I");
    }

    static jint countCrafts(const jobject& obj, const jint& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_countCrafts();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getMaximumCrafts() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getMinIngredientCount", "method_7415", "getMaximumCrafts", "m_36522_"), "()I");
    }

    static jint getMaximumCrafts(const jobject& obj) {
                
       const auto methodID = methodID_getMaximumCrafts();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_RECIPE_RECIPEMATCHER$MATCHER_HPP