// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PREDICATE_ITEM_WRITABLEBOOKCONTENTPREDICATE$RAWSTRINGPREDICATE_HPP
#define NET_MINECRAFT_PREDICATE_ITEM_WRITABLEBOOKCONTENTPREDICATE$RAWSTRINGPREDICATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.predicate.item.WritableBookContentPredicate$RawStringPredicate
 * Remapped: cx$a
 */
namespace WritableBookContentPredicate$RawStringPredicate {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cx$a", "net/minecraft/advancements/critereon/ItemWritableBookPredicate$PagePredicate", "net/minecraft/class_9661$class_9662", "net/minecraft/predicate/item/WritableBookContentPredicate$RawStringPredicate", "net/minecraft/src/C_313734_$C_313713_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.predicate.item.WritableBookContentPredicate$RawStringPredicate#contents
    static jobject get_field_contents(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "contents", "comp_2641", "contents", "f_316074_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.item.WritableBookContentPredicate$RawStringPredicate#contents
    static void set_field_contents(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "contents", "comp_2641", "contents", "f_316074_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.predicate.item.WritableBookContentPredicate$RawStringPredicate#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_51396", "CODEC", "f_314632_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.predicate.item.WritableBookContentPredicate$RawStringPredicate#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_51396", "CODEC", "f_314632_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "test", "method_59689", "test", "test"), "(Larl;)Z");
    }

    static jboolean test(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__contents() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "contents", "comp_2641", "contents", "f_316074_"), "()Ljava/lang/String;");
    }

    static jobject _contents(const jobject& obj) {
                
       const auto methodID = methodID__contents();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_PREDICATE_ITEM_WRITABLEBOOKCONTENTPREDICATE$RAWSTRINGPREDICATE_HPP