// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_PACKRAT_PARSINGSTATE$PACKRATKEY_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_PACKRAT_PARSINGSTATE$PACKRATKEY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.packrat.ParsingState$PackratKey
 * Remapped: bmk$b
 */
namespace ParsingState$PackratKey {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bmk$b", "net/minecraft/util/parsing/packrat/ParseState$CacheKey", "net/minecraft/class_9393$class_9395", "net/minecraft/command/argument/packrat/ParsingState$PackratKey", "net/minecraft/src/C_313745_$C_313397_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.command.argument.packrat.ParsingState$PackratKey#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "name", "comp_2474", "name", "f_314600_"), "Lbmf;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.packrat.ParsingState$PackratKey#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "name", "comp_2474", "name", "f_314600_"), "Lbmf;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.command.argument.packrat.ParsingState$PackratKey#mark
    static jint get_field_mark(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "mark", "comp_2475", "mark", "f_314127_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.packrat.ParsingState$PackratKey#mark
    static void set_field_mark(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "mark", "comp_2475", "mark", "f_314127_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID__name() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "name", "comp_2474", "name", "f_314600_"), "()Lbmf;");
    }

    static jobject _name(const jobject& obj) {
                
       const auto methodID = methodID__name();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__mark() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "mark", "comp_2475", "mark", "f_314127_"), "()I");
    }

    static jint _mark(const jobject& obj) {
                
       const auto methodID = methodID__mark();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_PACKRAT_PARSINGSTATE$PACKRATKEY_HPP