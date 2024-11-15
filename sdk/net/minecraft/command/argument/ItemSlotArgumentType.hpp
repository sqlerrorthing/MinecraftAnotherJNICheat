// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_ITEMSLOTARGUMENTTYPE_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_ITEMSLOTARGUMENTTYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.ItemSlotArgumentType
 * Remapped: gb
 */
namespace ItemSlotArgumentType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gb", "net/minecraft/commands/arguments/SlotArgument", "net/minecraft/class_2240", "net/minecraft/command/argument/ItemSlotArgumentType", "net/minecraft/src/C_4195_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.command.argument.ItemSlotArgumentType#EXAMPLES
    [[maybe_unused]] static jobject get_field_EXAMPLES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EXAMPLES", "field_9956", "EXAMPLES", "f_111271_"), "Ljava/util/Collection;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.ItemSlotArgumentType#EXAMPLES
    [[maybe_unused]] static void set_field_EXAMPLES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EXAMPLES", "field_9956", "EXAMPLES", "f_111271_"), "Ljava/util/Collection;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.command.argument.ItemSlotArgumentType#UNKNOWN_SLOT_EXCEPTION
    [[maybe_unused]] static jobject get_field_UNKNOWN_SLOT_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ERROR_UNKNOWN_SLOT", "field_9955", "UNKNOWN_SLOT_EXCEPTION", "f_111272_"), "Lcom/mojang/brigadier/exceptions/DynamicCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.ItemSlotArgumentType#UNKNOWN_SLOT_EXCEPTION
    [[maybe_unused]] static void set_field_UNKNOWN_SLOT_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ERROR_UNKNOWN_SLOT", "field_9955", "UNKNOWN_SLOT_EXCEPTION", "f_111272_"), "Lcom/mojang/brigadier/exceptions/DynamicCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.command.argument.ItemSlotArgumentType#ONLY_SINGLE_ALLOWED_EXCEPTION
    [[maybe_unused]] static jobject get_field_ONLY_SINGLE_ALLOWED_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ERROR_ONLY_SINGLE_SLOT_ALLOWED", "field_49766", "ONLY_SINGLE_ALLOWED_EXCEPTION", "f_315475_"), "Lcom/mojang/brigadier/exceptions/DynamicCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.ItemSlotArgumentType#ONLY_SINGLE_ALLOWED_EXCEPTION
    [[maybe_unused]] static void set_field_ONLY_SINGLE_ALLOWED_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ERROR_ONLY_SINGLE_SLOT_ALLOWED", "field_49766", "ONLY_SINGLE_ALLOWED_EXCEPTION", "f_315475_"), "Lcom/mojang/brigadier/exceptions/DynamicCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_itemSlot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "slot", "method_9473", "itemSlot", "m_111276_"), "()Lgb;");
    }

    static jobject itemSlot() {
       const auto clazz = self();
       const auto methodID = methodID_itemSlot();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_getItemSlot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getSlot", "method_9469", "getItemSlot", "m_111279_"), "(Lcom/mojang/brigadier/context/CommandContext;Ljava/lang/String;)I");
    }

    static jint getItemSlot(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getItemSlot();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_parse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "parse", "method_9470", "parse", "parse"), "(Lcom/mojang/brigadier/StringReader;)Ljava/lang/Integer;");
    }

    static jobject parse(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_parse();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
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

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_ITEMSLOTARGUMENTTYPE_HPP