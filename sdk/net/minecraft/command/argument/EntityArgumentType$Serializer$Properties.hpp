// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_ENTITYARGUMENTTYPE$SERIALIZER$PROPERTIES_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_ENTITYARGUMENTTYPE$SERIALIZER$PROPERTIES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.EntityArgumentType$Serializer$Properties
 * Remapped: fg$a$a
 */
namespace EntityArgumentType$Serializer$Properties {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fg$a$a", "net/minecraft/commands/arguments/EntityArgument$Info$Template", "net/minecraft/class_2186$class_2187$class_7171", "net/minecraft/command/argument/EntityArgumentType$Serializer$Properties", "net/minecraft/src/C_3395_$C_213331_$C_213332_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.command.argument.EntityArgumentType$Serializer$Properties#single
    static jboolean get_field_single(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "single", "field_37853", "single", "f_231286_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static default field net.minecraft.command.argument.EntityArgumentType$Serializer$Properties#single
    static void set_field_single(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "single", "field_37853", "single", "f_231286_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.command.argument.EntityArgumentType$Serializer$Properties#playersOnly
    static jboolean get_field_playersOnly(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "playersOnly", "field_37854", "playersOnly", "f_231287_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static default field net.minecraft.command.argument.EntityArgumentType$Serializer$Properties#playersOnly
    static void set_field_playersOnly(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "playersOnly", "field_37854", "playersOnly", "f_231287_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_createType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "instantiate", "method_41729", "createType", "m_213879_"), "(Lep;)Lfg;");
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

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_ENTITYARGUMENTTYPE$SERIALIZER$PROPERTIES_HPP