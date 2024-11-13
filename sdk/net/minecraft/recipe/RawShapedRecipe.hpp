// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RECIPE_RAWSHAPEDRECIPE_HPP
#define NET_MINECRAFT_RECIPE_RAWSHAPEDRECIPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.recipe.RawShapedRecipe
 * Remapped: czi
 */
namespace RawShapedRecipe {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("czi", "net/minecraft/world/item/crafting/ShapedRecipePattern", "net/minecraft/class_8957", "net/minecraft/recipe/RawShapedRecipe", "net/minecraft/src/C_302031_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.recipe.RawShapedRecipe#MAX_WIDTH_AND_HEIGHT
    [[maybe_unused]] static jint get_field_MAX_WIDTH_AND_HEIGHT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MAX_SIZE", "field_47322", "MAX_WIDTH_AND_HEIGHT", "f_302599_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.recipe.RawShapedRecipe#MAX_WIDTH_AND_HEIGHT
    [[maybe_unused]] static void set_field_MAX_WIDTH_AND_HEIGHT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MAX_SIZE", "field_47322", "MAX_WIDTH_AND_HEIGHT", "f_302599_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.recipe.RawShapedRecipe#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAP_CODEC", "field_47321", "CODEC", "f_302908_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.recipe.RawShapedRecipe#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAP_CODEC", "field_47321", "CODEC", "f_302908_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.recipe.RawShapedRecipe#PACKET_CODEC
    [[maybe_unused]] static jobject get_field_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STREAM_CODEC", "field_48359", "PACKET_CODEC", "f_315058_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.recipe.RawShapedRecipe#PACKET_CODEC
    [[maybe_unused]] static void set_field_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STREAM_CODEC", "field_48359", "PACKET_CODEC", "f_315058_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.recipe.RawShapedRecipe#width
    static jint get_field_width(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "width", "field_51637", "width", "f_303446_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.recipe.RawShapedRecipe#width
    static void set_field_width(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "width", "field_51637", "width", "f_303446_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.recipe.RawShapedRecipe#height
    static jint get_field_height(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "height", "field_51638", "height", "f_302375_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.recipe.RawShapedRecipe#height
    static void set_field_height(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "height", "field_51638", "height", "f_302375_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.recipe.RawShapedRecipe#ingredients
    static jobject get_field_ingredients(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "ingredients", "field_51639", "ingredients", "f_303265_"), "Ljv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.recipe.RawShapedRecipe#ingredients
    static void set_field_ingredients(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "ingredients", "field_51639", "ingredients", "f_303265_"), "Ljv;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.recipe.RawShapedRecipe#data
    static jobject get_field_data(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "data", "field_51640", "data", "f_302791_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.recipe.RawShapedRecipe#data
    static void set_field_data(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "data", "field_51640", "data", "f_302791_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.recipe.RawShapedRecipe#ingredientCount
    static jint get_field_ingredientCount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "ingredientCount", "field_51641", "ingredientCount", "f_337661_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.recipe.RawShapedRecipe#ingredientCount
    static void set_field_ingredientCount(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "ingredientCount", "field_51641", "ingredientCount", "f_337661_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.recipe.RawShapedRecipe#symmetrical
    static jboolean get_field_symmetrical(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "symmetrical", "field_51642", "symmetrical", "f_337728_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.recipe.RawShapedRecipe#symmetrical
    static void set_field_symmetrical(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "symmetrical", "field_51642", "symmetrical", "f_337728_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "of", "method_55086", "create", "m_304825_"), "(Ljava/util/Map;[Ljava/lang/String;)Lczi;");
    }

    static jobject create(const jobject& arg0, const jarray& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "of", "method_55085", "create", "m_306906_"), "(Ljava/util/Map;Ljava/util/List;)Lczi;");
    }

    static jobject _create(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_fromData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "unpack", "method_55080", "fromData", "m_305688_"), "(Lczi$a;)Lcom/mojang/serialization/DataResult;");
    }

    static jobject fromData(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fromData();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_removePadding() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "shrink", "method_55084", "removePadding", "m_306947_"), "(Ljava/util/List;)[Ljava/lang/String;");
    }

    static jobject removePadding(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_removePadding();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_findFirstSymbol() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "firstNonSpace", "method_55083", "findFirstSymbol", "m_304979_"), "(Ljava/lang/String;)I");
    }

    static jint findFirstSymbol(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_findFirstSymbol();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_findLastSymbol() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "lastNonSpace", "method_55089", "findLastSymbol", "m_306007_"), "(Ljava/lang/String;)I");
    }

    static jint findLastSymbol(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_findLastSymbol();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_matches() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "matches", "method_55078", "matches", "m_306368_"), "(Lcyp;)Z");
    }

    static jboolean matches(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_matches();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__matches() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "matches", "method_55079", "matches", "m_304908_"), "(Lcyp;Z)Z");
    }

    static jboolean _matches(const jobject& obj, const jobject& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID__matches();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_writeToBuf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "toNetwork", "method_55087", "writeToBuf", "m_307574_"), "(Lwk;)V");
    }

    static void writeToBuf(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_writeToBuf();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_readFromBuf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "fromNetwork", "method_55090", "readFromBuf", "m_306640_"), "(Lwk;)Lczi;");
    }

    static jobject readFromBuf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_readFromBuf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "width", "method_59995", "getWidth", "m_305604_"), "()I");
    }

    static jint getWidth(const jobject& obj) {
                
       const auto methodID = methodID_getWidth();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "height", "method_59996", "getHeight", "m_307090_"), "()I");
    }

    static jint getHeight(const jobject& obj) {
                
       const auto methodID = methodID_getHeight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getIngredients() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "ingredients", "method_59997", "getIngredients", "m_304810_"), "()Ljv;");
    }

    static jobject getIngredients(const jobject& obj) {
                
       const auto methodID = methodID_getIngredients();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_RECIPE_RAWSHAPEDRECIPE_HPP