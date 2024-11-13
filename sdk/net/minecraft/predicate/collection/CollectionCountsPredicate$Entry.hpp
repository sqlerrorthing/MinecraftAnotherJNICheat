// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PREDICATE_COLLECTION_COLLECTIONCOUNTSPREDICATE$ENTRY_HPP
#define NET_MINECRAFT_PREDICATE_COLLECTION_COLLECTIONCOUNTSPREDICATE$ENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.predicate.collection.CollectionCountsPredicate$Entry
 * Remapped: bc$a
 */
namespace CollectionCountsPredicate$Entry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bc$a", "net/minecraft/advancements/critereon/CollectionCountsPredicate$Entry", "net/minecraft/class_9643$class_9644", "net/minecraft/predicate/collection/CollectionCountsPredicate$Entry", "net/minecraft/src/C_313265_$C_313336_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.predicate.collection.CollectionCountsPredicate$Entry#test
    static jobject get_field_test(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "test", "comp_2613", "test", "f_313895_"), "Ljava/util/function/Predicate;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.collection.CollectionCountsPredicate$Entry#test
    static void set_field_test(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "test", "comp_2613", "test", "f_313895_"), "Ljava/util/function/Predicate;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.collection.CollectionCountsPredicate$Entry#count
    static jobject get_field_count(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "count", "comp_2614", "count", "f_315065_"), "Ldh$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.collection.CollectionCountsPredicate$Entry#count
    static void set_field_count(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "count", "comp_2614", "count", "f_315065_"), "Ldh$d;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_createCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_59617", "createCodec", "m_319511_"), "(Lcom/mojang/serialization/Codec;)Lcom/mojang/serialization/Codec;");
    }

    static jobject createCodec(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_createCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "test", "method_59619", "test", "m_322881_"), "(Ljava/lang/Iterable;)Z");
    }

    static jboolean _test(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID___test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "test", "comp_2613", "test", "f_313895_"), "()Ljava/util/function/Predicate;");
    }

    static jobject __test(const jobject& obj) {
                
       const auto methodID = methodID___test();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__count() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "count", "comp_2614", "count", "f_315065_"), "()Ldh$d;");
    }

    static jobject _count(const jobject& obj) {
                
       const auto methodID = methodID__count();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_PREDICATE_COLLECTION_COLLECTIONCOUNTSPREDICATE$ENTRY_HPP