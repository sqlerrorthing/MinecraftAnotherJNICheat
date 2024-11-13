// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_TIMEARGUMENTTYPE$SERIALIZER_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_TIMEARGUMENTTYPE$SERIALIZER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.TimeArgumentType$Serializer
 * Remapped: gi$a
 */
namespace TimeArgumentType$Serializer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gi$a", "net/minecraft/commands/arguments/TimeArgument$Info", "net/minecraft/class_2245$class_8033", "net/minecraft/command/argument/TimeArgumentType$Serializer", "net/minecraft/src/C_4274_$C_263596_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_writePacket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "serializeToNetwork", "method_48289", "writePacket", "m_214155_"), "(Lgi$a$a;Lvw;)V");
    }

    static void writePacket(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_writePacket();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_fromPacket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "deserializeFromNetwork", "method_48291", "fromPacket", "m_213618_"), "(Lvw;)Lgi$a$a;");
    }

    static jobject fromPacket(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_fromPacket();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_writeJson() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "serializeToJson", "method_48288", "writeJson", "m_213719_"), "(Lgi$a$a;Lcom/google/gson/JsonObject;)V");
    }

    static void writeJson(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_writeJson();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getArgumentTypeProperties() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "unpack", "method_48290", "getArgumentTypeProperties", "m_214163_"), "(Lgi;)Lgi$a$a;");
    }

    static jobject getArgumentTypeProperties(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getArgumentTypeProperties();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_TIMEARGUMENTTYPE$SERIALIZER_HPP