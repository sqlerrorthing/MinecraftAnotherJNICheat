// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_REGISTRYENTRYPREDICATEARGUMENTTYPE$SERIALIZER$PROPERTIES_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_REGISTRYENTRYPREDICATEARGUMENTTYPE$SERIALIZER$PROPERTIES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.RegistryEntryPredicateArgumentType$Serializer$Properties
 * Remapped: fw$a$a
 */
namespace RegistryEntryPredicateArgumentType$Serializer$Properties {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fw$a$a", "net/minecraft/commands/arguments/ResourceOrTagArgument$Info$Template", "net/minecraft/class_7737$class_7738$class_7739", "net/minecraft/command/argument/RegistryEntryPredicateArgumentType$Serializer$Properties", "net/minecraft/src/C_243640_$C_243408_$C_243650_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.command.argument.RegistryEntryPredicateArgumentType$Serializer$Properties#registryRef
    static jobject get_field_registryRef(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "registryKey", "field_40423", "registryRef", "f_244221_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.command.argument.RegistryEntryPredicateArgumentType$Serializer$Properties#registryRef
    static void set_field_registryRef(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "registryKey", "field_40423", "registryRef", "f_244221_"), "Lakq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_createType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "instantiate", "method_45646", "createType", "m_213879_"), "(Lep;)Lfw;");
    }

    static jobject createType(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getSerializer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "method_41728", "getSerializer", "m_213709_"), "()Lio;");
    }

    static jobject getSerializer(const jobject& obj) {
                
       const auto methodID = methodID_getSerializer();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_REGISTRYENTRYPREDICATEARGUMENTTYPE$SERIALIZER$PROPERTIES_HPP