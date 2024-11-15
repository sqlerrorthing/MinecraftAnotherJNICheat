// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_FUNCTION_EXPANDEDMACRO_HPP
#define NET_MINECRAFT_SERVER_FUNCTION_EXPANDEDMACRO_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.function.ExpandedMacro
 * Remapped: ik
 */
namespace ExpandedMacro {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ik", "net/minecraft/commands/functions/PlainTextFunction", "net/minecraft/class_8872", "net/minecraft/server/function/ExpandedMacro", "net/minecraft/src/C_301877_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.server.function.ExpandedMacro#id
    static jobject get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "id", "comp_1994", "id", "f_303680_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.function.ExpandedMacro#id
    static void set_field_id(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "id", "comp_1994", "id", "f_303680_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.function.ExpandedMacro#entries
    static jobject get_field_entries(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "entries", "comp_1995", "entries", "f_302327_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.function.ExpandedMacro#entries
    static void set_field_entries(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "entries", "comp_1995", "entries", "f_302327_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_withMacroReplaced() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "instantiate", "method_52595", "withMacroReplaced", "m_304684_"), "(Lub;Lcom/mojang/brigadier/CommandDispatcher;)Lii;");
    }

    static jobject withMacroReplaced(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_withMacroReplaced();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__id() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "id", "comp_1994", "id", "m_304900_"), "()Lakr;");
    }

    static jobject _id(const jobject& obj) {
                
       const auto methodID = methodID__id();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__entries() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "entries", "comp_1995", "entries", "m_306124_"), "()Ljava/util/List;");
    }

    static jobject _entries(const jobject& obj) {
                
       const auto methodID = methodID__entries();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SERVER_FUNCTION_EXPANDEDMACRO_HPP