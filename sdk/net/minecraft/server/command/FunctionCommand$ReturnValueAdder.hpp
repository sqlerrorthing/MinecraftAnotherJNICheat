// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_FUNCTIONCOMMAND$RETURNVALUEADDER_HPP
#define NET_MINECRAFT_SERVER_COMMAND_FUNCTIONCOMMAND$RETURNVALUEADDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.FunctionCommand$ReturnValueAdder
 * Remapped: amy$a
 */
namespace FunctionCommand$ReturnValueAdder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("amy$a", "net/minecraft/server/commands/FunctionCommand$1Accumulator", "net/minecraft/class_3062$class_8932", "net/minecraft/server/command/FunctionCommand$ReturnValueAdder", "net/minecraft/src/C_5334_$C_301989_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.server.command.FunctionCommand$ReturnValueAdder#successful
    static jboolean get_field_successful(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "anyResult", "field_47152", "successful", "f_302217_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static default field net.minecraft.server.command.FunctionCommand$ReturnValueAdder#successful
    static void set_field_successful(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "anyResult", "field_47152", "successful", "f_302217_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.server.command.FunctionCommand$ReturnValueAdder#returnValue
    static jint get_field_returnValue(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "sum", "field_47153", "returnValue", "f_303513_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.server.command.FunctionCommand$ReturnValueAdder#returnValue
    static void set_field_returnValue(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "sum", "field_47153", "returnValue", "f_303513_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_onSuccess() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "add", "method_54862", "onSuccess", "m_305259_"), "(I)V");
    }

    static void onSuccess(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_onSuccess();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_FUNCTIONCOMMAND$RETURNVALUEADDER_HPP