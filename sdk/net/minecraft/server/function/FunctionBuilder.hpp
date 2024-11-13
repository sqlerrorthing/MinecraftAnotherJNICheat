// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_FUNCTION_FUNCTIONBUILDER_HPP
#define NET_MINECRAFT_SERVER_FUNCTION_FUNCTIONBUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.function.FunctionBuilder
 * Remapped: ih
 */
namespace FunctionBuilder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ih", "net/minecraft/commands/functions/FunctionBuilder", "net/minecraft/class_8867", "net/minecraft/server/function/FunctionBuilder", "net/minecraft/src/C_302047_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.server.function.FunctionBuilder#actions
    static jobject get_field_actions(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "plainEntries", "field_46755", "actions", "f_302654_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.function.FunctionBuilder#actions
    static void set_field_actions(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "plainEntries", "field_46755", "actions", "f_302654_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.function.FunctionBuilder#macroLines
    static jobject get_field_macroLines(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "macroEntries", "field_46756", "macroLines", "f_302447_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.function.FunctionBuilder#macroLines
    static void set_field_macroLines(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "macroEntries", "field_46756", "macroLines", "f_302447_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.function.FunctionBuilder#usedVariables
    static jobject get_field_usedVariables(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "macroArguments", "field_46757", "usedVariables", "f_302518_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.function.FunctionBuilder#usedVariables
    static void set_field_usedVariables(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "macroArguments", "field_46757", "usedVariables", "f_302518_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_addAction() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addCommand", "method_54419", "addAction", "m_305257_"), "(Lhw;)V");
    }

    static void addAction(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addAction();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_indexOfVariable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getArgumentIndex", "method_54420", "indexOfVariable", "m_305772_"), "(Ljava/lang/String;)I");
    }

    static jint indexOfVariable(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_indexOfVariable();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_indicesOfVariables() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "convertToIndices", "method_54422", "indicesOfVariables", "m_307723_"), "(Ljava/util/List;)Lit/unimi/dsi/fastutil/ints/IntList;");
    }

    static jobject indicesOfVariables(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_indicesOfVariables();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addMacroCommand() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addMacro", "method_54421", "addMacroCommand", "m_307020_"), "(Ljava/lang/String;ILev;)V");
    }

    static void addMacroCommand(const jobject& obj, const jobject& arg0, const jint& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_addMacroCommand();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_toCommandFunction() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "build", "method_54418", "toCommandFunction", "m_306609_"), "(Lakr;)Lig;");
    }

    static jobject toCommandFunction(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_toCommandFunction();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SERVER_FUNCTION_FUNCTIONBUILDER_HPP