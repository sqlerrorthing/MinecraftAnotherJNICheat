// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RECIPE_BOOK_RECIPEBOOKOPTIONS_HPP
#define NET_MINECRAFT_RECIPE_BOOK_RECIPEBOOKOPTIONS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.recipe.book.RecipeBookOptions
 * Remapped: avt
 */
namespace RecipeBookOptions {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("avt", "net/minecraft/stats/RecipeBookSettings", "net/minecraft/class_5411", "net/minecraft/recipe/book/RecipeBookOptions", "net/minecraft/src/C_127_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.recipe.book.RecipeBookOptions#CATEGORY_OPTION_NAMES
    [[maybe_unused]] static jobject get_field_CATEGORY_OPTION_NAMES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TAG_FIELDS", "field_25735", "CATEGORY_OPTION_NAMES", "f_12725_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.recipe.book.RecipeBookOptions#CATEGORY_OPTION_NAMES
    [[maybe_unused]] static void set_field_CATEGORY_OPTION_NAMES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TAG_FIELDS", "field_25735", "CATEGORY_OPTION_NAMES", "f_12725_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.recipe.book.RecipeBookOptions#categoryOptions
    static jobject get_field_categoryOptions(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "states", "field_25736", "categoryOptions", "f_12726_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.recipe.book.RecipeBookOptions#categoryOptions
    static void set_field_categoryOptions(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "states", "field_25736", "categoryOptions", "f_12726_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_isGuiOpen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isOpen", "method_30180", "isGuiOpen", "m_12734_"), "(Lcrj;)Z");
    }

    static jboolean isGuiOpen(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isGuiOpen();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setGuiOpen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setOpen", "method_30181", "setGuiOpen", "m_12736_"), "(Lcrj;Z)V");
    }

    static void setGuiOpen(const jobject& obj, const jobject& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_setGuiOpen();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isFilteringCraftable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "isFiltering", "method_30187", "isFilteringCraftable", "m_12754_"), "(Lcrj;)Z");
    }

    static jboolean isFilteringCraftable(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isFilteringCraftable();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setFilteringCraftable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setFiltering", "method_30188", "setFilteringCraftable", "m_12756_"), "(Lcrj;Z)V");
    }

    static void setFilteringCraftable(const jobject& obj, const jobject& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_setFilteringCraftable();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_fromPacket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "read", "method_30186", "fromPacket", "m_12752_"), "(Lvw;)Lavt;");
    }

    static jobject fromPacket(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fromPacket();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_toPacket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "write", "method_30190", "toPacket", "m_12761_"), "(Lvw;)V");
    }

    static void toPacket(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_toPacket();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_fromNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "read", "method_30183", "fromNbt", "m_12741_"), "(Lub;)Lavt;");
    }

    static jobject fromNbt(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fromNbt();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_writeNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "write", "method_30189", "writeNbt", "m_12759_"), "(Lub;)V");
    }

    static void writeNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_writeNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_copy() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "copy", "method_30178", "copy", "m_12731_"), "()Lavt;");
    }

    static jobject copy(const jobject& obj) {
                
       const auto methodID = methodID_copy();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_copyFrom() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "replaceFrom", "method_30179", "copyFrom", "m_12732_"), "(Lavt;)V");
    }

    static void copyFrom(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_copyFrom();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_RECIPE_BOOK_RECIPEBOOKOPTIONS_HPP