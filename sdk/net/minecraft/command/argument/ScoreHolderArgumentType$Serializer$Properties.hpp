// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_SCOREHOLDERARGUMENTTYPE$SERIALIZER$PROPERTIES_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_SCOREHOLDERARGUMENTTYPE$SERIALIZER$PROPERTIES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.ScoreHolderArgumentType$Serializer$Properties
 * Remapped: fy$a$a
 */
namespace ScoreHolderArgumentType$Serializer$Properties {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fy$a$a", "net/minecraft/commands/arguments/ScoreHolderArgument$Info$Template", "net/minecraft/class_2233$class_2236$class_7200", "net/minecraft/command/argument/ScoreHolderArgumentType$Serializer$Properties", "net/minecraft/src/C_4081_$C_213399_$C_213400_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.command.argument.ScoreHolderArgumentType$Serializer$Properties#multiple
    static jboolean get_field_multiple(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "multiple", "field_37932", "multiple", "f_233484_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static default field net.minecraft.command.argument.ScoreHolderArgumentType$Serializer$Properties#multiple
    static void set_field_multiple(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "multiple", "field_37932", "multiple", "f_233484_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_createType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "instantiate", "method_41915", "createType", "m_213879_"), "(Lep;)Lfy;");
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

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_SCOREHOLDERARGUMENTTYPE$SERIALIZER$PROPERTIES_HPP