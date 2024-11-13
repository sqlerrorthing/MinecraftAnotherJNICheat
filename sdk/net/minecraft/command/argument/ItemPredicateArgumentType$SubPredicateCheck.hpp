// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_ITEMPREDICATEARGUMENTTYPE$SUBPREDICATECHECK_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_ITEMPREDICATEARGUMENTTYPE$SUBPREDICATECHECK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.ItemPredicateArgumentType$SubPredicateCheck
 * Remapped: hf$c
 */
namespace ItemPredicateArgumentType$SubPredicateCheck {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("hf$c", "net/minecraft/commands/arguments/item/ItemPredicateArgument$PredicateWrapper", "net/minecraft/class_2293$class_9446", "net/minecraft/command/argument/ItemPredicateArgumentType$SubPredicateCheck", "net/minecraft/src/C_4645_$C_313748_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.command.argument.ItemPredicateArgumentType$SubPredicateCheck#id
    static jobject get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "id", "comp_2530", "id", "f_316718_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.ItemPredicateArgumentType$SubPredicateCheck#id
    static void set_field_id(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "id", "comp_2530", "id", "f_316718_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.command.argument.ItemPredicateArgumentType$SubPredicateCheck#type
    static jobject get_field_type(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "type", "comp_2531", "type", "f_314434_"), "Lcom/mojang/serialization/Decoder;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.ItemPredicateArgumentType$SubPredicateCheck#type
    static void set_field_type(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "type", "comp_2531", "type", "f_314434_"), "Lcom/mojang/serialization/Decoder;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_createPredicate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "decode", "method_58559", "createPredicate", "m_323868_"), "(Lcom/mojang/brigadier/ImmutableStringReader;Lakp;Luy;)Ljava/util/function/Predicate;");
    }

    static jobject createPredicate(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_createPredicate();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__id() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "id", "comp_2530", "id", "f_316718_"), "()Lakr;");
    }

    static jobject _id(const jobject& obj) {
                
       const auto methodID = methodID__id();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__type() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "type", "comp_2531", "type", "f_314434_"), "()Lcom/mojang/serialization/Decoder;");
    }

    static jobject _type(const jobject& obj) {
                
       const auto methodID = methodID__type();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_ITEMPREDICATEARGUMENTTYPE$SUBPREDICATECHECK_HPP