// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_REGISTRYPREDICATEARGUMENTTYPE$REGISTRYKEYBASED_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_REGISTRYPREDICATEARGUMENTTYPE$REGISTRYKEYBASED_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.RegistryPredicateArgumentType$RegistryKeyBased
 * Remapped: fx$b
 */
namespace RegistryPredicateArgumentType$RegistryKeyBased {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fx$b", "net/minecraft/commands/arguments/ResourceOrTagKeyArgument$ResourceResult", "net/minecraft/class_7066$class_7067", "net/minecraft/command/argument/RegistryPredicateArgumentType$RegistryKeyBased", "net/minecraft/src/C_243418_$C_243648_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.command.argument.RegistryPredicateArgumentType$RegistryKeyBased#key
    static jobject get_field_key(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "key", "comp_522", "key", "f_243909_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.RegistryPredicateArgumentType$RegistryKeyBased#key
    static void set_field_key(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "key", "comp_522", "key", "f_243909_"), "Lakq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "unwrap", "method_41173", "getKey", "m_245276_"), "()Lcom/mojang/datafixers/util/Either;");
    }

    static jobject getKey(const jobject& obj) {
                
       const auto methodID = methodID_getKey();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_tryCast() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "cast", "method_41175", "tryCast", "m_245137_"), "(Lakq;)Ljava/util/Optional;");
    }

    static jobject tryCast(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_tryCast();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "test", "method_41174", "test", "test"), "(Ljm;)Z");
    }

    static jboolean test(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_asString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "asPrintable", "method_41176", "asString", "m_245390_"), "()Ljava/lang/String;");
    }

    static jobject asString(const jobject& obj) {
                
       const auto methodID = methodID_asString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__key() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "key", "comp_522", "key", "f_243909_"), "()Lakq;");
    }

    static jobject _key(const jobject& obj) {
                
       const auto methodID = methodID__key();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_REGISTRYPREDICATEARGUMENTTYPE$REGISTRYKEYBASED_HPP