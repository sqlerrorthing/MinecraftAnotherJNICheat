// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PREDICATE_COLLECTION_COLLECTIONCONTAINSPREDICATE_HPP
#define NET_MINECRAFT_PREDICATE_COLLECTION_COLLECTIONCONTAINSPREDICATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.predicate.collection.CollectionContainsPredicate
 * Remapped: bb
 */
namespace CollectionContainsPredicate {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bb", "net/minecraft/advancements/critereon/CollectionContentsPredicate", "net/minecraft/class_9639", "net/minecraft/predicate/collection/CollectionContainsPredicate", "net/minecraft/src/C_313317_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getPredicates() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "unpack", "method_59605", "getPredicates", "m_319415_"), "()Ljava/util/List;");
    }

    static jobject getPredicates(const jobject& obj) {
                
       const auto methodID = methodID_getPredicates();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_createCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_59606", "createCodec", "m_323600_"), "(Lcom/mojang/serialization/Codec;)Lcom/mojang/serialization/Codec;");
    }

    static jobject createCodec(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_createCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "of", "method_59608", "create", "m_320641_"), "([Ljava/util/function/Predicate;)Lbb;");
    }

    static jobject create(const jarray& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "of", "method_59607", "create", "m_322502_"), "(Ljava/util/List;)Lbb;");
    }

    static jobject _create(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_PREDICATE_COLLECTION_COLLECTIONCONTAINSPREDICATE_HPP