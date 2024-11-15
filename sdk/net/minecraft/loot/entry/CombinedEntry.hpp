// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_ENTRY_COMBINEDENTRY_HPP
#define NET_MINECRAFT_LOOT_ENTRY_COMBINEDENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.entry.CombinedEntry
 * Remapped: esa
 */
namespace CombinedEntry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("esa", "net/minecraft/world/level/storage/loot/entries/CompositeEntryBase", "net/minecraft/class_69", "net/minecraft/loot/entry/CombinedEntry", "net/minecraft/src/C_2841_"));
        }
        return cachedClass;
    };

    // getter for protected field net.minecraft.loot.entry.CombinedEntry#children
    static jobject get_field_children(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "children", "field_982", "children", "f_79428_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.loot.entry.CombinedEntry#children
    static void set_field_children(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "children", "field_982", "children", "f_79428_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.loot.entry.CombinedEntry#predicate
    static jobject get_field_predicate(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "composedChildren", "field_983", "predicate", "f_79429_"), "Lerz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.entry.CombinedEntry#predicate
    static void set_field_predicate(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "composedChildren", "field_983", "predicate", "f_79429_"), "Lerz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_validate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "validate", "method_415", "validate", "m_6165_"), "(Lerx;)V");
    }

    static void validate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_validate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_combine() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "compose", "method_394", "combine", "m_5690_"), "(Ljava/util/List;)Lerz;");
    }

    static jobject combine(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_combine();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_expand() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("expand", "expand", "expand", "expand", "m_6562_"), "(Lerr;Ljava/util/function/Consumer;)Z");
    }

    static jboolean expand(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_expand();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_createCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createCodec", "method_53279", "createCodec", "m_294576_"), "(Lesa$a;)Lcom/mojang/serialization/MapCodec;");
    }

    static jobject createCodec(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_createCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_LOOT_ENTRY_COMBINEDENTRY_HPP