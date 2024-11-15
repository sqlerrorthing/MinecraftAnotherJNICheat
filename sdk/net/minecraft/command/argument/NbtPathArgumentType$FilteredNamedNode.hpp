// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_NBTPATHARGUMENTTYPE$FILTEREDNAMEDNODE_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_NBTPATHARGUMENTTYPE$FILTEREDNAMEDNODE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.NbtPathArgumentType$FilteredNamedNode
 * Remapped: fl$e
 */
namespace NbtPathArgumentType$FilteredNamedNode {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fl$e", "net/minecraft/commands/arguments/NbtPathArgument$MatchObjectNode", "net/minecraft/class_2203$class_2208", "net/minecraft/command/argument/NbtPathArgumentType$FilteredNamedNode", "net/minecraft/src/C_3685_$C_3690_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.command.argument.NbtPathArgumentType$FilteredNamedNode#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "name", "field_9906", "name", "f_99584_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.NbtPathArgumentType$FilteredNamedNode#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "name", "field_9906", "name", "f_99584_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.command.argument.NbtPathArgumentType$FilteredNamedNode#filter
    static jobject get_field_filter(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "pattern", "field_9907", "filter", "f_99585_"), "Lub;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.NbtPathArgumentType$FilteredNamedNode#filter
    static void set_field_filter(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "pattern", "field_9907", "filter", "f_99585_"), "Lub;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.command.argument.NbtPathArgumentType$FilteredNamedNode#predicate
    static jobject get_field_predicate(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "predicate", "field_9908", "predicate", "f_99586_"), "Ljava/util/function/Predicate;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.NbtPathArgumentType$FilteredNamedNode#predicate
    static void set_field_predicate(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "predicate", "field_9908", "predicate", "f_99586_"), "Ljava/util/function/Predicate;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTag", "method_9378", "get", "m_7273_"), "(Luy;Ljava/util/List;)V");
    }

    static void get(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_get();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getOrInit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getOrCreateTag", "method_9380", "getOrInit", "m_7876_"), "(Luy;Ljava/util/function/Supplier;Ljava/util/List;)V");
    }

    static void getOrInit(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getOrInit();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_init() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createPreferredParentTag", "method_9382", "init", "m_7510_"), "()Luy;");
    }

    static jobject init(const jobject& obj) {
                
       const auto methodID = methodID_init();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_set() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setTag", "method_9376", "set", "m_5571_"), "(Luy;Ljava/util/function/Supplier;)I");
    }

    static jint set(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_set();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_clear() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "removeTag", "method_9383", "clear", "m_6015_"), "(Luy;)I");
    }

    static jint clear(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_clear();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_NBTPATHARGUMENTTYPE$FILTEREDNAMEDNODE_HPP