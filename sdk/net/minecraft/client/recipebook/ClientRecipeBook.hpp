// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RECIPEBOOK_CLIENTRECIPEBOOK_HPP
#define NET_MINECRAFT_CLIENT_RECIPEBOOK_CLIENTRECIPEBOOK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.recipebook.ClientRecipeBook
 * Remapped: fga
 */
namespace ClientRecipeBook {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fga", "net/minecraft/client/ClientRecipeBook", "net/minecraft/class_299", "net/minecraft/client/recipebook/ClientRecipeBook", "net/minecraft/src/C_3375_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.recipebook.ClientRecipeBook#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LOGGER", "field_25622", "LOGGER", "f_90618_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.recipebook.ClientRecipeBook#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LOGGER", "field_25622", "LOGGER", "f_90618_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.recipebook.ClientRecipeBook#resultsByGroup
    static jobject get_field_resultsByGroup(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "collectionsByTab", "field_1638", "resultsByGroup", "f_90619_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.recipebook.ClientRecipeBook#resultsByGroup
    static void set_field_resultsByGroup(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "collectionsByTab", "field_1638", "resultsByGroup", "f_90619_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.recipebook.ClientRecipeBook#orderedResults
    static jobject get_field_orderedResults(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "allCollections", "field_25778", "orderedResults", "f_90620_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.recipebook.ClientRecipeBook#orderedResults
    static void set_field_orderedResults(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "allCollections", "field_25778", "orderedResults", "f_90620_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_reload() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setupCollections", "method_1401", "reload", "m_266394_"), "(Ljava/lang/Iterable;Lka;)V");
    }

    static void reload(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_reload();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_toGroupedMap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "categorizeAndGroupRecipes", "method_30283", "toGroupedMap", "m_90642_"), "(Ljava/lang/Iterable;)Ljava/util/Map;");
    }

    static jobject toGroupedMap(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_toGroupedMap();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getGroupForRecipe() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("g", "getCategory", "method_1400", "getGroupForRecipe", "m_90646_"), "(Lczb;)Lfgw;");
    }

    static jobject getGroupForRecipe(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getGroupForRecipe();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getOrderedResults() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getCollections", "method_1393", "getOrderedResults", "m_90639_"), "()Ljava/util/List;");
    }

    static jobject getOrderedResults(const jobject& obj) {
                
       const auto methodID = methodID_getOrderedResults();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getResultsForGroup() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getCollection", "method_1396", "getResultsForGroup", "m_90623_"), "(Lfgw;)Ljava/util/List;");
    }

    static jobject getResultsForGroup(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getResultsForGroup();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RECIPEBOOK_CLIENTRECIPEBOOK_HPP