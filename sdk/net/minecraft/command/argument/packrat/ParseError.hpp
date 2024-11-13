// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_PACKRAT_PARSEERROR_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_PACKRAT_PARSEERROR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.packrat.ParseError
 * Remapped: bmj
 */
namespace ParseError {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bmj", "net/minecraft/util/parsing/packrat/ErrorEntry", "net/minecraft/class_9392", "net/minecraft/command/argument/packrat/ParseError", "net/minecraft/src/C_313843_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.command.argument.packrat.ParseError#cursor
    static jint get_field_cursor(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "cursor", "comp_2469", "cursor", "f_316047_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.packrat.ParseError#cursor
    static void set_field_cursor(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "cursor", "comp_2469", "cursor", "f_316047_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.command.argument.packrat.ParseError#suggestions
    static jobject get_field_suggestions(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "suggestions", "comp_2470", "suggestions", "f_316048_"), "Lbmn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.packrat.ParseError#suggestions
    static void set_field_suggestions(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "suggestions", "comp_2470", "suggestions", "f_316048_"), "Lbmn;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.command.argument.packrat.ParseError#reason
    static jobject get_field_reason(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "reason", "comp_2471", "reason", "f_316152_"), "Ljava/lang/Object;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.packrat.ParseError#reason
    static void set_field_reason(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "reason", "comp_2471", "reason", "f_316152_"), "Ljava/lang/Object;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__cursor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "cursor", "comp_2469", "cursor", "f_316047_"), "()I");
    }

    static jint _cursor(const jobject& obj) {
                
       const auto methodID = methodID__cursor();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__suggestions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "suggestions", "comp_2470", "suggestions", "f_316048_"), "()Lbmn;");
    }

    static jobject _suggestions(const jobject& obj) {
                
       const auto methodID = methodID__suggestions();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__reason() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "reason", "comp_2471", "reason", "f_316152_"), "()Ljava/lang/Object;");
    }

    static jobject _reason(const jobject& obj) {
                
       const auto methodID = methodID__reason();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_PACKRAT_PARSEERROR_HPP