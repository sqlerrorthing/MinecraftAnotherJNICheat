// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_FUNCTION_MACRO$FIXEDLINE_HPP
#define NET_MINECRAFT_SERVER_FUNCTION_MACRO$FIXEDLINE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.function.Macro$FixedLine
 * Remapped: ij$c
 */
namespace Macro$FixedLine {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ij$c", "net/minecraft/commands/functions/MacroFunction$PlainTextEntry", "net/minecraft/class_8641$class_8871", "net/minecraft/server/function/Macro$FixedLine", "net/minecraft/src/C_302122_$C_302171_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.server.function.Macro$FixedLine#action
    static jobject get_field_action(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "compiledAction", "field_46762", "action", "f_303841_"), "Lhw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.function.Macro$FixedLine#action
    static void set_field_action(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "compiledAction", "field_46762", "action", "f_303841_"), "Lhw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getDependentVariables() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "parameters", "method_54428", "getDependentVariables", "m_305533_"), "()Lit/unimi/dsi/fastutil/ints/IntList;");
    }

    static jobject getDependentVariables(const jobject& obj) {
                
       const auto methodID = methodID_getDependentVariables();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_instantiate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "instantiate", "method_54429", "instantiate", "m_307174_"), "(Ljava/util/List;Lcom/mojang/brigadier/CommandDispatcher;Lakr;)Lhw;");
    }

    static jobject instantiate(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_instantiate();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_SERVER_FUNCTION_MACRO$FIXEDLINE_HPP