// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_EXECUTIONFLAGS_HPP
#define NET_MINECRAFT_COMMAND_EXECUTIONFLAGS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.ExecutionFlags
 * Remapped: hn
 */
namespace ExecutionFlags {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("hn", "net/minecraft/commands/execution/ChainModifiers", "net/minecraft/class_8936", "net/minecraft/command/ExecutionFlags", "net/minecraft/src/C_302156_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.command.ExecutionFlags#flags
    static jbyte get_field_flags(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "flags", "comp_2020", "flags", "f_303171_"), "B");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetByteField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.ExecutionFlags#flags
    static void set_field_flags(const jobject &obj, const jbyte &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "flags", "comp_2020", "flags", "f_303171_"), "B");
        return MinecraftSDK::env->SetByteField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.command.ExecutionFlags#NONE
    [[maybe_unused]] static jobject get_field_NONE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DEFAULT", "field_47160", "NONE", "f_302277_"), "Lhn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.command.ExecutionFlags#NONE
    [[maybe_unused]] static void set_field_NONE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DEFAULT", "field_47160", "NONE", "f_302277_"), "Lhn;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.command.ExecutionFlags#SILENT
    [[maybe_unused]] static jbyte get_field_SILENT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "FLAG_FORKED", "field_47161", "SILENT", "f_302435_"), "B");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticByteField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.command.ExecutionFlags#SILENT
    [[maybe_unused]] static void set_field_SILENT(const jbyte &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "FLAG_FORKED", "field_47161", "SILENT", "f_302435_"), "B");
        return MinecraftSDK::env->SetStaticByteField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.command.ExecutionFlags#INSIDE_RETURN_RUN
    [[maybe_unused]] static jbyte get_field_INSIDE_RETURN_RUN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "FLAG_IS_RETURN", "field_47162", "INSIDE_RETURN_RUN", "f_302512_"), "B");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticByteField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.command.ExecutionFlags#INSIDE_RETURN_RUN
    [[maybe_unused]] static void set_field_INSIDE_RETURN_RUN(const jbyte &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "FLAG_IS_RETURN", "field_47162", "INSIDE_RETURN_RUN", "f_302512_"), "B");
        return MinecraftSDK::env->SetStaticByteField(clazz, fieldID, value);
    };

    static jmethodID methodID_set() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setFlag", "method_54885", "set", "m_304751_"), "(B)Lhn;");
    }

    static jobject set(const jobject& obj, const jbyte& arg0) {
                
       const auto methodID = methodID_set();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isSilent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isForked", "method_54884", "isSilent", "m_306471_"), "()Z");
    }

    static jboolean isSilent(const jobject& obj) {
                
       const auto methodID = methodID_isSilent();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_setSilent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setForked", "method_54886", "setSilent", "m_305062_"), "()Lhn;");
    }

    static jobject setSilent(const jobject& obj) {
                
       const auto methodID = methodID_setSilent();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_isInsideReturnRun() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "isReturn", "method_54887", "isInsideReturnRun", "m_305036_"), "()Z");
    }

    static jboolean isInsideReturnRun(const jobject& obj) {
                
       const auto methodID = methodID_isInsideReturnRun();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_setInsideReturnRun() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "setReturn", "method_54888", "setInsideReturnRun", "m_306088_"), "()Lhn;");
    }

    static jobject setInsideReturnRun(const jobject& obj) {
                
       const auto methodID = methodID_setInsideReturnRun();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__flags() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "flags", "comp_2020", "flags", "f_303171_"), "()B");
    }

    static jbyte _flags(const jobject& obj) {
                
       const auto methodID = methodID__flags();
       return MinecraftSDK::env->CallByteMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_EXECUTIONFLAGS_HPP