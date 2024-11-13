// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_PACKRAT_ANYIDPARSINGRULE_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_PACKRAT_ANYIDPARSINGRULE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.packrat.AnyIdParsingRule
 * Remapped: bmq
 */
namespace AnyIdParsingRule {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bmq", "net/minecraft/util/parsing/packrat/commands/ResourceLocationParseRule", "net/minecraft/class_9409", "net/minecraft/command/argument/packrat/AnyIdParsingRule", "net/minecraft/src/C_313384_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.command.argument.packrat.AnyIdParsingRule#INSTANCE
    [[maybe_unused]] static jobject get_field_INSTANCE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "INSTANCE", "field_49967", "INSTANCE", "f_315313_"), "Lbml;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.command.argument.packrat.AnyIdParsingRule#INSTANCE
    [[maybe_unused]] static void set_field_INSTANCE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "INSTANCE", "field_49967", "INSTANCE", "f_315313_"), "Lbml;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_parse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "parse", "method_58318", "parse", "m_319437_"), "(Lbmk;)Ljava/util/Optional;");
    }

    static jobject parse(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_parse();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_PACKRAT_ANYIDPARSINGRULE_HPP