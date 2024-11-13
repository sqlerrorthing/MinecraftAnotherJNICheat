// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PREDICATE_COLLECTION_COLLECTIONCOUNTSPREDICATE$MULTIPLE_HPP
#define NET_MINECRAFT_PREDICATE_COLLECTION_COLLECTIONCOUNTSPREDICATE$MULTIPLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.predicate.collection.CollectionCountsPredicate$Multiple
 * Remapped: bc$b
 */
namespace CollectionCountsPredicate$Multiple {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bc$b", "net/minecraft/advancements/critereon/CollectionCountsPredicate$Multiple", "net/minecraft/class_9643$class_9645", "net/minecraft/predicate/collection/CollectionCountsPredicate$Multiple", "net/minecraft/src/C_313265_$C_313794_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.predicate.collection.CollectionCountsPredicate$Multiple#entries
    static jobject get_field_entries(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "entries", "comp_2615", "entries", "f_315031_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.collection.CollectionCountsPredicate$Multiple#entries
    static void set_field_entries(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "entries", "comp_2615", "entries", "f_315031_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "test", "method_59620", "test", "test"), "(Ljava/lang/Iterable;)Z");
    }

    static jboolean test(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getEntries() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "unpack", "method_59613", "getEntries", "m_319753_"), "()Ljava/util/List;");
    }

    static jobject getEntries(const jobject& obj) {
                
       const auto methodID = methodID_getEntries();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__entries() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "entries", "comp_2615", "entries", "f_315031_"), "()Ljava/util/List;");
    }

    static jobject _entries(const jobject& obj) {
                
       const auto methodID = methodID__entries();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_PREDICATE_COLLECTION_COLLECTIONCOUNTSPREDICATE$MULTIPLE_HPP