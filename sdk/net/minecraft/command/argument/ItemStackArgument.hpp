// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_ITEMSTACKARGUMENT_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_ITEMSTACKARGUMENT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.ItemStackArgument
 * Remapped: hd
 */
namespace ItemStackArgument {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("hd", "net/minecraft/commands/arguments/item/ItemInput", "net/minecraft/class_2290", "net/minecraft/command/argument/ItemStackArgument", "net/minecraft/src/C_4643_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.command.argument.ItemStackArgument#OVERSTACKED_EXCEPTION
    [[maybe_unused]] static jobject get_field_OVERSTACKED_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ERROR_STACK_TOO_BIG", "field_10797", "OVERSTACKED_EXCEPTION", "f_120972_"), "Lcom/mojang/brigadier/exceptions/Dynamic2CommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.ItemStackArgument#OVERSTACKED_EXCEPTION
    [[maybe_unused]] static void set_field_OVERSTACKED_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ERROR_STACK_TOO_BIG", "field_10797", "OVERSTACKED_EXCEPTION", "f_120972_"), "Lcom/mojang/brigadier/exceptions/Dynamic2CommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.command.argument.ItemStackArgument#item
    static jobject get_field_item(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "item", "field_10796", "item", "f_120973_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.ItemStackArgument#item
    static void set_field_item(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "item", "field_10796", "item", "f_120973_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.command.argument.ItemStackArgument#components
    static jobject get_field_components(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "components", "field_49570", "components", "f_316689_"), "Lkn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.ItemStackArgument#components
    static void set_field_components(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "components", "field_49570", "components", "f_316689_"), "Lkn;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getItem", "method_9785", "getItem", "m_120979_"), "()Lcul;");
    }

    static jobject getItem(const jobject& obj) {
                
       const auto methodID = methodID_getItem();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_createStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createItemStack", "method_9781", "createStack", "m_120980_"), "(IZ)Lcuq;");
    }

    static jobject createStack(const jobject& obj, const jint& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_createStack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_asString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "serialize", "method_9782", "asString", "m_120988_"), "(Ljo$a;)Ljava/lang/String;");
    }

    static jobject asString(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_asString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_componentsAsString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "serializeComponents", "method_57801", "componentsAsString", "m_319662_"), "(Ljo$a;)Ljava/lang/String;");
    }

    static jobject componentsAsString(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_componentsAsString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getIdString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getItemName", "method_41967", "getIdString", "m_235284_"), "()Ljava/lang/String;");
    }

    static jobject getIdString(const jobject& obj) {
                
       const auto methodID = methodID_getIdString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_ITEMSTACKARGUMENT_HPP