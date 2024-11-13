// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_BLOCKSTATEARGUMENT_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_BLOCKSTATEARGUMENT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.BlockStateArgument
 * Remapped: gk
 */
namespace BlockStateArgument {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gk", "net/minecraft/commands/arguments/blocks/BlockInput", "net/minecraft/class_2247", "net/minecraft/command/argument/BlockStateArgument", "net/minecraft/src/C_4338_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.command.argument.BlockStateArgument#state
    static jobject get_field_state(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "state", "field_10632", "state", "f_114662_"), "Ldtc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.BlockStateArgument#state
    static void set_field_state(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "state", "field_10632", "state", "f_114662_"), "Ldtc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.command.argument.BlockStateArgument#properties
    static jobject get_field_properties(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "properties", "field_10631", "properties", "f_114663_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.BlockStateArgument#properties
    static void set_field_properties(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "properties", "field_10631", "properties", "f_114663_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.command.argument.BlockStateArgument#data
    static jobject get_field_data(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "tag", "field_10633", "data", "f_114664_"), "Lub;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.BlockStateArgument#data
    static void set_field_data(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "tag", "field_10633", "data", "f_114664_"), "Lub;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getBlockState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getState", "method_9494", "getBlockState", "m_114669_"), "()Ldtc;");
    }

    static jobject getBlockState(const jobject& obj) {
                
       const auto methodID = methodID_getBlockState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getProperties() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getDefinedProperties", "method_35759", "getProperties", "m_173526_"), "()Ljava/util/Set;");
    }

    static jobject getProperties(const jobject& obj) {
                
       const auto methodID = methodID_getProperties();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "test", "method_9493", "test", "test"), "(Ldtg;)Z");
    }

    static jboolean test(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "test", "method_35758", "test", "m_173523_"), "(Laqu;Ljd;)Z");
    }

    static jboolean _test(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_setBlockState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "place", "method_9495", "setBlockState", "m_114670_"), "(Laqu;Ljd;I)Z");
    }

    static jboolean setBlockState(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2) {
                
       const auto methodID = methodID_setBlockState();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_BLOCKSTATEARGUMENT_HPP