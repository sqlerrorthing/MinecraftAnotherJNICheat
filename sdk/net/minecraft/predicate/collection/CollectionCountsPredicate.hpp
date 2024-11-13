// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PREDICATE_COLLECTION_COLLECTIONCOUNTSPREDICATE_HPP
#define NET_MINECRAFT_PREDICATE_COLLECTION_COLLECTIONCOUNTSPREDICATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.predicate.collection.CollectionCountsPredicate
 * Remapped: bc
 */
namespace CollectionCountsPredicate {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bc", "net/minecraft/advancements/critereon/CollectionCountsPredicate", "net/minecraft/class_9643", "net/minecraft/predicate/collection/CollectionCountsPredicate", "net/minecraft/src/C_313265_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getEntries() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "unpack", "method_59613", "getEntries", "m_319753_"), "()Ljava/util/List;");
    }

    static jobject getEntries(const jobject& obj) {
                
       const auto methodID = methodID_getEntries();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_createCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_59614", "createCodec", "m_321426_"), "(Lcom/mojang/serialization/Codec;)Lcom/mojang/serialization/Codec;");
    }

    static jobject createCodec(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_createCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "of", "method_59616", "create", "m_323251_"), "([Lbc$a;)Lbc;");
    }

    static jobject create(const jarray& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "of", "method_59615", "create", "m_319310_"), "(Ljava/util/List;)Lbc;");
    }

    static jobject _create(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_PREDICATE_COLLECTION_COLLECTIONCOUNTSPREDICATE_HPP