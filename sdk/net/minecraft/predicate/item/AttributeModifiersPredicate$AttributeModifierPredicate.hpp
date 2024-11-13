// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PREDICATE_ITEM_ATTRIBUTEMODIFIERSPREDICATE$ATTRIBUTEMODIFIERPREDICATE_HPP
#define NET_MINECRAFT_PREDICATE_ITEM_ATTRIBUTEMODIFIERSPREDICATE$ATTRIBUTEMODIFIERPREDICATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.predicate.item.AttributeModifiersPredicate$AttributeModifierPredicate
 * Remapped: ch$a
 */
namespace AttributeModifiersPredicate$AttributeModifierPredicate {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ch$a", "net/minecraft/advancements/critereon/ItemAttributeModifiersPredicate$EntryPredicate", "net/minecraft/class_9653$class_9654", "net/minecraft/predicate/item/AttributeModifiersPredicate$AttributeModifierPredicate", "net/minecraft/src/C_313792_$C_313380_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.predicate.item.AttributeModifiersPredicate$AttributeModifierPredicate#attribute
    static jobject get_field_attribute(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "attribute", "comp_2624", "attribute", "f_315176_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.item.AttributeModifiersPredicate$AttributeModifierPredicate#attribute
    static void set_field_attribute(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "attribute", "comp_2624", "attribute", "f_315176_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.item.AttributeModifiersPredicate$AttributeModifierPredicate#id
    static jobject get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "id", "comp_2625", "id", "f_315360_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.item.AttributeModifiersPredicate$AttributeModifierPredicate#id
    static void set_field_id(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "id", "comp_2625", "id", "f_315360_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.item.AttributeModifiersPredicate$AttributeModifierPredicate#amount
    static jobject get_field_amount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "amount", "comp_2627", "amount", "f_316857_"), "Ldh$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.item.AttributeModifiersPredicate$AttributeModifierPredicate#amount
    static void set_field_amount(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "amount", "comp_2627", "amount", "f_316857_"), "Ldh$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.item.AttributeModifiersPredicate$AttributeModifierPredicate#operation
    static jobject get_field_operation(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "operation", "comp_2628", "operation", "f_315016_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.item.AttributeModifiersPredicate$AttributeModifierPredicate#operation
    static void set_field_operation(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "operation", "comp_2628", "operation", "f_315016_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.item.AttributeModifiersPredicate$AttributeModifierPredicate#slot
    static jobject get_field_slot(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "slot", "comp_2629", "slot", "f_314217_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.item.AttributeModifiersPredicate$AttributeModifierPredicate#slot
    static void set_field_slot(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "slot", "comp_2629", "slot", "f_314217_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.predicate.item.AttributeModifiersPredicate$AttributeModifierPredicate#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_51379", "CODEC", "f_313929_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.predicate.item.AttributeModifiersPredicate$AttributeModifierPredicate#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_51379", "CODEC", "f_313929_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "test", "method_59671", "test", "test"), "(Lcxn$b;)Z");
    }

    static jboolean test(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__attribute() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "attribute", "comp_2624", "attribute", "f_315176_"), "()Ljava/util/Optional;");
    }

    static jobject _attribute(const jobject& obj) {
                
       const auto methodID = methodID__attribute();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__id() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "id", "comp_2625", "id", "f_315360_"), "()Ljava/util/Optional;");
    }

    static jobject _id(const jobject& obj) {
                
       const auto methodID = methodID__id();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__amount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "amount", "comp_2627", "amount", "f_316857_"), "()Ldh$c;");
    }

    static jobject _amount(const jobject& obj) {
                
       const auto methodID = methodID__amount();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__operation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "operation", "comp_2628", "operation", "f_315016_"), "()Ljava/util/Optional;");
    }

    static jobject _operation(const jobject& obj) {
                
       const auto methodID = methodID__operation();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__slot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "slot", "comp_2629", "slot", "f_314217_"), "()Ljava/util/Optional;");
    }

    static jobject _slot(const jobject& obj) {
                
       const auto methodID = methodID__slot();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_PREDICATE_ITEM_ATTRIBUTEMODIFIERSPREDICATE$ATTRIBUTEMODIFIERPREDICATE_HPP