// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PREDICATE_ITEM_ITEMPREDICATE$BUILDER_HPP
#define NET_MINECRAFT_PREDICATE_ITEM_ITEMPREDICATE$BUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.predicate.item.ItemPredicate$Builder
 * Remapped: cs$a
 */
namespace ItemPredicate$Builder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cs$a", "net/minecraft/advancements/critereon/ItemPredicate$Builder", "net/minecraft/class_2073$class_2074", "net/minecraft/predicate/item/ItemPredicate$Builder", "net/minecraft/src/C_1529_$C_1530_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.predicate.item.ItemPredicate$Builder#item
    static jobject get_field_item(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "items", "field_9650", "item", "f_151440_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.item.ItemPredicate$Builder#item
    static void set_field_item(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "items", "field_9650", "item", "f_151440_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.item.ItemPredicate$Builder#count
    static jobject get_field_count(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "count", "field_9648", "count", "f_45063_"), "Ldh$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.item.ItemPredicate$Builder#count
    static void set_field_count(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "count", "field_9648", "count", "f_45063_"), "Ldh$d;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.item.ItemPredicate$Builder#componentPredicate
    static jobject get_field_componentPredicate(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "components", "field_49235", "componentPredicate", "f_314893_"), "Lko;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.item.ItemPredicate$Builder#componentPredicate
    static void set_field_componentPredicate(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "components", "field_49235", "componentPredicate", "f_314893_"), "Lko;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.item.ItemPredicate$Builder#subPredicates
    static jobject get_field_subPredicates(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "subPredicates", "field_49803", "subPredicates", "f_315904_"), "Lcom/google/common/collect/ImmutableMap$Builder;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.item.ItemPredicate$Builder#subPredicates
    static void set_field_subPredicates(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "subPredicates", "field_49803", "subPredicates", "f_315904_"), "Lcom/google/common/collect/ImmutableMap$Builder;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "item", "method_8973", "create", "m_45068_"), "()Lcs$a;");
    }

    static jobject create() {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_items() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "of", "method_8977", "items", "m_151445_"), "([Ldcv;)Lcs$a;");
    }

    static jobject items(const jobject& obj, const jarray& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_items();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_tag() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "of", "method_8975", "tag", "m_204145_"), "(Lawu;)Lcs$a;");
    }

    static jobject tag(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_tag();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__count() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "withCount", "method_35233", "count", "m_151443_"), "(Ldh$d;)Lcs$a;");
    }

    static jobject _count(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__count();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_subPredicate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "withSubPredicate", "method_58179", "subPredicate", "m_323078_"), "(Lct$a;Lct;)Lcs$a;");
    }

    static jobject subPredicate(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_subPredicate();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_component() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hasComponents", "method_57299", "component", "m_324309_"), "(Lko;)Lcs$a;");
    }

    static jobject component(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_component();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "build", "method_8976", "build", "m_45077_"), "()Lcs;");
    }

    static jobject build(const jobject& obj) {
                
       const auto methodID = methodID_build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_PREDICATE_ITEM_ITEMPREDICATE$BUILDER_HPP