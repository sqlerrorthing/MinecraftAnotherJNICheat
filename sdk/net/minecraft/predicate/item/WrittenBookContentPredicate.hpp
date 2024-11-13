// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PREDICATE_ITEM_WRITTENBOOKCONTENTPREDICATE_HPP
#define NET_MINECRAFT_PREDICATE_ITEM_WRITTENBOOKCONTENTPREDICATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.predicate.item.WrittenBookContentPredicate
 * Remapped: cy
 */
namespace WrittenBookContentPredicate {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cy", "net/minecraft/advancements/critereon/ItemWrittenBookPredicate", "net/minecraft/class_9663", "net/minecraft/predicate/item/WrittenBookContentPredicate", "net/minecraft/src/C_313433_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.predicate.item.WrittenBookContentPredicate#pages
    static jobject get_field_pages(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "pages", "comp_2642", "pages", "f_314561_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.item.WrittenBookContentPredicate#pages
    static void set_field_pages(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "pages", "comp_2642", "pages", "f_314561_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.item.WrittenBookContentPredicate#author
    static jobject get_field_author(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "author", "comp_2643", "author", "f_315536_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.item.WrittenBookContentPredicate#author
    static void set_field_author(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "author", "comp_2643", "author", "f_315536_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.item.WrittenBookContentPredicate#title
    static jobject get_field_title(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "title", "comp_2644", "title", "f_314392_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.item.WrittenBookContentPredicate#title
    static void set_field_title(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "title", "comp_2644", "title", "f_314392_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.item.WrittenBookContentPredicate#generation
    static jobject get_field_generation(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "generation", "comp_2645", "generation", "f_316125_"), "Ldh$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.item.WrittenBookContentPredicate#generation
    static void set_field_generation(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "generation", "comp_2645", "generation", "f_316125_"), "Ldh$d;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.item.WrittenBookContentPredicate#resolved
    static jobject get_field_resolved(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "resolved", "comp_2646", "resolved", "f_315350_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.item.WrittenBookContentPredicate#resolved
    static void set_field_resolved(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "resolved", "comp_2646", "resolved", "f_315350_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.predicate.item.WrittenBookContentPredicate#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_51400", "CODEC", "f_314892_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.predicate.item.WrittenBookContentPredicate#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_51400", "CODEC", "f_314892_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getComponentType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "componentType", "method_58163", "getComponentType", "m_318698_"), "()Lkp;");
    }

    static jobject getComponentType(const jobject& obj) {
                
       const auto methodID = methodID_getComponentType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "matches", "method_59697", "test", "m_318913_"), "(Lcuq;Lcyb;)Z");
    }

    static jboolean test(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__pages() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "pages", "comp_2642", "pages", "f_314561_"), "()Ljava/util/Optional;");
    }

    static jobject _pages(const jobject& obj) {
                
       const auto methodID = methodID__pages();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__author() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "author", "comp_2643", "author", "f_315536_"), "()Ljava/util/Optional;");
    }

    static jobject _author(const jobject& obj) {
                
       const auto methodID = methodID__author();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__title() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "title", "comp_2644", "title", "f_314392_"), "()Ljava/util/Optional;");
    }

    static jobject _title(const jobject& obj) {
                
       const auto methodID = methodID__title();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__generation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "generation", "comp_2645", "generation", "f_316125_"), "()Ldh$d;");
    }

    static jobject _generation(const jobject& obj) {
                
       const auto methodID = methodID__generation();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__resolved() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "resolved", "comp_2646", "resolved", "f_315350_"), "()Ljava/util/Optional;");
    }

    static jobject _resolved(const jobject& obj) {
                
       const auto methodID = methodID__resolved();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_PREDICATE_ITEM_WRITTENBOOKCONTENTPREDICATE_HPP