// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_ITEMSTRINGREADER$ITEMRESULT_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_ITEMSTRINGREADER$ITEMRESULT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.ItemStringReader$ItemResult
 * Remapped: he$a
 */
namespace ItemStringReader$ItemResult {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("he$a", "net/minecraft/commands/arguments/item/ItemParser$ItemResult", "net/minecraft/class_2291$class_7215", "net/minecraft/command/argument/ItemStringReader$ItemResult", "net/minecraft/src/C_4644_$C_213449_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.command.argument.ItemStringReader$ItemResult#item
    static jobject get_field_item(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "item", "comp_628", "item", "f_235328_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.ItemStringReader$ItemResult#item
    static void set_field_item(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "item", "comp_628", "item", "f_235328_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.command.argument.ItemStringReader$ItemResult#components
    static jobject get_field_components(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "components", "comp_2439", "components", "f_314839_"), "Lkn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.ItemStringReader$ItemResult#components
    static void set_field_components(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "components", "comp_2439", "components", "f_314839_"), "Lkn;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__item() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "item", "comp_628", "item", "f_235328_"), "()Ljm;");
    }

    static jobject _item(const jobject& obj) {
                
       const auto methodID = methodID__item();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__components() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "components", "comp_2439", "components", "f_314839_"), "()Lkn;");
    }

    static jobject _components(const jobject& obj) {
                
       const auto methodID = methodID__components();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_ITEMSTRINGREADER$ITEMRESULT_HPP