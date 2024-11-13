// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_ITEMPREDICATEARGUMENTTYPE_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_ITEMPREDICATEARGUMENTTYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.ItemPredicateArgumentType
 * Remapped: hf
 */
namespace ItemPredicateArgumentType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("hf", "net/minecraft/commands/arguments/item/ItemPredicateArgument", "net/minecraft/class_2293", "net/minecraft/command/argument/ItemPredicateArgumentType", "net/minecraft/src/C_4645_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.command.argument.ItemPredicateArgumentType#EXAMPLES
    [[maybe_unused]] static jobject get_field_EXAMPLES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EXAMPLES", "field_10812", "EXAMPLES", "f_121033_"), "Ljava/util/Collection;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.ItemPredicateArgumentType#EXAMPLES
    [[maybe_unused]] static void set_field_EXAMPLES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EXAMPLES", "field_10812", "EXAMPLES", "f_121033_"), "Ljava/util/Collection;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.command.argument.ItemPredicateArgumentType#INVALID_ITEM_ID_EXCEPTION
    [[maybe_unused]] static jobject get_field_INVALID_ITEM_ID_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ERROR_UNKNOWN_ITEM", "field_50056", "INVALID_ITEM_ID_EXCEPTION", "f_315167_"), "Lcom/mojang/brigadier/exceptions/DynamicCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.command.argument.ItemPredicateArgumentType#INVALID_ITEM_ID_EXCEPTION
    [[maybe_unused]] static void set_field_INVALID_ITEM_ID_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ERROR_UNKNOWN_ITEM", "field_50056", "INVALID_ITEM_ID_EXCEPTION", "f_315167_"), "Lcom/mojang/brigadier/exceptions/DynamicCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.command.argument.ItemPredicateArgumentType#UNKNOWN_ITEM_TAG_EXCEPTION
    [[maybe_unused]] static jobject get_field_UNKNOWN_ITEM_TAG_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ERROR_UNKNOWN_TAG", "field_50057", "UNKNOWN_ITEM_TAG_EXCEPTION", "f_315281_"), "Lcom/mojang/brigadier/exceptions/DynamicCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.command.argument.ItemPredicateArgumentType#UNKNOWN_ITEM_TAG_EXCEPTION
    [[maybe_unused]] static void set_field_UNKNOWN_ITEM_TAG_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ERROR_UNKNOWN_TAG", "field_50057", "UNKNOWN_ITEM_TAG_EXCEPTION", "f_315281_"), "Lcom/mojang/brigadier/exceptions/DynamicCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.command.argument.ItemPredicateArgumentType#UNKNOWN_ITEM_COMPONENT_EXCEPTION
    [[maybe_unused]] static jobject get_field_UNKNOWN_ITEM_COMPONENT_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ERROR_UNKNOWN_COMPONENT", "field_50058", "UNKNOWN_ITEM_COMPONENT_EXCEPTION", "f_315273_"), "Lcom/mojang/brigadier/exceptions/DynamicCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.command.argument.ItemPredicateArgumentType#UNKNOWN_ITEM_COMPONENT_EXCEPTION
    [[maybe_unused]] static void set_field_UNKNOWN_ITEM_COMPONENT_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ERROR_UNKNOWN_COMPONENT", "field_50058", "UNKNOWN_ITEM_COMPONENT_EXCEPTION", "f_315273_"), "Lcom/mojang/brigadier/exceptions/DynamicCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.command.argument.ItemPredicateArgumentType#MALFORMED_ITEM_COMPONENT_EXCEPTION
    [[maybe_unused]] static jobject get_field_MALFORMED_ITEM_COMPONENT_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "ERROR_MALFORMED_COMPONENT", "field_50059", "MALFORMED_ITEM_COMPONENT_EXCEPTION", "f_314770_"), "Lcom/mojang/brigadier/exceptions/Dynamic2CommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.command.argument.ItemPredicateArgumentType#MALFORMED_ITEM_COMPONENT_EXCEPTION
    [[maybe_unused]] static void set_field_MALFORMED_ITEM_COMPONENT_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "ERROR_MALFORMED_COMPONENT", "field_50059", "MALFORMED_ITEM_COMPONENT_EXCEPTION", "f_314770_"), "Lcom/mojang/brigadier/exceptions/Dynamic2CommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.command.argument.ItemPredicateArgumentType#UNKNOWN_ITEM_PREDICATE_EXCEPTION
    [[maybe_unused]] static jobject get_field_UNKNOWN_ITEM_PREDICATE_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "ERROR_UNKNOWN_PREDICATE", "field_50060", "UNKNOWN_ITEM_PREDICATE_EXCEPTION", "f_315940_"), "Lcom/mojang/brigadier/exceptions/DynamicCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.command.argument.ItemPredicateArgumentType#UNKNOWN_ITEM_PREDICATE_EXCEPTION
    [[maybe_unused]] static void set_field_UNKNOWN_ITEM_PREDICATE_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "ERROR_UNKNOWN_PREDICATE", "field_50060", "UNKNOWN_ITEM_PREDICATE_EXCEPTION", "f_315940_"), "Lcom/mojang/brigadier/exceptions/DynamicCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.command.argument.ItemPredicateArgumentType#MALFORMED_ITEM_PREDICATE_EXCEPTION
    [[maybe_unused]] static jobject get_field_MALFORMED_ITEM_PREDICATE_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "ERROR_MALFORMED_PREDICATE", "field_50061", "MALFORMED_ITEM_PREDICATE_EXCEPTION", "f_315982_"), "Lcom/mojang/brigadier/exceptions/Dynamic2CommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.command.argument.ItemPredicateArgumentType#MALFORMED_ITEM_PREDICATE_EXCEPTION
    [[maybe_unused]] static void set_field_MALFORMED_ITEM_PREDICATE_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "ERROR_MALFORMED_PREDICATE", "field_50061", "MALFORMED_ITEM_PREDICATE_EXCEPTION", "f_315982_"), "Lcom/mojang/brigadier/exceptions/Dynamic2CommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.command.argument.ItemPredicateArgumentType#COUNT_ID
    [[maybe_unused]] static jobject get_field_COUNT_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "COUNT_ID", "field_50062", "COUNT_ID", "f_314529_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.ItemPredicateArgumentType#COUNT_ID
    [[maybe_unused]] static void set_field_COUNT_ID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "COUNT_ID", "field_50062", "COUNT_ID", "f_314529_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.command.argument.ItemPredicateArgumentType#SPECIAL_COMPONENT_CHECKS
    [[maybe_unused]] static jobject get_field_SPECIAL_COMPONENT_CHECKS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "PSEUDO_COMPONENTS", "field_50063", "SPECIAL_COMPONENT_CHECKS", "f_315330_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.command.argument.ItemPredicateArgumentType#SPECIAL_COMPONENT_CHECKS
    [[maybe_unused]] static void set_field_SPECIAL_COMPONENT_CHECKS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "PSEUDO_COMPONENTS", "field_50063", "SPECIAL_COMPONENT_CHECKS", "f_315330_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.command.argument.ItemPredicateArgumentType#SPECIAL_SUB_PREDICATE_CHECKS
    [[maybe_unused]] static jobject get_field_SPECIAL_SUB_PREDICATE_CHECKS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "PSEUDO_PREDICATES", "field_50064", "SPECIAL_SUB_PREDICATE_CHECKS", "f_315932_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.command.argument.ItemPredicateArgumentType#SPECIAL_SUB_PREDICATE_CHECKS
    [[maybe_unused]] static void set_field_SPECIAL_SUB_PREDICATE_CHECKS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "PSEUDO_PREDICATES", "field_50064", "SPECIAL_SUB_PREDICATE_CHECKS", "f_315932_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.command.argument.ItemPredicateArgumentType#parser
    static jobject get_field_parser(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "grammarWithContext", "field_50065", "parser", "f_316699_"), "Lbmp;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.ItemPredicateArgumentType#parser
    static void set_field_parser(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "grammarWithContext", "field_50065", "parser", "f_316699_"), "Lbmp;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_itemPredicate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "itemPredicate", "method_9801", "itemPredicate", "m_235353_"), "(Lep;)Lhf;");
    }

    static jobject itemPredicate(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_itemPredicate();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_parse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "parse", "method_9800", "parse", "parse"), "(Lcom/mojang/brigadier/StringReader;)Lhf$d;");
    }

    static jobject parse(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_parse();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getItemStackPredicate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getItemPredicate", "method_9804", "getItemStackPredicate", "m_121040_"), "(Lcom/mojang/brigadier/context/CommandContext;Ljava/lang/String;)Lhf$d;");
    }

    static jobject getItemStackPredicate(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getItemStackPredicate();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_listSuggestions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("listSuggestions", "listSuggestions", "listSuggestions", "listSuggestions", "listSuggestions"), "(Lcom/mojang/brigadier/context/CommandContext;Lcom/mojang/brigadier/suggestion/SuggestionsBuilder;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject listSuggestions(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_listSuggestions();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getExamples() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("getExamples", "getExamples", "", "", "getExamples"), "()Ljava/util/Collection;");
    }

    static jobject getExamples(const jobject& obj) {
                
       const auto methodID = methodID_getExamples();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_ITEMPREDICATEARGUMENTTYPE_HPP