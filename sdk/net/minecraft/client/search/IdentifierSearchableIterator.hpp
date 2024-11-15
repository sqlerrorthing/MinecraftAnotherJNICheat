// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SEARCH_IDENTIFIERSEARCHABLEITERATOR_HPP
#define NET_MINECRAFT_CLIENT_SEARCH_IDENTIFIERSEARCHABLEITERATOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.search.IdentifierSearchableIterator
 * Remapped: guh
 */
namespace IdentifierSearchableIterator {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("guh", "net/minecraft/client/searchtree/IntersectionIterator", "net/minecraft/class_1122", "net/minecraft/client/search/IdentifierSearchableIterator", "net/minecraft/src/C_213440_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.search.IdentifierSearchableIterator#namespacesIterator
    static jobject get_field_namespacesIterator(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "firstIterator", "field_5490", "namespacesIterator", "f_235174_"), "Lcom/google/common/collect/PeekingIterator;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.search.IdentifierSearchableIterator#namespacesIterator
    static void set_field_namespacesIterator(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "firstIterator", "field_5490", "namespacesIterator", "f_235174_"), "Lcom/google/common/collect/PeekingIterator;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.search.IdentifierSearchableIterator#pathsIterator
    static jobject get_field_pathsIterator(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "secondIterator", "field_5491", "pathsIterator", "f_235175_"), "Lcom/google/common/collect/PeekingIterator;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.search.IdentifierSearchableIterator#pathsIterator
    static void set_field_pathsIterator(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "secondIterator", "field_5491", "pathsIterator", "f_235175_"), "Lcom/google/common/collect/PeekingIterator;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.search.IdentifierSearchableIterator#lastIndexComparator
    static jobject get_field_lastIndexComparator(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "comparator", "field_5492", "lastIndexComparator", "f_235176_"), "Ljava/util/Comparator;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.search.IdentifierSearchableIterator#lastIndexComparator
    static void set_field_lastIndexComparator(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "comparator", "field_5492", "lastIndexComparator", "f_235176_"), "Ljava/util/Comparator;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_computeNext() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("computeNext", "computeNext", "", "", "computeNext"), "()Ljava/lang/Object;");
    }

    static jobject computeNext(const jobject& obj) {
                
       const auto methodID = methodID_computeNext();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_SEARCH_IDENTIFIERSEARCHABLEITERATOR_HPP