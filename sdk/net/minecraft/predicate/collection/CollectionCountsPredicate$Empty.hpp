// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PREDICATE_COLLECTION_COLLECTIONCOUNTSPREDICATE$EMPTY_HPP
#define NET_MINECRAFT_PREDICATE_COLLECTION_COLLECTIONCOUNTSPREDICATE$EMPTY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.predicate.collection.CollectionCountsPredicate$Empty
 * Remapped: bc$d
 */
namespace CollectionCountsPredicate$Empty {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bc$d", "net/minecraft/advancements/critereon/CollectionCountsPredicate$Zero", "net/minecraft/class_9643$class_9647", "net/minecraft/predicate/collection/CollectionCountsPredicate$Empty", "net/minecraft/src/C_313265_$C_313311_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "test", "method_59622", "test", "test"), "(Ljava/lang/Iterable;)Z");
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
    
};

#endif // NET_MINECRAFT_PREDICATE_COLLECTION_COLLECTIONCOUNTSPREDICATE$EMPTY_HPP