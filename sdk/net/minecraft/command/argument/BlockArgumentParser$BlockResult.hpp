// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_BLOCKARGUMENTPARSER$BLOCKRESULT_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_BLOCKARGUMENTPARSER$BLOCKRESULT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.BlockArgumentParser$BlockResult
 * Remapped: gn$a
 */
namespace BlockArgumentParser$BlockResult {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gn$a", "net/minecraft/commands/arguments/blocks/BlockStateParser$BlockResult", "net/minecraft/class_2259$class_7211", "net/minecraft/command/argument/BlockArgumentParser$BlockResult", "net/minecraft/src/C_4426_$C_213429_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.command.argument.BlockArgumentParser$BlockResult#blockState
    static jobject get_field_blockState(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "blockState", "comp_622", "blockState", "f_234748_"), "Ldtc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.BlockArgumentParser$BlockResult#blockState
    static void set_field_blockState(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "blockState", "comp_622", "blockState", "f_234748_"), "Ldtc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.command.argument.BlockArgumentParser$BlockResult#properties
    static jobject get_field_properties(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "properties", "comp_623", "properties", "f_234749_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.BlockArgumentParser$BlockResult#properties
    static void set_field_properties(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "properties", "comp_623", "properties", "f_234749_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.command.argument.BlockArgumentParser$BlockResult#nbt
    static jobject get_field_nbt(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "nbt", "comp_624", "nbt", "f_234750_"), "Lub;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.argument.BlockArgumentParser$BlockResult#nbt
    static void set_field_nbt(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "nbt", "comp_624", "nbt", "f_234750_"), "Lub;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__blockState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "blockState", "comp_622", "blockState", "f_234748_"), "()Ldtc;");
    }

    static jobject _blockState(const jobject& obj) {
                
       const auto methodID = methodID__blockState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__properties() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "properties", "comp_623", "properties", "f_234749_"), "()Ljava/util/Map;");
    }

    static jobject _properties(const jobject& obj) {
                
       const auto methodID = methodID__properties();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__nbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "nbt", "comp_624", "nbt", "f_234750_"), "()Lub;");
    }

    static jobject _nbt(const jobject& obj) {
                
       const auto methodID = methodID__nbt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_BLOCKARGUMENTPARSER$BLOCKRESULT_HPP