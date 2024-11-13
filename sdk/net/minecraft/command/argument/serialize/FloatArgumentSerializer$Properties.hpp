// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_SERIALIZE_FLOATARGUMENTSERIALIZER$PROPERTIES_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_SERIALIZE_FLOATARGUMENTSERIALIZER$PROPERTIES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.serialize.FloatArgumentSerializer$Properties
 * Remapped: iu$a
 */
namespace FloatArgumentSerializer$Properties {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("iu$a", "net/minecraft/commands/synchronization/brigadier/FloatArgumentInfo$Template", "net/minecraft/class_2327$class_7221", "net/minecraft/command/argument/serialize/FloatArgumentSerializer$Properties", "net/minecraft/src/C_213459_$C_213460_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.command.argument.serialize.FloatArgumentSerializer$Properties#min
    static jfloat get_field_min(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "min", "field_37985", "min", "f_235525_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static default field net.minecraft.command.argument.serialize.FloatArgumentSerializer$Properties#min
    static void set_field_min(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "min", "field_37985", "min", "f_235525_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.command.argument.serialize.FloatArgumentSerializer$Properties#max
    static jfloat get_field_max(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "max", "field_37986", "max", "f_235526_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static default field net.minecraft.command.argument.serialize.FloatArgumentSerializer$Properties#max
    static void set_field_max(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "max", "field_37986", "max", "f_235526_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    static jmethodID methodID_createType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "instantiate", "method_42006", "createType", "m_213879_"), "(Lep;)Lcom/mojang/brigadier/arguments/FloatArgumentType;");
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

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_SERIALIZE_FLOATARGUMENTSERIALIZER$PROPERTIES_HPP