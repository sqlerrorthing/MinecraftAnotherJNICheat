// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_SERIALIZE_LONGARGUMENTSERIALIZER$PROPERTIES_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_SERIALIZE_LONGARGUMENTSERIALIZER$PROPERTIES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.serialize.LongArgumentSerializer$Properties
 * Remapped: iw$a
 */
namespace LongArgumentSerializer$Properties {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("iw$a", "net/minecraft/commands/synchronization/brigadier/LongArgumentInfo$Template", "net/minecraft/class_4461$class_7223", "net/minecraft/command/argument/serialize/LongArgumentSerializer$Properties", "net/minecraft/src/C_213463_$C_213464_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.command.argument.serialize.LongArgumentSerializer$Properties#min
    static jlong get_field_min(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "min", "field_37991", "min", "f_235591_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static default field net.minecraft.command.argument.serialize.LongArgumentSerializer$Properties#min
    static void set_field_min(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "min", "field_37991", "min", "f_235591_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.command.argument.serialize.LongArgumentSerializer$Properties#max
    static jlong get_field_max(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "max", "field_37992", "max", "f_235592_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static default field net.minecraft.command.argument.serialize.LongArgumentSerializer$Properties#max
    static void set_field_max(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "max", "field_37992", "max", "f_235592_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    static jmethodID methodID_createType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "instantiate", "method_42010", "createType", "m_213879_"), "(Lep;)Lcom/mojang/brigadier/arguments/LongArgumentType;");
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

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_SERIALIZE_LONGARGUMENTSERIALIZER$PROPERTIES_HPP